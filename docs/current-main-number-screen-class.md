# Current Main.dll `CNumberScreen` class

## RTTI and construction evidence

The vtable address point is `0x589A2938`. Its Complete Object Locator is at
`0x589AB0D8`; the type descriptor at `0x589B9918` names the class
`.?AVCNumberScreen@@`. The verified `CPannelJump_ControlMenuScreen`
constructor `FUN_58889640` directly calls `FUN_58907100` twice. That
constructor initializes the base through `FUN_589031A0`, installs the
`CNumberScreen` vtable, stores its supplied values and observed state fields,
and calls `FUN_58907040`.

`FUN_58907360` now has a C++ match source: it writes its argument to `+0x64`
and `+0x60`, then calls `FUN_58907040`. Objdiff verifies its original 18 bytes
and the symbolic direct-call target. The two paired-child update helpers also
call this setter.

The mapped `FUN_58907040` body uses signed `+0x60` as a number. Positive
`+0x5C` supplies a width at `+0xE8`; otherwise it counts decimal digits of
the magnitude, with zero yielding count zero. It writes decimal remainders
from right to left into DWORD slots beginning at `+0x68`, using value 10 for
unused leading slots below the top slot. For a negative original value it
writes 11 into the sign slot at `+0x64`. These are observed numeric codes;
their visual glyphs are not established. The absolute-value operation uses
32-bit negation, so the `INT_MIN` edge case needs separate runtime validation.

A portable [C++ behavior model](../src/client-current/semantic/CNumberScreenDigits.cpp)
implements this observed digit construction, including the x86 `INT_MIN`
negation result. The [native cases](../tests/native/number_screen_digits_test.cpp)
cover inferred width, fixed width, zero, negative values, and `INT_MIN`.
They pass locally. This model does **not** compile to the original 191 bytes
and is not credited as a new byte match. The exact-match source remains the
instruction stream in `FUN_58907040.cpp`; executing the original function
against the model remains outstanding. Re-run the model cases with
`python tools/verify_number_screen_digits.py`.

## Constructor, cleanup, and vtable

The 142-byte cleanup body `FUN_58906EA0` is called by the scalar-deleting
destructor. It installs the class vtable, invokes the first virtual method with
argument 1 for nonnull fields at `+0xF4` and `+0xF0`, clears each field, then
calls the `CScreen` cleanup helper `FUN_58902D60`.

| Slot | Function | Bytes | Captured behavior |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_58907180` | 30 | Calls the cleanup body and invokes host thunk `0x5897CC42` when bit 0 of the stack deletion flag is set; returns the receiver with `ret 4`. |
| `+0x04` | `FUN_58731770` | 30 | Previously byte-verified shared state method. |
| `+0x08` | `FUN_588A9ED0` | 39 | Previously byte-verified shared state method. |
| `+0x0C` | `FUN_589071A0` | 243 | Advances the value at `+0x60` toward `+0x64` using observed thresholds and step sizes when receiver flag bit 2 is set, then updates the child list at `+0x3C` through slot `+0x0C`. |
| `+0x10` | `FUN_5873B360` | 69 | Previously byte-verified shared method. |
| `+0x14` | `FUN_58906F30` | 265 | With receiver flag bit 0 set, visits the child list at `+0x4C`, calls child slot `+0x14` for observed eligible entries, uses helper `0x5873A5D0`, then visits the list again. |
| `+0x18` | `FUN_58907380` | 13 | Forwards the step at `+0xEC` to the [upper-bounded path](current-main-number-screen-bounded-step.md). |
| `+0x1C` | `FUN_58907390` | 13 | Forwards the step at `+0xEC` to the [lower-bounded path](current-main-number-screen-bounded-step.md). |

Objdiff 3.8.0 verifies the seven newly matched functions: **822 bytes and 18
mapped operands**. Together with the three previously verified shared slots,
all eight vtable entries match. The scalar-deleting destructor's extent was
corrected from 27 to 30 bytes to include `ret 4`; the two following `int3`
bytes are padding and excluded.

## Limits

The class name is confirmed by RTTI, but numeric field units and meanings,
child roles, helper contracts, and visible output are unresolved. Function
matching validates emitted bytes against the captured image; it does not prove
the high-level behavior or that the class has been exercised in the emulator.
No emulator runtime or visual test was performed.
