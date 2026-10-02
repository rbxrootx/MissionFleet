# Installed Core.dll animation-node update callback

This slice byte-matches the node update callback at `0x587B5B20` and its
next-link accessor at `0x58495610`. Evidence is from the locally captured
mapped image of installed `Core.dll` at base `0x58480000`; the original file
SHA-256 is
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.

## Vtable and behavior evidence

The constructor at `0x58486810` installs vtable address point `0x58894C94`.
The captured table has update callback `0x587B5B20` at slot `+0x0C` and draw
callback `0x587B5DB0` at slot `+0x14`. The node draw callback already
reconstructed in this project passes the node's `+0x50` DWORD to the animation
frame helper `0x5849C770`. That helper divides it by the animation period and
reduces it modulo the frame count to select a frame. Together, these call and
data-flow edges show that `0x587B5B20` advances the animation selection value.

When node flag bit 2 at `+0x24` is set, `0x587B5B20` increments `+0x50` once
per invocation and walks the circular child-update list rooted at `+0x3C`. For
each child, it invokes virtual slot `+0x0C` with no explicit stack arguments.
It checks the final child's next pointer against the list head and dispatches
that child once before returning. The accessor `0x58495610` returns the
address of the next-link field at `+0x3C`.

This is a discrete update counter feeding frame selection. The recovered
evidence does not identify how often an external caller invokes the update
callback, so the counter must not be described as milliseconds or wall-clock
time. Flag bit 2's higher-level name and the `0x10000` list tag's origin are
also unknown.

## Byte verification

Both functions match the mapped capture at 100% with the repository's VC6
byte-emission toolchain and objdiff 3.8.0. Together they add 207 bytes and
three captured operand targets. This evidence verifies the function bytes and
the static update-to-animation data flow; runtime frame cadence and displayed
pixels remain untested.
