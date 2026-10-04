# Current Main.dll six-field record ingestion

Verified packet/event dispatchers `FUN_587BB700` and `FUN_588C1650` both call
the neighboring wrappers `FUN_58754CD0` and `FUN_58754D10` with global
receiver `0x58A245AC`, an entry count, and an input-record pointer. Each
wrapper skips a zero count. For each record it reads DWORDs at `+0`, `+4`,
and `+8`, forms pointers to fields `+0x0C`, `+0x24`, and `+0x2D`, and passes
those six values in that order to the already matched two-key update-or-insert
routine `FUN_58754C00`.

The sole traversal difference is the input stride: `FUN_58754CD0` advances
`0x54` bytes per record, while `FUN_58754D10` advances `0x84`. Their
[instruction sources](../src/client-current/Main/FUN_58754cd0.cpp) and
[`FUN_58754D10`](../src/client-current/Main/FUN_58754d10.cpp) match the
complete 62- and 65-byte bodies, including their direct-call targets.

The [portable C++ model](../src/client-current/semantic/SixFieldRecordIngestion.cpp)
expresses the common six-field dispatch with an injected update callback.
Its [native cases](../tests/native/six_field_record_ingestion_test.cpp) check
zero count, two-record traversal at both strides, field values, pointer
offsets, and call order. Run `python tools/verify_six_field_record_ingestion.py`.
The model is not counted as a byte match.

The incoming record types, text encodings, and protocol role remain unknown.
No runtime client or emulator test was performed.
