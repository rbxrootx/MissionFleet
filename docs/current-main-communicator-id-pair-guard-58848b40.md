# Current Main.dll communicator ID pair guard

The verified ID-panel event handler `FUN_58848BC0` calls `FUN_58848B40`
for target controls at receiver `+0xE8` and `+0xEC`. It supplies a first
pointer loaded from global `0x58A0B4A0`, and either zero or a second pointer
loaded from `0x58A0B4A4`.

The original helper reads the linked-list head at receiver `+0x64`, follows
node link `+0x54`, and compares each node's `+0x78` and `+0x7C` pointers to
the two arguments. It counts a match only when the node's word at `+0x9E`
is nonzero. After traversing the entire list, an active match returns zero.
Otherwise it calls the already matched lazy UI initializer `FUN_5876BAF0`,
then the already matched shared message/UI routine `FUN_58764D30` with ID
`0x208` and three zero arguments, returning that routine's result.

The complete `0x58848B40..0x58848B8C` body is 77 bytes and ends with
`ret 8`. Its [instruction source](../src/client-current/Main/FUN_58848b40.cpp)
matches the original at 100% under objdiff 3.8.0, with both direct-call
targets checked. The [portable normal-path model](../src/client-current/semantic/CommunicatorIdPairGuard.cpp)
and [native cases](../tests/native/communicator_id_pair_guard_test.cpp)
check an empty list, a later active match, inactive matches, mismatched
pointers, call order, message ID, and return values. Run
`python tools/verify_communicator_id_pair_guard.py` and
`python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only 58848B40`.

The pointer types, meaning of node word `+0x9E`, contents of message `0x208`,
and visible effect of the shared UI routine remain unknown. The portable
model assumes a well-formed finite list and has not been compared with a
running client.
