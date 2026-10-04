# Current Main.dll linked-name lookups

Verified `FUN_588450B0` and `FUN_58890110` both call `FUN_588A44A0` and
`FUN_58842F60` with a text query. The two helpers traverse linked nodes using
the next pointer at node `+0x54`; each reads a NUL-terminated name through
node `+0x70` and nested field `+0x6C`.

`FUN_588A44A0` uses the list head at global manager `0x58A245B0` `+0x90`.
It returns without changing receiver `+0xF0` for a null query or empty list.
For a nonempty list, it compares name bytes with the query inline, clears
`+0xF0` after each mismatch, and stores the matching node in `+0xF0` on
equality. Thus a nonempty miss leaves `+0xF0` null. The
[instruction source](../src/client-current/Main/FUN_588a44a0.cpp) matches
all 114 bytes, including its absolute manager-pointer target.

`FUN_58842F60` uses the list head at receiver `+0x138`. It returns null for
an empty list. For each node it calls the function pointer stored at
`0x5898C1A4` with `(query, node name)` and returns the first node whose
comparison result is zero. An unsuccessful search returns null without
modifying the receiver. Its
[instruction source](../src/client-current/Main/FUN_58842f60.cpp) matches
all 69 bytes, including the absolute comparator-pointer target.

Verified dispatcher `FUN_588C1650` calls `FUN_58842fb0` with a selected
receiver from `0x58A245B4->+0xDC` and a query pointer. This lookup starts at
receiver `+0x130`; otherwise it follows the same `+0x54` links, reads the same
nested name, and returns the first node accepted by the comparator or null.
Its [instruction source](../src/client-current/Main/FUN_58842fb0.cpp) matches
all 69 bytes, including the absolute comparator-pointer target. The two
function bodies differ at only byte offset 3, the list-head displacement
(`+0x138` versus `+0x130`), as checked against the pinned mapped image.

Verified `FUN_5881E2E0` and `FUN_58847770` call two more lookups on their
selected child. [`FUN_58848380`](../src/client-current/Main/FUN_58848380.cpp)
reads the list head at child `+0x6C`, while
[`FUN_588483D0`](../src/client-current/Main/FUN_588483d0.cpp) reads `+0x64`.
Both then follow the same node links and call the same comparator with query
and nested name, returning the first equal node or null. Each complete body
matches 69 bytes with the comparator pointer at `0x5898C1A4` checked. The
two original byte sequences differ only at byte offset 3: `0x6C` versus
`0x64` for the head field.

The [portable C++ model](../src/client-current/semantic/LinkedNameLookup.cpp)
and [native cases](../tests/native/linked_name_lookup_test.cpp) check match,
miss, null-query and empty-list behavior, receiver mutation, comparator
argument order, and distinct `+0x64`/`+0x6C` and `+0x130`/`+0x138` heads. Run
`python tools/verify_linked_name_lookup.py`. The model
uses `strcmp` for the inline equality path and an injected comparator for the
indirect path; it is not a byte-identical source. The comparator's identity,
string encoding, object roles, and invalid-pointer behavior remain unknown.
No runtime client test was performed.
