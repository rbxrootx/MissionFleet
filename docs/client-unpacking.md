# Current client unpacking evidence

`FleetMission.exe` loads `Core.dll` and calls its exported `WinMain`. Static PE
inspection does not show a direct load reference to `Main.dll`; this does not
exclude a dynamic `LoadLibraryA`/`GetProcAddress` path. The installed-client
runtime evidence is consistent with VMProtect protection on `Main.dll`;
`ITNTL.dll` is readable native x86. Both export `AllocScreen` and related
lifecycle names. The export match is useful evidence for the renderer boundary,
but does not prove the protected and readable implementations are byte- or
behavior-identical. See [ITNTL sprite loader](itntl-sprite-loader.md).

The installed `Core.dll` has SHA-256
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.
Its `.text`, `.rdata`, `.data`, and `.fptable` sections have zero raw size in the
file. Their bytes are stored through VMProtect's `.vmp1` section and are
materialized after the DLL initializes.

`tools/dump_loaded_module.py` launches the supplied client with the Windows
`RunAsInvoker` compatibility layer, waits for named modules, reads their mapped
pages, and rebuilds every mapped section into a PE file. The first `Core.dll`
capture recovered 11,751,424 mapped bytes with no unreadable pages. The rebuilt
PE contains 4,268,228 bytes of native `.text` and disassembles from its first
instruction. Generated dumps and manifests are kept under
`reports/unpacked-client/` and are intentionally Git-ignored.

The analysis PE preserves its live image base. VMProtect's runtime writes many
absolute addresses that are not represented by the standard `.reloc` table;
normalizing only those table entries creates a mixed invalid image. The tool's
`--normalize-base` option exists for controlled experiments but is not used for
the authoritative dump.

Ghidra found five `ShipStructure` strings in the recovered module and traced the
current Sangduck loader to live addresses `0x587B6750` and `0x587B6D70` for the
recorded `0x58480000` image base. The loader's compressed two-byte branch reads
span fields at offsets `+0` and `+3`, advances by five bytes, and ignores byte
`+2`. This independently confirms the same behavior observed in the readable
comparison module and corrected a false run-mode assumption in the preview
decoder.

This is a mapped `Core.dll` image. It exposes runtime-materialized PE sections
for static analysis, but does not translate VM bytecode into native function
bodies. A separate capture of the installed `Main.dll` follows below.

## Current installed `Main.dll` runtime capture

The installed `D:\FleetMission\Main.dll` has SHA-256
`74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd` and
preferred image base `0x10000000`. Its on-disk `.text`, `.rdata`, `.data`, and `.vmp0`
sections have zero raw size; `.vmp1` has raw bytes. Loading this DLL alone in
the isolated 32-bit host caused the Windows loader and module entrypoint to
materialize a mapped image at `0x58730000`. The capture has 8,941,568 bytes and
no unreadable pages. The mapped image SHA-256 is
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`; its
manifest verifies the captured file hash against the on-disk module. The
PE-shaped snapshot and mapped bytes are kept locally under the ignored
`reports/unpacked-current-main/` directory. To repeat the capture, load the DLL
in the isolated host and dump its mapped pages:

```
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\load_module_host.ps1 -ModulePath D:\FleetMission\Main.dll -HoldSeconds 120
rtk python tools/dump_loaded_module.py --pid <printed-pid> --module Main.dll --output reports/unpacked-current-main
```

Ghidra analysis recognized 8,474 function entries in the snapshot: 8,441 in
`.text`, with 2,352,205 bytes across their recorded bodies, and 33 small
entries in `.vmp1` totaling 853 bytes. This is an automatic static-analysis
inventory, not a verified function boundary set or a byte-matched source
reconstruction. The module entrypoint remains at RVA `0x846B6B` inside `.vmp1`.
The capture therefore recovers a substantial native code region for
decompilation, while the remaining VMProtect code/data and entrypoint behavior
still need separate analysis. It is not a fully devirtualized or standalone
replacement DLL. No game login or network connection was attempted.

### Current-build VM dispatch boundary

The installed-build Ghidra image uses its captured base `0x58730000`; its
module entrypoint at RVA `0x846B6B` is therefore `0x58F76B6B`, inside `.vmp1`.
At that address the mapped bytes form a 37-byte function. Its first 24 bytes are
unchanged from the on-disk `.vmp1` data, so the loader's section materialization
does not itself unpack this entrypoint stub. The initial path pushes
`0x45D54D3E`, calls `0x58C3A998`, and then reaches the thunk at `0x58C60FD6`,
which jumps to `0x58E0A61E` and then `0x58F8160D`. Ghidra's pseudocode for the
entrypoint reduces these paths to helper calls, while its raw instruction view
contains register-sensitive and flag-sensitive instructions; the pseudocode is
not sufficient to infer the VM state or original protected routine.

At `0x58F8160D`, the observed conditional path reaches `0x58C84F0B`, whose
instruction is `JMP ESI`. The other path calls through `0x58DC34AD` and then
`0x58C319AB`. A separate helper chain from `0x58C3A998` runs through
`0x58BF62F5` to `0x58DDB193` and `0x58BFF900`. The transfer through `ESI` is
direct evidence of an indirect dispatch boundary in the protected region; it is
not a recovered bytecode table or evidence that the VM has been devirtualized.
The mapped capture establishes the dispatcher bytes and these static edges, but
not the runtime value of `ESI`, the dispatched handler set, or the protected
game routines represented by those handlers. Those details remain uncertain.
By contrast, the recovered `.text` contains ordinary native routines: for
example, `AllocScreen` at `0x587962C0` disassembles as a conventional allocation
and constructor path. This confirms that the capture usefully materializes
native code while leaving the entrypoint's protected dispatch unresolved.

The three exports used as renderer/authentication boundaries also decompile from
this snapshot. `InitCGCDLL` at `0x587956B0` forwards its argument to
`0x58907CE0` and returns zero. `AllocScreen` at `0x587962C0` allocates `0x84`
bytes, calls constructor `0x587C35A0` with its second argument, stores the
resulting object in a module global, and optionally calls a method at vtable
offset `+0x20` using its third argument. `GetUserId` at `0x58796310` returns a
pointer to a module global. These are Ghidra pseudocode observations only; they
have not yet been reconstructed or byte-matched.

The inventory snapshot referenced by the ITNTL comparison records a different
`Main.dll` build (`b3aac421e83c7b0b90224619038e4e2632a7d6ab58ebfd0f9783cbc6e6a57a31`).
That older hash should not be conflated with the current installed build
captured above or with the separate archived 2062 client below.

## Archived 2062 client startup capture

The archived 2062 package has a separate `NavyFIELD.exe` (SHA-256
`9aac73f0f460cac93eb6465cd35a6ca0a1b204e58c724b47dd30814361b7432c`) and
`Main.dll` (SHA-256
`dd53bd78d5a4eaae916a428f9086582bf8603be2e680c2a84459f21afe03e663`). The
executable's entry point is in the small on-disk `.nsp1` bootstrap; its
handoff enters `.nsp0`, whose raw size is zero, so static disassembly stops
before the startup functions. The existing `dump_loaded_module.py` tool accepts
`--settle` to wait after a module appears before reading its mapped pages. A
six-second settled capture
produced a 655,360-byte mapped image with no unreadable pages; the rebuilt PE
and memory image are preserved locally under the ignored
`reports/unpacked-2062-client/` directory.

Ghidra analysis of that mapped snapshot recovered the startup transfer
`0x0048D689 -> 0x0046CF8F -> 0x00401000`. The first function performs loader
fixups and invokes the runtime startup routine; the latter initializes the
window/display path. This analysis does not establish that the entire protected
image is devirtualized. During the observed 20-second executable run,
`Main.dll` and `ITNTL.dll` did not load. The archived `Main.dll` has zero raw
bytes for its `CODE` and `DATA` sections, no TLS directory, and a module entry
point at RVA `0x1E2B70`. A separate 32-bit PowerShell host, with the archived
`MSVCRTD.DLL` beside it, loaded `Main.dll` through the Windows loader without
starting the game or authenticating. Its DLL entrypoint expanded the protected
image in memory. `dump_loaded_module.py` captured 1,982,464 bytes at base
`0x10000000` with no unreadable pages; the `.CODE` section contains 1,093,152
nonzero bytes. The mapped capture SHA-256 is
`929af9b902a107f9e1d4b5e291a56551f88e882a201249b3bb89d17706a5cd00` and stays
under the ignored `reports/unpacked-2062-client/` directory.

The repeatable isolated-host sequence is:

```
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools/load_module_host.ps1 -ModulePath var\navyfield2062\Main.dll -HoldSeconds 120
rtk python tools/dump_loaded_module.py --pid <printed-pid> --module Main.dll --output reports/unpacked-2062-client
```

Ghidra recovered the DLL entrypoint at `0x101E2B70`, which expands the code
stream from `0x10135000` to `0x10001000` and applies import/relocation fixups.
The exported `AllocScreen` at `0x100348B0` allocates `0x7C` bytes through an
initialized function pointer, then calls constructor `0x1004DB50` with the
caller-supplied configuration. The pointer at `0x1017515C` resolves in the
captured process to `MSVCRTD.DLL+0xE2C0`, whose export is `operator new(unsigned
int)`. `InitCGCDLL` at `0x10033A70` delegates to `0x10102C40`, which copies the
host's callback table into renderer globals.

The 678-byte entrypoint at `0x101E2B70` is byte-matched as `entry` in
`src/client-2062/Main/entry.cpp`; the source emits the captured instruction
bytes because VC6 re-encodes equivalent instructions differently. The
behavior below comes from the separate Ghidra decompilation, not from treating
byte emission as recovered high-level logic. Its `param_4 == 1` branch reads a
bit-coded stream at `0x10135000` and writes decoded bytes starting at
`0x10001000`. The following paths scan decoded code for relative-call
operands, resolve import names through function pointers at `0x101E30DC` and
`0x101E30E0`, and apply base relocations using delta-coded offsets beginning
at `0x10000FFC`. The observed path then transfers to `0x1016CC50`. This match
reconstructs the native image-loader stage; it does not translate VMProtect
bytecode elsewhere in the module. The entrypoint argument contract and full
VM-protection coverage remain unresolved.

The entrypoint's reason-dependent lifecycle path also reaches the 263-byte
`FUN_1016CB40`, reconstructed at 100% with its call relocation to
`0x1016CD68` checked. Ghidra shows its reason-1 branch allocating a 0x80-entry
callback table and incrementing a state counter. Its reason-0 branch decrements
the counter, walks populated callbacks backward, frees the table, and clears
the pointer. The callback meanings and the complete entrypoint argument
contract are unresolved; this helper is part of native initialization and
teardown, not evidence that VM bytecode has been devirtualized.

The entrypoint's tail-jump target at `0x1016CC50` was missing from Ghidra's
function inventory. Its code has a separate prologue and epilogue, one inbound
tail-jump from `entry`, and a stable body ending at `0x1016CD42`; defining this
boundary yielded a 243-byte function that now matches with all four relative
call destinations checked. Its decompilation dispatches on values 0 through 3,
calls the callback at `DAT_101C9368` on selected paths, routes lifecycle events
through `FUN_1016CB40`, and calls `FUN_10033A60`. That 8-byte target simply
returns 1 and now has its own byte match; it is distinct from the exported
`InitCGCDLL` at `0x10033A70`.
The values resemble standard DLL attach/detach reasons, but their external
contract and the callback's meaning remain unproven.

The attach path's `FUN_1016CD68` thunk is also byte-matched. Its six bytes jump
through IAT slot `0x10175118`, whose captured value is `0x1020AD20`. The
supplied `MSVCRTD.DLL` has preferred base `0x10200000` and exports `_initterm`
at RVA `0xAD20`, identifying the thunk target by address. `FUN_1016CB40`
pushes `0x1017F018` then `0x1017F000` before calling it; under the observed
32-bit calling convention these are the end and start pointers for a 24-byte
range, or six 32-bit pointer slots. The captured table is `[0,
0x10033870, 0x10042CB0, 0x10042CD0, 0x10042CF0, 0x10042D10]`; the leading
null is skipped. Microsoft's CRT reference says `_initterm` walks a function
pointer table and skips null entries
([Microsoft Learn](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/initterm-initterm-e?view=msvc-170)).
Each initializer and the relevant call/cleanup chain now has a byte-matched
source under `src/client-2062/Main/`. `0x10033870` builds an object-array
instance with a 0x1000 count and registers `0x10033890` through `_atexit`;
the cleanup restores its vtable and conditionally invokes a CRT thunk.
`0x10042CB0`, `0x10042CD0`, `0x10042CF0`, and `0x10042D10` each call the
host callback stored at `0x10175050` with `(0, 1, size)` and save the result in
four consecutive globals. The `0x100E2800` constructor confirms the object-array
setup, calls callbacks at `0x10175140` and `0x10175120`, and allocates through
the matched thunk at `0x1016C7A0`. Its teardown reaches the matched `__onexit`
and `_atexit` helpers. The callback signatures and the semantic purposes of the
four global blocks remain uncertain; this evidence establishes initialization
order and machine behavior, not higher-level subsystem names.

The archived readable `ITNTL.dll` independently uses the same `0x7C` allocation
in its `AllocScreen` at `0x1002F8E0`, but calls constructor `0x10046C20` and
stores the object in different globals. This confirms the allocation size and
export boundary, not equivalence of the protected constructor or the full
renderer. No original game login or network connection was attempted.

`InitCGCDLL` at `0x10033A70` is a 16-byte host boundary: it forwards its first
argument to `0x10102C40` and returns zero. The callee's recovered 562-byte body
copies host-provided callback values into renderer globals, reading fields
through index `0x73` (byte offset `0x1CC`) and returning one. This establishes
that the table must be readable through at least byte `0x1CF`; the candidate
layout models it as `0x1D0` bytes, but no host-side length argument was found.
The callback table's semantic field names remain unknown.

`InitCGCDLL`, `FUN_10102c40`, `AllocScreen`, `FUN_10038130`, the shared control
initializer/list helpers at `0x100FE9B0`, `0x100FEF00`, and `0x100FEFA0`, the
row initializer `0x10015B80`, the allocator callback thunk `0x1016C7A0`, the
screen constructor `0x1004DB50`, and its full-screen, logo, and overlay
constructors at `0x1002C3D0`, `0x100FD890`, and `0x100F34A0` are reconstructed
along with the sprite-resource wrapper at `0x100FFAC0` and its 10,934-byte
loader at `0x100FFC40`, in `src/client-2062/Main/`. Visual C++ 6.0 SP5 `/O2 /GX-`
and objdiff 3.8.0 reproduce all 20,008 bytes exactly. Relative call targets and
`AllocScreen`'s four absolute global addresses are checked against the captured
operands. The callback copier's absolute renderer-global operands remain literal
machine addresses in its object code and therefore compare directly without
relocation normalization.

This work verifies against the local mapped-image snapshot; it does not remove
VMProtect from the shipping module or produce a standalone runnable DLL.

The public-safe function index for this mapped `Main.dll` now contains 2,030
indexed functions totaling 1,253,985 body bytes. This includes six table-target
functions (94 bytes) whose extents were established from mapped pointer entries,
RET boundaries, and Ghidra decompilation. Function boundaries are analysis
metadata and still need review. The 150 verified client byte matches include
the `0x101E2B70` native entrypoint, `InitCGCDLL`, `FUN_10102c40`, `AllocScreen`,
`FUN_10038130`, `FUN_10015b80`, the allocator thunk, the screen constructor,
all three screen child constructors, the three common control initialization/list
functions, and the sprite-resource wrapper/parser and helpers. They also include
the [paired resource-backed UI construction tree](client-resource-backed-ui-tree.md)
and all six CRT initializer entries with their object-array construction/cleanup
chain.
The renderer vtable at `0x10176B08` now has 24 matched span-render methods,
13 deleting-destructor wrappers, 13 destructor bodies, and two shared cleanup
helpers, plus two matched zero-returning virtual stubs: 54 functions / 382,093
bytes. Two state-transition methods from a separately anchored vtable and two
additional table-referenced leaf functions are also matched; their unresolved
ownership is recorded in [the compositor notes](client-rgb16-span-compositor.md).
From roots `0x100FFAC0`
and `0x100FFC40`, a direct-call walk reaches 34 indexed functions; all 34 now
have byte-matched source, with no direct-call target outside the function index.
That walk includes the parser's DirectDraw surface helpers, interface constructors,
host callback thunks, and the compiler's vector-construction/unwind path. The
unwind helper `0x1016C9F0` is 128 bytes: its branch at `0x1016CA44` targets
`0x1016CA5D`, and its epilogue returns at `0x1016CA6D` just before the next
function at `0x1016CA70`; the previous 105-byte Ghidra extent ended mid-instruction
and has been corrected in `client-functions.tsv`. From the overlay constructor at
`0x100F34A0`, the direct-call walk reaches 36 indexed functions, all byte-matched;
this includes `0x100F3F40`, the 256-slot overlay reset/release routine.
`FUN_10015b80` is called seven times by the screen constructor to configure its
label rows. The three common control functions are
byte-level reconstructions grounded in the captured instruction sequence; the
neutral helper names describe their observed list roles, while the owner-list
field semantics are still inferred from offsets and insertion behavior.
The logo constructor's configured position, 256x0 extent, and list membership
are directly supported by its fields and call sequence; higher-level meaning of
those fields is still inferred. Ghidra's pseudocode for the 2,751-byte full-screen
constructor shows nine randomly positioned children with spacing checks, plus
resource and control arrays; the RNG callback's contract and several child-field
meanings remain unknown. The 375-byte overlay constructor initializes a 256-slot
child-control table and delegates cleanup/reset to the now-matched `0x100F3F40`.
The full-screen constructor's common frame-control initializer `0x10032360`,
recursive style and visibility setters `0x100FF160` and `0x100FF120`, text-like
control initializer `0x10018600`, and paired-field setter `0x100188E0` are now
byte-matched and tied back to their call sites in `0x1002C3D0`. The initializer
clears a 0x80-byte buffer; the setter writes one value to offsets `+0x70` and
`+0x74`, whose exact meaning remains uncertain. Four direct control helpers remain
unmatched: `0x10103B80` and `0x10022F80`. The variant-control
constructor pair `0x101047F0`/`0x10104F50` now byte-matches as well. Ghidra shows
the base initializer allocating a 257-byte buffer when none is supplied, building
a 0x58-byte child, and calling an indirect function pointer at `0x1017509C`; its
contract is still unknown. The language-sensitive control initializer `0x10018950`
and its 32-byte resource wrapper `0x101029B0` now match too. It selects a code from
the language identifier returned through `0x1017509C`, then passes that code and
the literal `400` among the arguments to the callback at `0x1017503C`; the callback
signature and meaning of those values remain uncertain. The last two direct
screen-control helpers, `0x10103B80` and `0x10022F80`, now match along with the
`0x10047950` control base they call. All recorded direct call targets of the
2,751-byte constructor at `0x1002C3D0` now have byte-matched definitions. The
exact semantics of several control fields and indirect callbacks remain uncertain.
Ghidra's pseudocode
shows loader-state gates, record validation, and sprite/effect callback paths,
but the loader's global-state and indirect host-callback contracts are not yet
fully understood. The full-screen RNG callback contract and meanings of several
child fields also remain unresolved.
Re-run client verification with `python tools/verify_client_matches.py`; the tool checks the
original module hash, mapped-image hash, compiler hash, call destinations,
absolute global addresses, and objdiff scores. Captures and compiler binaries
remain local and ignored.

The first render subsystem traced through that recovered native code is the
ship sprite path. It establishes the exact animation-record stride, timed frame
selection, node anchoring, clipping and final screen-vtable call. See the
[current client ship sprite render path](client-render-path.md).

The next validated UI subsystem is the 177-arm control/menu dispatcher at
`0x1001DAB0` and its 12-function direct-helper closure. Its mapped bytes and
call relocations pass the local client verifier. The observed operations,
supporting helper behavior, and unresolved callback/control semantics are
recorded in the [client UI control dispatch notes](client-ui-control-dispatch.md).
