# Current Main.dll packed-record lookup

`FUN_58778DC0` is an 87-byte lookup routine in the hash-pinned mapped
installed-client `Main.dll`. It is called by verified functions
`0x5879DD90`, `0x587D89F0`, and `0x588C4210`. Its complete extent matches at
100% under objdiff with no mapped relocations.

The routine receives one packed 32-bit key. It scans the receiver's array at
`+0xF0` for the count at `+0xE4`, using a `0xAC`-byte record stride. For each
record it requires byte 0 to equal `0x0B`, byte 1 to equal key byte 1, and the
word at `+2` to equal the key's upper word. It returns the matching record
address or null, cleaning the key argument with `ret 4`.

The array owner/type and meanings of the key fields and record layout remain
unresolved. Callers pass packed values and consume the returned pointer, but
do not establish domain-specific names for those fields.
