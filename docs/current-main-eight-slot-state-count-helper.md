# Installed Main.dll eight-slot state-count helper

`FUN_588597F0` is called by the byte-matched `FUN_58857020` at `0x588577DD`.
The caller derives its argument from a count accumulated while scanning 27
cargo positions at a `0x20`-byte stride, then runs this helper before its
state-9-only update path. A fresh, read-only Ghidra reference export confirms
that call site and caller.

The helper's full body is the half-open range `[0x588597F0, 0x58859A95)`;
Ghidra reports the inclusive end address `0x58859A94`, 677 instruction bytes,
and 177 instructions. It stores the active count at `this + 0xF0`. For each
active child in the eight-entry list at `this + 0xA20`, it sets the low four
state bits and issues five resource requests through `FUN_589032E0`. It clears
the remaining entries through eight, using resource ID `0x500`. A separate
four-entry loop copies word values into per-entry fields and calls
`FUN_587A15E0`. Whether any copied word differs from `0xAA` controls bit 0 on
eight other child pointers at the end. The routine also dispatches count/state
updates through `FUN_58907360` and `FUN_588592C0`.

The fresh range export records all 15 direct calls: ten to `FUN_589032E0`, one
to `FUN_587A15E0`, three to `FUN_58907360`, and one to `FUN_588592C0`. Each
destination already has a byte-identical catalog entry. The instruction-emission
source in `src/client-current/Main/FUN_588597f0.cpp` matches all 677 mapped
bytes under the pinned `clang-cl` build and objdiff check.

The receiver and child types, meanings of the eight indexed entries and four
word fields, resource IDs, and the visible meaning of state bit 0 and marker
`0xAA` remain unknown. No gameplay or visual interpretation is inferred from
the byte match alone.
