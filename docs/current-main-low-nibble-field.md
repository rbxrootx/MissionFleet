# Current Main low-nibble field setter

`FUN_587315C0` is a 34-byte helper reached by ten previously verified
functions. ObjDiff 3.8.0 confirms a 100% object-code match; the body has no
mapped operand relocations. The direct callers include startup, screen, and
control functions, which pass observed values such as zero and `0x0F`.

The instructions read the low byte of the stack argument, mask it to four
bits, preserve bits 4 through 15 of the receiver's word at `+0x24`, merge the
argument into bits 0 through 3, store the updated word, and return with `ret 4`.
The receiver type and the low-nibble field's meaning remain unidentified.
This is an observed bit-field update, not evidence for a particular enum or
visual state.

The new `tools/rank_current_main_frontier.py` scans calls from verified current
Main functions and ranks unmatched indexed targets by the number of distinct
verified callers. It selected this helper from the current frontier; after the
match, this address no longer appears in the ranked output.
