# Current Main.dll two-key record update model

The already byte-matched `FUN_58754C00` takes two key DWORDs, a value DWORD,
and three text-like source pointers. It searches the receiver's 0x48-byte
records through verified `FUN_58753BF0`. On a hit it updates record `+8`,
then calls the imported copy routine at `0x5898C198` for destination fields
`+0x2D`, `+0x0C`, and `+0x24`, in that order. On a miss it prepares a local
record with keys at `+0/+4`, value at `+8`, copies fields `+0x0C`, `+0x24`,
and `+0x2D` in that order, and passes it to verified `FUN_58754A30` for
append. The original 206-byte body and its seven mapped operands remain the
authoritative byte match.

The [portable C++ model](../src/client-current/semantic/TwoKeyRecordUpdate.cpp)
uses a vector of 0x48-byte records and an injected field-copy callback. It
preserves the key comparison, value update, field destinations, and distinct
copy order on hit and miss. The [native test](../tests/native/two_key_record_update_test.cpp)
feeds two 0x54-byte records with the same keys through the previously modeled
batch wrapper, observing one insert then an update. It feeds a 0x84-byte
record with a different second key and observes a second insert. It checks
the resulting values and the nine copy calls in order. Run
`python tools/verify_two_key_record_update.py`.

The callback's exact copy semantics and field capacities are not established;
the test uses short NUL-terminated strings. The model initializes unobserved
record bytes to zero for portability, whereas the original local stack record
does not establish those bytes. It also does not reproduce the original
allocator or exception path. The model is behavioral evidence, excluded from
byte-match progress. No runtime client or emulator test was performed.
