# Current Main record-pair scaling helper

`FUN_587B21F0` is a 161-byte x86 helper in the pinned mapped `Main.dll`. Its
source preserves the complete mapped instruction stream.

## Caller evidence

Both byte-matched child builders call the helper. `FUN_587A6220` reads two
words from its selected-record path, XORs each with `0xAA`, and passes them as
the inputs. The ship-map child-state builder `FUN_588D84D0` calls it at
`0x588D88FB` after `FUN_587B2A40`; it passes the words at child `+0xBCC` and
`+0xBCE`, each XORed with `0xAA`.

## Behavior visible in the mapped instructions

The helper multiplies the first input by the low byte of receiver word
`+0x308` and the second by the low byte of receiver word `+0x3BC`. It writes
the products to `+0x31C` and `+0x3D0`. If the first product is zero, it writes
`0xAAAAAAAA` to `+0x104` and clears `+0xF8`. It then XORs both products with
`0xAAAAAAAA` and stores the encoded values back at `+0x31C` and `+0x3D0`.

When receiver `+0x88` equals the pointer stored at `[0x58A247F8]+4`, it calls
`FUN_587A15E0` with address/value pairs for receiver `+0x104`, `+0x31C`, and
`+0x3D0`. The function returns with `ret 8`.

The exact source and match record are in
[`src/client-current/Main/FUN_587b21f0.cpp`](../src/client-current/Main/FUN_587b21f0.cpp).
The ship-map caller's surrounding child setup is documented in the [screen
constructor notes](current-main-ship-map-screen-constructor.md).

## Unresolved details

The coefficients' and inputs' units, meanings of the encoded fields and
receiver offsets, reason for resetting `+0x104` and `+0xF8` when the first
product is zero, global-context condition, callback contract, and visible
result remain unknown. No emulator runtime comparison has been made.
