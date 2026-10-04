# Current Main.dll communicator ID panel event path

The original `CPannelCommunicatorIDPannel` vtable at `0x5899E780` contains
`FUN_58848BC0` in slot `+0x18`. The vtable and its RTTI name are checked
against the pinned mapped `Main.dll` by
[`verify_current_communicator_rtti.py`](../tools/verify_current_communicator_rtti.py).
The [instruction source](../src/client-current/Main/FUN_58848bc0.cpp)
matches the complete `0x58848BC0..0x58848E56` body (663 bytes) at 100% under
objdiff 3.8.0, including 30 mapped operand targets. It ends with `ret 0xC`.

The body returns zero without action unless its second stack argument equals
`2`. For that value it compares the first argument, a target pointer, with
receiver controls in this order:

- `+0xD4`: visit linked chains headed at `+0x6C` then `+0x64`, calling
  `FUN_58820F00` for each nonnull node `+0xA4` pointer, then call the panel's
  virtual slot `+0x08`.
- `+0xD8`: call virtual slot `+0x04` on receiver child `+0x114`.
- `+0xDC`: call `FUN_587B91E0` using global receiver `DAT_58A24588`,
  resource pointer `0x58A0B450`, and zero.
- `+0xCC/+0xD0`: call the already matched `FUN_588486E0` with argument `1`
  only when receiver word `+0xF6` is respectively `0` or `1`.
- `+0xE8/+0xEC`: call `FUN_58848B40` with resource pointer(s) loaded from
  `0x58A0B4A0` and, for `+0xEC`, `0x58A0B4A4`.
- `+0x118/+0x11C`: move the selected linked node backward through `+0x50`
  or forward through `+0x54`, using the active mode's selected pointer and
  signed 16-bit position/limit fields. The backward move requires position
  greater than zero; the forward move requires position less than limit minus
  five. A successful move calls `FUN_588486E0` with argument `0`.

The [portable normal-path model](../src/client-current/semantic/CommunicatorIdEvent.cpp)
implements these branches through injected callbacks. Its
[native cases](../tests/native/communicator_id_event_test.cpp) check event
gating, callback order, resource arguments, mode guards, and navigation
bounds. Run `python tools/verify_communicator_id_event.py` for the model and
`python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only 58848BC0` for the exact
code match.

The numeric event type, resource contents, callback side effects, invalid
pointer behavior, and rendered interaction are not established. The model is
not byte-identical source and has not been compared with a running client.
