# Current Main.dll panel-base guarded child teardown

Verified cleanup bodies for `CPannelLaunchedShip` (`FUN_5888A840`) and
`CPannelRule` (`FUN_588A9DA0`) both call `FUN_587B5F50` with their receiver in
`ECX`. The routine installs vtable address `0x5899A090`, also installed by
verified constructor `FUN_587B62B0`. This ties the two derived cleanup paths
to the same observed base object, without establishing its exact class name.

The body creates an x86 exception-registration frame. On its normal path it
checks receiver DWORD `+0x7C` against `-1`. Only when they differ does it read
child pointer `+0x74`; if non-null, it calls the child's first virtual method
with stack argument `1` and then clears `+0x74`. It always calls the matched
base cleanup `FUN_589033E0` afterward. That callee installs vtable address
`0x5898C500` and continues to its own base cleanup.

The [instruction source](../src/client-current/Main/FUN_587b5f50.cpp)
matches all 114 original bytes with four mapped operand targets checked.
The [portable C++ model](../src/client-current/semantic/PanelBaseTeardown.cpp)
expresses only the observed normal path. Its
[native test](../tests/native/panel_base_teardown_test.cpp) checks the sentinel
gate, child-call argument, clear-after-call ordering, and unconditional base
call. Run `python tools/verify_panel_base_teardown.py`. The model does not
represent the original SEH frame and is excluded from byte-match progress.

The base class name, meaning of `+0x7C`, child ownership, and exception unwind
behavior remain unknown. No runtime client test was performed.
