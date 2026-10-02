# Installed Core.dll calendar normalization

This subsystem contains the original client's calendar and time normalization
helpers. The names remain address-based because Ghidra exposes no original
symbols for these functions.

`0x5885B067` computes an epoch-adjusted day offset using 400-, 100-, and
4-year divisions. `0x5885B0CB` checks divisibility by 4, 100, and 400 and
implements the Gregorian leap-year rule. `0x5885B11B` uses those helpers and a
month-length table to carry month overflow into the year, normalize days, and
carry seconds, minutes, and hours into the larger fields. Its mode-zero path
finishes through `0x58862705`; its nonzero path applies timezone-related
adjustments through `0x5886867D` and `0x5885B05C`.

`0x5885B05C` forwards its arguments to `0x5885ADCB`. That 656-byte routine
validates the input record, initializes a nine-DWORD output record, reads
timezone-related values through `0x5887141B`, `0x58871447`, and `0x58871473`,
then normalizes the result through `0x58862705`. `0x5885B53B` is a 19-byte
adapter that calls `0x5885B11B` with mode 1. Invalid inputs in the larger
conversion paths set error `0x16`.

These six functions cover 1,921 bytes and 88 audited relocation operands. Their
candidate source files emit the pinned mapped image's Ghidra-bounded instruction
bytes; `verify_client_matches.py` compiled them and objdiff 3.8.0 confirmed
100.0% byte identity for every function. This validates the emitted machine
code, not the full source-level meaning of the record fields or epoch. Ghidra's
observed branches, constants, callees, and field accesses support the behavior
summary above; exact field names and timezone conventions remain unresolved.
