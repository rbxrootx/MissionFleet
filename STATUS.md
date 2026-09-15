# Native decompilation status — 14 September 2026

The supplied files contain a historical NavyFIELD 2062 client and actual login,
game and persistence server binaries. They have been extracted and statically
decompiled. **A buildable source reconstruction and playable emulator are not
complete.**

A deterministic objdiff v2 report now tracks 18,925 functions and 2,865,356
identified code bytes in three decomp.dev categories. There are 5,521 functions
totaling 183,139 bytes reconstructed in C++, now spanning login, game and
persistence; each matches at 100.0% under objdiff 3.8.0.
Emitted Ghidra pseudocode does not count as a compiler match. The report is ready
for a GitHub Actions artifact once this repository is published.

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
beside each raw region. No original executable was run or modified.

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
records. An experimental decoder produced visually inspected ship layers.

Recovered code/assets remain local and Git-ignored. The workspace MIT license
applies to original tools, not supplied binaries or their decompiled output.
The public-safe decompilation project has a local Git history. It has not yet
been published or pushed.
