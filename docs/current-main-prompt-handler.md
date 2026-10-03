# Prompt handler evidence for `FUN_5876a570`

Ghidra decompiles `FUN_5876a570` as a `__thiscall` routine taking an action
code, optional message data, and additional arguments. It maps codes to
localized message keys, formats optional values, stores the selected prompt
code in receiver state, calls shared prompt helpers, and finally invokes a
virtual callback through the receiver's vtable. The owning C++ class and full
callback contract are not established.

Direct message keys include `MESSAGESTRING__ARE_YOU_SURE_TO_QUIT`,
`MESSAGESTRING__DO_YOU_WANT_TO_EXIT`,
`MESSAGESTRING__SURE_TO_DELETE_FRIEND`,
`MESSAGESTRING__YOU_GOT_TRADE_REQUEST`,
`MESSAGESTRING__DO_YOU_SELL_THIS_SHIP`,
`MESSAGESTRING__SURE_TO_WARP_THIS_SHIP1`,
`MESSAGESTRING__SURE_TO_DISSOLVE_FLEET`, and
`MESSAGESTRING__SURE_TO_DISSOLVE_SQUADRON`. Other branches cover retreat,
replay deletion, class change, credit requirements, officer recruitment,
ship selection, and war/support actions. These keys and their numeric switch
arms are present in the Ghidra output; the meaning of every code and the
resulting user-visible flow remain unverified.

## Caller evidence

Ghidra shows many direct callers. `FUN_588450b0`, the communicator
configuration panel handler, calls this function with code `300` and a text
argument; the matching branch uses `MESSAGESTRING__SURE_TO_DELETE_FRIEND`.
The broader dispatcher `FUN_587bb700` invokes it with codes `100`, `600`, and
`0x15E` on separate paths. This confirms the reuse and argument flow without
assigning a class name to the shared receiver.

## Validation and limits

Ghidra reports one contiguous body range, `0x5876A570..0x5876B5AF`, totaling
4,160 bytes. `tools/generate_mapped_client_asm.py` emits source for that exact
range from the locally captured mapped image. ObjDiff verified all 4,160 bytes
and 266 mapped operand records. This is a machine-code match, not evidence of
dialog pixel output or confirmation callback behavior. No runtime test was
performed.
