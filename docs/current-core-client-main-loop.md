# Installed Core.dll client main loop

`WinMain` calls `0x5882E060` at `0x5856E88F` after the resource/window setup
path succeeds, invokes callbacks on global context `0x58965F1C`, and runs
startup helpers `0x58502810` and `0x585022F0`. This places the function on the
normal startup path after the resource-scene constructor described in [the
entry and window setup notes](current-core-client-entry-and-window-setup.md).

Ghidra decompiles `0x5882E060` as a repeating loop. It first checks globals
`0x58965F74` and `0x58965F78`; if either is null it calls `0x5882DBD0` and
returns zero. Otherwise it samples a registered callback at `0x58894524`,
compares elapsed values with threshold `0x58905FC0`, and conditionally runs
update and rendering helpers. It polls, checks, and removes queued event records
through registered callbacks at `0x58894478`, `0x58894450`, and `0x58894474`.
Selected event-code ranges are sent through a registered callback or a stored
object's virtual slot `+0x10`. Code `0x462` routes to `0x5882D710` when global
`0x589660D0` is nonzero; a late loop iteration calls registered callback
`0x58894240` with value 1. One event-check path calls `0x5882DBD0` and returns
one.

This is static control-flow evidence for timer sampling, queued-event dispatch,
and two cleanup/return paths. Callback identities and contracts, timer units,
event-record structure and symbolic event names, the stored dispatch object's
type, and the cleanup effects remain unknown. No client session was run to
capture actual event traffic, timing, frame output, or exit behavior.

The function matches the hash-pinned installed Core image at 100% under VC6 SP5
and objdiff 3.8.0: `0x5882E060` (1,029 bytes). The verifier checks the recorded
relative and absolute operand targets within the function.
