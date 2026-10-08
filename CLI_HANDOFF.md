# MissionFleet client decompilation handoff

The objective remains a full byte-for-byte port of the installed NavyFIELD
client. The FormTab subsystem described in the previous handoff is complete;
its evidence and limits are in
[the FormTab note](docs/current-main-communicator-form-tab.md). Do not treat
this subsystem or the current progress percentage as completion of the client.

The current verified total is 9,119 / 42,461 functions and 2,912,936 /
10,470,324 code bytes (21.4762% by function count, 27.8209% by bytes).
The FormTab closure contributed 14 exact functions / 5,667 bytes across
16 ranges. ObjDiff, the focused verifier, progress freshness check, and
the full test suite validate this slice. Its primary vtable is fully
byte-matched, but runtime UI and protocol behavior remain untested.

The FormTab work ends here. Select and audit the next subsystem as a separate
pass. For each pass, tie behavior to original-code evidence, record unresolved
questions, validate one subsystem fully, then stop and report it. Prefix every
shell command with `rtk` as required by
`C:\Users\Elisha Trice\.codex\RTK.md`. Do not give calendar estimates.

This checkout may be shared with another task. At the start of the next pass,
check `rtk git status --short --branch` and `rtk git log -3 --oneline` before
editing. Preserve any unrelated local changes. The user has authorized pushing
validated changes.
