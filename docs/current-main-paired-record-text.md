# Current Main.dll paired record-text controls

The pinned mapped `Main.dll` functions `FUN_588338e0` and `FUN_58833930`
each contain 69 bytes. Their
[first](../src/client-current/Main/FUN_588338e0.cpp) and
[second](../src/client-current/Main/FUN_58833930.cpp) instruction sources
independently match at 100% under objdiff 3.8.0, with six mapped operand
targets apiece: four direct calls to verified text copier `FUN_58731CE0` and
two references to fallback pointer `0x5898C922`. Verified packet dispatcher
`FUN_587BB700` and event dispatcher `FUN_588C1650` call both helpers.

Each helper takes one record pointer. For a nonnull record, it copies from
record `+0x2D` into its first child and from record `+0x0C` into its second,
in that order. For a null record, it passes the same global fallback pointer
to both children. `FUN_588338e0` selects receiver children `+0x6C/+0x70`;
`FUN_58833930` selects `+0x74/+0x78`. Both return with `ret 4`.

The [portable model](../src/client-current/semantic/PairedRecordText.cpp)
and [native cases](../tests/native/paired_record_text_test.cpp) check both
record branches, exact source and destination pointers, and call order. Run
`python tools/verify_paired_record_text.py`. The model is separate from the
byte-identical instruction sources.

The record schema, fallback contents, child-control roles, and visible UI
effect remain unknown. No installed-client or emulator runtime test has been
performed.
