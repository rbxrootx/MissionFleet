# Current Main.dll helpers called by the tag dispatcher

The verified dispatcher `FUN_587E0090` has 26 direct calls to six methods in
this slice. Each call loads the same receiver into `ecx`; the exact call
instructions and addresses are in
[`FUN_587e0090.cpp`](../src/client-current/Main/FUN_587e0090.cpp). The
[dispatcher notes](current-main-tag-dispatch-587e0090.md) describe its
20-entry call path and selector table without assigning unsupported gameplay
names to its cases.

| Method | Dispatcher call sites | Recovered operation |
| --- | --- | --- |
| `0x588E9590` | `055B`, `0579`, `067D`, `069B`, `074F`, `0781`, `0876`, `089F` | Stores a 16-bit stack value into receiver storage computed from two indices; optionally calls refresh helper `0x588E8570`. |
| `0x588E9700` | `044E`, `0509`, `0597`, `0637`, `0866`, `08E0` | Maps key values 5, 6, and 13 through three global helpers, stores the pointer at `+0xB40 + 4*index`, clears related `+0xBC0/+0xBC4` entries, writes `0xAA` to `+0xAC0/+0xAC2` fields, and optionally refreshes. |
| `0x588E97A0` | `054A`, `0568`, `066C`, `068A`, `073F`, `07B0` | Maps key values 11 and 12 through two global helpers into a pointer field rooted at `+0xBC0`; other keys clear it, then an optional refresh runs. |
| `0x588E9820` | `06B2`, `06FE` | Calls global helper `0x58778BE0`, stores its result at receiver `+0xCC8`, and optionally refreshes. |
| `0x588E9850` | `039E`, `041F` | Calls global helper `0x58778CA0`, stores its result at receiver `+0xCCC`, and optionally refreshes. |
| `0x588E9880` | `026D`, `0349` | Visits 32 pointer fields starting at receiver `+0x9A4`, calls `0x5877C660` for each nonnull entry, refreshes, then calls `0x588ECEA0` and tail-calls `0x588730F0` using fields from the global receiver at `0x58A24598`. |

All six [instruction sources](../src/client-current/Main/) match the pinned
installed `Main.dll` at objdiff 3.8.0: **487 bytes** and 25 mapped operands
checked. These matches constrain the dispatcher-to-helper call paths and the
field updates. The domain of the selector, argument types, global pointer
types, and visible game meaning remain unresolved; no runtime or framebuffer
comparison was made.

Reproduce:

```text
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 588E9590 --only 588E9700 --only 588E97A0 --only 588E9820 --only 588E9850 --only 588E9880
python tools/generate_progress.py --check
```
