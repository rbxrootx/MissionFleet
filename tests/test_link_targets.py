import struct
import unittest
from tools.export_link_targets import build_map, resolve_definitions, build_link_plan


class LinkTargetsTests(unittest.TestCase):
    def test_link_plan_keeps_components_separate_and_blocks_missing_targets(self):
        report = {'symbols': [
            {'component': component, 'symbol': '_callee', 'destinations': [
                dict(address='00401010', references=[{'kind': 'relative'}],
                     **({'definition': {'symbol': '_impl', 'source': 'impl.cpp'}}
                        if component == 'game-server' else {}))]}
            for component in ('game-server', 'save-server')]}
        plan = build_link_plan(report)['components']
        self.assertEqual(plan['game-server']['bindings'][0]['definition_symbol'], '_impl')
        self.assertEqual(plan['save-server']['bindings'], [])
        self.assertEqual(plan['save-server']['blockers'][0]['reason'], 'missing_function')
        self.assertFalse(plan['game-server']['ready_to_link'])

    def test_link_plan_does_not_bind_conflicting_or_absolute_targets(self):
        destination = {'address': '00401010', 'references': [{'kind': 'absolute'}]}
        report = {'symbols': [
            {'component': 'game-server', 'symbol': '_import', 'destinations': [destination]},
            {'component': 'game-server', 'symbol': '_conflict',
             'destinations': [destination, dict(destination, address='00401020')]}]}
        plan = build_link_plan(report)['components']['game-server']
        self.assertEqual(plan['bindings'], [])
        self.assertEqual([b['reason'] for b in plan['blockers']],
                         ['data_or_import_requires_resolution', 'conflicting_destinations'])

    def test_only_exact_relative_entries_resolve(self):
        document = {'matches': [{'component': 'game-server', 'address': '00401010',
                                 'symbol': '_implemented', 'source': 'impl.cpp'}]}
        report = {'symbols': [{'component': 'game-server', 'symbol': '_target',
                              'destinations': [
                                  {'address': '00401010', 'references': [{'kind': 'relative'}]},
                                  {'address': '00401011', 'references': [{'kind': 'relative'}]},
                                  {'address': '00401010', 'references': [{'kind': 'absolute'}]}]}]}
        resolve_definitions(report, document)
        self.assertEqual(report['resolved_relative_references'], 1)
        destinations = report['symbols'][0]['destinations']
        self.assertEqual(destinations[0]['definition']['symbol'], '_implemented')
        self.assertNotIn('definition', destinations[1])
        self.assertNotIn('definition', destinations[2])
        self.assertEqual(report['pending_relative_targets'][0]['address'], '00401011')

    def test_detects_conflicting_destinations_for_same_symbol(self):
        rows = [{'component': 'game-server', 'address': f'{address:08x}', 'size': 5,
                 'relocations': [{'offset': 1, 'symbol': '_callee'}]}
                for address in (0x401000, 0x401005)]
        report = build_map({'image_base': '401000', 'matches': rows},
                           {'game-server': (b'\xe9' + struct.pack('<i', 0)) * 2})
        self.assertEqual(report['conflicting_symbols'], 1)
        self.assertEqual(len(report['symbols'][0]['destinations']), 2)

    def test_same_target_combines_references(self):
        rows = [{'component': 'game-server', 'address': f'{address:08x}', 'size': 5,
                 'relocations': [{'offset': 1, 'symbol': '_callee'}]}
                for address in (0x401000, 0x401005)]
        report = build_map({'image_base': '401000', 'matches': rows},
                           {'game-server': b'\xe9' + struct.pack('<i', 5) + b'\xe9' + struct.pack('<i', 0)})
        self.assertEqual(report['conflicting_symbols'], 0)
        self.assertEqual(len(report['symbols'][0]['destinations'][0]['references']), 2)
