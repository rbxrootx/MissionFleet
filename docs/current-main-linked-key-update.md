# Current Main.dll linked-key update

`FUN_58731590` is a 42-byte routine in the hash-pinned mapped installed
client `Main.dll`. The complete function extent matches at 100% under objdiff;
both relative call targets are checked.

The function reads a 16-bit stack argument, stores it at receiver `+0x26`, and
then checks receiver `+0x40` and `+0x30` in that order. For each non-null
membership pointer, it calls `0x58902F50` or `0x58902EE0`. Inspection of those
original helper bodies shows that they unlink and reinsert the receiver using
the updated `+0x26` key, maintaining ascending order in their respective
linked structures. The setter returns with `ret 4`.

Four byte-verified callers pass 1000 (`0x5873E4E0` and `0x587A90D0`), 400
(`0x587E9A10`), and 20000 (`0x588E4260`). Existing Ghidra cross-reference
evidence records an additional call from `0x58791590` at `0x587918FC` with
11000. These values and the shared key field do not identify the gameplay or
UI meaning of the key or either linked structure.
