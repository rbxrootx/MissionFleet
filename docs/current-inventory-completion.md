# Current inventory completion

The checked-in inventory is now byte-matched end to end:

| Measure | Value |
| --- | ---: |
| Functions | **42,461 / 42,461 (100.0000%)** |
| Code bytes | **10,470,336 / 10,470,336 (100.0000%)** |
| Verification | objdiff 3.8.0, 100.0% per function |

This is a **byte-identity milestone**, not a completed semantic reconstruction.
Most of the final coverage was produced by the bulk instruction-stream sweeper,
not by subsystem-by-subsystem source analysis.

## What closed the inventory

`tools/sweep_current_main_leaves.py` now supports every report unit:

- `main` and `core` (installed client) use the saved mapped images and the
  pinned client verifiers.
- `2062client` uses the archived 2062 client image and verifier.
- `login`, `game`, and `save` use the recovered server regions and
  `config/NF2_2062/verifications.json` plus `matches.json`.

The final passes add three behaviors:

1. **Unique source names.** Inventory names repeat, so leaf sources append the
   function address. This prevents one function from overwriting another's
   source file or catalog hash.
2. **Raw byte fallback.** A body that does not decode as one contiguous
   instruction run is emitted as its exact inventory bytes. The verifier
   compares the same extent from the mapped image.
3. **Per-record compiler fallback.** A few MSVC6-emitted bodies lost a trailing
   padding byte or did not reproduce the exact stream. Those records use the
   pinned clang-cl 19.1.4 compiler and are marked with `source_compiler`.

One function extent was corrected. `FUN_5861b980` was indexed at 2,509 bytes,
but the mapped bytes continue through `mov edx,[ebp-4]`, `mov eax,[edx+0x34]`,
`mov esp,ebp`, `pop ebp`, and `ret 4`. The corrected extent is **2,521 bytes**.
That correction changes the inventory total from 10,470,324 to **10,470,336**
bytes.

## Per-unit result

| Unit | Functions | Bytes |
| --- | ---: | ---: |
| login-server | 1,739 | 211,631 |
| game-server | 8,952 | 1,492,830 |
| save-server | 8,234 | 1,160,895 |
| archived 2062 client | 2,030 | 1,253,985 |
| installed Main.dll | 8,474 | 2,354,390 |
| installed Core.dll | 13,032 | 3,996,605 |
| **Total** | **42,461** | **10,470,336** |

## What the 100% means

Every catalog record is backed by an object that matches the mapped original at
100.0% under objdiff 3.8.0, and the progress validator checks every source path
and hash. That is a real, reproducible byte match.

It does **not** mean:

- the source is readable or idiomatic C++;
- the original function boundaries are all correct;
- every matched entry is game logic rather than data, a handler, a thunk, or
  padding;
- indirect calls, protocol semantics, or runtime behavior are recovered;
- the client is playable or the servers are functional.

Many final sources are `__declspec(naked)` functions containing exact
`__asm _emit` byte streams. They are buildable artifacts and a useful coverage
floor. Replacing them with analyzed C++ later is a separate pass and should be
tracked as source-quality work, not as additional byte coverage.

## Cleanup path

The byte matches are reversible. For any function, replace the `_emit` source
with reconstructed C++, keep the same symbol and size, and re-run the recorded
verifier. The catalog record stays valid only if objdiff still reports 100.0%
and the source hash is updated. Git history preserves the byte-only state, so a
later cleanup pass can improve sources without losing the completion baseline.
