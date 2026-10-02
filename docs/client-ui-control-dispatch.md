# Main.dll UI control dispatch slice

This slice reconstructs the large UI/control initializer and its direct helper
closure from the locally captured, mapped 2062 `Main.dll`. The source files are
instruction-level reconstructions. `tools/verify_client_matches.py` confirms
their instruction bytes, relocations, globals, and objdiff score against the
captured image; the generated C-like source by itself is not treated as proof
of higher-level behavior.

The separate paired resource-backed constructor tree is documented in
[client-resource-backed-ui-tree.md](client-resource-backed-ui-tree.md).

## Evidence and observed behavior

Ghidra's pseudocode for `0x1001DAB0` shows a 177-arm switch driven by its first
integer argument. Before dispatch, the function clears text-like child state,
sets control positions, obtains animation record 7 from the table rooted at
`DAT_101C5744`, initializes two child controls, and clears fields at offsets
`+0x70` and `+0x74`. Switch arms update text-like controls, reposition children,
and invoke owner/control virtual methods. The function has many direct callers
in the Main.dll call graph, supporting its role as a shared control/menu
dispatcher. The available pseudocode does not identify the user-facing meaning
of every numeric case, so this reconstruction preserves the observed dispatch
without assigning invented labels.

The verified direct-call closure adds these helpers:

| Address | Bytes | Evidence from Ghidra pseudocode |
| --- | ---: | --- |
| `0x10015B40` | 54 | Copies six descriptor fields into a control. |
| `0x10017900` | 115 | Applies a descriptor to a control and child; invokes `0x100FF160` when a descriptor is present. |
| `0x10018840` | 100 | Compiler-validated `TextControl::SetResourceText`: copies the paired field, handles zero/nonzero token paths, calls both text callbacks on the nonzero path, and updates state/style fields. Callback signatures are inferred from stack cleanup; contracts remain unresolved. |
| `0x1001D710` | 95 | Updates child text/position and dispatches through an owner virtual method. |
| `0x1001D870` | 203 | Repositions the control and eight children through `0x100FECD0`. |
| `0x10021260` | 95 | Updates child text/position and dispatches through an owner virtual method. |
| `0x100218D0` | 41 | Bounds-checks an index against `+0x160` and returns a 64-byte animation record from the table at `+0x190`. |
| `0x100FACD0` | 36 | Walks a linked list and compares a node field at `+0x48`, shifted right by 10. |
| `0x100FECD0` | 128 | Moves a control and recursively translates flagged descendants in both axes. |
| `0x100FED50` | 97 | Moves a control and translates flagged descendants horizontally. |
| `0x100FEE30` | 73 | Helper in the recursive two-axis translation path. |
| `0x100FEE80` | 58 | Helper in the recursive horizontal translation path. |

The closure has 13 functions including the root and totals 11,383 bytes. The
recorded source and call relocations all pass `tools/verify_client_matches.py`
against the local capture at 100% objdiff similarity.

## Uncertainties

The indirect callbacks at `DAT_101750A8` and `DAT_101750B0` have not been
resolved to stable signatures or semantic contracts. Their typed C++ call
signatures are inferred from observed stack cleanup and exact byte comparison,
not independently confirmed at runtime. Several virtual calls are
identified only by their observed vtable offsets. Ghidra emits `unaff_EDI` and
other untracked register values in some dispatcher arms, so the pseudocode does
not establish their original source-level parameters. Offsets such as `+0x70`,
`+0x74`, and `+0x94` are recorded structurally; their product meanings remain
unknown. The switch's individual numeric cases have not been mapped to named
screens or gameplay actions.

These limits do not affect the byte-match result, but they do constrain claims
about the higher-level UI model. The next subsystem should be selected only
after this slice is validated and its call evidence reviewed.
