# Current Main.dll communicator clan-message lifecycle methods

The RTTI-backed `CPannelCommunicatorClanMessage` vtable at `0x5899DB64`
contains the destructor at `+0x00` and a state/child update at `+0x04`. The
verified constructor installs the vtable, and its verified parent stores the
object at `+0x114`. `verify_current_communicator_rtti.py` checks both entries.

`FUN_58822D20` calls base cleanup `FUN_58822B00`, tests bit 0 of its first
stack argument, and conditionally calls `FUN_5897CC42` with the receiver. It
returns the receiver using `ret 4`. Its complete extent is 30 bytes. The
original function index listed 27 bytes and stopped before the three-byte
return at `0x58822D3B`; two `CC` padding bytes follow before the next method.

`FUN_58822D40` sets receiver flag bits `0x0001` and `0x0004`, changes state
bits selected by mask `0x1E00` to `0x0100`, and writes fields `+0x58=0xDC`,
`+0x50=0x130`, and `+0x54=0x14A` before calling `FUN_58903290`. It updates
flags in children referenced by `+0x70` and `+0x74`, calls `FUN_5875F940`,
then selects one of two string sources based on global values at
`0x58A0B4A0` and `0x58A0B4A8`. Both paths set a child field at `+0x7C`, compute
a byte-string length into the child at `+0x70` offsets `+0x8C` and `+0x94`,
set receiver `+0x84=1` and `+0x88=0`, and call slot `+0x18` on the object at
`[0x58A24584]+0x30` with stack arguments `(receiver, 0x64, 0)`.

The complete `FUN_58822D40` extent is 370 bytes, ending at `ret` at
`0x58822EB1`; the original 367-byte index cut through the `add esp,0x84`
epilogue. Fourteen `CC` padding bytes separate that return from the next
function at `0x58822EC0`.

The destructor flag ABI, child identities and fields, global condition, string
contents, helper effects, and indirect notification contract remain uncertain.
No emulator destruction, state, or visual test has been run.
