# Native decompilation status — 2 October 2026

The supplied files contain a historical NavyFIELD 2062 client and actual login,
game and persistence server binaries. They have been extracted and statically
decompiled. **A buildable source reconstruction and playable emulator are not
complete.**

The deterministic objdiff v2 report tracks 42,461 functions and 10,469,042
identified code bytes across six report units. There are 6,247 verified matches
totaling 1,381,863 bytes (13.1995%), each at 100.0% under objdiff 3.8.0. A
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

The current `Main.dll` event route `0x80000100` has a verified 245-byte
enqueuer at `0x587E8590`. Its embedded queue consumer at `0x587FAEC0` adds
2,378 verified bytes across two disjoint code ranges; the constructor
identifies a `CFDCSingleQueue<_QueueBlock>` with 512 slots of 16 bytes. Event
`0x80000500` also reaches a matched 443-byte queue/screen-state reset helper.
Event meanings and queue ownership remain unresolved. Current-build Main
coverage is 114 / 8,474 identified functions and 408,445 / 2,353,108 bytes. See
[the event-queue notes](docs/current-main-event-queue.md).

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
