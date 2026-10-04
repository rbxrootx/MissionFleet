# Current Main.dll selector wrapper

`FUN_587B9B30` is a 40-byte wrapper in the hash-pinned mapped installed
client `Main.dll`. Its complete body matches at 100% under objdiff, with its
one call target checked.

The function takes three 32-bit stack arguments. It zero-extends the low
16-bit words of arguments 2 and 3, places argument 2 in the high half and
argument 3 in the low half, then calls `0x58970C70` with selector
`0x80015000`, argument 1, the packed word pair, and three zero arguments. It
returns with `ret 0x0C`, preserving the dispatcher result in `EAX`.

Three verified callers pass `(10, 0, 0)` from `0x587F2DD0`, `(12, 0, 0)` from
`0x587FAEC0`, and `(1, 0, 0)` from `0x588E5150`. These callsites establish the
arguments and selector forwarding, but do not identify the selector's
operation or the domain meaning of the first argument.
