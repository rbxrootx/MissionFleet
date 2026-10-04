# Current Main sibling-control construction path

The matched `FUN_58868B40` constructs two large sibling controls plus a compact
helper. The three newly matched functions add 2,700 bytes. ObjDiff 3.8.0
reports 100% for each and checks all 102 mapped operands. The depth-two audit
from `FUN_58868B40` finds no unmatched inventory-backed direct callees.

| Address | Bytes | Evidence from the captured instructions |
| --- | ---: | --- |
| `587C9D40` | 57 | Called three times by `FUN_58868B40`; forwards five stack values to `FUN_58907100`, installs vtable pointer `0x5899B044`, stores a further argument at receiver `+0xFC`, and returns with `ret 0x18`. |
| `5889DD30` | 1,357 | SEH-protected constructor called by `FUN_58868B40`; calls `FUN_589031A0`, installs vtable pointer `0x589A01E0`, initializes `+0x50..+0x5C`, allocates members, and calls child setup helpers `FUN_58731C60` and `FUN_58902D20`. |
| `588A9650` | 1,286 | Sibling SEH-protected constructor called by `FUN_58868B40`; follows the same visible base/member setup pattern but installs vtable pointer `0x589A06E0`. |

The match evidence records the exact caller offsets and relocation targets.
Class identities, child roles, member meanings, and layout semantics remain
unresolved. This confirms byte identity and indexed call coverage, not correct
runtime execution or rendering.
