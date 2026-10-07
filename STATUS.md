# Native decompilation status — 7 October 2026

The supplied files contain a historical NavyFIELD 2062 client and actual login,
game and persistence server binaries. They have been extracted and statically
decompiled. **A buildable source reconstruction and playable emulator are not
complete.**

The deterministic objdiff v2 report tracks 42,461 functions and 10,470,295
identified code bytes across six report units. There are 8,123 verified matches
totaling 2,592,439 bytes (19.1305% by functions, 24.7599% by bytes), each at
100.0% under objdiff 3.8.0. A
verified machine-code match is not by itself proof of recovered high-level
source or playable behavior. GitHub Actions publishes the generated report to
the active decomp.dev project. The linked-record collection refresh rooted at
`FUN_587487C0` adds 17 byte-identical functions / 4,646 bytes. Its matched
caller setup, global name-key lookup, exact Ghidra body ranges, and unresolved
collection/type semantics are recorded in
[its subsystem note](docs/current-main-linked-record-collection-refresh.md).
The equipment and mine-count panel refresh
rooted at `FUN_588429F0` adds 23 byte-identical functions / 5,086 bytes. Its
matched `0x8002312A` response gate, exact state setup, equipment/mine label
references, complete closure, and unverified field/virtual-call semantics are
recorded in
[its subsystem note](docs/current-main-equipment-panel-refresh.md). The
trading-system InfoData event path rooted at
`FUN_588F70E0` adds 23 byte-identical functions / 5,195 bytes. Its matched
`0x80027103` dispatcher, original argument setup, InfoData/MessageBox type
evidence, complete direct-transfer closure, and remaining questions are
recorded in
[its subsystem note](docs/current-main-trading-system-info-event.md). The
installed client's state-9 indexed-record path adds nine byte-identical
functions / 5,454 bytes. Its exact ranges, matched
caller gate, direct-call boundary, observed object construction, and unresolved
record semantics are recorded in
[the subsystem note](docs/current-main-state9-indexed-record-path.md). The
conditional state-9 selected-record application adds another 20 exact
instruction-stream matches / 7,633 bytes. Its matched table-scan caller,
`CAIFleet` child construction, shared mission-event entry, exact ranges, and
remaining schema uncertainties are recorded in
[its subsystem note](docs/current-main-state9-selected-record-application.md).
The current `ITFFM.spr` resource conversion path
adds two byte-identical functions / 2,473 bytes; its evidence and unresolved
callbacks are recorded in [the subsystem note](docs/current-main-itffm-sprite-resource.md).
The variable-record child-state refresh adds another two exact functions / 1,784
bytes, documented with its matched caller and unresolved field meanings in
[its subsystem note](docs/current-main-variable-record-child-state-refresh.md).
The ManageFleetTab event-dispatch path adds 15 exact instruction-stream matches /
3,930 bytes, grounded in its vtable slot and closed direct-call graph; behavior
and source-recovery limits are recorded in
[its subsystem note](docs/current-main-manage-fleet-event-dispatch.md).
The PageFight mode-7 OpConvoy box/cargo update adds 29 exact
instruction-stream matches / 10,594 bytes. Its caller path, state evidence,
exact body ranges, and remaining uncertainties are recorded in
[the subsystem note](docs/current-main-opconvoy-state-update.md).
The PageFight 25-tick counter and threshold update adds four exact matches /
1,237 bytes, with the matched update method, conditional call gate, direct-call
closure, and unresolved field meanings recorded in
[its subsystem note](docs/current-main-pagefight-tick-progress.md).
The installed client's non-null `0x8002C101` update path adds 16 exact matches
/ 12,289 bytes; its matched dispatcher branch, direct-transfer closure, shared
helper, and unresolved payload semantics are documented in
[its subsystem note](docs/current-main-message-8002c101-update.md).
The installed client's `0x80020A00` chat/display path adds 19 exact matches /
8,961 bytes. Its five calls from the matched dispatcher, both parallel panel
routes, and complete direct-call closure are documented in
[its subsystem note](docs/current-main-message-80020a00-chat-display.md); its
protocol payload schema and live-server compatibility remain unknown.
The installed client's `0x8002C104` record-action path adds 13 exact matches /
3,533 bytes. Its nine calls from the matched dispatcher, decoded action groups,
closed direct-call boundary, and remaining field uncertainties are documented
in [its subsystem note](docs/current-main-message-8002c104-record-action.md).
The PageFight `CPageFightOn_ControlMenuScreen` update loop adds 149 exact
matches / 48,515 bytes. Its caller path, observed object scans and update
branches, exact direct-call boundary, and unresolved semantic/runtime questions
are recorded in
[its subsystem note](docs/current-main-pagefight-control-update-loop.md).
The current Main.dll sprite file manager cleanup and deleting wrapper are
recorded in [the lifecycle evidence](docs/current-main-ship-sprite-file-manager-lifecycle.md).
The six methods called from the current Main.dll tag dispatcher are recorded
in [the helper evidence](docs/current-main-tag-dispatch-helper-methods.md).
The remaining direct dispatcher callees and their corrected boundaries are
recorded in [the case helper evidence](docs/current-main-tag-dispatch-remaining-callees.md).
The 32-slot child update called from a tag-dispatch helper is documented in
[the child-update evidence](docs/current-main-32-slot-child-update-helper.md).
Its direct linked-list registration and removal helpers are documented in
[the link-primitive evidence](docs/current-main-child-link-primitives.md).
Four query-type record lookups extend the existing startup record-processing
matches; their three verified callers and per-type array layouts are recorded
in [the record-processing evidence](docs/current-main-startup-record-processing.md).
Nine direct callees of the RTTI-backed communicator configuration/memo
handler now match exactly; their call counts, observed responsibilities, and
corrected extents are recorded in
[the helper evidence](docs/current-main-communicator-config-memo-helpers.md).

The latest current-client parent UI-child constructor is recorded in
[the constructor evidence](docs/current-main-parent-ui-child-constructor-58847ab0.md).
Its three-child parent initializer and portable normal-path model are recorded
in [the initializer evidence](docs/current-main-three-child-parent-initializer-5881de10.md).
The `+0xD8` communicator ID panel constructor, RTTI name, and corrected return
extent are recorded in [the ID-panel evidence](docs/current-main-communicator-id-panel-58849b70.md).
Its vtable event dispatcher, branch mapping, and portable normal-path model
are recorded in [the event-path evidence](docs/current-main-communicator-id-event-58848bc0.md).
The event path's linked-pair guard and message ID `0x208` are recorded in
[the pair-guard evidence](docs/current-main-communicator-id-pair-guard-58848b40.md).
The ID-panel vtable reset callback is recorded in
[the reset evidence](docs/current-main-communicator-id-reset-58848b90.md).
Its portable event model now checks the linked-action callback order and
the reset's resulting position and flag changes together.
The ID-panel input method and its separately verified key jump table are
recorded in [the input evidence](docs/current-main-communicator-id-input-5884ab90.md).
The installed `Logo.spr` startup and login frames have a reproducible
[RGB16 visual-path check](docs/current-client-logo-sprite-visual.md), including
pixel agreement between two independent decoded/composited paths. It is
asset-frame validation, not a bootable client or original-framebuffer comparison.
A [native C++ RGB16 span path](docs/current-client-native-rgb16-span.md)
now matches the portable framebuffer bytes on those frames and a clipped case.
It includes the opaque copy and observed RGB565 effect branches, and is excluded
from objdiff coverage. The native v3.3 index now feeds original `Logo.spr`
payloads through that same slot-1 bridge, including a full-frame effect check.
These are semantic-model comparisons, not live-client framebuffer captures.
A [native v3.3 sprite index](docs/current-client-native-sangduck-v33.md) now
validates all 188 installed `Logo.spr` image records and renders the first two
directly from original file bytes. It is also outside objdiff coverage.
Its periodic movement and bounded two-list batch path are recorded in
[the update evidence](docs/current-main-communicator-id-periodic-58848e60.md).
The update path now has a portable receiver-local motion model with tested
counter, position, size, completion-state, and child-callback behavior.
The same panel's vtable state-setup method is recorded in
[the setup evidence](docs/current-main-communicator-id-setup-58848240.md).
Its destructor wrapper, cleanup body, and linked-chain release are recorded
in [the teardown evidence](docs/current-main-communicator-id-teardown-58849540.md).

The current Main.dll linked-selection successor at `0x58908680` now matches
all 106 original instruction bytes. Both verified callers' indexed direct
targets are matched; the [function evidence](docs/current-main-list-successor-58908680.md)
records the pointer walk and its unresolved indirect refresh behavior.
Four related [list-control methods](docs/current-main-list-control-vtable.md)
now add 844 exact bytes across lifecycle, callback, clipped drawing, and event
dispatch. Nine original table slots and two corrected body extents are checked.
Five more methods add 249 exact bytes and complete the same table's 16 verified
slots, including its jump-table input path. The deleting wrapper's corrected
extent adds the missing three-byte `ret 4`.
The RTTI-backed `CRollListTextScreen` [update and lifecycle](docs/current-main-roll-list-text-screen.md)
add 176 exact bytes. Its constructor and all 16 table entries now have verified
instruction matches; the update's clock units and visible motion remain open.

Three current-client pointer getters (`FUN_587453A0`, `FUN_588D66D0`, and
`FUN_58759EB0`) have been rewritten as ordinary C++ and still compile to all
28 original bytes. This improves source reconstruction without changing the
matched-function count.

The `FUN_58907360` number-state setter now also uses C++ with its direct call
to `FUN_58907040` symbolically matched; this is a source-quality improvement
and does not increase coverage.

A portable C++ behavior model for the 191-byte `FUN_58907040` digit formatter
is recorded separately with six passing edge cases. It is not byte-identical
and is excluded from the match count.
The two `CNumberScreen` bounded-step helpers likewise have a portable C++
behavior model with four passing scenarios; their byte-identical instruction
sources remain the counted matches.
The matched two-key record update and its 0x54/0x84-stride wrappers now have
a [portable end-to-end model](docs/current-main-two-key-record-update-model.md)
with passing insert, update, and second-key-miss cases. It is excluded from
the byte-match count.

Recent current Main.dll helper evidence is documented in
[`docs/current-main-paired-record-text.md`](docs/current-main-paired-record-text.md),
[`docs/current-main-record-text-state-update.md`](docs/current-main-record-text-state-update.md),
[`docs/current-main-simple-outbound-messages.md`](docs/current-main-simple-outbound-messages.md),
[`docs/current-main-masked-word-message.md`](docs/current-main-masked-word-message.md),
[`docs/current-main-outbound-text-notice.md`](docs/current-main-outbound-text-notice.md),
[`docs/current-main-token-record-dispatch.md`](docs/current-main-token-record-dispatch.md),
[`docs/current-main-linked-child-teardown.md`](docs/current-main-linked-child-teardown.md),
[`docs/current-main-six-field-record-ingestion.md`](docs/current-main-six-field-record-ingestion.md),
[`docs/current-main-linked-name-lookups.md`](docs/current-main-linked-name-lookups.md),
[`docs/current-main-rule-text-window.md`](docs/current-main-rule-text-window.md),
[`docs/current-main-panel-base-teardown.md`](docs/current-main-panel-base-teardown.md),
[`docs/current-main-two-index-metadata-copy.md`](docs/current-main-two-index-metadata-copy.md),
[`docs/current-main-bounded-scalar-adjustment.md`](docs/current-main-bounded-scalar-adjustment.md),
[`docs/current-main-linked-node-payload-reset.md`](docs/current-main-linked-node-payload-reset.md),
[`docs/current-main-eight-slot-node-cleanup.md`](docs/current-main-eight-slot-node-cleanup.md),
[`docs/current-main-selected-child-flag-reset.md`](docs/current-main-selected-child-flag-reset.md),
[`docs/current-main-global-gated-child-release.md`](docs/current-main-global-gated-child-release.md),
[`docs/current-main-number-screen-bounded-step.md`](docs/current-main-number-screen-bounded-step.md),
[`docs/current-main-encoded-paired-child-update.md`](docs/current-main-encoded-paired-child-update.md),
[`docs/current-main-leaf-state-and-geometry-accessors.md`](docs/current-main-leaf-state-and-geometry-accessors.md),
[`docs/current-main-eight-child-mode-refresh.md`](docs/current-main-eight-child-mode-refresh.md),
[`docs/current-main-child-list-lookups.md`](docs/current-main-child-list-lookups.md),
[`docs/current-main-selector-state-flags.md`](docs/current-main-selector-state-flags.md),
[`docs/current-main-selector-status-dispatch.md`](docs/current-main-selector-status-dispatch.md),
[`docs/current-main-child-enumeration.md`](docs/current-main-child-enumeration.md),
[`docs/current-main-child-selector-updater.md`](docs/current-main-child-selector-updater.md),
[`docs/current-main-paired-child-activation.md`](docs/current-main-paired-child-activation.md),
[`docs/current-main-child-state-table-and-mode.md`](docs/current-main-child-state-table-and-mode.md),
[`docs/current-main-child-scalar-propagation.md`](docs/current-main-child-scalar-propagation.md),
[`docs/current-main-chat-category-dispatch.md`](docs/current-main-chat-category-dispatch.md),
[`docs/current-main-scaled-child-position.md`](docs/current-main-scaled-child-position.md),
[`docs/current-main-chat-staged-dispatch-gate.md`](docs/current-main-chat-staged-dispatch-gate.md),
[`docs/current-main-state-update-amount.md`](docs/current-main-state-update-amount.md),
[`docs/current-main-resource-state-selection.md`](docs/current-main-resource-state-selection.md),
[`docs/current-main-vector-direction-index.md`](docs/current-main-vector-direction-index.md),
[`docs/current-main-room-message-formatting.md`](docs/current-main-room-message-formatting.md),
[`docs/current-main-outbound-state-report.md`](docs/current-main-outbound-state-report.md),
[`docs/current-main-encoded-state-update.md`](docs/current-main-encoded-state-update.md),
[`docs/current-main-state-resource-children.md`](docs/current-main-state-resource-children.md),
[`docs/current-main-state-transition-progress.md`](docs/current-main-state-transition-progress.md),
[`docs/current-main-state-reset-transition.md`](docs/current-main-state-reset-transition.md),
[`docs/current-main-message-text-list.md`](docs/current-main-message-text-list.md),
[`docs/current-main-linked-payload-lookup.md`](docs/current-main-linked-payload-lookup.md)
and [`docs/current-main-indexed-pointer-lookup.md`](docs/current-main-indexed-pointer-lookup.md),
[`docs/current-main-nested-state-cleanup.md`](docs/current-main-nested-state-cleanup.md),
[`docs/current-main-child-state-reset-release.md`](docs/current-main-child-state-reset-release.md),
[`docs/current-main-resource-object-lifecycle.md`](docs/current-main-resource-object-lifecycle.md),
[`docs/current-main-linked-record-removal-helper.md`](docs/current-main-linked-record-removal-helper.md),
[`docs/current-main-bounded-dispatcher-text-update.md`](docs/current-main-bounded-dispatcher-text-update.md),
[`docs/current-main-parallel-collection-selection-update.md`](docs/current-main-parallel-collection-selection-update.md),
[`docs/current-main-sprite-data-screen-base-constructor.md`](docs/current-main-sprite-data-screen-base-constructor.md),
[`docs/current-main-null-safe-pointer-getter.md`](docs/current-main-null-safe-pointer-getter.md),
[`docs/current-main-field-getter-6088.md`](docs/current-main-field-getter-6088.md),
[`docs/current-main-field-getter-0004.md`](docs/current-main-field-getter-0004.md),
and [`docs/current-main-tag-dispatch-587e0090.md`](docs/current-main-tag-dispatch-587e0090.md).
The two-word update thunk is documented in
[`docs/current-main-pair-update-thunk.md`](docs/current-main-pair-update-thunk.md).
The keyed 0x3C8-byte record refresh/insertion path is documented in
[`docs/current-main-keyed-record-refresh-58786b40.md`](docs/current-main-keyed-record-refresh-58786b40.md).
The three-child state-flag update and notification path is documented in
[`docs/current-main-three-child-state-update-587e7d40.md`](docs/current-main-three-child-state-update-587e7d40.md).
The keyed-table XOR message helper is documented in
[`docs/current-main-keyed-table-xor-message-587bb160.md`](docs/current-main-keyed-table-xor-message-587bb160.md).
The guarded child text update is documented in
[`docs/current-main-guarded-child-text-update-5882a680.md`](docs/current-main-guarded-child-text-update-5882a680.md).
The three-pointer active-flag transition is documented in
[`docs/current-main-three-pointer-active-flag-transition-5886b9b0.md`](docs/current-main-three-pointer-active-flag-transition-5886b9b0.md).
The paired unique-string fanout helpers from both dispatchers are documented in
[`docs/current-main-unique-string-fanout-58831ae0.md`](docs/current-main-unique-string-fanout-58831ae0.md).
The mode-gated child flag update is documented in
[`docs/current-main-mode-gated-child-flags-587d6db0.md`](docs/current-main-mode-gated-child-flags-587d6db0.md).
The 0x54-byte record append/growth helper is documented in
[`docs/current-main-54-byte-record-append-58836af0.md`](docs/current-main-54-byte-record-append-58836af0.md).
The bounded progress-delta update is documented in
[`docs/current-main-bounded-progress-delta-588dcf50.md`](docs/current-main-bounded-progress-delta-588dcf50.md).
The linked-entry append helper is documented in
[`docs/current-main-linked-entry-append-587b4990.md`](docs/current-main-linked-entry-append-587b4990.md).
The corrected bulk pointer cleanup extent is documented in
[`docs/current-main-bulk-pointer-cleanup-588aeef0.md`](docs/current-main-bulk-pointer-cleanup-588aeef0.md).
The corrected indexed-object refresh extent is documented in
[`docs/current-main-indexed-object-refresh-58755520.md`](docs/current-main-indexed-object-refresh-58755520.md).
The guarded chat-message dispatch is documented in
[`docs/current-main-guarded-chat-message-587b8110.md`](docs/current-main-guarded-chat-message-587b8110.md).
The state-update handler is documented in
[`docs/current-main-state-update-587f21e0.md`](docs/current-main-state-update-587f21e0.md).
The selector dispatcher is documented in
[`docs/current-main-selector-dispatch-587a75e0.md`](docs/current-main-selector-dispatch-587a75e0.md).
The linked-record text walk and corrected return extent are documented in
[`docs/current-main-linked-record-text-walk.md`](docs/current-main-linked-record-text-walk.md).
The bounded linked-record batch formatter is documented in
[`docs/current-main-bounded-linked-record-batch.md`](docs/current-main-bounded-linked-record-batch.md).
The control-menu child-layout refresh is documented in
[`docs/current-main-control-menu-layout-refresh.md`](docs/current-main-control-menu-layout-refresh.md).
The stateful record refresh and corrected epilogue extent are documented in
[`docs/current-main-stateful-record-refresh-58838cb0.md`](docs/current-main-stateful-record-refresh-58838cb0.md).

The 6-byte import trampoline used by 11 call sites is documented in
[`docs/current-main-import-thunk-5897ce44.md`](docs/current-main-import-thunk-5897ce44.md).

The latest verified additions are `FUN_587eae10` (a 1,079-byte stateful
update/dispatch), `FUN_5875be60` (a 915-byte initializer reached from shell and
weapon-fire paths), `FUN_58755170` (a 932-byte handler for message
`0x80020FA2` whose Ghidra extent omitted two epilogue bytes),
`FUN_58847770` (a 718-byte handler called for message `0x80020F02`), and
`FUN_5877adc0` (a 700-byte selector-driven `CForce` child setup method), and
`FUN_588391b0` (a 677-byte two-collection update called after the fleet-join
proposal notification path), and `FUN_588ebfa0` (a 221-byte ranged selector
update used by three verified state handlers), and `FUN_58839460` (a 649-byte
record path reached from message case `0x80020F0C`), `FUN_58753bf0` (a
197-byte two-key lookup used by that path), and `FUN_587b9290` (a 29-byte
wrapper forwarding event `0x80010F06`), `FUN_58839cf0` (a 573-byte
case-`0x80020F12` state update whose inventory extent was corrected from 559
bytes), and `FUN_5883ddf0` (a 384-byte helper called after the localized member
squad-join proposal notice), and `FUN_588399a0` (a 471-byte message
`0x80020F06` handler using the `STRING_COMM_BATTLE_RECORD` resource). Together,
the thirteen functions add 7,545 byte-matched bytes. Their field and helper
meanings remain partially unknown; no emulator test was performed. See
[`docs/current-main-stateful-dispatch-587eae10.md`](docs/current-main-stateful-dispatch-587eae10.md),
[`docs/current-main-shared-object-initializer-5875be60.md`](docs/current-main-shared-object-initializer-5875be60.md),
[`docs/current-main-message-80020fa2-helper.md`](docs/current-main-message-80020fa2-helper.md),
[`docs/current-main-message-80020f02-handler.md`](docs/current-main-message-80020f02-handler.md), and
[`docs/current-main-cforce-selector-child-setup.md`](docs/current-main-cforce-selector-child-setup.md).
The corrected function extent, mapped epilogue, and remaining uncertainties
for `FUN_588391b0` are recorded in
[`docs/current-main-fleet-join-proposal-record-update.md`](docs/current-main-fleet-join-proposal-record-update.md).
The selector's caller values and verified control flow are recorded in
[`docs/current-main-ranged-selector-update.md`](docs/current-main-ranged-selector-update.md).
The `0x80020F0C` record handling and its embedded proposal message key are
documented in
[`docs/current-main-squadron-fleet-join-proposal.md`](docs/current-main-squadron-fleet-join-proposal.md).
Its shared collection range helper and three verified callers are documented
in [`docs/current-main-shared-collection-range-helper.md`](docs/current-main-shared-collection-range-helper.md).
The identity lookup and zero-result forwarding path are detailed in
[`docs/current-main-proposal-identity-lookup-fallback.md`](docs/current-main-proposal-identity-lookup-fallback.md).
`FUN_58754C00` and the four helpers on its record-append/growth path now add
1,274 exact bytes. The corrected 661-byte `FUN_587540C0` extent includes its
cookie check and return after the earlier 637-byte index stopped mid-epilogue.
Argument, record, callback, and ownership meanings remain unresolved; no
emulator test was performed. See the same lookup notes for the full call path.
The corrected extent and caller evidence for the case-`0x80020F12` update are
in [`docs/current-main-message-80020f12-child-list-state-update.md`](docs/current-main-message-80020f12-child-list-state-update.md).
The member squad-join proposal path and its callback/collection uncertainties
are documented in
[`docs/current-main-member-squad-join-proposal.md`](docs/current-main-member-squad-join-proposal.md).
The battle-record resource path is documented in
[`docs/current-main-comm-battle-record-route.md`](docs/current-main-comm-battle-record-route.md).
Its state-2/3 continuation now has a 356-byte exact match with 15 operand
targets checked. The null-record branches clear child flags and reset receiver
state; the record branch attempts an indexed lookup or copies the record string
and dispatches a follow-up helper. Record fields, helper contracts, and visible
effects remain unresolved; no emulator test was performed. See
[`docs/current-main-comm-battle-record-state-2-3-route.md`](docs/current-main-comm-battle-record-state-2-3-route.md).
The shared 46-byte indexed record accessor `FUN_58755FF0` is also matched, with
four callers in the mapped call inventory. It enforces its receiver gate, index
bound, and array-pointer checks before returning a slot or null. The collection
and caller index semantics remain unknown; no runtime test was performed. See
[`docs/current-main-bounded-indexed-record-accessor.md`](docs/current-main-bounded-indexed-record-accessor.md).
`FUN_58849210` adds a 294-byte exact match for the joined-fleet notification
path. Its two verified callers format `MESSAGESTRING__SQUADRON_JOINED_FLEET`
and pass packet text to a helper that initializes and links a receiver-owned
record. Object meaning and callback contracts remain unknown; no emulator test
was performed. See
[`docs/current-main-squadron-joined-fleet-record-append.md`](docs/current-main-squadron-joined-fleet-record-append.md).
Its shared 283-byte append helper, `FUN_588490F0`, is now matched from both
the count-checked semicolon parser and an event-message path. It builds a
0xB4-byte node, updates the observed `+0x6C/+0x70` links and `+0xF2` count, and
calls the matched 390-byte `FUN_588486E0` refresh helper. That helper's indexed
extent was corrected to include its conditional branch and return; record,
state, and callback semantics remain uncertain. See
[`docs/current-main-message-node-construction.md`](docs/current-main-message-node-construction.md).
The shared 605-byte `FUN_58780640` child rebuild now matches with 18 operand
targets checked. Two verified state methods pass it an object's byte at `+0x354`;
the helper resets receiver bookkeeping, performs bounded global-table lookups,
copies selected record fields, and clears links across eight entries. Selector
labels and runtime effects remain unresolved; no emulator test was performed.
See [`docs/current-main-selector-state-child-rebuild.md`](docs/current-main-selector-state-child-rebuild.md).

The latest bounded client record helper is `FUN_5877ABA0`, a 151-byte routine
called by six verified functions. It copies a supplied string into a fixed
0x80-byte field, stores two additional words, and updates a bounded pointer
array. The collection semantics and metadata meanings are not yet identified;
the original byte sequence and five relocations match under objdiff.

The latest shared option-selection helper is `FUN_588EBEB0`, a 238-byte routine
called from five verified functions. It gates on global `0x589C9074`, queries
the selected child through virtual slot `+0x14`, and on the observed fallback
stores a derived value and dispatches two more updates. The option labels and
meaning of the mode value remain unresolved; its four relocations match under
objdiff.

The latest screen-state helper is `FUN_5890BD90`, a 121-byte routine called by
five verified functions. It calculates a signed quotient from receiver fields,
checks indexed state bounds, conditionally updates the receiver and calls three
observed helpers/callbacks. Field units and the visible effect remain unknown;
its five relocations match under objdiff.

The latest six-field delta dispatcher is `FUN_588DCDD0`, a 101-byte helper
called by five verified functions. Selectors 0–1 subtract a delta from fields
`+0x128C/+0x1290`; selectors 2–5 add it to `+0x1294..+0x12A0`. It forwards to
`FUN_587E7710` for the observed designated receiver. The fields' domain meaning
remains unknown; all three relocations match under objdiff.

The latest fixed-step grid lookup is `FUN_587C3D60`, a 97-byte helper called by
five verified functions. It divides two inputs by the receiver's step fields,
bounds-checks the resulting indices, and returns a pointer to a 0x14-byte
record in a column-major table. Both step fields must equal 18. The record and
coordinate meanings remain unknown; the complete body matches with no
relocations.

The latest child-parameter helper is `FUN_587B6020`, a 65-byte routine called
by five verified functions. It stores two arguments, writes the fixed value
`0x40000000`, and, if a child pointer is present, calls `FUN_587B7400` with
derived values and global `0x58A248F8`. The field units and child behavior
remain unknown; both relocations match under objdiff.

The latest five-argument constructor wrapper is `FUN_58907C80`, a 47-byte
routine called by five verified functions. It forwards the receiver and all
five arguments to `FUN_58734A30`, installs vtable address `0x589A2988`, and
returns the receiver. The class and general purpose remain unidentified; the
ship-map call chain resolves the arguments for that use as owner, resource
record, x, y, and sort key. Both relocations match under objdiff.

The latest shared state-bit setter is `FUN_5873A540`, a 40-byte helper called
by five verified functions. It assigns receiver word `+0x24` bit `0x4` from the
argument's low bit while preserving the other bits. The bit's meaning is
unknown; its complete body matches with no relocations.

The latest record-comparison path is `FUN_58775980`, a 656-byte routine called
by four verified functions. It compares fields at fixed offsets, scans a
pointer list for matching entries, and falls back to three helper comparisons.
The receiver and record schemas and return-code meanings remain unresolved;
all 28 relocations match under objdiff.

The latest conditional child-constructor path is `FUN_587B7130`, a 303-byte,
seven-argument initializer called by verified spatial-state and shell-map
update routines. It shares vtable address point `0x5899A118` with the previously
matched `FUN_587B7260`, forwards arguments to `0x58734A30`, initializes receiver
fields, and conditionally creates and initializes a child through
`0x587B7350`. Its class, argument meanings, and child type remain unresolved.
All 14 operand targets match the mapped image under objdiff.

The latest keyed record insert/refresh helper is `FUN_58754D60`, a 275-byte
routine called from packet/message and event dispatch paths. It uses the first
two DWORDs of an incoming record to choose between inserting a complete
0x808-byte record and refreshing the 0x800-byte payload of existing entries
sharing the second DWORD. The names and semantics of those fields and the
reason for the refresh rule remain unknown. All 16 operand targets match the
mapped image; see [the record-refresh evidence](docs/current-main-keyed-record-refresh.md).

The latest indexed file-record dispatch helper is `FUN_587C45C0`, a 273-byte
routine called with index 1 from packet/message initialization and index 2
from a scene/object update. It honors a per-index completion flag, reads a
0x128-byte record, searches the receiver's pointer array for a matching string,
and dispatches message `0x80025004` on a match. File and record identities and
the message's visible effect remain unknown. All 11 operand targets match the
mapped image; see [the indexed-dispatch evidence](docs/current-main-indexed-file-record-dispatch.md).

The latest aggregate and child-state refresh is `FUN_587E7E00`. Its indexed
extent was corrected from 273 to 281 bytes after the old boundary was found to
cut through the final store; the recovered body now includes its register
restores and `ret`, with seven padding bytes before the following function.
The routine recomputes receiver field `+0x10A18` from a linked object chain,
clears twenty dwords at `+0x124..+0x170`, and conditionally refreshes up to eight
children through `FUN_588B3720`. Its class and field meanings remain unknown.
All four operand targets match; see [the extent and behavior notes](docs/current-main-aggregate-child-refresh.md).

The latest keyed record removal helper is `FUN_58835A10`. Its corrected extent
is 278 bytes; the previous 270-byte index ended inside `xor eax,eax` and omitted
the remaining return sequence. It searches 0x54-byte entries by comparing the
bytes at `+0x2D`, shifts later entries down after a match, shortens the end
pointer, and returns 1; no match returns 0. Ten operand targets match, with ten
`0xCC` padding bytes before the next function. Record and key meanings remain
unknown; see [the removal evidence](docs/current-main-keyed-record-removal.md).

The latest semicolon-delimited token parser is `FUN_58849440`, a 242-byte
routine called by both packet and event dispatchers. It skips tokens matching
global string `0x58A0B450`, sends other tokens to the verified joined-fleet
notice append helper `FUN_58849210`, conditionally resets receiver-owned nodes,
then dispatches callback message `0xEE49`. The token format and selector
semantics are not fully resolved. All nine operand targets match; see [the
parser evidence](docs/current-main-semicolon-record-parser.md).

The parser's linked-node clear helper, `FUN_58848610`, is a 97-byte routine
also called from packet and event reset paths. It walks backward from receiver
tail `+0x68` through node link `+0x50`, invokes each node's first vtable method
with argument 1, and clears receiver list/count fields. Its full body matches
with no relocations; callback and field semantics remain unresolved. See [the
clear-helper evidence](docs/current-main-linked-node-clear.md).

`FUN_588DD1B0` is a 237-byte predicate called from aircraft-flight-state and
ship-object update paths. It scans linked rectangle records and returns 1 when
the receiver coordinates fall inside a record's half-open bounds. Its optional
argument excludes a receiver with the same `+0x354` byte as the global object.
All six operand targets match. The rectangle collection's game meaning is
unknown; see [the predicate evidence](docs/current-main-registered-rectangle-predicate.md).

`FUN_58835920` is a 236-byte matching pointer-range erase helper called from
the verified packet and event dispatchers. It compares each entry with the
caller's text pointer, removes the first comparator-equal entry, shifts the
remaining pointers, and returns whether it erased one. The container and
string semantics remain unknown; see [the erase evidence](docs/current-main-matching-pointer-vector-erase.md).

Its companion `FUN_5883B3B0` erases from a second pointer range at receiver
`+0x228..+0x22C`; the first helper uses `+0x264..+0x268`. Both are called by the
same verified packet and event dispatchers under separate observed guards, and
both match all 236 bytes. The collections' contents and roles remain unknown;
see [the paired erase evidence](docs/current-main-matching-pointer-vector-erase.md).

The chat path helper `FUN_587B81A0` checks text through host callback wrapper
`FUN_587A2D40`, compares a 24-byte string against three receiver slots, and
conditionally dispatches selector `0x80020A00`. Its 226 bytes and seven
operand targets match. The slot schema, policy meaning, and message effect
remain unknown; see [the chat prefilter evidence](docs/current-main-chat-text-prefilter.md).

`FUN_588DCC10` copies message-record fields and transformed text into two
receiver buffers, then updates a child text/control object according to the
copied word at receiver `+0x1338`. Four packet/event dispatcher call sites
support this path. Its 225 bytes and seven operand targets match; field and
callback meanings remain unresolved. See [the record-to-child update evidence](docs/current-main-record-to-child-text-update.md).

The table-backed effect emitter `FUN_588F5040` and initializer `FUN_5876BE10`
match 420 bytes across 14 operands. The emitter loops over `0x84`-byte
allocations and selects optional `0x40`-stride table entries; the initializer
copies the entry fields and computes three thunk-derived object values. The
host thunk, object class, table schema, and visible effect are unknown. See
[the effect-emission evidence](docs/current-main-randomized-effect-object-emission.md).

`FUN_587B7D90` builds a bounded text payload and sends selector `0x8001B111`.
Its verified callers vary a 16-bit value under three observed masks. The 220
bytes and six operand targets match, while the payload, mask, and selector
meanings remain unknown. See [the text-notification evidence](docs/current-main-bounded-text-notification.md).

The latest linked-text update path is `FUN_5888D250`, a 119-byte routine called
by four verified functions. It rebuilds linked storage in the context at
receiver `+0x4C4` from a null-terminated argument, adjusts its boundary at a
count-minus-ten condition, then updates the companion context at `+0x4C0`.
The exact control type, argument semantics, and user-visible effect are still
unknown. All five call relocations match under objdiff.

The latest progress-grid state update is `FUN_58780330`, a 771-byte routine
called by three verified functions. It adds its first argument to receiver
`+0xAC`, computes a quantized progress byte from `+0xAC` and `+0xA8`, updates
per-slot byte state and two parallel arrays from a global lookup table, and
uses a guarded global-state branch to update an object at `+0xB0`. The receiver
type, argument units, and user-visible role remain unknown. All 17 mapped
operand targets match under objdiff.

The latest packed-record lookup is `FUN_58778DC0`, an 87-byte routine called
by three verified functions. It scans `+0xE4` records at `+0xF0`, comparing a
packed key's low byte, next byte, and upper word against record offsets 0, 1,
and 2; it returns the matching record pointer or null. The record and key
semantics remain unknown. Its complete body matches with no relocations.

The latest intrusive-list removal helper is `FUN_588F5120`, an 85-byte
routine called by three verified functions. It finds a node by payload, repairs
neighbor/head/tail links, and decrements the list count without freeing the
node. The list owner and payload meanings remain unknown; the full extent
matches with no relocations.

The latest linked-cursor advance helper is `FUN_58908600`, a 68-byte routine
called repeatedly by three verified functions. It initializes the current
pointer from `+0x7C` when empty; otherwise it advances `+0x84` through the
current node's `+0x10` link, also advancing head `+0x80` when it pointed at
that node, then dispatches virtual slot `+0x3C`. The field and callback roles
remain unknown; its complete body matches with no relocations.

The latest nested-state transition helper is `FUN_587CC700`, a 66-byte routine
called by three verified functions (with two callsites in one caller). It
checks the nested object's byte at `+0x74`, then for arguments 1 or 2 calls
`0x587C9F30(nestedObject, 1, 0)` and stores 2 or 1 at `+0x75`. Every observed
caller passes 2. The byte-field roles and user-visible state remain unknown;
the full extent matches with two mapped operand targets.

The latest linked-key update helper is `FUN_58731590`, a 42-byte setter called
by four verified functions with arguments 1000, 1000, 400, and 20000; existing
Ghidra cross-reference evidence records a fifth call with 11000. It stores the
16-bit key at receiver `+0x26`, then conditionally removes and reinserts the
receiver into each linked structure at `+0x40` and `+0x30`, using the new key
for ascending-order insertion. The structures' roles remain unknown. Both
mapped helper-call targets were checked and the complete body matches.

The latest child-state clear helper is `FUN_5875F320`, a 23-byte routine called
by four verified functions. It clears the byte pointed to by receiver `+0x6C`,
zeros `+0x78`, and clears bit `0x4` in the word at `+0x24`. A neighboring
six-byte helper sets that bit. Callers apply the clear across child groups;
field and flag meanings remain unknown. The complete body matches with no
mapped operand targets.

The latest paired accumulator update is `FUN_588DCE50` plus its tail-call
helper `FUN_587E7920`, verified for 59 and 29 bytes respectively. The first
applies a 32-bit delta to the receiver's XOR-encoded field at `+0x126C`; when
the receiver matches the active-object pointer at global `0x58A247F8+4`, it
forwards the same delta to `0x587E7920`, which updates the global object's
XOR-encoded field at `+0x21CA8` using its `+0x21C94` salt. The first body's
three mapped operands and the complete helper body match. Both accumulators'
semantic roles remain unknown.

The latest text-buffer update helper is `FUN_58770A80`, a 57-byte routine
called by three verified functions. It copies a supplied string into the
destination buffer pointed to by receiver `+0x80` through indirect routine
`0x5898C198`, counts bytes up to the terminating NUL, and writes that count to
`+0x8C` and `+0x94`. One verified caller passes the localized key
`MESSAGESTRING_ALL_CHATTING`. The copy routine's exact identity and the length
fields' roles remain unknown; the complete body matches with one mapped
operand target checked.

The latest linked-list end-position helper is `FUN_58908870`, a 54-byte
routine called by three verified functions. Starting at the node at `+0x7C`,
it computes the signed quotient of `(+0x20 - +0x18) / +0x5C`, walks quotient
minus one `+0x10` links (stopping at the head for a nonpositive position or at
the last reachable node), and stores the selected pointer at `+0x80`. One
caller repeats this across four contexts; another invokes it at a list-count
threshold. Field units and the visible list behavior remain unknown. The full
extent matches with no mapped operands.

The latest selector wrapper is `FUN_587B9B30`, a 40-byte routine called by
three verified functions with observed argument tuples `(10, 0, 0)`,
`(12, 0, 0)`, and `(1, 0, 0)`. It packs the low 16 bits of arguments 2 and 3
into one 32-bit value, then forwards selector `0x80015000`, argument 1, the
packed value, and three zeros to `0x58970C70`. The selector's operation and
argument meanings remain unknown. The complete body matches with one mapped
call target checked.

The latest predicate-linked state reset is `FUN_588DD310`, a 95-byte routine
called by three verified functions only after `FUN_588DD2A0` returns 1. When
the receiver is the active global object and its state equals `0x40000000`, it
clears global state and calls two reset helpers. It independently clears the
receiver's same state and propagates zero to associated children when their
field matches. The state's meaning and user-visible effect remain unknown;
all seven mapped operand targets match under objdiff.

The latest clipped buffer compositor is `FUN_587E5CB0`, a 338-byte routine
called by three verified functions. It clips coordinate-derived source and
destination ranges to receiver bounds, then ORs source bytes into a destination
buffer. The receiver type, argument units, buffer format, and visual feature
remain unknown. Its single mapped operand target matches under objdiff.

The latest linked-row hit selection is `FUN_58908750`, a 156-byte routine
called by three verified functions. It checks two coordinate arguments against
receiver bounds, maps the vertical position to a linked row, returns its index
or `-1`, and invokes one of two virtual slots depending on whether the resolved
node changed. The control and callback meanings remain unresolved; its single
mapped operand target matches under objdiff.

The latest encoded-field predicate is `FUN_588DD2A0`, a 108-byte routine
called by three verified functions. It checks a masked type value and a clear
receiver flag, converts an XOR-decoded field through a floating scale, and
returns 1 when a second XOR-decoded field is below the converted value. The
type, fields, scale, and gameplay meaning remain unknown. All three mapped
operand targets match under objdiff.

The latest resource-backed child construction path is `FUN_5875ADB0`, a
366-byte SEH-protected initializer called by three verified functions. It
checks global resource entry `0xCD`, installs vtable address point
`0x5898D7FC`, conditionally releases existing child objects, initializes
receiver state, allocates a 0xFC-byte child, and stores it at receiver `+0x118`.
The class, resource label, argument meanings, and child role remain unknown.
All 14 mapped operand targets match under objdiff.

The latest linked-entry hit dispatch path is `FUN_587C4450`, a 364-byte routine
called by three verified functions. It walks linked entries, invokes virtual
tests, and follows direct and squared-distance branches into a shared hit/update
helper. Its receiver and record types, virtual method meanings, and user-facing
effect remain unresolved. The original 352-byte index extent ended midway
through a conditional branch; the corrected extent includes the loop branch
and `ret 0x14` and stops before four `INT3` padding bytes. All 13 mapped
operand targets match under objdiff.
Its `FUN_5874A010` update root and four direct helpers now add five exact
matches / 1,684 bytes. Both matched call sites, fresh Ghidra ranges, the
direct-transfer closure, and shared bookkeeping-helper callers are documented
in [the hit-dispatch evidence](docs/current-main-linked-entry-hit-dispatch.md).

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

The RTTI-backed `CPannelEscortShipConfig` panel now has its 2,583-byte
constructor, four vtable methods, cleanup and field helpers, plus eleven
directly called UI and data helpers. The slice adds 8,224 byte-matched bytes
across 20 functions; five function extents were corrected to include complete
return instructions or an internal jump target boundary. The verified caller
allocates `0xE8` bytes and constructs the panel. Sprite/control roles and the
data-record schema remain unresolved; no emulator runtime test was performed.
See [the class evidence](docs/current-main-escort-ship-config-class.md).

The `CPannelArmorControl` interaction and state path now matches its two
RTTI-linked event methods, the four-value setter and snapshot path, and seven
direct helpers. This adds 4,248 exact bytes across 11 functions. The event
handlers update four paired values and dispatch state through the existing
refresh method; labels, record meanings, and event actions remain unresolved.
The `FUN_587DAC20` inventory extent was corrected by 10 bytes to include its
complete call, stack restore, and return. No emulator runtime test was
performed. See [the interaction evidence](docs/current-main-armor-control-interaction.md).

The RTTI-backed `CSpecBoard_Body` class now has all seven vtable slots matched
or previously verified, plus its cleanup body and two directly called helpers.
This adds 3,244 exact bytes across eight functions. Two short extents were
corrected to include the complete deleting-destructor return and final indirect
jump; six bytes were added to the inventory. Parent allocation and child offset
are documented from the factory callsite; labels, event meanings, and visual
behavior remain unresolved, and no emulator runtime test was performed. See
[the vtable evidence](docs/current-main-spec-board-body-vtable.md).

The RTTI-backed `CSpecBoard_Equip` class now has all seven vtable slots and its
directly connected cleanup, event, repeated-control, and numeric-conversion
helpers matched. This adds 6,870 exact bytes across 21 functions, with 188
mapped relocation targets checked. Four extents were corrected to include
complete instructions and return/jump epilogues, adding 43 code bytes to the
inventory. One 726-byte helper retains
two trailing `FF` bytes that Capstone does not decode; they are included in the
byte match and left semantically unresolved. Control labels, record meanings,
and visual/runtime behavior remain unknown. See
[the equipment-board evidence](docs/current-main-spec-board-equipment-vtable.md).

The RTTI-backed `CLoopSpriteBundleButton` now has all six primary vtable slots
byte-matched. Its 356-byte constructor installs the table at `0x58997CD0`; the
complete-object locator and TypeDescriptor identify the class. The 30-byte
deleting destructor and two event methods fill the three previously unmatched
vtable slots. Thirteen more functions cover the destructor body and connected
state/child path. This increment adds 2,096 exact bytes across 16 functions
and checks 41 mapped operand targets. The destructor extent was corrected by
three bytes to include `ret 4`; two following `int3` bytes are padding. The
verified control-menu factory's `FUN_587D7B90` child path now has every direct
callee matched. Field meanings and UI actions remain unresolved. See the
[factory-child and class evidence](docs/current-main-control-menu-factory-child-initializer.md).

The connected `FUN_587DF580` control-menu path adds 58 exact matches totaling
26,479 bytes and 481 checked relocation entries. Five function-body extents
were corrected using reachable branch targets and complete return sequences,
adding 61 identified bytes. The `FUN_58764D30` descendant branch adds a further
21 matches totaling 1,918 bytes and 63 checked relocation targets across its
last two batches. Five more function extents were corrected from decoded
control flow and complete return sequences. The depth-12 Ghidra callgraph audit
now finds no unmatched indexed calls in this branch; higher-level UI meanings
and runtime behavior remain unverified. See
[the update-path evidence](docs/current-main-control-menu-factory-update-path.md).

The `FUN_587E0E40` update branch adds ten byte-matched callees: eight direct
helpers and two nested helpers in the `+0xD84` and `+0xD78` child paths. The
batch adds 1,063 exact bytes and checks 25 relocation targets. The parent
callsites establish argument and field relationships, while the fields' UI
meanings remain unknown. Other unmatched descendants remain under neighboring
helpers. See [the branch evidence](docs/current-main-control-menu-update-helper-branch.md).

The RTTI-backed `CPannelSetNameOfNewShip` constructor and six-slot event
surface now match byte for byte. Its verified `CMarketBoard` caller stores the
constructed panel at `+0x1CC`. The constructor creates its text controls and a
`CLoopSpriteBundleButton`; the class slice adds 2,667 bytes over nine functions,
then six directly connected input, buffer, state and geometry helpers add 480
bytes. All 15 functions check 100 mapped operand targets. Two indexed extents
were corrected to include complete returns, adding 10 identified code bytes.
Text encoding, event payloads, prompts and displayed action remain unresolved.
See [the new-ship panel evidence](docs/current-main-set-name-new-ship-panel.md).

The RTTI-backed `CMarketBoard` now has all seven vtable slots covered: six
class-specific functions were newly matched, and the shared `+0x10` method was
already verified. The cleanup body and six vtable methods add 4,323 byte-exact
bytes across seven functions; 142 mapped vtable-function operands were checked,
plus five cleanup operands. Control labels, event schemas, field meanings, and
runtime visuals remain unresolved. See
[the vtable evidence](docs/current-main-market-board-vtable.md) and
[cleanup details](docs/current-main-market-board-cleanup.md).

The next layer of the same `CMarketBoard` path now matches 14 direct event and
state helpers for another 5,618 bytes, checking 155 mapped operand targets.
Three event handlers link directly to the verified item-detail renderer, while
the rest cover state dispatch, repeated child paths, and short event leaves.
Event contracts, child-record meanings, labels, and units remain unknown; no
runtime test was performed. See
[the event-helper evidence](docs/current-main-market-board-event-helpers.md).

Seven direct child-action helpers of the matched `CMarketBoard` handlers now
add 1,101 bytes at 100%, with 46 mapped operands checked. This includes two
repeated child-update paths and state/callback helpers. Their field schema,
callback contracts, event meanings, and units remain unresolved. See
[the child-action evidence](docs/current-main-market-board-child-actions.md).

The child-action path is now traced through five additional message/import
helpers for 121 new exact bytes; the existing bounded-format wrapper was also
reverified from its board caller. Eight mapped operand targets were checked.
Two host import identities and the message/temporary-record contracts remain
unknown. See [the message-bridge evidence](docs/current-main-market-board-message-bridge.md).

The matched `CMarketBoard` constructor's direct-call layer now has all 20
inventory-backed targets verified. Five child initializers add 1,449 bytes at
100%, with 45 mapped operands checked. Their vtable class names and UI roles
remain unresolved. See
[the constructor-child evidence](docs/current-main-market-board-constructor-children.md).

Nine deeper `CMarketBoard` child-state and geometry helpers add 1,120 exact
bytes, with 52 mapped operands checked. This includes the next setup path below
the child constructors and state helpers reached from the parent. Imported API
identities, RTTI class names, and field meanings remain unresolved. See
[the child-state evidence](docs/current-main-market-board-child-state-geometry.md).

The `CWarehouseTradePanel` constructor child path adds seven exact functions
for 3,468 bytes and 149 mapped operand checks. The depth-three direct-call audit
now reports no remaining unmatched indexed targets in this path. Child RTTI,
resource identities, UI roles, and indirect runtime behavior remain uncertain.
See [the warehouse child-path evidence](docs/current-main-warehouse-trade-panel-child-path.md).

The `CPannelTrade` constructor's next nested-control layer adds five verified
functions for 3,582 bytes and 116 operand checks. A three-level direct-call
audit reports no remaining unmatched inventory-backed targets for this path.
Nested RTTI identities, resource roles, and runtime trade behavior remain
unresolved. See [the trade-panel child-path evidence](docs/current-main-trade-panel-child-path.md).

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

Five virtual methods from the adjacent RTTI-backed `CPannelJump_AddOn` vtable
at `0x5899F9BC` now byte-match: slots `+0x00`, `+0x04`, `+0x08`, `+0x0C`, and
`+0x18`, totaling 1,757 bytes with 71 mapped operands checked. The 30-byte
slot-zero code body ends with the byte at `0x58886EED`; two following `int3`
bytes at `0x58886EEE` and `0x58886EEF` precede the next function. Selector, child, and callback
semantics remain incomplete, and no emulator runtime test was performed. See
[the vtable evidence](docs/current-main-jump-addon-vtable.md).

Four methods directly connected to that AddOn vtable now match another 1,036
bytes and 31 mapped operands: the child-cleanup routine called by slot `+0x00`,
and three selector helpers called by slot `+0x18`. Evidence records list the
exact call sites, field offsets, globals, and helper dispatches; ownership and
visible meaning of those fields remain unresolved. No emulator runtime test was
performed. See [the callback and cleanup evidence](docs/current-main-jump-addon-callbacks.md).

`FUN_58888480` adds the 662-byte child-cleanup body called by
`CPannelJump_ControlMenuScreen` scalar deleting destructor `FUN_588889D0`.
RTTI confirms the body installs that class vtable before visiting its child
pointer fields and calling the base cleanup helper. ObjDiff checks all bytes
and four mapped operands. Child ownership and one repeated field cleanup remain
unresolved; no emulator runtime test was performed. See
[the destructor evidence](docs/current-main-jump-control-menu-destructor.md).

`FUN_588873B0` adds a 338-byte AddOn child-state helper called twice by the
verified `CPannelJump_ControlMenuScreen` constructor after it creates AddOn
children. It stores a checked selector, resolves thresholded resource pointers,
and updates two child controls. ObjDiff checks all bytes and six mapped
operands. Selector and resource meanings remain unresolved; no emulator runtime
test was performed. See
[the helper evidence](docs/current-main-jump-addon-mode-setup.md).

The RTTI-backed `CPannelLaunchedShip` class now has its 1,581-byte constructor,
347-byte cleanup body, and all seven vtable entries matched or previously
verified. The new work matches 2,312 bytes across seven functions and 71
operands. The scalar deleting destructor's inventory extent was corrected from
27 bytes to include its observed `ret 4`; the following two `int3` bytes are
padding. Resource roles and child layout meanings remain unresolved, and no
emulator runtime test was performed. See
[the class evidence](docs/current-main-launched-ship-class.md).

The RTTI-backed `CPannelRule` child now has its 1,165-byte constructor,
245-byte cleanup body, and all seven vtable entries matched or previously
verified. The new work matches 2,168 bytes across eight functions and 61
operands. Its scalar deleting destructor extent was corrected from 27 bytes to
include the observed `ret 4`; following `int3` bytes remain excluded. Resource
roles and child behavior remain unresolved; no emulator runtime test was
performed. See [the class evidence](docs/current-main-rule-class.md).

The RTTI-backed `CBundleButton` class now has its constructor, configuration
method, cleanup body, all six vtable entries, and directly called state helpers
matched or previously verified. The new work matches 2,371 bytes across 12
functions and 45 operands. The scalar deleting destructor extent was corrected
to include its `ret 4`; trailing `int3` padding is excluded. Child/resource
semantics remain unresolved, and no emulator runtime test was performed. See
[the class evidence](docs/current-main-bundle-button-class.md).

The RTTI-backed `CNumberScreen` class now has its constructor, cleanup body,
and all eight vtable entries matched or previously verified. The new work
matches 822 bytes across seven functions and 18 mapped operands. The scalar
deleting destructor extent was corrected from 27 to 30 bytes to include its
`ret 4`; trailing `int3` padding is excluded. Numeric field meanings, child
roles, helper contracts, and rendered appearance remain unresolved; no emulator
runtime or visual test was performed. See
[the class evidence](docs/current-main-number-screen-class.md).

The RTTI-backed `CMovingSpriteDataScreen` class now has its constructor,
scalar-deleting destructor, and custom `+0x0C` method matched, completing all
six identified vtable slots with the four previously verified shared methods.
The new work matches 632 bytes across three functions and 12 mapped operands.
The destructor extent was corrected from 33 to 36 bytes to include its `ret 4`;
the following `int3` bytes are padding. Constructor parameters, state-field
meanings, mode labels, and the custom method's user-visible effect remain
unresolved; no emulator runtime or visual test was performed. See
[the class evidence](docs/current-main-moving-sprite-data-screen-class.md).

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
async socket opener, handle-table insertion, and registry configuration loader
`FUN_587B7990` now add 1,339 bytes; see
[the connection note](docs/current-main-socket-connect.md). The shared
communicator-configuration helper `FUN_5878A3A0` adds a 545-byte exact match
with nine operand targets checked. Its callable extent includes a six-byte
stack-cleanup/return epilogue that Ghidra omitted before the INT3 padding. See
[`the linked-payload ordering notes`](docs/current-main-linked-payload-ordering.md).
The nested
`FUN_588C4210` handler and its `0x80023101`, `02`, `05`, and `07` helpers add
7,908 verified bytes across nine body ranges for the `0x800231xx` event family.
The shared `FUN_58764D30` message/UI routine adds 18,901 bytes across two
ranges and has 151 direct callers, including the `0x80023106` message path.
The cached `FUN_5876BAF0` initializer adds 233 bytes and has 662 direct-call
references across 166 callers, including that message path.
Its directly called `FUN_58763890` constructor adds 1,757 bytes across one
contiguous range.
Its four child setup callsites now share the matched 103-byte helper
`FUN_5875F0E0`, which allocates a 0x20-byte object and invokes the verified
constructor `FUN_58907AC0`; all four direct call edges and both helper callees
are verified.
The connected `FUN_5873DAE0` initialization subsystem adds 53 exact matches
totaling 14,321 bytes, including 296 checked mapped operands and five corrected
function extents. Its depth-eight indexed callgraph has no unmatched callees;
class identity, field meanings, and runtime behavior remain unresolved. See
[the initializer evidence](docs/current-main-5873dae0-initialization-subsystem.md).
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
The message-node constructor and text/control setup helpers add 1,883 verified
bytes across two functions, tied to the message-list insertion and joined-fleet
notice call paths. Their record schema and individual control/resource meanings
remain unresolved; no emulator test was run. See
[message-node construction evidence](docs/current-main-message-node-construction.md).

`FUN_58814FD0` adds a 390-byte exact match. Both verified event handlers call
it on event paths; its argument/flag branches select message-resource IDs and
update a child object. Exact argument meanings and UI semantics remain unknown.
See [event message dispatch evidence](docs/current-main-event-message-dispatch.md).

`FUN_588D7460` adds a 387-byte exact match called by the verified
`CShip_MapObjectScreen` constructor and virtual update. It refreshes child
fields from packed receiver state and lookup tables; the table and child
semantics remain uncertain. See
[ship-map child refresh evidence](docs/current-main-ship-map-child-refresh.md).

`FUN_5873C2E0` adds a 385-byte exact match in verified spatial-state and
virtual-update paths. It dispatches on a caller-supplied mode and active-object
subtype, with observed child flag and counter writes. Those values' meanings
remain unresolved. See
[spatial action dispatch evidence](docs/current-main-spatial-action-dispatch.md).

`FUN_588D9E10` adds a 367-byte exact match called from the mission-event
`DoAction` path and `CShip_MapObjectScreen` construction. It decodes two
XOR-obfuscated counters, computes an observed capped percentage, and
initializes a child object. Counter and control semantics remain unknown. See
[mission-event counter control evidence](docs/current-main-mission-event-counter-control.md).

`FUN_5888CEE0` adds a 347-byte exact match used by verified update routines
`FUN_58890110` and `FUN_58893860`. It refreshes up to six child slots from
indexed global resource entries and applies observed word masks; slot and
resource semantics remain unresolved. Its shared 41-byte linked-node accessor
`FUN_58908140` is now also matched and used by three verified callers. See
[indexed child-resource refresh evidence](docs/current-main-indexed-child-resource-refresh.md).

`FUN_5873B540` adds a 342-byte exact match called by the verified spatial-state
handler and virtual update. It filters linked candidates by state/key and
returns the candidate with the lowest observed distance score; units and
selector meaning are unresolved. See
[spatial candidate selection evidence](docs/current-main-spatial-candidate-selection.md).

`FUN_588BA8E0` adds a 318-byte exact match used by the verified control-menu
event handler and selection refresh. It tests up to eight active child bounds
against the shared point and returns on the first hit; point space and flag
meanings remain unknown. See
[multi-child point test evidence](docs/current-main-multi-child-point-test.md).

`FUN_588DAA20` adds a 309-byte exact match called from mission-event and
fleet/battle screen update paths. It updates observed child color fields and
copies selected resource records based on global state; color and resource
meanings remain unresolved. See
[event-state child refresh evidence](docs/current-main-event-state-child-refresh.md).

The ship-map update's visual-state helper (`FUN_588DB610`) and route-child
helper (`FUN_588DBF10`) add 2,735 exact bytes called by the verified
`CShip_MapObjectScreen` update. The route-child helper now also has a tested,
readable C++ normal-path model for its four phases and position propagation;
the index+2 resource lookup and flagged descendant helper remain open. See the
[visual-state evidence](docs/current-main-ship-map-visual-state-update-588db610.md)
and [route-child evidence](docs/current-main-ship-map-route-child-update-588dbf10.md).
The visual-state helper's `0x040000` through `0xFF0000` phases now have tested
C++ models for the scan controller, indexed resource setup, frame counters,
callbacks, and state writes. The `0x58` candidate path now directly models the
constructor fields, six-DWORD resource copy, and insertion into both sorted
owner lists; allocation and the `0x68` secondary object remain hooks. See the
[phase model evidence](docs/current-main-ship-map-visual-state-update-588db610.md)
and [candidate-construction evidence](docs/current-main-ship-map-visual-candidate-construction.md).
The shared `FUN_58902D20` mode write and `0x8000`-gated recursion now has a
direct semantic model used by both visual-state paths. The setup model also
mutates the observed `+0x60FC` child instead of treating the helper as a
pointer lookup. The secondary constructor and visible rendering remain open. See
[the helper evidence](docs/current-main-ship-map-visual-node-mode-58902d20.md).

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
The 210-byte factory `FUN_588F43F0` is now an exact match with seven mapped
operands. Two verified callers pass it record pointers; it builds a `CForce`,
places it into the observed owner collections, and registers keyed children in
the `+0x9A4` array when a chain key matches. Record, key, and ownership
semantics remain unresolved; no emulator test was performed. Details are in
the [factory evidence](docs/current-main-force-constructor.md).
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

The verified global setup branch rooted at `FUN_588011C0` now matches all
indexed callees through depth two: 20 functions / 4,976 bytes and 143 mapped
operand targets were added in this update. The two corrected extents add 21
identified code bytes. A depth-two callgraph audit finds no unmatched indexed
target in this branch; deeper and indirect calls remain open, and no original
client startup or visual test was performed. See [the branch evidence](docs/current-main-global-ui-setup.md).

The resource-backed initialization rooted at `FUN_588FB9B0` now has all
inventory-backed direct calls and their next call layer matched: 13 new
functions, 4,883 bytes, and 160 mapped operand targets checked. The depth-two
callgraph audit found no unmatched indexed callees in that slice. This verifies
machine code, not resource meanings or visual behavior; no client runtime test
was performed. See [the resource setup evidence](docs/current-main-global-ui-setup.md).

The `FUN_587DBA00` global-object initialization tree adds 19 exact matches
covering 12,084 bytes, with 411 mapped operand targets checked. A depth-two
callgraph audit found no unmatched indexed calls in that tree. Vtable values,
call edges, repeated child setup, and field writes are recorded from mapped
instructions; class names and visible control meanings remain unresolved. No
runtime client test was performed. See
[the initialization evidence](docs/current-main-global-ui-setup.md).

The `FUN_5880DD80` startup branch adds nine exact matches for 6,798 bytes and
236 mapped operand checks. Its depth-two callgraph audit now finds no unmatched
indexed callees; two shared helpers in that graph were already verified.
Constructor fields, vtable addresses, resource calls, and cleanup traversal are
recorded from the mapped instructions, while class/field meanings remain
uncertain. No client runtime test was performed. See
[the branch evidence](docs/current-main-global-ui-setup.md).

The startup object branch rooted at `FUN_58854A00` now has all indexed callees
through depth two matched: 16 new functions / 5,873 bytes, with 145 operand
targets checked. The graph audit reports no unmatched indexed target within
two direct-call edges of this root. The bodies show repeated object setup,
embedded-field initialization, argument copying, and child construction, while
class identities and UI meaning remain unresolved. No client launch or visual
test was performed; see [the mapped branch evidence](docs/current-main-global-ui-setup.md).

The `FUN_587D26C0` startup branch now has every indexed callee through depth two
matched. This update adds 10 functions / 3,935 bytes and checks 82 operand
targets; the depth-two audit finds no unmatched indexed target under that root.
Three extents were corrected to include complete returns, adding 37 identified
code bytes and excluding following int3 padding. The mapped code shows grouped
child/object initialization, linked-entry cleanup, and sprite-resource setup;
class identities and field semantics remain unknown. No runtime launch or
visual test was performed; see [the startup branch evidence](docs/current-main-global-ui-setup.md).

The `FUN_58883F80` startup-control branch now has all indexed callees through
depth two matched: four functions / 1,168 bytes and 42 mapped operand targets.
The audit reports no unmatched indexed target beneath this root at that depth.
The instruction evidence shows repeated control construction, parent-field
initialization, and a shared vtable-backed helper. Class/resource meanings and
visual behavior remain unresolved; no client was launched.

The `FUN_587783B0` repeated-control branch now has all indexed callees through
depth two matched. Five functions add 2,144 byte-identical bytes and check 37
operand targets; the callgraph audit finds no unmatched indexed target beneath
the root at that depth. Two helpers are reached 14 and 27 times respectively;
their mapped instructions delegate to three newly matched helpers. Class and
control meanings remain uncertain, and no runtime/visual test was performed.

The shared-entry branch rooted at `FUN_5889F960` and `FUN_5889FFE0` now has its
two unmatched helpers verified: 443 bytes across two functions and four operand
targets. The 111-byte routine is called 27 and 31 times respectively; the
332-byte initializer is called twice by `FUN_5889FFE0`. Both depth-two audits
now have no unmatched indexed callees. Its indirect API slots and key-like
constants are recorded without assigning them an unproven purpose.

The `FUN_58754B80` startup branch is now matched through depth two: four
functions, 701 bytes, and 28 operand targets. The two main routines use paired
resource/object helper paths through `FUN_58753360` and `FUN_587533C0`; the
branch audit finds no unmatched indexed callees. The class and object contract
remain unknown, and no runtime/visual test was performed.

The `FUN_5881F3D0` startup branch now has its 372-byte direct child matched at
100% with 11 operand targets checked. `FUN_58751E80` installs two observed
vtable addresses, initializes receiver fields, and calls shared setup/resource
helpers. Its depth-two audit has no unmatched indexed callees; class, resource,
and UI meaning remain unresolved, and no client was launched.

The shared child setup branch rooted at `FUN_587A1670` and `FUN_58786C00` now
matches through depth two: three functions / 237 bytes and seven operand
targets. The 129-byte initializer is shared by both roots. Its recursive entry
cleanup helper's extent was extended by 11 bytes to include `ret 4`, excluding
11 following int3 padding bytes. Both depth-two audits now have no unmatched
indexed callees. Object identity and marker/ownership semantics remain unknown.
