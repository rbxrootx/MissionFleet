# Current Main.dll selected-object child-flag reset

`FUN_58782790` is called by the already matched `FUN_58782CF0` with its
selected object in `ECX`. The matched state-reset routine `FUN_588DF450` calls
it in a loop over object pointers. Its 123-byte original body is reproduced in
[`FUN_58782790.cpp`](../src/client-current/Main/FUN_58782790.cpp) and verified
byte for byte, with no mapped operand targets.

The function clears bits 2 and 0 of the receiver word at `+0x24`, then zeros
its DWORDs at `+0x50` and `+0xE8`. It visits three child pointers in the range
`+0xBC..+0xC4` and two in `+0xC8..+0xCC`, clearing bit 0 of each non-null
child's word at `+0x24`. It finishes by clearing the same bit in the child at
receiver `+0xD0`. The last pointer is dereferenced unconditionally in the
original instructions, so a valid caller must supply it.

The [portable C++ model](../src/client-current/semantic/SelectedChildFlagReset.cpp)
expresses these field changes without assuming the original x86 object layout
on a 64-bit host. The [native test](../tests/native/selected_child_flag_reset_test.cpp)
checks null-slot skipping, exact bit preservation, zeroed DWORDs, and repeated
resets. Run it with `python tools/verify_selected_child_flag_reset.py`. This
model is behavioral evidence; the separately counted instruction source is the
byte-identical match. The flag meanings, child ownership, and reason `+0xD0`
is always non-null remain unknown. No runtime client test was performed.
