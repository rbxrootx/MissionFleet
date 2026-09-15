"""Export original relocation destinations for future executable linking.

This is evidence from recovered operands, not proof that a compiled target
implementation exists. Conflicting symbol destinations prevent a usable map.
"""
import json
from collections import defaultdict
from pathlib import Path

if __package__:
    from .audit_thunk_targets import operand_target
else:
    from audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def build_map(document, regions):
    symbols = defaultdict(lambda: defaultdict(list))
    base = int(document['image_base'], 16)
    for match in document['matches']:
        address = int(match['address'], 16)
        start = address - base
        image = regions[match['component']]
        size = int(match['size'])
        if start < 0 or start + size > len(image):
            raise ValueError('function outside recovered region')
        code = image[start:start + size]
        for relocation in match['relocations']:
            target = operand_target(code, address, relocation)
            symbols[(match['component'], relocation['symbol'])][target].append({
                'function': match['address'], 'offset': relocation['offset'],
                'kind': relocation.get('kind', 'relative')})
    entries = []
    conflicts = 0
    for (component, symbol), destinations in sorted(symbols.items()):
        conflicts += len(destinations) > 1
        entries.append({'component': component, 'symbol': symbol,
                        'destinations': [{'address': f'{target:08x}', 'references': refs}
                                         for target, refs in sorted(destinations.items())]})
    return {'schema_version': 1, 'conflicting_symbols': conflicts, 'symbols': entries}


def resolve_definitions(report, document):
    """Resolve only relative destinations at exact reconstructed entry points.

    Absolute operands can denote IAT/data slots and must not be treated as
    function implementations merely because a numeric address happens to match.
    """
    definitions = {(m['component'], m['address'].lower()): m
                   for m in document['matches']}
    resolved = 0
    pending = defaultdict(lambda: {'references': 0, 'symbols': []})
    for entry in report['symbols']:
        for destination in entry['destinations']:
            key = (entry['component'], destination['address'])
            refs = destination['references']
            definition = definitions.get(key)
            if all(r['kind'] == 'relative' for r in refs) and definition:
                destination['definition'] = {
                    'symbol': definition['symbol'], 'source': definition['source']}
                resolved += len(refs)
            elif all(r['kind'] == 'relative' for r in refs):
                pending[key]['references'] += len(refs)
                pending[key]['symbols'].append(entry['symbol'])
    report['resolved_relative_references'] = resolved
    report['pending_relative_targets'] = [
        dict(component=component, address=address, **details)
        for (component, address), details in sorted(
            pending.items(), key=lambda item: (-item[1]['references'], item[0]))]
    return report


def build_link_plan(report):
    """Describe required bindings without silently substituting missing code.

    These are binding candidates, not linker /alternatename directives: final
    object symbol availability, ABI, section layout and imports need validation.
    """
    components = {}
    for entry in report['symbols']:
        plan = components.setdefault(entry['component'], {
            'bindings': [], 'blockers': [], 'ready_to_link': False})
        destinations = entry['destinations']
        if len(destinations) != 1:
            plan['blockers'].append({'symbol': entry['symbol'],
                                     'reason': 'conflicting_destinations'})
            continue
        destination = destinations[0]
        definition = destination.get('definition')
        if definition:
            plan['bindings'].append({
                'reference_symbol': entry['symbol'],
                'definition_symbol': definition['symbol'],
                'source': definition['source'],
                'original_address': destination['address']})
        else:
            relative = all(r['kind'] == 'relative'
                           for r in destination['references'])
            plan['blockers'].append({
                'symbol': entry['symbol'],
                'original_address': destination['address'],
                'reason': 'missing_function' if relative else 'data_or_import_requires_resolution'})
    return {'status': 'planning_only', 'components': components,
            'remaining_validation': ['compiled_object_symbols', 'calling_conventions',
                                     'imports_and_data', 'section_layout', 'linked_image_bytes']}


def main():
    document = json.loads((ROOT / 'config/NF2_2062/verifications.json').read_text())
    regions = {component: (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()
               for component in ('login-server', 'game-server', 'save-server')}
    report = build_map(document, regions)
    resolve_definitions(report, document)
    report['link_plan'] = build_link_plan(report)
    output = ROOT / 'build/matches/link-targets.json'
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2) + '\n')
    refs = sum(len(d['references']) for s in report['symbols'] for d in s['destinations'])
    print(f"{refs} references; {len(report['symbols'])} symbols; {report['conflicting_symbols']} conflicting symbols")
    print(f"{report['resolved_relative_references']} relative references have reconstructed definitions; "
          f"{len(report['pending_relative_targets'])} distinct relative targets remain unresolved")
    print(output)
    return bool(report['conflicting_symbols'])


if __name__ == '__main__':
    raise SystemExit(main())
