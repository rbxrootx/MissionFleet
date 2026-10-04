# Remaining direct callees of the current Main.dll tag dispatcher

The verified `FUN_587E0090` dispatcher directly calls these eight methods from
15 case sites. Together with the six helpers documented in the
[first dispatcher-helper slice](current-main-tag-dispatch-helper-methods.md),
this records a broad set of the dispatcher's original case behavior.

| Method | Call sites in `FUN_587E0090` | Evidence from its original instructions |
| --- | --- | --- |
| `0x588F0430` | `0380`, `082E`, `095D` | Sets nested receiver `+0x2D8` field `+0x50` to 1 when the argument is 1, otherwise 0. |
| `0x5876D8B0` | `03DA`, `04C3`, `05F1` | Stores the stack values into receiver fields and copies four fields into the child at `+0xAC`; sets observed flag bits. |
| `0x5876D3C0` | `0400`, `04E6`, `0614` | Handles encoded states 1, 2, and 6 from receiver word `+0x24`; state 2 calls a child virtual method and updates `+0x5C`. |
| `0x588F3E70` | `018C`, `019A` | Allocates and initializes an object, then appends it to the receiver's linked list using `+4/+8/+0xC` and node links `+0xCE0/+0xCE4`. |
| `0x587DAEB0` | `0193` | Searches the global node list for a node matching the receiver's byte at `+0x61` and a zero field at node `+0xEC`; stores the candidate and updates observed state fields. |
| `0x588F41E0` | `0282` | Searches and unlinks a matching node from the linked list, updates its head/tail/count, and invokes its deleting virtual method. |
| `0x588E9940` | `0342` | Copies the input record, resolves eight fields through global helpers, and applies up to 31 records of 0x18 bytes to the indexed receiver fields. |
| `0x58778E20` | `07D6` | For key 12, scans 0xB4-byte records from a global collection and returns a matching record address or zero. |

All eight [instruction sources](../src/client-current/Main/) match the pinned
installed `Main.dll` at objdiff 3.8.0: **1,780 bytes**, with 53 mapped operands
checked. The two corrected inventory extents are `FUN_587DAEB0`, 202 to 210
bytes through its `ret` at `0x587DAF81`, and `FUN_588E9940`, 786 to 809 bytes
through its final jump at `0x588E9C67`. The former is followed by 14 `CC` bytes;
the latter by seven `CC` bytes.

Cross-checking the dispatcher's direct `call` instructions against the current
Main function inventory now finds no unmatched in-inventory target. This
result covers direct calls to inventoried functions; indirect calls and
targets outside that inventory are not included.

The call paths and updates are tied to the matched dispatcher and helper
instruction streams. Selector meanings, object types, state-bit names, and
visible game behavior remain unresolved. No original-client runtime test was
performed.

Reproduce:

```text
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 587E0090 --only 588F0430 --only 5876D8B0 --only 5876D3C0 --only 588F3E70 --only 587DAEB0 --only 588F41E0 --only 588E9940 --only 58778E20
python tools/generate_progress.py --check
```
