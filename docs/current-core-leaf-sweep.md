# Current Core leaf sweep

This pass extends the [Main.dll leaf sweep](current-main-leaf-sweep.md) to
`Core.dll`. It is a throughput pass, not behavioral subsystem analysis.

## Scope and method

`tools/sweep_current_main_leaves.py --component core` selects every open
`client-core-current` function whose Ghidra inventory body is 32 bytes or less
and whose mapped bytes decode completely from the entry to the recorded end. It
emits the exact instruction stream, compiles it with the recorded Visual C++ 6
profile (`/O2 /GX- /Zm200`), and compares it with the mapped Core image using
objdiff 3.8.0. Only functions that reach 100.0% are merged into
`config/NF2_2026/core-verifications.json`.

Generated sources live in `src/client-current/Core/leaves/`.

```powershell
python tools/sweep_current_main_leaves.py --component core --max-size 32 --workers 4
```

## Counts

| Item | Functions | Bytes |
| --- | ---: | ---: |
| Open `client-core-current` functions at or below 32 bytes | 5,569 | 100,483 |
| Matched by this sweep | 5,540 | 99,984 |
| Failed objdiff or compilation | 2 | 0 |
| Skipped because the mapped body is discontiguous | 22 | 196 |

The two failures and 22 skipped entries remain open and need individual range
handling.

## Coverage change

| Measure | Before | After |
| --- | ---: | ---: |
| Core.dll matched functions | 431 | 5,976 |
| Core.dll matched bytes | 333,421 | 433,405 |
| Core.dll function coverage | 3.31% | 45.85% |
| Core.dll byte coverage | 8.34% | 10.84% |
| Whole-project matched functions | 13,041 | 18,586 |
| Whole-project matched bytes | 2,955,690 | 3,055,674 |
| Whole-project function coverage | 30.71% | 43.77% |
| Whole-project byte coverage | 28.23% | 29.18% |

The 5,545 new Core leaf records add 13.06% of the whole inventory by function
count but only 0.96% by code bytes.

## Validation

- Every merged record is at objdiff 3.8.0 100.0%.
- A random sample of 10 leaves was rechecked independently with
  `tools/verify_client_matches.py --config config/NF2_2026/core-verifications.json`.
- `tools/generate_progress.py` validates every source path and source hash.

## Limits

These matches certify byte identity only. They do not establish argument or
return conventions, class ownership, control identities, indirect targets,
resource text, protocol semantics, or visible behavior. The set includes
compiler-generated exception handlers, unwind thunks, and other small leaves.
The generated source is an exact instruction stream, not readable high-level
C++.
