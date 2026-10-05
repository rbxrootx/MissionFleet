# Installed Core.dll ordered child-render scheduler

This slice reconstructs the recursive child traversal callback at `0x587B5F40`
and its two cursor accessors at `0x58495710` and `0x58495870`. Evidence comes
from the locally captured mapped image of the installed `Core.dll` at runtime
base `0x58480000`, SHA-256
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.
The main callback is installed in the `+0x14` virtual slot by constructor
`0x58482320`; the neighboring callback `0x587B5DB0` already has a separate
byte-matched reconstruction.

`0x58495710` returns the address of the signed 16-bit ordering key at child
offset `+0x26`. `0x58495870` returns the address of the next-link field at
offset `+0x48`. The `0x587B5F40` callback checks node flag bit 0 at `+0x24`,
walks the child list rooted at `+0x4C`, and invokes each eligible child's
virtual callback through slot `+0x14`. A negative signed ordering key is
dispatched before this node's own sprite; nonnegative keys are dispatched
after it. This provides direct evidence that the key controls painter order
around the parent's draw call.

For its own draw, the callback combines node coordinates (`+0x04`, `+0x08`),
node offsets (`+0x0C`, `+0x10`), and the incoming position, then forwards
additional caller state and node fields (`+0x28`, `+0x2C`) to `0x587BA830`
with the object at `+0x50` as the receiver. The callback takes three explicit
arguments and returns with `ret 0x0C`. The source reconstruction preserves the
captured x86 instruction stream and verified call relocations.

The behavioral C++ port of this callback and its composition with the live
scene wrapper is documented in
[`current-core-render-node-draw.md`](current-core-render-node-draw.md). The
sprite target `0x587BA830` remains an injected renderer boundary in that model.

## Uncertainties

The list walk compares the DWORD at each cursor with `0x10000` to recognize
the list boundary, but the evidence examined so far does not identify the
origin or full meaning of that sentinel/tag. The fields passed through the
sprite call are also not assigned semantic names. This static callback proves
control flow and byte equivalence; it does not yet prove runtime visual output,
frame timing, or behavior for every node type.

## Byte verification

All three functions match the captured mapped image at 100% with the
repository's VC6 byte-emission toolchain and objdiff 3.8.0. They add 412 bytes
and five captured operand targets. At this slice's verification point, the
installed Core ship-path profile contained 71 verified functions totaling
258,007 bytes; the subsequent animation-update slice raised it to 73 functions
and 258,214 bytes.
