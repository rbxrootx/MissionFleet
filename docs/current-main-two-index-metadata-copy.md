# Current Main.dll two-index metadata selection and copy

Verified `FUN_587A90D0` and `FUN_587F8760` call `FUN_5884D870` with a
receiver in `ECX` and one stack argument. The helper reads receiver `+0x80`
as a child pointer and global `0x58A246A4` as a manager pointer. If either is
null, it returns without changing the child.

A zero argument selects index `0x20A`; a nonzero argument selects `0x209`.
The helper compares that index with the manager's signed count at `+0x164`
and requires a non-null table at `+0x18C`. When either condition fails, it
uses a null entry. It writes the chosen entry pointer, including null, to
child `+0x50`. For a non-null entry, it copies six DWORDs from entry
`+0x10..+0x24` to child `+0xC..+0x20` in order. A null entry leaves those six
child fields unchanged. It returns with `ret 4`.

The [instruction source](../src/client-current/Main/FUN_5884d870.cpp)
matches all 118 original bytes, including the absolute global operand target.
The [portable C++ model](../src/client-current/semantic/TwoIndexMetadataCopy.cpp)
uses typed pointers and keeps the observed gates and copy order. Its
[native test](../tests/native/two_index_metadata_copy_test.cpp) covers both
indices, count boundaries, missing table and manager, and the preservation
of fields when no entry is selected. Run
`python tools/verify_two_index_metadata_copy.py`.

The manager, child, and entry types and selector meanings remain unknown.
The portable model is not counted as a byte match. No runtime client test was
performed.
