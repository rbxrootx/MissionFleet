# Current Main `CloseCGCDLL` export

`CloseCGCDLL` is the named export at `0x587956C0` (RVA `0x656C0`, ordinal 2).
It sits between the already byte-matched `InitCGCDLL` export and `AllocScreen`
in the installed `Main.dll`. Ghidra reports one body range,
`0x587956C0..0x587962B2`, totaling 3,059 bytes. ObjDiff 3.8.0 verified every
byte and checked 253 mapped operand records.

## Behavior visible in the original

The routine walks many global pointer slots. For most non-null values it calls
the function at vtable offset `0` with argument `1`, then sets that global to
null. Two slots instead call the function at vtable offset `+8`. Four other
global values are passed to `DAT_5898c088`. The function then iterates the
pointer range `0x58A0B1C4..0x58A0B1E0` in four-byte steps, applying the same
null-check, vtable call, and clear pattern, and returns `1`. A few globals are
checked again later in the sequence; earlier nulling makes the later guarded
call a no-op when the same slot was already cleared.

## Uncertainty

The host-side call site, shutdown timing, object types, ownership rules, and
meaning of the vtable argument are not recovered. The byte match confirms the
export's machine code only; no host unload or runtime teardown test was run.
