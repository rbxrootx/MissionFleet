# Native decompilation status — 3 October 2026

The supplied files contain a historical NavyFIELD 2062 client and actual login,
game and persistence server binaries. They have been extracted and statically
decompiled. **A buildable source reconstruction and playable emulator are not
complete.**

The deterministic objdiff v2 report tracks 42,461 functions and 10,469,347
identified code bytes across six report units. There are 6,469 verified matches
totaling 2,039,737 bytes (19.4829%), each at 100.0% under objdiff 3.8.0. A
verified machine-code match is not by itself proof of recovered high-level
source or playable behavior. GitHub Actions publishes the generated report to
the active decomp.dev project.

| Server | Identified functions exported | Imports recovered | Missing virtual bytes |
| --- | ---: | ---: | ---: |
| Login | 1,739 | 386 | 179 |
| Game | 8,952 | 806 | 0 |
| Persistence | 8,234 | 803 | 0 |

All 18,925 identified functions emitted pseudocode without a decompiler failure
in the initial corrected pass. This is an export result, not proof of accurate
function boundaries, types or behavior. The project includes original-entry
seeding, restored branch operands, import labels and string cross-references.

Open [decomp/README.md](decomp/README.md) for artifact locations and reproducible
commands. The Ghidra project and pseudocode are under
`private-inputs/decompilation/`. Original hashes and recovery bounds are recorded
beside each raw region. Server executables were not run or modified.

`FUN_58733360` adds a 2,827-byte protection-system screen constructor. Its Ghidra
vtable label identifies `C2ndProtectionSystemManager`; the constructor loads
`ITPNNMPD.spr` and creates repeated data-backed UI children. ObjDiff verifies all
bytes and 89 mapped operands. Control names and child-record meanings remain
unresolved. See [the constructor evidence](docs/current-main-protection-system-screen-constructor.md).

`FUN_5873e4e0` adds a 2,816-byte aircraft flight-state update method. Ghidra
ties it to the verified aircraft caller `FUN_5873f020`; its original body updates
target coordinates and observed state values, computes heading/velocity-like
values, and dispatches command 5 to the verified aircraft-control handler.
ObjDiff checks all bytes and 85 mapped operands. Field units and helper
semantics remain unresolved. See
[the method evidence](docs/current-main-aircraft-flight-state-update.md).

`FUN_588b96b0` adds a 2,812-byte pointer/key event handler. The mapped image
stores its address in a callback-like table at `0x589A0964`; its observed event
branches walk child handlers, update control state and dispatch input helpers.
ObjDiff checks every byte and 139 mapped operands. The table owner and event
payload schema remain unresolved. See
[the handler evidence](docs/current-main-pointer-and-key-event-handler.md).

`FUN_588aefb0` adds a 2,807-byte control-record layout updater across three
Ghidra ranges. It copies a fixed record block, processes 100 indexed entries and
updates child pointers/positions through verified screen-tree helpers. ObjDiff
checks all ranges and 62 mapped operands. The record schema and visible control
meaning remain unknown. See
[the method evidence](docs/current-main-control-record-layout-update.md).

`FUN_58831ed0` adds a 2,805-byte communicator-configuration join-tab
constructor across two Ghidra ranges. Ghidra labels its vtable
`CPannelCommunicatorConfigJoinTab`; the matched panel constructor allocates the
`0xD0`-byte child and calls it. ObjDiff checks both ranges and 70 mapped
operands. Resource identities and visible behavior remain unresolved. See
[the constructor evidence](docs/current-main-communicator-config-join-tab.md).

`FUN_58761b20` adds a 2,788-byte virtual drawing method in
`CExplanationControlMenuScreen`. RTTI identifies the class, and the captured
vtable points to this function. It traverses eligible children and draws
repeated clipped geometry using the verified rectangle helper. ObjDiff checks
all bytes and 67 mapped operands. The exact pattern and appearance remain
unknown. See [the method evidence](docs/current-main-explanation-screen-grid-draw.md).

`FUN_58887760` adds a 2,772-byte `CPannelJump_AddOn` constructor across nine
Ghidra ranges. Its verified parent calls it twice; the body builds child
controls and fills them with nine localized harbor-name strings. ObjDiff checks
all ranges and 90 mapped operands. Control interactions and runtime appearance
remain unresolved. See
[the constructor evidence](docs/current-main-jump-addon-constructor.md).

`FUN_58737e60` adds a 2,748-byte record-driven state updater across five Ghidra
ranges. Its direct caller processes the same 0x14-byte record stride and
branches on kinds 3 and 4 before calling it. ObjDiff checks all ranges and 87
mapped operands. Record and state meanings remain unresolved; no emulator test
was performed. See
[the function evidence](docs/current-main-unit-operation-state-update.md).

`FUN_5880d270` adds a 2,724-byte masked-record parameter updater across two
Ghidra ranges. Its wrapper passes an embedded object at `+0x6e4`; the body
applies mode-dependent percentage changes and bounds, then re-encodes selected
fields. ObjDiff checks both ranges and 74 mapped operands. Record, field, mode,
and helper meanings remain unresolved; no emulator test was performed. See
[the function evidence](docs/current-main-masked-record-parameter-update.md).

`FUN_5896f3e0` adds a 2,640-byte clipped pixel blit and compositing method
across two Ghidra ranges. The pseudocode shows rectangle clipping, a backend
copy route for one parameter case, and a software packed-channel path for other
cases. Its address is stored in a dispatch table whose owner is unknown.
ObjDiff checks both ranges and 113 mapped operands. Pixel format and blend-mode
semantics remain unresolved; no emulator visual test was performed. See
[the renderer evidence](docs/current-main-clipped-pixel-blit.md).

`FUN_588b0940` adds the 2,592-byte `CPannelShipTree` constructor. Its verified
caller is a `CPannelForceManager` constructor; it builds repeated sprite-screen
groups, including 100 sprite bundles with child screens. ObjDiff checks the
contiguous body and 99 mapped operands. Resource meanings and runtime layout
remain unknown. See
[the constructor evidence](docs/current-main-ship-tree-panel-constructor.md).

`FUN_588b1580` adds the 1,166-byte `CPannelShipTree` vtable input-handler slot
at `+0x10`. The body hit-tests tree bundles, updates item selection and scroll
state, and handles additional event and key-code branches. ObjDiff checks both
ranges and 39 mapped operands. Friendly event names and runtime side effects
remain unverified. See
[the input-handler evidence](docs/current-main-ship-tree-input-handler.md).

`FUN_58900400` adds the 2,583-byte `CWarehouseTradePanel` constructor. Its
`CWarehouseManager` parent loads `ITFTRD.spr` and constructs the panel. The
body creates sprite controls and copies GBK text describing the 120-hour sale
window, automatic return of unsold goods, and non-refundable payment. ObjDiff
checks the contiguous body and 84 mapped operands. Runtime transaction behavior
and presentation remain untested. See
[the constructor evidence](docs/current-main-warehouse-trade-panel-constructor.md).

`FUN_588522b0` adds the 2,583-byte `CPannelFactoryHelp` constructor. Its parent
is `CPageFactory_ControlMenuScreen`; the body loads `FactoryHelp.spr` and
constructs repeated sprite-bundle and data-screen groups. ObjDiff checks the
contiguous body and 68 mapped operands. Help-topic meanings and rendered layout
remain unverified. See
[the constructor evidence](docs/current-main-factory-help-panel-constructor.md).

`FUN_58853010` adds the 540-byte `CPannelFactoryHelp` virtual state-update
method at vtable slot `+0x0C`. It updates state-dependent coordinates, steps
two object coordinates toward targets, and dispatches the same virtual method
to child controls. ObjDiff checks all bytes and nine mapped operands using the
pinned Clang-cl 19.1.4 compiler for this `_emit`-only body; other matches still
use the recorded MSVC compiler. State names and visual animation remain
unresolved, and emulator behavior is untested. See
[the method evidence](docs/current-main-factory-help-state-update.md).

`FUN_58852d10` adds an 80-byte `CPannelFactoryHelp` virtual event callback at
vtable slot `+0x18`. For event value 2, it scans 15 groups of three entries and
resets matched child state through `FUN_588504C0`. ObjDiff checks the complete
body and its call target. Event and table-key meanings remain unresolved; no
emulator test was performed. See
[the callback evidence](docs/current-main-factory-help-event-callback.md).

`FUN_58852cd0` adds a 58-byte `CPannelFactoryHelp` vtable method at slot
`+0x08`. When a state flag is set, it applies a state mask, sets transition
bit `0x0400`, clears an associated dword, and clears two low state bits. ObjDiff
checks every byte. Event and field meanings remain unresolved; no emulator test
was performed. See
[the method evidence](docs/current-main-factory-help-state-reset.md).

`FUN_58853870` adds a 262-byte `CPannelFactoryHelp` transition handler at
vtable slot `+0x40`. It updates state and target fields, dispatches child
methods, and traverses paired control entries. ObjDiff checks the complete
body and three mapped operands. Control meanings and runtime appearance remain
unresolved. See
[the method evidence](docs/current-main-factory-help-transition-handler.md).

`FUN_588561f0` adds an 880-byte `CPannelFactoryHelp` method at vtable slot
`+0x3C`. It sets state flags, derives target coordinates from captured display
fields, and dispatches across paired child controls. ObjDiff checks all bytes
and 26 mapped operands. Field units and control meanings remain unresolved.
See [the method evidence](docs/current-main-factory-help-display-state-method.md).

`FUN_58856560` adds a 2,344-byte `CPannelFactoryHelp` child-event method at
vtable slot `+0x48`. It walks child objects, calls virtual slot `+0x10` with
the event argument, and has additional control and state branches. ObjDiff
checks all bytes and 193 mapped operands. Event and child identifiers remain
unresolved. See
[the method evidence](docs/current-main-factory-help-child-event-method.md).

`FUN_58853c20` adds a 763-byte `CPannelFactoryHelp` parameter-event method at
vtable slot `+0x50`. For event value 2, it updates global control fields and
dispatches child events and layout helpers. ObjDiff checks all bytes and 34
mapped operands. Event and field meanings remain unresolved. See
[the method evidence](docs/current-main-factory-help-parameter-event-method.md).

`FUN_588504a0`, `FUN_588536a0`, and `FUN_58854440` add three complete
`CPannelFactoryHelp` vtable methods. Their inventory extents now include the
observed `ret 4`, `ret 4`, and `ret 0x0C` epilogues, respectively. ObjDiff
verifies the corrected 30-, 30-, and 378-byte bodies. The reason for extending
the generated inventory extents is documented in
[the epilogue-boundary evidence](docs/current-main-factory-help-epilogue-boundaries.md).

`FUN_58857850` adds the remaining `CPannelFactoryHelp` vtable method at slot
`+0x44`. Its body contains a branch into a split child-chain epilogue and a
tail dispatch. The captured bytes prove the complete 1,519-byte extent; ObjDiff
checks every byte and 38 mapped operands. Child-chain semantics remain partly
unknown. See
[the child-chain evidence](docs/current-main-factory-help-child-chain-dispatch.md).

All 11 non-null `CPannelFactoryHelp` vtable methods now match their complete
captured bodies, totaling 6,884 bytes. Together with the separately matched
2,583-byte constructor, the class is covered at the function-byte level; its
control meanings and in-game behavior are still unverified. See
[the vtable coverage map](docs/current-main-factory-help-vtable.md).

`CPageFactory_ControlMenuScreen` now has byte-matched coverage for all seven
non-null methods in its vtable, totaling 12,164 bytes; its separate
12,589-byte constructor is also matched. This batch adds the `+0x04`, `+0x08`,
`+0x10`, and `+0x14` methods and corrects the `+0x00` body to include its
`ret 4` epilogue. No emulator interaction test was performed. See
[the vtable coverage map](docs/current-main-control-menu-vtable.md).

`FUN_5878AD50` adds the 252-byte observed setup caller for
`CPannelMainControl_MenuScreen`: it checks the stored screen pointer, allocates
and constructs the screen when absent, then applies the recorded child-list
and state updates. ObjDiff checks all 16 mapped operands. The caller's class,
field meanings, and runtime appearance remain unresolved. See
[the caller evidence](docs/current-main-control-menu-setup-caller.md).

`FUN_5888D110` adds the 314-byte settings initializer directly called by that
setup path with `DAT_58A0B450`. Its record reads, callback calls, string-length
scan, state writes, and conditional branches are documented from the mapped
instructions; 13 operand targets pass ObjDiff. Callback contracts and field
meanings remain unresolved, and no emulator test was performed. See
[the initializer evidence](docs/current-main-control-menu-settings-initializer.md).

The RTTI-backed `CPannelJump_ControlMenuScreen` vtable at `0x5899FB0C` now has
all seven entries matched, totaling 2,251 bytes. This batch adds six methods
(2,157 bytes) and extends the `+0x00` method through its observed `ret 4`,
correcting its inventory size from 27 to 30 bytes. Six methods reverified at
ObjDiff 100%, with 98 operand targets checked; the `+0x14` entry was already
verified. No emulator test was performed. See
[the vtable evidence](docs/current-main-jump-control-menu-vtable.md).

The server archive also contains SQL Server database files and an ASP registration
site. The supplied Word document was read as package evidence; its setup commands
were not executed. The smaller utility archive contains an AFK helper rather
than server source. The historical server package has now been obtained locally;
forum access is no longer a prerequisite.

Remaining work includes reviewing types and structures, recovering native
message semantics, validating database state, reconstructing compilable source
and testing native client behavior. The historical package is not established
as compatible with the modern installation: 10 of 11 compared top-level DATA
tables differ. No original-client login, harbor or battle was demonstrated.

Earlier work inventoried 1,819 modern-client files and indexed 367,391 image
records. The installed client's VMProtect loader was executed locally and its
`Core.dll` mapping was captured without modifying the installation. The dump
recovered 11,751,424 mapped bytes with no unreadable pages, including 4,268,228
bytes of native `.text`. Current-client Ghidra traces confirm the Sangduck span
layout and `ShipStructureF/N/S###.spr` selection paths. Six complete ship layer
pairs now decode through the corrected preview pipeline. See
[client unpacking](docs/client-unpacking.md) for hashes, commands and limits.

For the archived 2.062 client, the 13-byte paired text-control setter at
`0x100188E0` is now a typed C++ method instead of an emitted-byte stub. The
neighboring 100-byte text-state updater at `0x10018840` is also a typed method;
both compile to the original bytes under the recorded Visual C++ 6.0 SP5
`/O2 /GX-` profile. ObjDiff checks the updater's two callback-global addresses
as relocations, and the shared opaque layout header is hash-pinned by the
verifier. The callback contracts and field meanings remain unknown. This
source-quality gain does not advance the overall byte-match count.

The current-client `CLogoControlMenuScreen` method at `0x5878E2D0` now has an
RTTI-backed class identification and a byte-identical 5,707-byte match. Its
initialization fills 0x100-byte object slots near references to regional host
literals and callback/configuration accessors; the exact mapping remains
unresolved. See [the slice notes](docs/current-main-logo-control-menu-screen.md).

The `CSpecBoard_Body` constructor at `0x588EDC50` now has a byte-identical
5,643-byte match. Its caller allocates a `0x140`-byte child and stores it at
parent offset `+0xDAC`; resource indices and control behavior remain unknown.
See [the constructor evidence](docs/current-main-spec-board-body-constructor.md).

The communicator-configuration panel's RTTI-identified message handler at
`0x588450B0` now has a byte-identical 5,567-byte match. Its message branches
update child state and handle cursor tests across four controls; message
contracts and control mappings remain unresolved. See
[the handler evidence](docs/current-main-communicator-config-panel-handler.md).

The `CMarketBoard` constructor at `0x58799EB0` now has a byte-identical
5,371-byte match. Its first caller stores the `0x304`-byte child at parent
offset `+0xDB0` in the path that selects `ShipStructureMarket.spr`; resource
indices and control meanings remain unresolved. See
[the constructor evidence](docs/current-main-market-board-constructor.md).

The nested `CPannelCommunicatorConfigFort` constructor at `0x5882D1F0` now has
a byte-identical 5,235-byte match. Its parent is the communicator-configuration
panel, and it creates the `CMarketBoard` child at `+0x174`; resource meanings
and visible controls remain unresolved. See
[the nested constructor evidence](docs/current-main-communicator-config-fort-constructor.md).

The `CPageFactory_ControlMenuScreen` update method at `0x587E44C0` now has a
byte-identical 5,224-byte match across four ranges. Its state branches move
layout values and update child-control flags; state and control meanings remain
unknown. See [the method evidence](docs/current-main-control-menu-state-update.md).

The mission-event `DoAction` routine at `0x587A90D0` now has a byte-identical
5,041-byte match across five ranges. Ghidra ties it to assertion strings in
`MissionEventManager.cpp`; it dispatches event codes `0` through `0x15`, whose
meanings remain unresolved. See
[the method evidence](docs/current-main-mission-event-do-action.md).

The `CShip_MapObjectScreen` vtable method at `0x588E5150` now has a byte-
identical 5,014-byte match. Its three state branches update object counters,
movement helpers, and child-control flags; state meanings remain unresolved.
Two commutative `test` instructions require explicit original-byte emission for
the compiler to preserve their encodings. See
[the method evidence](docs/current-main-ship-map-object-update.md).

`FUN_588e4260` adds a 3,641-byte `CShip_MapObjectScreen` command handler
across three Ghidra ranges, with 190 mapped operands checked. The matched
screen-update caller decodes packed records into command and payload arguments;
the handler updates child state, formats engine/weapon messages, and dispatches
tagged payload cases. Command and payload meanings remain partly unknown. See
[the command-handler evidence](docs/current-main-ship-command-handler.md).

`FUN_587fc9c0` adds a 3,573-byte chat input and submission handler across 14
Ghidra ranges, with 165 mapped operands checked. Its keyboard-event caller
routes carriage-return and selected key paths here; the handler selects
localized chat-channel labels, parses slash-prefixed input, emits chat help,
and reports forbidden-word cases. Its owning class and command contracts
remain unresolved. See [the handler evidence](docs/current-main-chat-submit-handler.md).

`FUN_5873f020` adds a 3,571-byte spatial-object state helper with 116 mapped
operands checked. Its caller is the vtable-backed spatial-update method
`FUN_5873fe80`; one state branch calls the matched combat hit resolver
`FUN_587efd60`. Object identity and state meanings remain unknown. See
[the state-helper evidence](docs/current-main-spatial-state-helper.md).

`FUN_5873cee0` adds a 2,983-byte aircraft-control command handler with 128
mapped operands checked. The matched ship-map handler dispatches payload tags
0 and 1 here, and the spatial update dispatches code 5. Diagnostic strings
name move, attack, and return-to-base paths; protocol and field meanings remain
partly unresolved. See [the handler evidence](docs/current-main-aircraft-control-handler.md).

`FUN_587df580` adds a 2,815-byte selector-driven control refresh across two
Ghidra ranges, with 64 operands checked. It resolves and stores a selected
record, then clears or refreshes child controls; the CPageFactory update is one
of its callers. Selector and control meanings remain unresolved. See
[the refresh evidence](docs/current-main-control-selection-refresh.md).

`FUN_588e8570` adds a 3,294-byte 32-slot state projection across two Ghidra
ranges, with 47 operands checked. It rebuilds a 0x400-byte receiver table from
32 indexed record pointers and applies status-dependent field transformations.
Ghidra shows it is shared by the selection refresh and force-screen paths; the
record schema and field meanings remain unknown. See
[the projection evidence](docs/current-main-slot-state-projection.md).

`FUN_5877ec80` adds a 3,468-byte virtual state and position update across 12
Ghidra ranges, with 160 operands checked. A nearby RTTI-backed vtable for
`CHCB_Airborne` references it at slot `+0x0C`; other nearby vtables share the
same pointer, so exclusive ownership is not established. State meanings remain
unknown. See [the update evidence](docs/current-main-airborne-state-update.md).

`FUN_587b4b70` adds a 3,400-byte weapon-fire event handler across two Ghidra
ranges, with 99 operands checked. RTTI-backed table slots reference it from
`CMountedWeapon_TpLauncher` and `LFDCList<CDepthBomb_MapObjectScreen>` vtables.
It decodes packed input and creates projectile-related records; the event
schema and exact class ownership remain unknown. See
[the handler evidence](docs/current-main-weapon-fire-event.md).

`FUN_58810cb0` adds a 3,243-byte child-control state updater in one Ghidra
range, with 104 operands checked. Its caller invokes it in a screen-update
state before iterating child controls. It reads shared screen data and toggles
child-object state bits; the receiver, controls, and flag meanings remain
unknown. See [the updater evidence](docs/current-main-child-control-state-update.md).

`FUN_588afbf0` adds a 3,159-byte event-driven screen-data refresh across five
Ghidra ranges, with 36 operands checked. `FUN_587bb700` routes event
`0x80021034` subcase 10 through its caller `FUN_588b0870`; sibling state handlers
select its record-refresh or clear mode. The screen records and event meaning
remain unresolved. See [the refresh evidence](docs/current-main-screen-data-refresh.md).

`FUN_58875ac0` adds a 3,152-byte `CPannelHelpScreen` constructor in one Ghidra
range, with 84 operands checked. Its `CPageFightOn_ControlMenuScreen` parent
stores the returned object after creating the parent from the global UI setup.
The constructor builds `CSpriteDataScreen` children from shared records; sprite
identities and layout meaning remain unknown. See
[the constructor evidence](docs/current-main-help-screen-constructor.md).

`FUN_5877b1f0` adds a 3,104-byte `CForce` control refresh in one Ghidra range,
with 60 mapped operands checked. Its `CForce` constructor is one of six direct
callers; the body selects checked resource records, updates child sprite
controls and flags, and copies a bounded text field. The method name, record
schemas, resource identities, control labels, and visible result remain
unknown. See [the refresh evidence](docs/current-main-force-control-refresh.md).

`FUN_587a4440` adds a 3,103-byte `CMine_MapObjectScreen` virtual update in one
Ghidra range, with 128 mapped operands checked. RTTI identifies the vtable and
slot `+0x0C`; the method advances a state machine and invokes observed
effect/event helpers. The state and event meanings, timing and coordinate
units, and concrete virtual call sites remain unknown. See
[the update evidence](docs/current-main-mine-map-object-update.md).

The exported `CloseCGCDLL` teardown at `0x587956C0` adds 3,059 exact bytes in
one Ghidra range, with 253 mapped operands checked. It conditionally invokes
vtable callbacks for global objects, clears their slots, processes a pointer
array, and returns `1`. Object types, ownership, and the host unload contract
remain unresolved. See [the teardown evidence](docs/current-main-close-cgc-dll.md).

`FUN_58800360` adds a 3,057-byte map and harbor resource initializer across two
Ghidra ranges, with 104 mapped operands checked. Its direct callers pass
mode-derived identifiers; the body selects observed CMF and faction harbor SPR
paths and populates a large child buffer. The identifier contract, file schemas,
and resulting layout remain unresolved. See
[the initializer evidence](docs/current-main-map-resource-initializer.md).

`FUN_588a0450` adds a 3,049-byte `CPannelOption` key-settings loader in one
Ghidra range, with seven mapped operands checked. Its RTTI-backed `+0x18`
vtable slot is called by the option-panel event path. It validates 31 key
bindings and reads named values under the client configuration registry path;
the key-code and defaults contracts remain unknown. See
[the loader evidence](docs/current-main-option-key-settings-loader.md).

`FUN_587592c0` adds a 3,019-byte battle record scan helper in one Ghidra range,
with 41 mapped operands checked. Its two direct calls are in event
`0x80021101` paths; the body scans encoded records and aggregates decoded
status fields. The game meaning and signature/result contract remain unknown.
See [the helper evidence](docs/current-main-battle-record-scan.md).

`FUN_588ab550` adds a 2,999-byte `CPannelSelectChannel` constructor in one
Ghidra range, with 71 mapped operands checked. It creates repeated
sprite-backed children and six further controls from checked shared-resource
indices; child roles and visible behavior remain unknown. See
[the constructor evidence](docs/current-main-select-channel-panel.md).

`FUN_5878f990` adds a 2,986-byte lazy child initializer in one Ghidra range,
with 79 mapped operands checked. It allocates missing screen/control children,
walks receiver-held counts, and checks a client registry version value. The
owning class and callback-table contract remain unidentified. See
[the initializer evidence](docs/current-main-lazy-child-initializer.md).

`FUN_587c20e0` adds the 2,957-byte `CNavyFIELDScreen` destructor. Ghidra shows
it installing the screen vtable, disposing and clearing global pointer slots,
and finishing with `FUN_58902c10`; the direct caller is a bit-controlled
deleting-destructor wrapper. ObjDiff 3.8.0 matches all bytes, with 243 mapped
operand targets checked. Global slot ownership, indirect cleanup contracts,
and runtime destruction effects remain unresolved. See
[the destructor evidence](docs/current-main-navyfield-screen-destructor.md).

`FUN_587a6220` adds a 2,951-byte 32-slot record builder across three Ghidra
ranges, with 84 mapped operand targets checked. It constructs two observed
record variants (`0x05` and `0x06`), then applies per-entry state and flags. The
record types, field meanings, and owning class remain unidentified. See
[the record-builder evidence](docs/current-main-record-backed-32-slot-builder.md).

`FUN_587603c0` adds a 2,909-byte `CExEditTextScreen` key handler across five
Ghidra ranges, with 52 mapped operand targets checked. RTTI anchors its vtable
slot at `+0x1C`; the handler updates text/caret state and contains branches for
the observed navigation and delete key values. The text encoding and several
path-sensitive state meanings remain unknown. See
[the key-handler evidence](docs/current-main-exedit-text-key-handler.md).

`FUN_587e9a10` adds a 2,908-byte event payload builder, with 90 mapped operand
targets checked. Its callers provide event codes, it forms coordinate- and
slot-backed payloads, and one route sends message `0x80020500` through the
verified outbound sender. Event schemas and server compatibility remain
unresolved. See [the payload-builder evidence](docs/current-main-event-payload-builder.md).

`FUN_588f55c0` adds a 2,863-byte combat-effect state updater, with 123 mapped
operand targets checked. It advances position/state, performs a weighted
distance check, and calls the verified combat hit/damage resolver on a result
branch. The object class and state-field meanings remain unknown. See
[the state-update evidence](docs/current-main-combat-effect-state-update.md).

`FUN_587b83e0` adds a 2,859-byte chat/channel event handler across two Ghidra
ranges, with 194 mapped operand targets checked. Its callback pointer is
present at `0x5899A178`; observed branches route channel/member results and
localized user-list strings. Callback ownership and protocol schemas remain
unknown. See [the handler evidence](docs/current-main-chat-channel-event-handler.md).

The current-client ship path has confirmed 64-byte animation records, timed
frame selection, anchor and parent offsets, and the final sprite-vtable call.
The installed mapped `Core.dll` slice now also covers ship-node construction,
optional animation-record geometry setup, and both ordered parent-child lists,
including their existing-link removal paths, property setters, ordered child
render scheduler, animation-node update callback, and derived animation-state
update and its reset/start methods, ship-scene triggers and direct helpers, and
the ship-scene update dispatcher and its direct transition handlers: 122 matched
functions / 280,539 bytes across the ship path.
The locale cache's null-acquisition entry, runtime lock/diagnostic helpers, and
error dispatcher, diagnostic notification wrappers, and exception-record
dispatch helpers add sixteen verified function spans / 1,663 bytes. The
dispatcher span includes bytes between Ghidra's discontiguous blocks, including
the separately matched lock-cleanup helper; progress byte totals sum function
spans and are not a count of unique image bytes. See
[the slice notes](docs/current-core-runtime-error-entry.md).
The node construction, list, and property slice contributes 22 functions /
2,343 bytes; the scheduler adds three functions / 412 bytes and animation
updates add two functions / 207 bytes; the derived animation state machine path
adds seven functions / 1,807 bytes.
The ship-scene dispatcher and its forty-three matched transitive helper/handler
functions cover 20,982 bytes with 750 captured operand targets checked. The
state-2 constructor's descriptor setup, heap-allocation retry path, and both
allocation-failure exception branches now have byte-matched callsite evidence.
A separate floating-point error-handling slice adds 17 functions / 3,292 bytes
with 74 operand targets checked; see
[floating-point error-path notes](docs/current-core-floating-point-error-path.md).
The async-I/O context constructor, its bucket-table initializer, and the
constructor's error-report/reset helpers add four exact matches / 544 bytes.
The 65,536-bucket table is confirmed at context `+0x220`; callback meanings and
user-visible setup effects remain unresolved. See
[context construction evidence](docs/current-core-async-io-context.md).
The reset/state-transition routine and its seven direct helpers add eight exact
matches / 566 bytes with 29 relocation operands checked. Ghidra traces a PE32
CLR-directory check, resolution of `mscoree.dll` / `CorExitProcess`, state
record calls, a TEB policy-bit read, and an `INT3` path; callback ABIs and the
breakpoint's handling remain unresolved. See
[reset transition evidence](docs/current-core-async-io-reset-transition.md).
Its one-time callback initializer and callback-table entries add eleven exact
matches / 865 bytes; following a mapped callback pointer exposed and indexed a
76-byte function Ghidra had not assigned a boundary. The callback records and
runtime state meanings remain unresolved. See
[initializer evidence](docs/current-core-runtime-state-initializer.md).
The child-field accessor at `0x584869C0` adds one 17-byte exact match; its
`receiver +4` return is established, while its coordinate meaning remains an
inference from placement call sites. See
[accessor evidence](docs/current-core-child-offset-accessor.md).
The state-7 phase transition helper and its bounded child-table accessor add
two verified functions / 488 bytes. The dispatcher calls the handler with
`0x20000` after moving phase 9 to phase `0x10`; details and unresolved table
semantics are in [the handler evidence](docs/current-core-scene-phase-setup-handler.md).
The phase-8 path now also includes the 3,336-byte scene layout constructor at
`0x586E8270`, with 166 captured operand targets checked; see
[constructor evidence](docs/current-core-scene-layout-constructor.md).
Its post-construction text-resource loader and three-path setup wrapper add
669 and 57 verified bytes; the strings identify `Announcement.txt`, `Patch.txt`,
and `Eula.sdt`. See
[loader evidence](docs/current-core-scene-text-resource-loader.md).
The loader's parser now has five additional byte-matched functions / 1,039 bytes:
the mapped LF delimiter, CR trimming, empty-line skipping, in-place tokenization,
and first/next record accessors are established from Ghidra and mapped data.
The child-control types, text encoding, and rendered output remain unverified;
see [parser evidence](docs/current-core-scene-record-parser.md).
The scene's row-render path now reaches its concrete Core adapter: four backend
dispatch/conversion functions add 724 exact bytes. Core clips draw bounds and
dispatches through runtime-registered callbacks, whose implementation and final
pixels remain unresolved; see
[backend evidence](docs/current-core-text-render-backend.md).
The resource scene constructor/setup plus its three direct initialization
helpers add five matches / 4,846 exact bytes. They create wrapped resources,
read a named registry path, and request `.\\spr\\Warning.spr`; callback
meanings and warning-sprite pixels remain unresolved. See
[scene construction evidence](docs/current-core-resource-screen-construction.md).
The client startup and window setup path is documented in
[the entry-flow notes](docs/current-core-client-entry-and-window-setup.md).
The next `WinMain` phase, including event polling and dispatch, is described in
[the main-loop notes](docs/current-core-client-main-loop.md).
The loop's teardown path is traced in
[the client cleanup notes](docs/current-core-client-shutdown.md).
The callback installed by window setup is traced in
[the window callback notes](docs/current-core-client-window-callback.md).
The `0x462` event and record receive/send path is documented in
[the async-I/O record notes](docs/current-core-async-io-records.md).
The object and inline keyed table used by this path are reconstructed in
[the context-construction notes](docs/current-core-async-io-context.md).
The readable `ITNTL.dll` adds a source-backed file/resource loader trace,
16-bit span conversion, screen allocation, and the same sprite/screen call
boundary. The Python renderer model now uses screen-owned clipping and origin
translation, and the targeted subsystem test covers that call boundary. See
[client render path](docs/client-render-path.md) and
[ITNTL sprite loader](docs/itntl-sprite-loader.md).

That trace now reaches the current sprite object's concrete RGB16 compositor.
For the normal `0x100` color and zero-effect path, the reconstruction copies
literal RGB16 span words exactly. For the observed ship call (`color=0x80`,
`effect=0x101`), it also models the decompiled RGB565 per-pixel math. Both paths
preserve transparent skips, clipping, target pitch, and the original `-1` row
and `-2` image markers. The normal path rendered all 12 source layers on the
six-ship visual board; the nondefault effect still needs live-client image
comparison. See [client render path](docs/client-render-path.md).

The installed current `Main.dll` fixed-record copy path now has four byte
matches (189 bytes): two helpers copy records of `0x48` and `0x808` bytes,
and two wrappers prepare ranges before calling those helpers. Ghidra caller
cross-references confirm the wrappers feed vector insertion paths. The record
types remain unnamed, and this static match does not establish runtime use or
improve the playable-client status. See
[the Main record-copy notes](docs/current-main-record-copy.md).

The current `Main.dll` event dispatcher `FUN_587bb700` now byte-matches all
25,950 bytes in its 17 Ghidra body ranges. Its routes include payload queueing
(`0x80000100`), input handling and queue reset (`0x80000500`), and a shared
state setter (`0x80000300`). The queue constructor identifies a
`CFDCSingleQueue<_QueueBlock>` with 512 slots of 16 bytes; the embedded consumer
adds another 2,378 matched bytes across two ranges. The queue owner's update
function `FUN_587fd890` adds 6,314 bytes across two ranges and calls that reader
twice. Its cleanup function `FUN_587ef910` adds 1,068 bytes across three ranges
and drains pending payload pointers. The owning constructor `FUN_588011c0` adds
12,934 bytes across three ranges, including embedded queue setup and allocation.
Event meanings, queue ownership, and the dispatch table's runtime owner remain
unresolved. The outbound network sender `FUN_58970c70` adds 671 matched bytes,
including the 20-byte record header, optional checksum path, and Winsock error
handling; see [the sender note](docs/current-main-network-sender.md).
The sender's three-function socket-error cleanup path adds 174 bytes; see
[the cleanup note](docs/current-main-socket-cleanup.md). The address parser,
async socket opener, and handle-table insertion add 798 bytes; see
[the connection note](docs/current-main-socket-connect.md). The nested
`FUN_588C4210` handler and its `0x80023101`, `02`, `05`, and `07` helpers add
7,908 verified bytes across nine body ranges for the `0x800231xx` event family.
The shared `FUN_58764D30` message/UI routine adds 18,901 bytes across two
ranges and has 151 direct callers, including the `0x80023106` message path.
The cached `FUN_5876BAF0` initializer adds 233 bytes and has 662 direct-call
references across 166 callers, including that message path.
Its directly called `FUN_58763890` constructor adds 1,757 bytes across one
contiguous range.
The shared `FUN_58751BF0` text routine adds 655 bytes across one range and is
called by the `0x80023107` notification path; its downstream
`FUN_58751A60` helper adds 387 bytes across two ranges. Its paired tree-field
update helpers and recursive descendants add another 326 bytes across eight
ranges. The sprite file, bundle, sprite-data destruction, and child lifecycle
slice adds six verified functions / 651 bytes, including two corrected
destructor extents after an instruction-level gap audit; see the
[sprite lifecycle evidence](docs/current-main-sprite-lifecycle.md).
The doubly linked child-order list adds two more functions / 295 bytes; see the
[child-order evidence](docs/current-main-child-order.md). Screen-tree child
updates and flagged position propagation add three functions / 195 bytes; see
the [screen-tree evidence](docs/current-main-screen-tree.md).
The `CWordWrap_Modifed` text parser and its complete record/container helpers
add 20 verified functions / 2,901 bytes; see the
[word-wrap evidence](docs/current-main-wordwrap.md).
The current screen hierarchy and child-render dispatcher add seven functions
/ 173 bytes; see the
[screen-family evidence](docs/current-main-screen-family.md).
The 13,492-byte `CShip_MapObjectScreen` constructor adds one verified
function; see the
[constructor evidence](docs/current-main-ship-map-screen-constructor.md).
The input/chat dispatcher adds one exact function match; see the
[input/chat evidence](docs/current-main-input-chat-dispatch.md).
The 12,589-byte control-menu constructor adds one exact match; see the
[control-menu constructor evidence](docs/current-main-control-menu-constructor.md).
The fleet message handler adds one exact match; see the
[handler evidence](docs/current-main-fleet-message-handler.md).
The panel item manager adds one verified 10,242-byte constructor; see the
[panel evidence](docs/current-main-panel-item-manager.md). The 10,038-byte
`FUN_587f8760` screen state updater adds one more match across eight Ghidra
ranges; all seven gaps decode as alignment instructions and 397 mapped
operands were checked. It refreshes battle/fleet controls and state from the
observed records; receiver class and field semantics remain unknown. See the
[state-updater evidence](docs/current-main-state-updater.md). The shared
`FUN_587f2dd0` battle-statistics helper adds 9,811 bytes across four Ghidra
ranges, with 475 operands checked; its state-dependent per-side totals,
counter adjustments, and result labels are recorded in the
[battle-statistics evidence](docs/current-main-battle-statistics.md).
The caller `FUN_587fbcc0` adds a 3,303-byte battle-state helper across four
Ghidra ranges, with 139 operands checked. It is called by the queue screen's
vtable-backed update and calls the statistics helper on one path. Stage and
team field semantics remain unresolved; see the
[battle-state evidence](docs/current-main-battle-state-helper.md).
The `CPannelCommunicatorConfigDiplomacyTab` constructor adds another 9,635-byte
match across three Ghidra ranges, called by the parent communicator panel; its
sprite path, child construction, and unowned jump-gap audit are documented in
the [diplomacy-tab evidence](docs/current-main-diplomacy-tab.md).
The shared `FUN_587efd60` hit/damage resolver adds 9,247 bytes across two
Ghidra ranges with 534 mapped operands checked. Ten direct callers, AP/HE and
armor-defense diagnostics, penetration/damage branches, and remaining rule
uncertainties are captured in the
[combat resolver evidence](docs/current-main-combat-hit-resolver.md).
The record-driven control refresh `FUN_5886ba60` adds 8,814 bytes across four
Ghidra ranges with 492 mapped operands checked. Raw caller instructions clarify
its receiver and stack-argument use; the complete mapped span byte-matches, but
Ghidra's pseudocode has unresolved blocks and the screen identity and field
semantics remain unknown. See
[the refresh evidence](docs/current-main-record-driven-control-refresh.md).
The `CPannelCommunicatorConfigManageSquadTab` constructor `FUN_5883bbe0` adds
8,711 bytes with 427 mapped operands checked. Its vtable, single parent call,
`0x310`-byte parent allocation, and indexed sprite/control construction are
recorded in the [Manage Squad tab evidence](docs/current-main-manage-squad-tab-constructor.md).
The shared `CPannelForceInfo` constructor `FUN_5886dda0` adds 8,699 bytes and
408 mapped operands. Five calling constructors identify its reuse in trade,
force-management, item-management, and warehouse-info panels; its record and
control semantics remain unresolved. See the
[ForceInfo panel evidence](docs/current-main-force-info-panel.md).
The `CShell_MapObjectScreen` virtual update `FUN_588d4300` adds 8,646 bytes
across two Ghidra ranges with 484 mapped operands checked. Its mapped RTTI
vtable entry identifies the class, and its collision branch invokes the
byte-matched damage resolver; units, status meanings, and hit effects remain
unresolved. See the
[shell map-object update evidence](docs/current-main-shell-map-object-update.md).
The installed Main item/equipment detail renderer `FUN_5879b3b0` adds an
8,189-byte match across one contiguous Ghidra range with 260 mapped operands
checked. Nearby event handlers identify scroll, cancel, and buy-equipment
actions; the record schema and precise screen identity remain unresolved. See
the [item detail evidence](docs/current-main-item-detail-renderer.md).
The shared `FUN_587e0e40` control rebuild routine adds one verified 8,252-byte
match across ten segments with 173 mapped operands checked. Four 9-byte
continuations after calls to the indirect callback thunk `FUN_5897cc42` are
included because each contains a stack cleanup and receiver-field store that
flows into the next Ghidra-owned block; the separate 3-byte alignment gap is
excluded. Its class, resource schema, control identities, and runtime
appearance remain unknown. See the
[control rebuild evidence](docs/current-main-control-rebuild.md). The
`CPannelCommunicatorConfigManageFleetTab` constructor `FUN_58836b90` adds
8,448 bytes across two Ghidra ranges with 414 mapped operands checked. Its
parent creates it immediately before the separately matched Manage Squad tab;
the child control meanings remain unresolved. See the
[Manage Fleet tab evidence](docs/current-main-manage-fleet-tab-constructor.md).
The `CRoomSettingManager` constructor `FUN_588c9280` adds a 7,746-byte match
across five Ghidra ranges with 274 mapped operands checked. Its parent allocates
`0x2AC` bytes for the receiver; the four intervening gaps are skipped alignment
instructions. Resource labels and child-control meanings remain unresolved.
See the [room setting manager evidence](docs/current-main-room-setting-manager-constructor.md).
The `CPanelDashboard` constructor `FUN_58812170` adds a 7,574-byte match in one
contiguous Ghidra range with 264 mapped operands checked. Its global setup
caller allocates `0x19C` bytes and stores the constructed panel in
`DAT_58A245C8`; child controls are built from indexed resource tables. Their
labels and behavior remain unresolved. See the
[dashboard constructor evidence](docs/current-main-dashboard-constructor.md).
The `CPannelTrade` constructor `FUN_588b61e0` adds a 7,555-byte match across
three Ghidra ranges with 199 mapped operands checked. It loads
`ITFTRD.spr`; its caller allocates `0x1DC` bytes and stores the returned panel
at parent offset `+0x4F4`. The two three-byte inter-range gaps are skipped LEA
alignment instructions. Resource labels and trade interactions remain
unresolved. See the
[trade panel evidence](docs/current-main-trade-panel-constructor.md).
The `FUN_5878af40` startup resource and global UI initializer adds a 7,492-byte
match across two Ghidra ranges with 396 mapped operands checked. An adjacent
startup wrapper passes its address to a callback-registration slot; the body
loads shared SPR assets and constructs global panels, including the matched
dashboard. The callback contract and resource-table meanings remain unresolved.
See the [global UI setup evidence](docs/current-main-global-ui-setup.md).
The `CPannelOption` constructor `FUN_588a13c0` adds a 7,395-byte match in one
contiguous Ghidra range with 256 mapped operands checked. Its startup caller
allocates `0x370` bytes, passes the observed layout arguments, and stores it in
`DAT_58A2462C`; the constructor loads `ITFOPT.spr` and builds child controls.
Their labels and option effects remain unresolved. See the
[option panel evidence](docs/current-main-option-panel-constructor.md).
The `CHCB_CenterPoint` constructor `FUN_587808a0` adds a 7,107-byte match
across two Ghidra ranges with 222 mapped operands checked. Its caller loads
`HCB.spr`, `HCBEFF.spr`, and `HCBSND.spr`, allocates `0xDC`-byte entries, and
stores the constructed pointers in its sprite list. The three bytes between
the ranges are unowned and skipped by a branch. Resource modes and runtime
appearance remain unresolved. See the
[center-point constructor evidence](docs/current-main-hcb-center-point-constructor.md).
The `CPageResultOfBattle_ControlMenuScreen` constructor `FUN_5880dd80` adds a
7,101-byte match across two Ghidra ranges with 205 mapped operands checked.
The global UI initializer allocates `0x90C` bytes, passes its position and
layout arguments, and stores the screen pointer in `DAT_58A245A4`. The six
bytes between ranges are unowned and skipped by a jump. Child labels and
interactive behavior remain unresolved. See the
[battle-result menu evidence](docs/current-main-battle-result-control-menu.md).
The virtual update routine `FUN_5873fe80` adds a 6,761-byte match in one
contiguous Ghidra range with 298 mapped operands checked. An imported vftable
slot points to it, and the function updates position history and sprite state;
its class and field semantics remain unresolved. See the
[virtual spatial update evidence](docs/current-main-virtual-spatial-update.md).
The item-detail population routine `FUN_5879dd90` adds a 6,702-byte match
across five Ghidra ranges with 214 mapped operands checked. Two callers pass
category-filtered 20-byte records; the routine builds detail controls and
refreshes the matched renderer, but record fields and stat units remain
unresolved. Its four three-byte gaps are unowned and skipped by jumps. See the
[item-detail population evidence](docs/current-main-item-detail-population.md).
The `CPannelMainControl_MenuScreen` constructor `FUN_5888e5e0` adds a 6,596-byte
match in one contiguous range with 196 mapped operands checked. Its caller
allocates `0x650` bytes, passes the observed layout arguments, and stores it in
`DAT_58A245C0`; child labels and actions remain unresolved. See the
[main control-menu evidence](docs/current-main-control-menu-constructor.md).
The `CPannelArmorControl` constructor `FUN_58817900` adds a 6,580-byte match
across four Ghidra ranges with 237 mapped operands checked. It loads
`ITPNAMR.spr`; its caller allocates `0xAC` bytes and stores it at parent offset
`+0xDC8`. The three gaps are unowned and skipped by jumps. Child labels and
interactions remain unknown. See the
[armor-control evidence](docs/current-main-armor-control-constructor.md).
The virtual `CPageChannelBattle_ControlMenuScreen` method `FUN_587d3860` adds a
6,493-byte match across three ranges with 166 mapped operands checked. RTTI
and its vftable tie it to that class; it resets/rebuilds sprite children, but
its exact callback role remains unresolved. Its two gaps are unowned and
skipped by jumps. See the
[channel-battle control update evidence](docs/current-main-channel-battle-control-update.md).
The `CPannelCommunicatorConfigPannel` constructor `FUN_58843380` adds a
6,408-byte match across four ranges with 181 mapped operands checked. Its
caller allocates `0x18C` bytes and stores the panel at parent offset `+0xDC`.
The gaps are unowned; the middle gap separates a branch target from the next
range's start. See the
[communicator-configuration panel evidence](docs/current-main-communicator-config-panel.md).
The `CMissionFile` construction routine `FUN_587ad4b0` adds a 6,185-byte match
across six Ghidra ranges with 159 mapped operands checked. Its three direct
callers pass mode values `-1`, `1,000,000`, and `1,000,001`; Ghidra shows the
million-mode path creating default `Garrison` entries and the other paths
building nested records. The record schema, field meanings, and runtime effects
remain uncertain. See the
[mission-file evidence](docs/current-main-mission-file-constructor.md).
The `CPannelFireControl` constructor `FUN_58854a00` adds a 6,126-byte match in
one Ghidra range with 167 mapped operands checked. Its startup caller allocates
`0x320` bytes and stores the panel in `DAT_58A245C4`; its body builds 32 repeated
sprite-bundle children and several groups of controls. Their labels, actions,
and resource indices remain unresolved. See the
[fire-control panel evidence](docs/current-main-fire-control-panel-constructor.md).
The record-driven updater `FUN_58864fd0` adds a 6,071-byte match across four
Ghidra ranges with 132 operands checked. The dispatcher reaches it through
`FUN_58871d60` for case `0x80020118`; it copies record data and updates repeated
child-resource pointers. Its receiver type and record semantics remain
unknown. See the
[record refresh evidence](docs/current-main-record-refresh-method.md).
The `CPannelReadyNCancelOnJoin` constructor `FUN_588a7310` adds a 5,977-byte
match across two ranges with 193 operands checked. Its caller allocates `0x208`
bytes and stores it at parent offset `+0x174`; the body builds resource-backed
sprite and menu controls. Their exact labels and ready/cancel behavior remain
unresolved. See the
[ready/cancel panel evidence](docs/current-main-ready-cancel-on-join-panel.md).
The `FUN_58850a70` method adds a 5,933-byte match across 40 Ghidra ranges with
125 operands checked. Its caller derives one of 15 display modes from object
and UI state, then this function toggles groups of child-control flags and
issues drawing calls. The mode labels and receiver type remain unknown. See
the [15-mode update evidence](docs/current-main-15-mode-control-state-refresh.md).
The `CSpecBoard_Equip` constructor `FUN_588f15f0` adds a 5,868-byte match across
two Ghidra ranges, with 192 operands checked. Its caller allocates `0x4D0` bytes
and stores it at parent offset `+0xDBC`; the constructor creates resource-backed
sprite and data controls. Exact labels and actions remain unknown. See the
[equipment spec-board evidence](docs/current-main-spec-board-equipment-constructor.md).
Current-build Main coverage is now 284 / 8,474 functions and
975,582 / 2,353,390 bytes. The `CPannelForceManager` constructor
`FUN_58872030` adds a 4,094-byte match in one Ghidra range with 138 mapped
operands checked. Its parent stores the child at `+0xDB4`; the constructor
creates known `CPannelForceInfo`, `CPannelShipTree`, and
`CPannelForceCompositionManager` children at receiver slots `+0x2D`, `+0x2F`,
and `+0x31` respectively. Most other child meanings remain unresolved. See
the [force-manager constructor evidence](docs/current-main-force-manager-constructor.md).

The `CPannelForceClassChange` constructor `FUN_58863fd0` adds a 4,087-byte
match in one Ghidra range, with 120 mapped operands checked. Its only direct
caller is the force-manager constructor, which stores it at child offset `+0xB8`. The
constructor builds indexed sprite-data controls from shared tables; specific child
meanings and screen labels remain unresolved. See the
[force-class-change constructor evidence](docs/current-main-force-class-change-constructor.md).

The `CPannelFireControlAddOnMI` constructor `FUN_5885d380` adds a 4,086-byte
match in one Ghidra range, with 132 mapped operands checked. `CPannelFireControl`
constructs it and stores it at `+0xA4`; its child pointer fields span `+0xA8`
through `+0x11C`, and the field at `+0x120` is set to 1. The individual control
roles remain unknown. See the
[AddOnMI constructor evidence](docs/current-main-fire-control-addon-mi-constructor.md).

The `CMessageFilter` initializer `FUN_587a1de0` adds a 3,931-byte match in
one Ghidra range, with one mapped operand target checked. The startup caller
`FUN_5878af40` allocates its four-byte object and stores it in
`DAT_58A24578`; the body invokes a callback 543 times with static record
addresses. Callback semantics and record meanings remain unknown. See the
[message-filter initializer evidence](docs/current-main-message-filter-initializer.md).

The RTTI-identified `CHCB_LandingTank` vtable method `FUN_58782cf0` adds
3,796 bytes across two Ghidra ranges, with 130 mapped operands checked. It gates
updates on receiver flag `+0x24`, changes a state bit from a coordinate helper,
updates timer/state fields, and iterates child controls. Its virtual callsites
and exact visual effect remain unresolved. See the
[LandingTank method evidence](docs/current-main-chcb-landing-tank-method.md).

The RTTI-identified `CPannelArmorControl` helper `FUN_58815e10` adds
3,988 bytes in one Ghidra range, with 56 mapped operands checked. Vtable-linked
methods call it to refresh text/numeric controls from four fields in a referenced
object and update child flags. The field and control meanings remain unresolved.
See the [armor-control refresh evidence](docs/current-main-armor-control-refresh.md).

The geometry helper `FUN_588d8d60` adds 3,789 bytes across three Ghidra ranges,
with five mapped operand targets checked. It fills coordinate record arrays
through 20-iteration, 120-iteration, and caller-sized loops from two lookup tables. Its
only identified direct caller is `FUN_588e05c0`; class and rendered effect remain
unknown. See the [geometry-helper evidence](docs/current-main-geometry-helper.md).
The `CPannelCommunicatorConfigMemoManage` virtual handler `FUN_58840890` adds
3,723 bytes in one Ghidra range, with 137 mapped operands checked. Its vtable
address is `0x5899E390`, 0x18 bytes into the table installed by constructor
`FUN_5883F4C0`. Command 2 dispatches among child controls, changes mode and
selection fields, and updates child flags; command `0xF764` follows a separate
selection path. Control labels and command meanings remain unknown. See the
[memo-management handler evidence](docs/current-main-communicator-config-memo-handler.md).
The `CMMXHigh565Surface` method `FUN_5896cf50` and
`CMMXHigh555Surface` method `FUN_5896e150` add 3,659 bytes each in one Ghidra
range apiece, with 113 mapped operands checked apiece. RTTI identifies their
class descriptors; the methods occupy vtable offset `+0x20`. Both clip bounds
and process pixels through scalar/MMX paths or a host-surface virtual call.
Their buffer layouts, mask/channel mapping, and render results remain unknown.
See the [MMX surface pixel-operation evidence](docs/current-main-mmx-surface-pixel-operations.md).
`FUN_5876a570` adds a 4,160-byte prompt-handler
match in one Ghidra range, with 266 mapped operands checked. Its callers pass
many action codes; the communicator-configuration panel uses code 300 for the
friend-deletion prompt, and `FUN_587bb700` passes codes 100, 600, and `0x15E`.
The owner class, full action enum, and UI callback contract remain unknown. See
the [prompt-handler evidence](docs/current-main-prompt-handler.md).
The `CPannelFireControlAddOnAircraft` constructor
`FUN_5885aaa0` adds a 4,161-byte match in one range, with 130 mapped operands
checked. Its `CPannelFireControl` caller allocates `0xAB4` bytes and stores the
child at `+0x9C`; this constructor creates eight repeated sprite-backed
control groups, advancing the layout argument by `0x2A` each time. Their exact
identities, actions, and resource-table mappings remain unresolved. See the
[aircraft-addon constructor evidence](docs/current-main-fire-control-aircraft-addon.md).
`FUN_58882d80` adds a 4,167-byte handler match
across five Ghidra ranges, with 214 mapped operands checked. Its direct caller
`FUN_587bb700` reaches it in the `0x8002C005` dispatch arm. The handler routes
codes `0x8002C101` through `0x8002C104` into helper messages, payload copies,
and state/control updates. Receiver and payload layouts and message meanings
remain unresolved. See the
[message-handler evidence](docs/current-main-message-handler.md).
`FUN_587e3080` adds a 4,296-byte handler match
across three Ghidra ranges with 217 mapped operands checked. It tests message
and object state, resolves visible message keys for ship-reform, armor, engine,
and dock-number paths, and calls the prior-slice state updater with selectors
`1`, `2`, `3`, and `0xD`. The owning class, event contract, and identifier
meanings remain unresolved. See the
[handler evidence](docs/current-main-screen-event-handler.md).
`FUN_588ade00` adds a 4,331-byte initializer match
across one Ghidra range; its code has no mapped operands. Its only direct caller
is the `CPannelShipTree` constructor `FUN_588b0940`, which assigns that screen's
vftable and calls it after setting up child controls. The exact meanings and
consumers of the populated fields are unresolved. See the
[ship-tree initializer evidence](docs/current-main-ship-tree-layout-initializer.md).
`FUN_58798d60` adds a 4,336-byte state-update
method match across three Ghidra ranges with 60 mapped operands checked.
Ghidra shows nine calls from five functions; `FUN_587e3080` passes selectors
1, 2, 3, and `0xD`. The receiver type, selector meanings, record schema, and
control/resource semantics remain unknown. See the
[state-update evidence](docs/current-main-state-update-method.md).
The `CForce` constructor `FUN_5877cc30` adds a
4,348-byte match in one Ghidra range, with 113 mapped operands checked. Ghidra
shows five callers; each allocates `0x27C` bytes before constructing the object.
The constructor copies 96 words from its input into the receiver and creates
sprite-backed child objects from shared data tables. The input schema and child
field/resource meanings remain unresolved. See the
[CForce constructor evidence](docs/current-main-force-constructor.md).
`CPageChannelBattle_ControlMenuScreen` initializer
`FUN_587d26c0` adds a 4,467-byte match across two Ghidra ranges, with 97 mapped
operands checked. The startup initializer `FUN_5878af40` allocates `0xAE4`
bytes, stores the returned screen in `DAT_58A245A0`, then sets flags and a timer.
The 9-byte gap between the body ranges and the screen's child/resource meanings
remain unresolved. See the
[channel-battle screen evidence](docs/current-main-channel-battle-screen-constructor.md).
`CPannelForceCompositionManager` initializer
`FUN_58868b40` adds a 4,527-byte match in one range, with 130 relocation
operands checked. The `CPannelForceManager` caller allocates `0x2D4` bytes and
stores the child at `+0xC4`; the sprite-table mappings and control meanings are
unknown. See the
[initializer evidence](docs/current-main-force-composition-manager.md).

The archived 2062 `Main.dll` can now be initialized in an isolated 32-bit host:
its DLL entrypoint expands its protected image into native mapped code. Its
2,016 Ghidra-recognized functions are now in the progress inventory. The
16-byte `InitCGCDLL` export, its 562-byte callback-table copy callee, and the
50-byte `AllocScreen` factory and its 1,411-byte screen constructor match byte
for byte. The callback field semantics and full control behavior remain
unknown; no playable screen or client login was demonstrated. See the
[archived client capture and renderer evidence](docs/client-unpacking.md).

Recovered code/assets remain local and Git-ignored. The workspace MIT license
applies to original tools, not supplied binaries or their decompiled output.
The public-safe decompilation project is published at
`https://github.com/rbxrootx/MissionFleet`.
