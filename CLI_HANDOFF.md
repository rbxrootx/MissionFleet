# MissionFleet client decompilation handoff

## Objective

Continue the full byte-for-byte port of the installed NavyFIELD client. Keep
the objective at the full client; do not treat the current progress percentage
or any one subsystem as completion. Do not invent behavior from names or
decompiler guesses. Connect every reconstructed behavior to evidence from the
original client, record unresolved questions, validate one subsystem fully,
then stop and report that subsystem before starting another.

## Copy/paste prompt for the CLI

Read CLI_HANDOFF.md and continue the full byte-for-byte client port from the
current repository state. Complete only the recommended FormTab vtable closure
in this handoff. Recheck the current files and both fresh Ghidra exports before
coding; tie behavior to the original bytes, record uncertainties, run ObjDiff
and the required repository checks, then commit/push and stop after reporting
this subsystem. Prefix every shell command with rtk. Do not give calendar
estimates.

## Current repository state

- Repository: MissionFleet, branch master.
- HEAD: 0b0e3468, “decomp: match LeaveTab vtable slice”; pushed to origin/master.
- Checkout was clean after that push.
- Current verified progress: 9,105 / 42,461 functions and 2,907,269 /
  10,470,324 bytes (21.4432% by function count, 27.7668% by code bytes).
- The LeaveTab slice added seven byte-identical functions / 750 bytes. Its
  local suite passed all 289 tests, its decomp.dev report workflow succeeded,
  and its focused verifier passed.
- A completed LeaveTab reference is in docs/current-main-communicator-leave-tab.md.
- Full project status and subsystem history are in README.md and STATUS.md.

All shell commands must be prefixed with rtk, as required by
C:\Users\Elisha Trice\.codex\RTK.md. The user has instructed: work on one
subsystem at a time, use one agent, tie behavior to original-code evidence,
record uncertainties, validate the subsystem, then summarize and stop. The
user previously authorized pushing completed changes.

## Recommended next slice

Audit and then byte-match the CPannelCommunicatorConfigFormTab vtable closure,
starting at its six open primary-vtable slots. This is the best-supported
larger next slice found so far: the class RTTI, all table entries, an already
matched constructor, a matched parent call, and the provisional function
closure can all be tied to the mapped image.

Current-image evidence:

- The word at 0x5899DED4 points to the complete-object locator at 0x589A8310.
- The locator's type descriptor at 0x589CC5A4 names
  .?AVCPannelCommunicatorConfigFormTab@@.
- The primary vtable address point is 0x5899DED8. Its seven entries are
  FUN_58829690, FUN_588296B0, FUN_58829B40, FUN_5882A1C0, FUN_58829BE0,
  FUN_58902FE0, and FUN_5882B340. Only FUN_58902FE0 is already matched.
- The six open roots have inventory sizes 27, 1,154, 148, 593, 1,490, and
  443 bytes. Their provisional direct-call closure is 14 functions across
  16 ranges, 5,667 bytes, and 1,695 instructions. Both current fresh Ghidra
  body exports and both edge exports agree on those selected rows.
- The closure has 203 direct transfer edges (12 internal and 191 to 22
  already matched targets) and six vtable data references. No open direct
  target escaped the provisional closure. Recount these from a targeted fresh
  export before treating them as final.
- Matched parent FUN_58843380 calls matched constructor FUN_5882A730 at
  0x5884425C and stores the returned child at parent offset +0x15C. The
  constructor installs the FormTab vtable and builds resource-backed sprite,
  text, and child controls. Exact labels, resource meanings, control layout,
  and runtime appearance remain uncertain.
- The constructor and existing class context are documented in
  docs/current-main-communicator-config-tab.md.
- Other matched calls into closure helper FUN_58753CC0 are recorded at
  0x58754D74 and 0x58754EB1; confirm their callers remain byte-matched in the
  current catalog.

The closure was recomputed from the two current project exports and the open
function inventory; body and edge rows agreed. It still needs a closure-specific
committed exporter/verifier and a targeted decompilation before byte matching.
Refresh both Ghidra projects and verify exact function ranges, every call and
tail transfer, and all boundary targets. If the closure changes, use the fresh
evidence to update the scope. Do not absorb neighboring unrelated communicator
tabs into this pass.

Useful existing evidence:

- docs/current-main-communicator-config-tab.md
- docs/current-main-communicator-config-panel.md
- docs/current-main-communicator-config-panel-handler.md
- docs/current-main-communicator-config-harbor-info-tab.md
- docs/current-main-communicator-join-tab.md
- docs/current-main-communicator-leave-tab.md
- var/current-main-next/main-function-bodies.tsv
- var/current-main-next/main-function-edges.tsv
- var/current-main-next/58758ee0-fresh-function-bodies.tsv
- var/current-main-next/58758ee0-fresh-function-edges.tsv
- var/current-main-next/587cef70-fresh-function-bodies.tsv
- var/current-main-next/587cef70-fresh-function-edges.tsv

Treat the provisional 5,667-byte closure as a lead, not final proof. Re-run
Ghidra on the current capture in both fresh projects for the selected roots
and dependencies. Confirm the RTTI/vtable slots, exact function body ranges,
all direct calls and tail transfers, and that every boundary target is already
byte-verified. Inspect the original pseudocode and mapped x86 before writing
behavior notes. If the closure expands, changes, or has an unmatched boundary,
update the scope based on that evidence before matching.

## Completion checklist for the next slice

1. Confirm current HEAD and a clean or understood worktree. Read this file and
   the relevant existing subsystem notes before editing.
2. Use one read-only audit agent. Work only on the selected FormTab closure; do
   not start adjacent tabs in the same pass.
3. Refresh independent Ghidra body/edge exports, record exact ranges, call
   sites, constructor/vtable evidence, observed behavior, and uncertainty.
4. Emit candidate source from the exact Ghidra ranges. Run ObjDiff against the
   pinned current Main.dll image. Mark a function verified only after ObjDiff
   reports an exact match.
5. Add an evidence-backed subsystem verifier and focused test. The verifier
   should check RTTI/vtable ownership, fresh export agreement, mapped bytes,
   transfer boundaries, and compiler/source hashes, including tail jumps and
   indirect-call uncertainty where present.
6. Update the function evidence catalog, progress report, README.md, STATUS.md,
   and subsystem documentation. Do not claim runtime behavior without an
   emulator test.
7. Run the focused verifier, exact ObjDiff checks, progress freshness check,
   git diff --check, and the full suite with
   rtk python -m unittest discover -s tests -v.
8. Commit and push the validated slice, confirm the checkout is clean, and
   report the exact function/byte delta, updated overall progress, validation
   results, unresolved behavior, and commit. Then stop.

Do not give calendar estimates for finishing the full port. Report measured
work and verified remaining evidence instead.
