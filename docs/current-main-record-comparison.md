# Current Main record-comparison path

`FUN_58775980` is a 656-byte routine directly called by four verified
functions: `FUN_5873FE80`, `FUN_587A90D0`, `FUN_587EFD60`, and `FUN_587F8760`.
The callers pass two object pointers and test returned values including `1` and
`3`; those values are preserved here without assigning application meanings.

When bit 0 of the global byte at `0x58A2459C+0x105A8` is set, the helper
compares the arguments' bytes at `+0x354`, returning `1` if equal and `3` if
different. Otherwise, equal words at `+0x350` return `1` immediately. For
different words, it scans the pointer list reached through receiver `+0x54`:
the begin pointer is at list offset `+0`, the end at `+0x0C`, and the capacity
at `+0x10`. Entries whose word at `+8` differs from the first argument's word
at `+0x350` are skipped.

For a matching entry, the second argument's field `+0x6070` selects additional
comparisons. The helper compares entry fields `+0x18`, `+0x10`, and `+0x14`
against the second argument's fields `+0x350`, `+0x1334`, `+0x1338`, and
`+0x354`; a matching entry returns its field `+0x0C`. If the list scan finds
no match, it calls `FUN_587756F0`, `FUN_587754E0`, and `FUN_587752D0` in sequence,
continuing to the next helper only when the previous result equals `3`.

The receiver class, record layouts, roles of these fields, and meanings of
return values `1` and `3` remain unknown. The source at
`src/client-current/Main/FUN_58775980.cpp` reproduces the complete indexed
extent; objdiff 3.8.0 reports 656/656 identical bytes with 28 relocations
checked. No original-client runtime test was performed.
