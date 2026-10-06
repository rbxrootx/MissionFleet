# Current Main 16-bit strided-record lookup

`FUN_58778AD0` is a 70-byte leaf lookup in the pinned mapped `Main.dll`. The
complete instruction stream is preserved in
[`FUN_58778ad0.cpp`](../src/client-current/Main/FUN_58778ad0.cpp).

It reads a signed count from receiver `+0x1C` and a record base from `+0x28`.
For a positive count, it compares the input 16-bit key with the word at
`record +0x35E`, scanning records at a `0x390`-byte stride. It returns the
matching record address, or null when the count is nonpositive or no key
matches. The function ends with `ret 4` and has no mapped address operands.

Two already byte-matched callers ground the use of the result. `FUN_5886BA60`
looks up a key at `0x5886BF6E`, then reads an eight-entry area beginning at
record `+0x362` and looks up its nonzero entries at `0x5886C045`.
`FUN_588AEFB0` makes four
lookups at `0x588AF256`, `0x588AF2A0`, `0x588AF377`, and `0x588AF74A`; its
decompilation likewise walks references in the record's `+0x362` area. These
call paths support the observed key-to-record lookup and slot traversal, but
do not establish the record schema or gameplay meaning of those keys.

The field names, key namespace, record ownership, and visible effects remain
unknown. This exact instruction reconstruction is based on the mapped function
and both caller paths; no emulator runtime comparison has been performed.
