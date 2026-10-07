# CScreenShotTime byte-match closure

The installed `Main.dll` contains an RTTI-backed nested class named
`CScreenShotTime@CNFScreenShot`. The CompleteObjectLocator at `0x5899AEFC`
points to TypeDescriptor `0x589CBCB0`, whose decorated name is
`.?AVCScreenShotTime@CNFScreenShot@@`. Its eight-entry vtable begins at
`0x5899AF00`; the method at slot `+0x14` is `FUN_587C7300`.

The matched `FUN_587C75E0` constructor installs that vtable on a child object.
The matched `CLogoControlMenuScreen` constructor `FUN_5878D6D0` calls it at
`0x5878D75B`. The fresh Ghidra body for `FUN_587C7300` follows the parent
pointer at `+0xFC`, adjusts four incoming coordinates, conditionally calls
`FUN_58731CE0`, invokes a child virtual method, and checks byte `+0x100` along
with global `DAT_58A24A98` before calling `FUN_587C71A0`. The fresh body for
`FUN_587C71A0` clears fields, calls two helpers, may pass `./ScreenShot` to a
host callback, formats `./ScreenShot/%s` from receiver offset `+0x0C`, and
passes the result to `FUN_58971EC0` with argument 3. These are observed
operations; callback contracts and field meanings are not established.

The direct-transfer closure rooted at the vtable method contains 102 functions
and 17,694 bytes in 106 fresh Ghidra body ranges. The committed range manifest
is `config/NF2_2026/current-main-c-screenshot-time-closure-body-ranges.tsv`;
the mapped transfer manifest is
`config/NF2_2026/current-main-c-screenshot-time-transfers.tsv`. Ghidra's
function-edge export omitted two direct recursive calls in `FUN_58974010`;
Capstone decoding of its complete 2,034-byte mapped body confirms calls at
`0x589741FA` and `0x58974797` back to `FUN_58974010`, and both are recorded in
the transfer manifest. No unresolved in-image direct transfer remains.

Every selected function passes the repository's pinned compiler and objdiff
3.8.0 byte comparison at 100%. The focused verifier checks all 106 instruction
ranges, the 220 recorded in-closure transfers, 340 direct transfers, RTTI,
the eight vtable entries, and the matched constructor path:

```powershell
rtk python tools/verify_current_main_c_screenshot_time.py
```

This is a static byte-match result. The screenshot path has not been exercised
in the emulator, and no rendered or saved screenshot behavior is claimed.
