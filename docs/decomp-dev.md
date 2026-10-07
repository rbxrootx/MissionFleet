# decomp.dev integration

Run `python tools/audit_thunk_targets.py` to independently check address-named
jump, import, and call-stub relocation destinations against original operands.
Objdiff normalizes these operands into symbols, so its score alone does not
prove their original addresses. This audit covers those three source families;
other symbolic relocations and final executable linking still require validation.
The normal `verify_matches.py` command runs this destination audit before
compilation, including when selecting individual functions with `--only`.

Run `python tools/export_link_targets.py` to export every configured relocation's
original destination to `build/matches/link-targets.json`. The exporter rejects
symbols assigned multiple destinations within one server. This local map records
linking requirements; it does not assert that destination implementations exist.
The report also resolves relative references at exact reconstructed entry points
and ranks unresolved relative targets by reference count. Absolute data/IAT
operands are excluded from function-definition resolution. A resolved definition
still requires symbol binding and final linked-image verification.
The `link_plan` section groups candidate symbol bindings and explicit blockers
by server. Missing functions, conflicting destinations, and unresolved data/import
operands are not replaced with stubs. This is a planning artifact: object symbols,
calling conventions, imports/data, section layout, and final image bytes still
need verification before any server can be marked ready to link.

decomp.dev is the whole-project progress dashboard. It reads an objdiff v2
report from a GitHub Actions artifact; it does not host or perform the actual
decompilation. The per-function compiler experiment site is decomp.me.

The GitHub project [Rebrew](https://github.com/maci0/rebrew/tree/dc77b2c14d797d8d2b1daaae8b73f54cb8a55468)
includes genetic source matching and compiler-flag sweeps, and its toolchain
catalog lists MSVC 6.0 SP5 for 32-bit PE. Its matcher was not run here: the
local Docker CLI is installed, but its Docker Desktop engine is unavailable.
Until a pilot passes this project’s pinned compiler and objdiff checks, the
Rebrew search is not counted as a match or included in the build workflow.

This repository generates one report named `NF2_2062_report`, with Login,
Game, Persistence, archived 2062 `Main.dll`, and installed FleetMission
`Main.dll` categories. The two client inventories are separate builds and use
their own capture hashes and function-address bases.
`config/NF2_2062/functions.tsv` contains the server inventory;
`client-functions.tsv` contains public-safe Ghidra metadata for the archived
client module; `config/NF2_2026/client-functions.tsv` records the installed
client build. These inventories contain names, addresses, and body sizes, but
no original machine code or game assets. Ghidra function boundaries,
especially in protected client images, remain subject to review.

Regenerate the local report:

```powershell
rtk python tools/generate_progress.py
rtk python tools/generate_progress.py --check
```

Decompiled pseudocode does not count as matching source. The current local report
credits 8,581 of 42,461 functions and 2,737,738 of 10,470,295 bytes (20.2091% by
functions and 26.1477% by bytes); every counted function match is verified at
100.0% by objdiff 3.8.0. This includes 151 archived 2062 `Main.dll` functions
totaling 453,111 bytes; their local verifier is `tools/verify_client_matches.py`
and its hash-pinned input capture is not committed. The installed 2026 `Main.dll`
inventory has 2,448 exact function matches totaling 1,764,320 bytes. The
tax/investment control refresh adds 19 exact functions / 1,196 bytes across 19
fresh Ghidra ranges. Its 371 instructions, 76 direct-call references, and the
matched `0x8002311B` / `0x8002312B` callsites are checked by a focused verifier.
Four other callers remain unmatched, and the control and table meanings and
emulator visuals remain uncertain. See
[`current-main-tax-investment-refresh.md`](current-main-tax-investment-refresh.md).
The vtable-labeled `CPannelCommunicatorMemo` constructor adds one exact function
/ 1,081 bytes. Its matched config-memo parent calls it at `0x588403F3`; all 26
outgoing direct calls resolve to verified functions and match fresh Ghidra
transfers. Table gates and child setup are documented, while exact controls,
resources, and rendered appearance remain unresolved. See
[`current-main-communicator-memo-constructor.md`](current-main-communicator-memo-constructor.md).
The PageFight `0x80000500` route's state-6 sprite-child setup adds one exact
function / 1,184 bytes. Two matched caller steps anchor it, the parent gate and
receiver load are checked against mapped instructions, and its 14
`CSpriteDataScreen` children and 20 matched outgoing calls are recorded from
Ghidra. Child assets, labels, and runtime visuals remain unknown. See
[`current-main-state6-sprite-child-setup.md`](current-main-state6-sprite-child-setup.md).
The observed type-0x05 record path adds the 1,031-byte `FUN_587B1B70` packed
geometry transform. Its three completely decoded Ghidra ranges, two matched
parent routes, and both verified helper calls are checked by a focused
verifier; packed-field units and visible effect remain unknown. See
[`current-main-type05-geometry-transform.md`](current-main-type05-geometry-transform.md).
quit-prompt setup helper adds one exact 246-byte function, anchored by two
matched callers and the original localization key; a third caller is still
unmatched and parameter and callback meanings remain unresolved. See
[`current-main-quit-prompt-setup.md`](current-main-quit-prompt-setup.md). Its
RTTI-identified `CExplanPannel` event/update closure adds 62 exact functions /
11,871 bytes across 74 Ghidra ranges. The three vtable methods converge on a
state dispatcher, and three already-matched caller paths reach helpers within
the closure. Eighteen Ghidra call edges are encoded as tail jumps in the mapped
binary and are tracked as transfers. Parameter types, state labels, rendered
explanation content, and runtime visual behavior remain uncertain; no emulator
test is claimed. See
[`current-main-c-explan-pannel-event-closure.md`](current-main-c-explan-pannel-event-closure.md).
The nested RTTI-backed `CScreenShotTime@CNFScreenShot` closure adds 102 exact
functions / 17,694 bytes across 106 fresh Ghidra ranges. Its vtable method,
matched constructor path, screenshot-directory formatting calls, and field and
callback uncertainties are recorded in
[`current-main-c-screenshot-time.md`](current-main-c-screenshot-time.md).
The force-record population and refresh path adds three exact functions / 1,816
bytes in six fresh Ghidra ranges. Its matched `0x80020D03` dispatcher call,
matched `CForce` constructor, and two-step refresh chain establish the path;
record and UI semantics remain uncertain. See
[`current-main-force-record-population-refresh.md`](current-main-force-record-population-refresh.md).
The event `0x80020A03` list-update path adds seven exact functions / 1,726 bytes
in eight fresh Ghidra ranges. The two matched dispatcher sites, record-copy
path, list-node helpers, and Ghidra call-reference versus mapped JMP difference
are documented with callback and display uncertainties in
[`current-main-event-80020a03-list-update.md`](current-main-event-80020a03-list-update.md).
The RTTI-backed `CHCB_LandingTank` constructor adds one exact function / 1,234
bytes. Its eight-object matched map-screen setup loop, nine sprite-bundle
children, complete direct-call boundary, and unresolved visual roles are
documented in
[`current-main-chcb-landing-tank-constructor.md`](current-main-chcb-landing-tank-constructor.md).
The installed ship-map screen's encoded child-state helper adds one exact
function / 1,202 bytes. Its matched caller argument, observed value bands,
complete direct-call boundary, and unresolved child/resource meanings are
documented in
[`current-main-ship-map-encoded-child-setup.md`](current-main-ship-map-encoded-child-setup.md).
The `CPannelShipTree` mouse-move entry callback adds one exact function /
1,160 bytes across three Ghidra body ranges. Its matched `0x200` hit-test
caller, record lookup, child-control updates, and unknown visual effect are
documented in
[`current-main-ship-tree-entry-hit-callback.md`](current-main-ship-tree-entry-hit-callback.md).
The installed client's `/w` and `/whisper` private-chat path adds two exact
functions / 1,345 bytes. Its mapped strings and matched Enter-key caller ground
the recipient parser and input-state update; record and protocol semantics
remain unresolved. See
[`current-main-chat-private-recipient.md`](current-main-chat-private-recipient.md).
The adjacent numeric user-chat channel command adds two exact functions / 1,036
bytes. Its matched slash-plus-digit route, three-entry channel lookup, message
submission path, and unresolved record/server semantics are documented in
[`current-main-user-chat-channel-command.md`](current-main-user-chat-channel-command.md).
The type-0x06 record-backed child initializer now includes its exact 123-byte
encoded-state helper match. The field updates, verified callback boundary, two
matched callers, third unmatched caller, and remaining field meanings are
recorded in
[`current-main-type-06-child-state-helper.md`](current-main-type-06-child-state-helper.md).
The installed `CPageFactory_ControlMenuScreen` destructor path adds two exact
functions / 1,468 bytes. Its vtable-rooted caller path, six 32-entry child
arrays, fresh body ranges, and unknown indirect callback contracts are in
[`current-main-control-menu-destructor.md`](current-main-control-menu-destructor.md).
The page-result control menu's slot `+0x00` cleanup body adds one exact
function / 1,107 bytes. Its matched RTTI caller, child-pointer cleanup, exact
ranges, and unresolved indirect callbacks are documented in
[`current-main-page-result-control-menu-cleanup.md`](current-main-page-result-control-menu-cleanup.md).
The `0x80020D0D` record-driven screen refresh adds three exact functions / 1,100
bytes. Its matched dispatcher branch, fixed and variable record strides,
`CForce` constructor path, complete direct-call boundary, and unknown visible
result are documented in
[`current-main-force-screen-record-refresh.md`](current-main-force-screen-record-refresh.md).
The RTTI-backed `CPannelCommunicatorMessage` constructor adds one exact function /
1,298 bytes. Its matched parent call, `+0x110` child slot, complete direct-call
boundaries, and unresolved control appearance are documented in
[`current-main-communicator-message-panel.md`](current-main-communicator-message-panel.md).
The `CPannelFactoryHelp` child-state selector and its direct-call closure add four
byte-identical functions / 2,210 bytes, grounded by the panel's RTTI, vtable,
matched caller sites, and exact Ghidra body ranges; numeric state meanings and
the visible panel effect remain unresolved. See
[`current-main-factory-help-child-state-selection.md`](current-main-factory-help-child-state-selection.md).
The RTTI-backed `CLogoControlMenuScreen` slot `+0x0C` state-update method adds
43 byte-identical functions / 14,771 bytes. Its fresh Ghidra ranges, original
opening-screen and report-file call sequence, child-panel paths, full direct
call closure, and unresolved state/field semantics are documented in
[`current-main-logo-control-menu-state-update.md`](current-main-logo-control-menu-state-update.md).
message `0x80022001` state-application
path adds five byte-identical functions / 2,212 bytes. Its matched dispatcher
branch, 32-entry update, exact body ranges, and remaining field uncertainties
are documented in
[`current-main-message-80022001-state-application.md`](current-main-message-80022001-state-application.md).
The same message branch's auxiliary child-refresh closure adds four
byte-identical functions / 2,212 bytes. Its exact Ghidra ranges, child/text
updates, verified direct-call boundaries, and unresolved payload/control
semantics are documented in
[`current-main-message-80022001-auxiliary-child-refresh.md`](current-main-message-80022001-auxiliary-child-refresh.md).
The masked-record parameter updater's byte-matched helper adds one function /
1,738 bytes, tied to three calls from the matched updater and checked against
fresh Ghidra arithmetic and body ranges. Its unresolved mode, subtype, and
field meanings are recorded in
[`current-main-masked-record-parameter-helper.md`](current-main-masked-record-parameter-helper.md).
The installed client's battle-room `0x80020115`
update closure adds eight byte-identical functions / 3,847 bytes. Its matched
dispatcher route, bitmap traversal, factory selection, exact ranges, and payload
uncertainties are recorded in
[`current-main-battle-room-20115.md`](current-main-battle-room-20115.md). The
combat-strength
analyzer closure adds six byte-identical functions / 3,582 bytes. Its Ghidra
range manifest, matched callers, 32-entry record-processing path, packed-field
helper, and unresolved semantics are documented in
[`current-main-combat-strength-analyzer.md`](current-main-combat-strength-analyzer.md).
The `CRoomTypeMission` constructor closure
adds four byte-identical functions / 3,634 bytes. Its matched
`CRoomSettingManager` constructor and `CPageChannelBattle_ControlMenuScreen`
caller, sprite/control setup, exact closure, and remaining status uncertainties
are documented in
[`current-main-room-type-mission-construction.md`](current-main-room-type-mission-construction.md).
The `CRoomTypeFLB` room-settings path adds three byte-identical functions / 2,603
bytes. Its matched `CRoomSettingManager` resource `0x7C` gate, sprite-backed
children, repeated settings panel, eight-slot position helper, and remaining
resource/layout uncertainties are documented in
[`current-main-room-type-flb-setting-construction.md`](current-main-room-type-flb-setting-construction.md).
The shell-map spatial-record path adds five byte-identical functions / 2,592
bytes, tied to the RTTI-identified shell-map caller and a matched handler. Its
tag gate, bounded record scan, exact call closure, and unresolved field and
event semantics are documented in
[`current-main-spatial-record-processing.md`](current-main-spatial-record-processing.md).
The PageFight `0x80000500` event's state-7 OpConvoy open-scene bootstrap adds
eight byte-identical functions / 3,239 bytes. Its matched event path, actor
constructors, indexed position records, exact ranges, and unresolved visual
semantics are documented in
[`current-main-opconvoy-open-scene-bootstrap.md`](current-main-opconvoy-open-scene-bootstrap.md).
The Main event 0x80020115 pending-state cleanup closure adds 15 byte-identical
functions / 2,831 bytes. Its matched dispatcher jump-table route, second matched
caller, resource/map validation chain, exact ranges, and unresolved result
meanings are documented in
[current-main-event-80020115-pending-state-cleanup.md](current-main-event-80020115-pending-state-cleanup.md).
The replay and battle-save serializer at `FUN_587EB370` adds two byte-identical
functions / 1,814 bytes. Its matched save gate, exact Ghidra body ranges,
`ReplayFile` and `SaveFile_0001` literals, and unresolved record/import semantics
are documented in
[`current-main-replay-save-serializer.md`](current-main-replay-save-serializer.md).
The downstream `0x80020F02` message-record consumer adds two byte-identical
functions / 1,329 bytes. Its verified dispatcher route, status/insignia/clan
string-key selection, exact Ghidra ranges, and unresolved record and callback
semantics are documented in
[`current-main-message-80020f02-consumer.md`](current-main-message-80020f02-consumer.md).
The `0x80027105` state-application event adds seven byte-identical functions /
1,288 bytes. Its switch-table route, descriptor lookup, state update paths,
exact ranges, and unresolved packet and callback semantics are documented in
[`current-main-message-80027105-state-application.md`](current-main-message-80027105-state-application.md).
The `CShell_MapObjectScreen` nearby-effect path adds five byte-identical
functions / 2,131 bytes. Its mapped entry traversal, coordinate checks,
packed-field updates, matched callers, and remaining state and effect
uncertainties are documented in
[`current-main-shell-map-nearby-effect-processing.md`](current-main-shell-map-nearby-effect-processing.md).
The shell-map target-proximity path adds two byte-identical functions / 1,462
bytes. Its caller's two mapped call sites, target-list traversal, distance and
state gates, exact Ghidra ranges, and unresolved record semantics are recorded
in [`current-main-shell-map-target-proximity.md`](current-main-shell-map-target-proximity.md).
The shared map-control refresh adds eight exact functions / 3,894 bytes. Its
original map labels, five matched callers, exact ranges, and four unmatched
caller sites are documented in
[`current-main-map-control-refresh.md`](current-main-map-control-refresh.md).
The PageFight event pre-handler rooted at
`FUN_587EE2C0` adds eight byte-identical functions / 3,705 bytes. Its matched
message-handler route, shared keyboard-index helper, exact closure, and
remaining event/state uncertainties are documented in
[`current-main-pagefight-event-prehandler.md`](current-main-pagefight-event-prehandler.md).
The FCCHS tutorial-panel lifecycle adds six
exact functions / 4,026 bytes. Its matched PageFactory caller, `ITFCCHS.spr`
load, status/message-key handling, exact closure, and unresolved status meanings
are documented in
[`current-main-fcchs-tutorial-panel.md`](current-main-fcchs-tutorial-panel.md).
The `0x80023102` request/display path adds
seven byte-identical functions / 4,093 bytes; its matched dispatcher-to-response
chain, row population, localization keys, and remaining protocol uncertainties
are documented in
[`current-main-dispscreen-80023102.md`](current-main-dispscreen-80023102.md).
The PageFight control-menu event actions
rooted at `FUN_587F7530` add seven byte-identical functions / 4,357 bytes. Their
matched event handler, selector branches, exact closure, and remaining control
and protocol uncertainties are documented in
[`current-main-pagefight-control-menu-actions.md`](current-main-pagefight-control-menu-actions.md).
The
PageFight `CPageFightOn_ControlMenuScreen` update-loop closure adds 149 exact
matches / 48,515 bytes; its matched caller, body ranges, direct-call boundary,
and semantic limits are recorded in
[`current-main-pagefight-control-update-loop.md`](current-main-pagefight-control-update-loop.md).
The PageFight battle-input and target-control path adds 12 exact matches totaling
4,243 bytes; its direct-call closure and unresolved callback are documented in
[`current-main-pagefight-battle-input.md`](current-main-pagefight-battle-input.md).
The `ITFFM.spr` resource path adds two exact matches / 2,473 bytes, tied to the
matched `FUN_58756020` caller. Its exact Ghidra ranges, direct-call closure, and
unresolved file/pixel-format callbacks are recorded in
[`current-main-itffm-sprite-resource.md`](current-main-itffm-sprite-resource.md);
no client rendering test was run.
The non-null `0x8002C101` message update path adds 16 exact matches / 12,289
bytes. Its matched dispatcher case, payload branch, exact body ranges, direct
transfer closure, shared-helper callers, and unresolved data semantics are
recorded in
[`current-main-message-8002c101-update.md`](current-main-message-8002c101-update.md).
The installed `0x80020A00` chat/display path adds 19 exact matches / 8,961
bytes, with its dispatcher compare, two handler roots, parallel panel/member
updates, complete direct-call closure, and protocol uncertainties recorded in
[`current-main-message-80020a00-chat-display.md`](current-main-message-80020a00-chat-display.md).
The linked-entry update path at `FUN_5874a010` adds five exact matches / 1,684
bytes. Its two calls from the matched linked-entry dispatcher, exact body ranges,
closed direct-transfer graph, and shared helpers are recorded in
[`current-main-linked-entry-hit-dispatch.md`](current-main-linked-entry-hit-dispatch.md).

The CMF map-resource entry lookup adds 11 exact instruction-stream matches / 2,355
bytes. The matched `FUN_58800360` map initializer calls the root after choosing a
CMF path and stores the loaded resource at the returned entry's value slot. Fresh
Ghidra ranges, direct-call closure, matched boundaries, and remaining container
uncertainties are recorded in
[`current-main-cmf-map-entry-lookup.md`](current-main-cmf-map-entry-lookup.md).
The `CMapFileFDL` loader directly called by that initializer adds three exact
matches / 2,283 bytes. Its checked `Sangduck Map File` header, record-reading
branches, direct-call closure, and unresolved file/status semantics are recorded
in [`current-main-cmf-file-parser.md`](current-main-cmf-file-parser.md).
The RTTI-identified `CPannelTrade` virtual slot `+0x08` and its three-function
state-reset closure add four exact matches / 1,164 bytes. Its event condition,
vtable evidence, matched helper callers, and unresolved virtual dispatch are
recorded in
[`current-main-cpannel-trade-state-reset.md`](current-main-cpannel-trade-state-reset.md).
The same RTTI-backed class's virtual slot `+0x18` adds 23 exact matches / 4,699
bytes. Its row validation and payload path, exact direct-call closure, matched
helper callers, and remaining record/protocol uncertainties are recorded in
[`current-main-cpannel-trade-event.md`](current-main-cpannel-trade-event.md).
The state-`0x50000` map-object refresh closure adds 10 exact matches / 2,325
bytes. Its matched updater and `CShip_MapObjectScreen` helper callers, fresh
Ghidra ranges, direct transfers, and unresolved receiver/field meanings are in
[`current-main-map-object-state-update.md`](current-main-map-object-state-update.md).
The paired Main message `0x8002C004` / `0x8002C006` record-update path adds 15
exact matches / 2,634 bytes. The byte-matched dispatcher routes, 0x22-byte row
helpers, localized transfer-status keys, exact closure, and unresolved record
semantics are documented in
[`current-main-message-8002c004-8002c006-record-update.md`](current-main-message-8002c004-8002c006-record-update.md).

The variable-record child-state refresh adds two exact matches / 1,784 bytes.
The matched caller, exact ranges, and conditional child-flag behavior are
recorded in
[`current-main-variable-record-child-state-refresh.md`](current-main-variable-record-child-state-refresh.md);
the receiver/global record meanings remain unresolved.
The ManageFleetTab event-dispatch path adds 15 exact instruction-stream matches
and 3,930 bytes. Its vtable evidence, direct-call closure, per-helper behavior,
and source-recovery limits are recorded in
[`current-main-manage-fleet-event-dispatch.md`](current-main-manage-fleet-event-dispatch.md).
The PageFight mode-7 OpConvoy box/cargo update adds 29 exact instruction-stream
matches / 10,594 bytes, documented with its original state and caller evidence
in [current-main-opconvoy-state-update.md](current-main-opconvoy-state-update.md).
The focused PageFight 25-tick counter/threshold branch adds four exact matches
/ 1,237 bytes; its conditional call gate, exact helper closure, and unresolved
field meanings are recorded in
[current-main-pagefight-tick-progress.md](current-main-pagefight-tick-progress.md).

parser-selected `CType2MMXAlphaSpriteData` virtual-method slice is documented
separately. The sibling
[`CType0MMXAlphaSpriteData`](current-client-alpha-type0-methods.md) and
[`CType1MMXAlphaSpriteData`](current-client-alpha-type1-methods.md) and
[`CType2MMXAlphaSpriteData`](current-client-alpha-type2-methods.md) reports
record parser/vtable evidence, uncertainties, and byte checks.
Earlier documented
slices cover the renderer/authentication exports and screen lifecycle, the
`InitCGCDLL` callback-table copier, screen child-list and static-text helpers,
the CSH sprite loader/parser, sprite-data constructors and methods, VM entry
trampolines, and logo/control screen construction. The three
export bodies have independent evidence: the `InitCGCDLL` call target is
audited at its relocation, and `GetUserId` is recorded as returning a pointer
to `0x58A0B450`. A separate
capture-specific profile indexes 13,032 functions / 3,996,593
bytes from installed `Core.dll`; 431 functions match 333,421 bytes, including
122 ship-path functions matching 280,539
bytes, covering the dispatcher, eight sprite classes, ship animation and draw
path, the render-node constructors and ordered child lists, and the cache/loader/parser.
The separate CRT floating-point error-path slice adds 17 byte-matched functions
totaling 3,292 bytes. The async-I/O context constructor, its bucket-table
initializer, and its error-report/reset helpers add four exact matches / 544
bytes; the 65,536-bucket table is confirmed at context `+0x220`, while callback
meanings and user-visible setup effects remain unresolved. See
[`current-core-async-io-context.md`](current-core-async-io-context.md). The
reset/state-transition routine and seven direct helpers add eight matches / 566
bytes, with the PE32 CLR check, module/export lookup, callback sequence, and
TEB policy-bit test recorded from Ghidra; the callback ABIs and `INT3` handling
remain unknown. See
[`current-core-async-io-reset-transition.md`](current-core-async-io-reset-transition.md).
The one-time initializer and callback table add eleven exact matches / 865
bytes. Following a mapped function pointer exposed a 76-byte callback boundary
that Ghidra had not identified; record schemas and runtime callback meanings
remain unresolved. See
[`current-core-runtime-state-initializer.md`](current-core-runtime-state-initializer.md).
The child-field accessor at `0x584869C0` adds 17 bytes;
Ghidra establishes a DWORD read at receiver `+4`, while its likely coordinate
role is inferred from callers; see
[`current-core-child-offset-accessor.md`](current-core-child-offset-accessor.md).
The scene phase-setup handler and its bounded child-table accessor add two
exact matches / 488 bytes; see
[`current-core-scene-phase-setup-handler.md`](current-core-scene-phase-setup-handler.md).
The phase-8 scene layout constructor at `0x586E8270` adds another 3,336-byte
match; see
[`current-core-scene-layout-constructor.md`](current-core-scene-layout-constructor.md).
Its post-construction resource loader adds two matches for the mapped
`Announcement.txt`, `Patch.txt`, and `Eula.sdt` paths; see
[`current-core-scene-text-resource-loader.md`](current-core-scene-text-resource-loader.md).
The parser for those three line-based resources adds five byte-matched functions
/ 1,039 bytes and records the LF delimiter, CR trimming, empty-line handling,
and indexed record accessors; see
[`current-core-scene-record-parser.md`](current-core-scene-record-parser.md).
The three per-resource line-string vectors add 25 matches / 2,618 bytes; see
[`current-core-scene-resource-vectors.md`](current-core-scene-resource-vectors.md).
The scene's deleting wrapper and per-resource string-vector cleanup add four
matches / 1,121 bytes; see
[`current-core-scene-resource-vector-cleanup.md`](current-core-scene-resource-vector-cleanup.md).
The scene resource row population, scroll dispatch, text-render callback, and
Core-side text backend dispatch add 18 verified functions / 8,619 bytes; the
resource-screen constructor, setup, and three initializer helpers add 5 more
matches / 4,846 bytes. See
[`current-core-scene-resource-row-view.md`](current-core-scene-resource-row-view.md)
and
[`current-core-scene-resource-text-renderer.md`](current-core-scene-resource-text-renderer.md)
and
[`current-core-text-render-backend.md`](current-core-text-render-backend.md)
and
[`current-core-resource-screen-construction.md`](current-core-resource-screen-construction.md).
The `WinMain` to resource-scene setup path is traced in
[`current-core-client-entry-and-window-setup.md`](current-core-client-entry-and-window-setup.md).
Its subsequent event loop is documented in
[`current-core-client-main-loop.md`](current-core-client-main-loop.md).
The event-loop and resource-scene teardown path is documented in
[`current-core-client-shutdown.md`](current-core-client-shutdown.md).
The setup-installed message dispatcher and its helpers are traced in
[`current-core-client-window-callback.md`](current-core-client-window-callback.md).
The main-loop record parser and response sender are traced in
[`current-core-async-io-records.md`](current-core-async-io-records.md).
Their `0x40220`-byte context object and inline 65,536-entry table are described
in [`current-core-async-io-context.md`](current-core-async-io-context.md).
The inventory spans at `0x586EA6E0`, `0x5884C890`, and `0x5882C990` now include
their complete epilogues; Ghidra's prior extents ended mid-instruction. These
expanded functions were rechecked at objdiff 100%.
[`current-core-floating-point-error-path.md`](current-core-floating-point-error-path.md).
These matches use the mapped runtime image;
the on-disk `.text` bytes are absent, and the source preserves the captured
instruction stream rather than claiming high-level source recovery. Slot-2
callers and framebuffer output remain unverified. See the
[screen lifecycle](current-client-screen-lifecycle.md),
[installed-client child-list evidence](current-client-child-lists.md),
[installed-client static-text evidence](current-client-static-text.md),
[installed-client sprite-loader evidence](current-client-sprite-loader.md),
[installed-client sprite-data constructor evidence](current-client-sprite-data-formats.md),
[installed-client High555 sprite-method evidence](current-client-high555-sprite-methods.md),
[installed-client logo/control screen evidence](current-client-logo-screen.md),
[VM entry/trampoline evidence](client-vm-entry-trampolines.md), and
[Core.dll RGB16 compositor evidence](current-core-rgb16-compositors.md) and
[Core.dll ship sprite-loader evidence](current-core-ship-sprite-loader.md),
[Core.dll scene resource-vector evidence](current-core-scene-resource-vectors.md), and
[Core.dll scene resource-vector cleanup evidence](current-core-scene-resource-vector-cleanup.md),
[three-byte-target class evidence](current-core-three-byte-sprite-class.md) and
[its selector-1 sibling](current-core-three-byte-sprite-class1.md) and
[its selector-2 sibling](current-core-three-byte-sprite-class2.md) and
[four-byte-target class evidence](current-core-four-byte-sprite-class0.md).
The current ship render-node construction and ordered parent-child list evidence
is recorded in [the node construction slice](current-core-ship-node-construction.md).
The flag, ordering-key, and `+0x68` property setters are documented in
[the ship-node property setter slice](current-core-ship-node-properties.md).
`config/NF2_2062/matches.json` accepts only records tied to an unchanged source
file and marked as byte-identical under objdiff 3.8.0. `tools/verify_matches.py`
rebuilds recorded source and target objects locally without placing original
machine code in the repository.
Source integrity accepts Git's LF and CRLF checkout forms as equivalent; every
other byte change invalidates the recorded match.

The workflow at `.github/workflows/progress.yml` uploads
`build/progress/report.json` for the registered decomp.dev project.
