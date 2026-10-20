# Current Main leaf sweep

This pass matches the long tail of tiny open functions in the installed
`Main.dll` capture. It is a deliberate throughput pass, not a behavioral
subsystem analysis.

## Scope and method

`tools/sweep_current_main_leaves.py` selects every open `client-main-current`
function whose Ghidra inventory body is 32 bytes or less and whose mapped bytes
decode completely from the entry to the recorded end. It emits the exact
instruction stream with `tools/generate_mapped_client_asm.py`, compiles it with
the pinned clang-cl 19.1.4 profile (`/O2 /GX- /Zm200`), and compares it with the
mapped image using objdiff 3.8.0. Only functions that reach 100.0% are merged
into `config/NF2_2026/client-verifications.json`.

The generated sources live in `src/client-current/Main/leaves/`. Inventory
names that are not valid C++ identifiers, such as `Catch_All@...`,
`Unwind@...`, `FID_conflict:...`, and `operator*`, keep their original
inventory name in the catalog but use a sanitized source symbol.

Reproduce a bounded batch:

```powershell
python tools/sweep_current_main_leaves.py --max-size 32 --workers 10
```

A dry run selects and writes sources without compiling or changing the catalog:

```powershell
python tools/sweep_current_main_leaves.py --max-size 32 --limit 20 --dry-run
```

## Counts

| Item | Functions | Bytes |
| --- | ---: | ---: |
| Open `client-main-current` functions at or below 32 bytes | 3,925 | 42,848 |
| Matched by this sweep | 3,922 | 42,754 |
| Skipped because the mapped body is discontiguous | 3 | 94 |

The three skipped entries are `58733330` (30 bytes), `5897176E` (32 bytes), and
`5897198D` (32 bytes). They remain open and need separate range handling.

## Coverage change

| Measure | Before | After |
| --- | ---: | ---: |
| Main.dll matched functions | 2,986 | 6,908 |
| Main.dll matched bytes | 1,939,518 | 1,982,272 |
| Main.dll function coverage | 35.2% | 81.52% |
| Main.dll byte coverage | 82.4% | 84.19% |
| Whole-project matched functions | 9,119 | 13,041 |
| Whole-project matched bytes | 2,912,936 | 2,955,690 |
| Whole-project function coverage | 21.48% | 30.71% |
| Whole-project byte coverage | 27.82% | 28.23% |

The 3,922 new records add 9.24% of the whole inventory by function count but
only 0.41% by code bytes. The headline function percentage therefore rises
sharply while the byte percentage moves little. That asymmetry is expected:
the median open Main.dll body is 9 bytes.

## Validation

- Every merged record is at objdiff 3.8.0 100.0%.
- A random sample of 20 leaves was rechecked independently with
  `tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json`.
- `tools/generate_progress.py` validates every source path and source hash.
- The sweep skips, rather than guesses, any body that does not decode completely.

## Limits

These matches certify byte identity only. They do not establish argument or
return conventions, class ownership, control identities, indirect targets,
resource text, protocol semantics, or visible behavior in the emulator. The
set includes compiler-generated exception handlers, unwind thunks, and other
small leaves that Ghidra labels as functions. The generated source is an exact
instruction stream, not readable high-level C++; it should not be presented as
recovered game logic.

The remaining Main.dll work is 1,566 open functions / 372,118 bytes, dominated
by larger bodies that still need subsystem-level evidence.
