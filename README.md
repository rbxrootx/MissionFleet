# MissionFleet native decompilation project

The supplied historical NavyFIELD package contains actual native login, game
and persistence servers. Their recovered memory regions, Ghidra project and
C pseudocode are available locally. **Start with [the decompilation project](decomp/README.md)
and [current status](STATUS.md).** A buildable 1:1 recreation is not complete.

The matching project has a deterministic [decomp.dev progress pipeline](docs/decomp-dev.md).
Its public-safe inventory covers 42,461 functions across the login, game,
persistence, archived 2062 client, and installed-client modules. Functions are
credited only after reconstructed C/C++ produces byte-identical object code.
The current 9,017 matches cover 2,875,639 bytes (21.2360% by functions and
27.4647% by bytes) and are verified individually at 100.0% by objdiff.
The aircraft fire-control event handler and four direct helpers add five exact
functions / 2,826 bytes; their RTTI, event paths, call edges, and unresolved
dispatch details are recorded in
[the subsystem evidence](docs/current-main-fire-control-aircraft.md).
Five chat command routes add 2,146 exact bytes; their original command strings,
caller paths, shared sender helper, and unresolved protocol meaning are
documented in [the subsystem evidence](docs/current-main-chat-command-routes.md).
The installed client's RTTI-backed `CPannelCommunicatorConfigDiplomacyTab`
event closure adds 30 exact functions / 3,876 bytes across 31 ranges. Its
mode dispatcher, matched callers, constructor path, and indirect callback
uncertainties are recorded in
[the subsystem evidence](docs/current-main-diplomacy-tab-event-closure.md).
The installed client's RTTI-backed Cargo, Fighter, and DummyAircraft update
closures add 12 exact functions / 4,627 bytes. Their shared `+0x0C` update,
class-specific dispatch paths, matched constructor evidence, and unresolved
indirect calls are recorded in
[the subsystem evidence](docs/current-main-opconvoy-aircraft-update.md).
The installed client's RTTI-backed `CPanelDashboard` primary-vftable slice adds
11 exact functions / 4,988 bytes. Its four open slots, matched constructor path,
39 transfers to verified code, and 44 unresolved child virtual calls are
documented in
[the subsystem evidence](docs/current-main-cpanel-dashboard-vtable.md).
The installed client's RTTI-backed `CWarehousePageButton` slice adds 20 exact
functions / 3,226 bytes across 22 Ghidra ranges. Its three open primary slots,
ten-row page population, matched warehouse-list calls, 17 transfers to verified
code, and unresolved child dispatches are documented in
[the subsystem evidence](docs/current-main-warehouse-page-button-vtable.md).
The adjacent installed-client `CWarehouseSlotManager` slice adds 23 exact
functions / 3,741 bytes across 26 ranges. Its four open slots, verified
constructor path, 61 transfers to matched code, and unresolved child dispatches
are recorded in
[the subsystem evidence](docs/current-main-warehouse-slot-manager-vtable.md).
The installed client's battle-room `0x80020115` update closure adds eight
byte-identical functions / 3,847 bytes. Its matched dispatcher route, 200-position
bitmap traversal, mode-specific object creation, exact ranges, and unresolved
payload semantics are recorded in
[the subsystem evidence](docs/current-main-battle-room-20115.md).
The installed client's `CRoomTypeMission` constructor closure adds four exact
functions / 3,634 bytes, grounded in the matched `CRoomSettingManager`
constructor and `CPageChannelBattle_ControlMenuScreen` caller. Its sprite and
control construction, selector helper, exact ranges, and unresolved status
meanings are recorded in
[the subsystem evidence](docs/current-main-room-type-mission-construction.md).
The related `CRoomTypeOccupation` constructor adds one exact function / 960
bytes. Its matched room-settings caller, selected-record copies, resource-gated
control construction, exact body, and unresolved UI meanings are documented in
[the subsystem evidence](docs/current-main-room-type-occupation-construction.md).
The adjacent `CRoomTypeConvoy` constructor adds one exact function / 688 bytes.
Its resource-gated `CRoomSettingManager` caller, seven child controls, exact
body, and unresolved table/control meanings are recorded in
[the subsystem evidence](docs/current-main-room-type-convoy-construction.md).
The sibling `CRoomTypeSelectMode` constructor adds one exact function / 638
bytes. Its resource-gated `CRoomSettingManager` caller, six child controls,
exact body, and unresolved table/control meanings are recorded in
[the subsystem evidence](docs/current-main-room-type-select-mode-construction.md).
The adjacent `CRoomTypeHCB` constructor adds one exact function / 47 bytes.
Its RTTI-backed class identity, resource-gated matched caller, exact body, and
unresolved virtual behavior are recorded in
[the constructor evidence](docs/current-main-room-type-hcb-constructor.md).
The following `CRoomTypeWAW` constructor adds one exact function / 275 bytes.
Its RTTI identity, matched resource gate and caller store, selected-record
copies, and the unresolved address-`0x8` fallback read are documented in
[the constructor evidence](docs/current-main-room-type-waw-constructor.md).
The adjacent `CRoomTypeSkirmish` constructor adds one exact function / 275
bytes. Its RTTI identity, matched caller, selected-record copies, and the same
unresolved fallback read are documented in
[the constructor evidence](docs/current-main-room-type-skirmish-constructor.md).
The following `CRoomTypeAlliedvsAxis` constructor adds one exact function /
275 bytes. Its RTTI identity, matched resource gate and caller store, selected-
record copies, and unresolved fallback read are documented in
[the constructor evidence](docs/current-main-room-type-allied-vs-axis-constructor.md).
The following `CRoomTypeDKT2` constructor adds one exact function / 347 bytes.
Its matched resource gate, sprite-file path, selected-record copies, RTTI
identity, and unresolved address-`0x8` fallback read are documented in
[the constructor evidence](docs/current-main-room-type-dkt2-constructor.md).
The adjacent `CRoomTypeNormal` constructor adds one exact function / 171 bytes.
Its matched manager gate, RTTI identity, `CPannelNormalRoomSetting` child
construction, and unresolved resource/argument meanings are documented in
[the constructor evidence](docs/current-main-room-type-normal-constructor.md).
The following `CRoomTypeNightBattle` constructor adds one exact function /
275 bytes. Its matched manager gate, RTTI identity, two selected-record copies,
and unresolved address-`0x8` fallback read are documented in
[the constructor evidence](docs/current-main-room-type-night-battle-constructor.md).
The related `CRoomTypeDKT` constructor adds one exact function / 291 bytes.
Its matched manager gate, RTTI identity, selected-record copies, and unresolved
address-`0x8` fallback read are documented in
[the constructor evidence](docs/current-main-room-type-dkt-constructor.md).
The next `CRoomTypeBlitz` constructor adds one exact function / 275 bytes.
Its matched room-settings caller, RTTI identity, selected-record copies, and
unresolved address-`0x8` fallback read are documented in
[the constructor evidence](docs/current-main-room-type-blitz-constructor.md).
The following `CRoomTypeTrade` forwarding constructor adds one exact function
/ 47 bytes. Its resource-gated matched caller, RTTI identity, base-constructor
arguments, and the instruction-level nature of the current source are recorded
in [the constructor evidence](docs/current-main-room-type-trade-constructor.md).
The adjacent `CRoomTypeTrade` vtable slot 7 method adds one exact function /
285 bytes. Its two Ghidra body ranges, child-state writes, room-type message key,
and unresolved callback and structure contracts are recorded in
[the method evidence](docs/current-main-room-type-trade-slot7.md).
The next shared `CRoomTypeTrade` slot 17 / `CRoomTypeWAW` slot 7 method adds
one exact function / 369 bytes. Its common vtable cell, WAW message key,
control-state writes, record lookup, exact body, and unresolved address-`0x4`
fallback read are recorded in
[the method evidence](docs/current-main-room-type-trade-waw-shared-slot.md).
The aircraft launch path's `CSantaAircraft` constructor adds one exact
function / 87 bytes. Its matched `CAircraft` base-constructor call, RTTI-backed
vtable, argument forwarding, two initialized fields, and unresolved creation
caller are documented in
[the constructor evidence](docs/current-main-santa-aircraft-constructor.md).
The adjacent `CSantaAircraft` vtable slot-0 method is now matched across its
complete 36-byte mapped stream, including the reachable cleanup instruction
Ghidra omitted from its two body ranges. Its RTTI-backed entry, flag test, and
unresolved helper contracts are documented in
[the method evidence](docs/current-main-santa-aircraft-slot0.md).
The separate `CScrollTextScreen` slot-0 deleting-destructor body adds one exact
function / 96 bytes, including 26 reachable cleanup bytes omitted by Ghidra's
terminator-marked call edges. Its RTTI hierarchy, release paths, and unresolved
field meanings are documented in
[the method evidence](docs/current-main-scroll-text-screen-slot0.md).
The class's slot `+0x18` callback adds one exact function / 134 bytes. Its
aircraft-state helper, global-state gates, indirect callback path, and unresolved
return contract are documented in
[the method evidence](docs/current-main-santa-aircraft-slot6.md).
The adjacent slot `+0x1C` method adds one exact function / 139 bytes. Its HE
damage-helper evidence, shared state gates, indirect callback, and unresolved
return contract are documented in
[the method evidence](docs/current-main-santa-aircraft-slot7.md).
The `CScrollTextScreen` slot `+0x0C` method adds one exact function / 216 bytes.
Its text/state update branches, linked-node callback walk, decompiler's missed
tail jump, and unresolved field and callback meanings are documented in
[the method evidence](docs/current-main-scroll-text-screen-slot3.md).
The `CShell_MapObjectScreen` slot `+0x14` method adds one exact function / 705
bytes. Its frame-count branches, repeated frame-helper calls, final virtual
dispatch, and unresolved render-field meanings are documented in
[the method evidence](docs/current-main-shell-map-object-screen-slot5.md).
The installed client's shared map-control refresh adds eight byte-identical
functions / 3,894 bytes. Its original map labels, selector-driven child updates,
five matched caller paths, exact Ghidra ranges, and four open callers are
recorded in
[the subsystem evidence](docs/current-main-map-control-refresh.md).
The installed client's combat-strength analyzer closure adds six byte-identical
functions / 3,582 bytes, rooted at Ghidra-labeled `CCombatStrengthAnalyzer`.
Its matched map-screen callers, 32-entry processing path, packed-field helper,
exact ranges, and unresolved record meanings are documented in
[the subsystem evidence](docs/current-main-combat-strength-analyzer.md).
The PageFight event pre-handler at `FUN_587EE2C0` adds eight exact functions /
3,705 bytes. Its matched `CPageFightOn_ControlMenuScreen` call path, shared
keyboard-index helper, exact ranges, and unresolved event/state meanings are
recorded in [the subsystem evidence](docs/current-main-pagefight-event-prehandler.md).
The installed client's FCCHS tutorial-panel lifecycle adds six exact functions
/ 4,026 bytes, traced from a matched `CPageFactory_ControlMenuScreen` caller
through the level-status selector, `ITFCCHS.spr` load, panel construction, and
message-key updates. Exact ranges and unresolved state meanings are recorded
in [the subsystem evidence](docs/current-main-fcchs-tutorial-panel.md).
The installed client's `0x80023102` request/display path adds seven exact
functions / 4,093 bytes, tied through byte-matched dispatcher and response
helpers to the displayed request rows. Its call chain, localization keys,
exact ranges, and unresolved response/control meanings are recorded in
[the subsystem evidence](docs/current-main-dispscreen-80023102.md).
The PageFight control-menu event actions rooted at `FUN_587F7530` add seven
byte-identical functions / 4,357 bytes. Their `CPageFightOn_ControlMenuScreen`
event-code gate, selector branches, exact closure, and unknown control/protocol
meanings are recorded in
[the subsystem evidence](docs/current-main-pagefight-control-menu-actions.md).
The installed client's map-object proximity update rooted at `FUN_587880C0`
adds seven byte-identical functions / 4,233 bytes. Its two matched calls from
the RTTI-identified `CShell_MapObjectScreen`, exact spatial checks, and
unresolved record/effect meanings are recorded in
[the subsystem evidence](docs/current-main-map-object-proximity-effects.md).
The installed client's linked-record collection refresh rooted at
`FUN_587487C0` adds 17 byte-identical functions / 4,646 bytes. Its matched
caller, global name-key lookup, complete call closure, and unresolved
collection/type semantics are recorded in
[the subsystem evidence](docs/current-main-linked-record-collection-refresh.md).
The installed client's non-null `0x8002C101` update path adds 16 exact matches
/ 12,289 bytes; its caller, direct-transfer closure, and uncertainty record are
in [the subsystem evidence](docs/current-main-message-8002c101-update.md).
The installed client's `0x80020A00` chat/display path adds 19 exact matches /
8,961 bytes; its dispatcher compare, paired panel routes, direct-call closure,
and unknown protocol fields are recorded in
[the subsystem evidence](docs/current-main-message-80020a00-chat-display.md).
The installed client's `0x8002C104` record-action path adds 13 exact matches /
3,533 bytes; its nine calls from the matched dispatcher, decoded action groups,
direct-call closure, and unresolved field meanings are recorded in
[the subsystem evidence](docs/current-main-message-8002c104-record-action.md).
The equipment and mine-count panel refresh rooted at `FUN_588429F0` adds 23
exact matches / 5,086 bytes. Its matched response gate, localized equipment and
mine labels, full direct-call closure, and unknown field/virtual-call semantics
are recorded in
[the subsystem evidence](docs/current-main-equipment-panel-refresh.md).
The trading-system InfoData event path rooted at `FUN_588F70E0` adds 23 exact
matches / 5,195 bytes. Its `0x80027103` matched caller, original argument setup,
InfoData and MessageBox type evidence, exact closure, and open questions are
recorded in [the subsystem evidence](docs/current-main-trading-system-info-event.md).
The linked-entry update helper path adds five exact matches / 1,684 bytes and
is documented in [the hit-dispatch notes](docs/current-main-linked-entry-hit-dispatch.md).
The PageFight `CPageFightOn_ControlMenuScreen` update-loop closure adds 149
exact matches / 48,515 bytes; its Ghidra-backed call path, direct-call boundary,
and uncertainties are recorded in
[the subsystem evidence](docs/current-main-pagefight-control-update-loop.md).
Its 25-tick counter branch adds four exact matches / 1,237 bytes and is
documented in [the focused evidence](docs/current-main-pagefight-tick-progress.md).
The state-field predicate used by the motion callback is documented in
[its Main.dll evidence](docs/current-main-58793e10-state-predicate.md).
The motion callback and its child-state path are documented in
[its Main.dll evidence](docs/current-main-58893430-control-state-callback.md).
The ship-map aircraft launch/return event handler is documented in
[its Main.dll evidence](docs/current-main-588e3ae0-aircraft-launch-return.md).
The current-client HCB resource and child initializer is documented in
[its Main.dll evidence](docs/current-main-58787400-hcb-child-initializer.md).
The map-event record and screen-state initializer that feeds the map loader
is documented in [its Main.dll evidence](docs/current-main-58804a40-map-event-initializer.md).
The `CWarehouseItemForce` virtual resource and child-state updater is documented
in [its Main.dll evidence](docs/current-main-588f8ea0-warehouse-item-force-update.md).
Its child flag setter at vtable slot +0x20 is documented in
[the flag-setter evidence](docs/current-main-588f8840-warehouse-child-flag-setter.md).
The pair predicate at vtable slot +0x28 is documented in
[its Main.dll evidence](docs/current-main-588f7d10-warehouse-pair-predicate.md).
The class destructor body and deleting wrapper are documented in
[their lifecycle evidence](docs/current-main-588f8640-warehouse-destructor.md).
The `CWarehouseItem` deleting wrapper at vtable slot +0 is documented in
[its boundary evidence](docs/current-main-588f7d40-warehouse-deleting-wrapper.md).
The `CWarehouseItem` child cleanup body called from that destructor is
documented in [its own lifecycle evidence](docs/current-main-588f7c00-warehouse-destructor.md).
Its virtual message handler at vtable slot +0x10 is documented in
[the handler evidence](docs/current-main-588f7ef0-warehouse-item-message-handler.md).
Its child-state method at vtable slot +0x0C is documented in
[the state-method evidence](docs/current-main-588f7fe0-warehouse-item-child-state.md).
The next warehouse vtable tail-jump and true-return slots are documented in
[their slot evidence](docs/current-main-warehouse-item-vtable-tail-jump-and-return.md).
The adjacent `CWarehouseItemFactory` deleting wrapper and its complete mapped
epilogue are documented in [its lifecycle evidence](docs/current-main-588f8620-warehouse-factory-deleting-wrapper.md).
The RTTI-backed `CWarehouseItemInfo` destructor, deleting wrapper, and vtable
state-bit method are documented in [its lifecycle evidence](docs/current-main-cwarehouseiteminfo-lifecycle.md).
The `CAircraft` allocation and aircraft-object initialization path is documented in
[the CAircraft constructor evidence](docs/current-main-58741c20-aircraft-constructor.md).
The aircraft record/stat initializer called from that launch path is documented
in [the CAircraft state initializer evidence](docs/current-main-5873a7c0-aircraft-state-initializer.md).
Its scaled child-coordinate update helper is documented in
[the child update evidence](docs/current-main-587b7500-aircraft-child-update.md).
The ship-map child action and state handler is documented in
[the action-state evidence](docs/current-main-588d75f0-child-action-state.md).
The ship-map update's state-0x60000 child/resource refresh is documented in
[the refresh evidence](docs/current-main-588deb30-ship-map-refresh.md).
Its type-9 and other-type timer/child refresh handlers are documented in
[their Main.dll evidence](docs/current-main-58859dd0-non-type9-timer-refresh.md).
The resource and child selection helper called by those timer paths is
documented in [its Main.dll evidence](docs/current-main-58858bd0-resource-selection.md).
The counter-display child initializer on the ship-map path is documented in
[its Main.dll evidence](docs/current-main-5884d420-counter-display.md).
The encoded counter and threshold-driven child updater used by both map update
paths is documented in [its Main.dll evidence](docs/current-main-588958c0-counter-refresh.md).
The six-value ship-map summary aggregation called from both update paths is
documented in [its Main.dll evidence](docs/current-main-587a6fb0-summary-refresh.md).
The three-input range/progress control initializer is documented in
[its Main.dll evidence](docs/current-main-588955a0-control-initializer.md).
The child flag-bit propagation helper is documented in
[its Main.dll evidence](docs/current-main-588d9c40-child-flag-propagation.md).
The mounted-engine progress calculation is documented in
[its Main.dll evidence](docs/current-main-588d9d20-mounted-engine-progress.md).
The child-coordinate update and linked-entry calculations are documented in
[its Main.dll evidence](docs/current-main-5888d5c0-child-coordinate-update.md).
The chat formatter and whisper history routine are documented in
[its Main.dll evidence](docs/current-main-58893e80-chat-message-formatting.md).
The state-consistency validator and report gate are documented in
[its Main.dll evidence](docs/current-main-587e6670-state-validator.md).
The subobject cleanup and constant update wrapper are documented in
[its Main.dll evidence](docs/current-main-5888ce00-subobject-update.md).
The receiver-gated identifier dispatcher is documented in
[its Main.dll evidence](docs/current-main-5887a3f0-identifier-dispatcher.md).
The current Main.dll child-state reset helper is documented in
[its Ghidra-backed evidence](docs/current-main-588536c0-child-state-reset.md).
The receiver-state initializer and its shared-table selection path are
documented in [the latest Main.dll evidence](docs/current-main-5885ee90-state-initializer.md).
The matching-list formatter and conditional host notice are documented in
[its Main.dll evidence](docs/current-main-5888e450-list-formatter.md).
The allocated linked-node insertion helper is documented in
[its Main.dll evidence](docs/current-main-58789fe0-linked-node-insertion.md).
The validation-gated string report helper is documented in
[its Main.dll evidence](docs/current-main-58752410-string-report.md).
The conditional display-text update helper is documented in
[its Main.dll evidence](docs/current-main-588d28a0-display-text-update.md).
The possible bounded-cursor validation helper is documented in
[its Main.dll evidence](docs/current-main-587a5080-bounded-cursor-validation.md).
The object-and-global flag predicate is documented in
[its Main.dll evidence](docs/current-main-587e7f20-flag-predicate.md).
The conditional receiver-field and low-flag setter is documented in
[its Main.dll evidence](docs/current-main-588b3b30-field-flag-setter.md).
The current Main.dll sprite file manager cleanup and deleting wrapper are
documented in [the class lifecycle evidence](docs/current-main-ship-sprite-file-manager-lifecycle.md).
The six methods called from the current Main.dll tag dispatcher are documented
in [the dispatcher helper evidence](docs/current-main-tag-dispatch-helper-methods.md).
The remaining direct dispatcher callees and their corrected boundaries are
documented in [the case helper evidence](docs/current-main-tag-dispatch-remaining-callees.md).
The message 0x80021104 child refresh helper and its two branch-specific tail
dispatches are documented in [the refresh evidence](docs/current-main-message-21104-child-refresh.md).
The 32-slot child update invoked by one dispatcher helper is documented in
[the child-update evidence](docs/current-main-32-slot-child-update-helper.md).
Its direct linked-list registration and removal helpers are documented in
[the link-primitive evidence](docs/current-main-child-link-primitives.md).
The latest parent UI-child constructor match is documented in
[the constructor evidence](docs/current-main-parent-ui-child-constructor-58847ab0.md).
Its three-child parent initializer is documented in
[the initializer evidence](docs/current-main-three-child-parent-initializer-5881de10.md).
The `+0xD8` communicator ID panel constructor and RTTI identification are
documented in [the ID-panel evidence](docs/current-main-communicator-id-panel-58849b70.md).
Its vtable event dispatcher and normal-path model are documented in
[the ID-panel event evidence](docs/current-main-communicator-id-event-58848bc0.md).
Its linked-pair guard and message path are documented in
[the pair-guard evidence](docs/current-main-communicator-id-pair-guard-58848b40.md).
The ID panel's vtable reset callback is documented in
[the reset evidence](docs/current-main-communicator-id-reset-58848b90.md).
Its shared 0xF231 child-callback path from both verified dispatchers is
documented in [the callback evidence](docs/current-main-id-panel-f231-callback.md).
The communicator configuration/memo handler's nine verified direct helpers
are documented in [the helper evidence](docs/current-main-communicator-config-memo-helpers.md).
The ID panel's virtual input method and eight-entry key jump table are
documented in [the input evidence](docs/current-main-communicator-id-input-5884ab90.md).
Its periodic movement and linked-list batch helper are documented in
[the update evidence](docs/current-main-communicator-id-periodic-58848e60.md).
The update evidence also covers the tested portable motion model and its
limits around nested child effects and rendering.
Its gated state setup is documented in
[the setup evidence](docs/current-main-communicator-id-setup-58848240.md).
Its destructor and linked-chain cleanup are documented in
[the teardown evidence](docs/current-main-communicator-id-teardown-58849540.md).
Recent Main.dll evidence includes the tag/selector dispatchers, selected-object
update amount handling, resource-state selection, vector direction lookup,
room-message formatting, outbound state reporting, encoded-state progress,
resource-child selection, state reset, message-text list insertion,
linked-record
text walk, bounded linked-record batch formatting, control-menu layout refresh,
stateful record refresh, stateful update
and initializer functions, message handlers, `CForce` child setup, and a
registered-rectangle predicate and matching pointer-vector erase helpers in
[the subsystem docs](docs/), plus the chat text prefilter, staged chat dispatch
gate ([evidence](docs/current-main-chat-staged-dispatch-gate.md)), three chat
category dispatch variants ([evidence](docs/current-main-chat-category-dispatch.md)),
child scalar propagation ([evidence](docs/current-main-child-scalar-propagation.md)),
child table/mode updates ([evidence](docs/current-main-child-state-table-and-mode.md)),
paired child activation ([evidence](docs/current-main-paired-child-activation.md)),
and a counted child selector updater ([evidence](docs/current-main-child-selector-updater.md)),
paired child enumeration ([evidence](docs/current-main-child-enumeration.md)),
selector flag/latch handling ([evidence](docs/current-main-selector-state-flags.md))
and status dispatch ([evidence](docs/current-main-selector-status-dispatch.md)), a scaled child
position updater ([evidence](docs/current-main-scaled-child-position.md)), record-to-child
text update paths, a table-backed effect-object emitter/initializer, and a
bounded text-notification builder, a shared nested-state cleanup helper, its
child-state reset/release routine, a corrected resource-object lifecycle
boundary, and two parallel linked-record removal helpers documented in
[the removal notes](docs/current-main-linked-record-removal-helper.md).
The latest runtime-error entry slice is documented in
[the current Core.dll status notes](docs/current-core-runtime-error-entry.md).
The latest current Main.dll fixed-record copy path is documented in
[the Main record-copy notes](docs/current-main-record-copy.md).
The six-byte current Main assertion thunk and its captured `_wassert` alias are
documented in [the thunk evidence](docs/current-main-assertion-thunk-5897cece.md).
The original `Logo.spr` startup and login art now has a reproducible
[RGB16 visual-path check](docs/current-client-logo-sprite-visual.md) against
the installed asset and matched loader/compositor methods.
A [native RGB16 span compositor](docs/current-client-native-rgb16-span.md)
now supports the observed opaque and RGB565 effect branches and reproduces
those framebuffers against the portable reference.
A [native v3.3 sprite index](docs/current-client-native-sangduck-v33.md) now
reads the installed `Logo.spr` directly, checks all 188 image records, and
feeds its first two frames through the C++ slot-1 renderer, including the
observed effect branch on the original payload bytes.
The latest keyed 0x3C8-byte record refresh/insertion path is documented in
[the keyed-record notes](docs/current-main-keyed-record-refresh-58786b40.md).
The latest three-child state update path is documented in
[the state-update notes](docs/current-main-three-child-state-update-587e7d40.md).
The latest keyed-table message helper is documented in
[the message-helper notes](docs/current-main-keyed-table-xor-message-587bb160.md).
The latest guarded child text update is documented in
[the child-text notes](docs/current-main-guarded-child-text-update-5882a680.md).
The latest three-pointer active-flag transition is documented in
[the flag-transition notes](docs/current-main-three-pointer-active-flag-transition-5886b9b0.md).
The latest unique-string fanout is documented in
[the dispatcher fanout notes](docs/current-main-unique-string-fanout-58831ae0.md).
The latest mode-gated child flag update is documented in
[the child-flag notes](docs/current-main-mode-gated-child-flags-587d6db0.md).
The latest 0x54-byte record append/growth path is documented in
[the record-path notes](docs/current-main-54-byte-record-append-58836af0.md).
The latest bounded progress-delta update is documented in
[the progress-delta notes](docs/current-main-bounded-progress-delta-588dcf50.md).
The latest linked-entry append path is documented in
[the append-helper notes](docs/current-main-linked-entry-append-587b4990.md).
The latest corrected bulk pointer cleanup extent is documented in
[the cleanup notes](docs/current-main-bulk-pointer-cleanup-588aeef0.md).
The latest corrected indexed-object refresh extent is documented in
[the indexed-object notes](docs/current-main-indexed-object-refresh-58755520.md).
The latest guarded chat-message dispatch is documented in
[the chat-dispatch notes](docs/current-main-guarded-chat-message-587b8110.md).
The latest installed-client startup child branch is documented in
[the startup child notes](docs/current-main-startup-child-path.md).
The latest shared linked-chain traversal helper is documented in
[the linked-chain notes](docs/current-main-linked-chain-distance.md).
The latest bounded client record insertion helper is documented in
[the record insertion notes](docs/current-main-bounded-record-insertion.md).
The latest shared option-selection helper is documented in
[the option-selection notes](docs/current-main-option-selection.md).
The latest bounded screen-state update helper is documented in
[the screen-state notes](docs/current-main-screen-state-update.md).
The latest six-field delta dispatcher is documented in
[the delta-dispatch notes](docs/current-main-six-field-delta-dispatch.md).
The latest fixed-step grid lookup is documented in
[the grid-lookup notes](docs/current-main-grid-record-lookup.md).
The latest child-parameter helper is documented in
[the child-parameter notes](docs/current-main-child-parameter-update.md).
The latest five-argument constructor wrapper is documented in
[the constructor notes](docs/current-main-unknown-vtable-constructor.md).
The latest conditional child-constructor path is documented in
[the child-constructor notes](docs/current-main-unknown-child-constructor.md).
The latest keyed record insert/refresh helper is documented in
[the record-refresh notes](docs/current-main-keyed-record-refresh.md).
The latest indexed file-record dispatch helper is documented in
[the indexed-dispatch notes](docs/current-main-indexed-file-record-dispatch.md).
The aggregate and child-state refresh, including a corrected function extent,
is documented in [the refresh notes](docs/current-main-aggregate-child-refresh.md).
The keyed 0x54-byte record removal helper, including its corrected extent, is
documented in [the removal notes](docs/current-main-keyed-record-removal.md).
The semicolon-delimited joined-fleet token parser is documented in
[the parser notes](docs/current-main-semicolon-record-parser.md).
Its shared 0xB4-byte record append helper is documented in
[the node-construction notes](docs/current-main-message-node-construction.md).
Its linked-node clear/reset helper is documented in
[the clear-helper notes](docs/current-main-linked-node-clear.md).
The latest fleet-join proposal record update path is documented in
[the fleet-join notes](docs/current-main-fleet-join-proposal-record-update.md).
The latest ranged selector update helper is documented in
[the selector notes](docs/current-main-ranged-selector-update.md).
The latest message `0x80020F0C` record path is documented in
[the proposal notes](docs/current-main-squadron-fleet-join-proposal.md).
Its shared collection range helper is documented in
[the helper notes](docs/current-main-shared-collection-range-helper.md).
The proposal identity lookup and fallback event forwarding are documented in
[the lookup notes](docs/current-main-proposal-identity-lookup-fallback.md).
The related two-key update/insert path and its 0x48-byte container growth chain
are documented in those lookup notes as well.
The corrected `0x80020F12` child-list update extent and observed state changes
are documented in
[the state-update notes](docs/current-main-message-80020f12-child-list-state-update.md).
The localized member squad-join proposal path is documented in
[the proposal helper notes](docs/current-main-member-squad-join-proposal.md).
The communication battle-record route is documented in
[the battle-record notes](docs/current-main-comm-battle-record-route.md).
The event 0x80021101 record-metric helper closure is documented in
[its focused notes](docs/current-main-80021101-record-metric-helpers.md).
The companion state-2/3 branch is documented in
[the state-transition notes](docs/current-main-comm-battle-record-state-2-3-route.md).
The shared bounded record-pointer lookup is documented in
[the accessor notes](docs/current-main-bounded-indexed-record-accessor.md).
The joined-fleet event's receiver-owned record append is documented in
[the record-append notes](docs/current-main-squadron-joined-fleet-record-append.md).
The selector-driven child rebuild shared by two state methods is documented in
[the child-rebuild notes](docs/current-main-selector-state-child-rebuild.md).
The registry-backed Main socket setup and parser handoff are documented in
[the connection notes](docs/current-main-socket-connect.md).
The shared communicator-configuration payload ordering helper is documented in
[the ordering notes](docs/current-main-linked-payload-ordering.md).
The latest linked-text update path is documented in
[the linked-text notes](docs/current-main-linked-text-update.md).
The latest progress-grid state update is documented in
[the progress-grid notes](docs/current-main-progress-grid-state-update.md).
The latest resource-backed child construction path is documented in
[the child-control notes](docs/current-main-resource-child-control.md).
The latest linked-entry hit dispatch path is documented in
[the hit-dispatch notes](docs/current-main-linked-entry-hit-dispatch.md).
The latest clipped buffer compositor is documented in
[the buffer-compositor notes](docs/current-main-clipped-buffer-or.md).
The latest linked-row hit selection is documented in
[the row-selection notes](docs/current-main-linked-row-hit-selection.md).
The latest encoded-field predicate is documented in
[the predicate notes](docs/current-main-encoded-threshold-predicate.md).
The linked state-reset continuation is documented in
[the state-reset notes](docs/current-main-predicate-state-reset.md).
The latest packed-record lookup is documented in
[the record-lookup notes](docs/current-main-packed-record-lookup.md).
The latest intrusive-list removal helper is documented in
[the list-removal notes](docs/current-main-intrusive-list-removal.md).
The latest linked-cursor advance helper is documented in
[the cursor-advance notes](docs/current-main-linked-cursor-advance.md).
The latest nested-state transition helper is documented in
[the nested-state notes](docs/current-main-nested-state-transition.md).
The latest linked-key update helper is documented in
[the linked-key notes](docs/current-main-linked-key-update.md).
The latest child-state clear helper is documented in
[the child-state clear notes](docs/current-main-child-state-clear.md).
The paired encoded-accumulator update is documented in
[the accumulator notes](docs/current-main-encoded-accumulator.md).
The text-buffer update helper is documented in
[the text-buffer notes](docs/current-main-text-buffer-update.md).
The linked-list end-position helper is documented in
[the end-position notes](docs/current-main-linked-list-end-position.md).
The selector wrapper is documented in
[the selector-wrapper notes](docs/current-main-selector-wrapper.md).
The latest shared state-bit setter is documented in
[the state-bit notes](docs/current-main-state-bit-setter.md).
The latest record-comparison path is documented in
[the record-comparison notes](docs/current-main-record-comparison.md).
The latest startup range-update helper is documented in
[the range-update notes](docs/current-main-startup-range-update.md).
The child state and division helper is documented in
[the child-state notes](docs/current-main-child-state-division.md).
The startup map-entry loop and its tree helpers are documented in
[the map-entry notes](docs/current-main-map-entry-loop.md).
The four sibling object constructors and shared callback path are documented in
[the shared object-hook notes](docs/current-main-shared-object-hook.md).
The high-fan-in low-nibble field setter is documented in
[the field-update notes](docs/current-main-low-nibble-field.md).
The 66-byte startup object initializer is documented in
[the initializer notes](docs/current-main-startup-object-initializer.md).
The startup record-processing subtree is documented in
[the record-processing notes](docs/current-main-startup-record-processing.md).
The screen's child-control constructors are documented in
[the child-control notes](docs/current-main-startup-child-controls.md).
The next screen child constructor is documented in
[the screen-child notes](docs/current-main-startup-screen-child.md).
The `FUN_58868B40` child-construction path is documented in
[the sibling-control notes](docs/current-main-sibling-controls.md).
The `FUN_5890C1D0` constructor subtree is documented in
[the nested-constructor notes](docs/current-main-nested-constructor.md).
The `FUN_5884F210` record-initialization path is documented in
[the record-initializer notes](docs/current-main-record-initializer.md).

```powershell
python tools/generate_progress.py
python tools/verify_matches.py
python tools/verify_matches.py --only game-server:00533743
python tools/verify_client_matches.py
python tools/find_repeated_functions.py --min-count 4 --limit 20
python -m unittest discover -s tests -v
```

The generated `NF2_2062_report` is validated against objdiff 3.8.0 locally and
uploaded by GitHub Actions to the active [decomp.dev dashboard](https://decomp.dev/rbxrootx/MissionFleet).

## First stock-client connection test

The recovered login transport framing and default port are implemented in a
local capture endpoint. Start it before launching the client:

```powershell
python -m emulator.login_server
```

It listens on `127.0.0.1:8010` and records raw and decoded client frames in
`captures/login-handshake.jsonl`. It also answers the verified initial protocol
probe, allowing the client to advance to its next request. See
[the recovered protocol notes](docs/login-protocol.md).

The supplied 2.062 client's `ITNTL.dll` contains one hardcoded
`shgame3.nf2.com.cn:8001` target. Create a hash-checked local copy and listen on
that client-facing port:

```powershell
python tools/patch_stock_client_endpoint.py `
  "private-inputs/navyfield-2062/CJN大海战2062_客户端/CJN大海战2062 客户端/ITNTL.dll" `
  "build/stock-client/ITNTL.dll"
python -m emulator.login_server --stock-client
```

Use the generated DLL in a separate client copy. The patcher refuses to modify
the evidence file in place and accepts only its recorded SHA-256. See
[the client bootstrap evidence](docs/stock-client-bootstrap.md).

The inspected installation is `D:\FleetMission`. Its files are never modified
in place. The client is launched only by the documented local capture tools.
The original game, assets and third-party server code are not included or
relicensed here.

## Native recovery pipeline

The supplied server programs use NsPack. The local pipeline extracts the
archives, recovers each compressed memory region, restores normalized branch
operands and import labels, then exports Ghidra pseudocode and indexes.

```powershell
python tools/inspect_inputs.py
python tools/unpack_nspack.py
python tools/recover_imports.py
python tools/run_decompilation.py
python tools/index_decompilation.py
python tools/verify_decompilation.py
```

Private binaries and derived pseudocode remain Git-ignored. See
[decomp/README.md](decomp/README.md) for exact local artifact locations,
recovery hashes, limits, and reproducibility details.

## Matching workflow

The recovered code is 32-bit x86. Visual C++ 6.0 SP5 with `/Od /GZ /GX-` is
confirmed for the first matched game function; see [compiler evidence](config/NF2_2062/COMPILER.md).
Decompiled functions move
into `src/login-server`, `src/game-server`, or `src/save-server`. A function is
promoted in `config/NF2_2062/matches.json` only after objdiff verifies a
byte-identical object-code match.

`tools/find_repeated_functions.py` ranks byte-identical unmatched bodies across
all three recovered server regions. Use its output to select a source pattern,
then add a match only after `tools/verify_matches.py` reports objdiff 100.0%.

## Client inspection and experimental asset preview

The PE inventory uses `pefile`; version 2023.2.7 is already installed here.
On another machine, install `requirements-analysis.txt` for PE metadata.

```powershell
python tools/inventory.py 'D:\FleetMission'
python tools/sprite_index.py 'D:\FleetMission'
python tools/sprite_preview.py 'D:\FleetMission\SPR\ShipStructureF000.spr' --frame 0 --output reports/ship-preview.png
python tools/sprite_preview.py 'D:\FleetMission\SPR\ShipStructureF000.spr' --frame 1 --output reports/ship-top-preview.png
python tools/sprite_gallery.py 'D:\FleetMission'
python tools/dump_loaded_module.py --launch 'D:\FleetMission\FleetMission.exe' --module Core.dll --output reports/unpacked-client --terminate
```

Generated reports are local and ignored by Git:

- `reports/inventory.json`: SHA-256 hashes, sizes, PE imports/exports, sections,
  version metadata and product URL evidence with file offsets.
- `reports/inventory.md`: readable inventory summary.
- `reports/sprites.json`: image metadata and payload offsets; this is large.
- `reports/ship-preview.png` and `reports/ship-top-preview.png`: experimental
  decoded previews from the user's local assets.

The sprite index supports observed v3.2/v3.3 image headers and rejects embedded
audio. The PNG preview supports the compressed two-byte pixel branch in format
`(2, 2)`, tied to the current recovered client loader.
Other pixel formats, animation metadata, maps, missions and encoded data tables
are not decoded. The module dumper reconstructs mapped VMProtect sections for
static analysis; it does not claim to lift functions that remain virtualized.

See [findings](docs/findings.md), [client unpacking](docs/client-unpacking.md),
[client render path](docs/client-render-path.md), [asset format notes](docs/asset-format.md),
[the current Core cleanup path](docs/current-core-cleanup-release.md),
[the Core pointer registry](docs/current-core-pointer-registry.md),
[the Core byte-stream handlers](docs/current-core-byte-stream-io.md),
[the Core buffered stream subsystem](docs/current-core-buffered-stream-io.md),
[the Core scan-conversion dispatch subsystem](docs/current-core-scan-conversion-dispatch.md),
[the Core UTF-8 conversion path](docs/current-core-utf8-conversion.md),
[the Core locale-record cache path](docs/current-core-locale-record-cache.md),
[the Core locale-record lifetime path](docs/current-core-locale-record-lifetime.md),
[decomp.dev integration](docs/decomp-dev.md), and [remaining work](docs/roadmap.md).
