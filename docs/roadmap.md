# Work required before claiming an emulator

The supplied historical server binaries have now been recovered and decompiled;
see [the native project](../decomp/README.md). No stock client login or battle has passed.

1. Identify the user's existing emulator repository/runtime and agree on one
   exact client build using the recorded hashes. No setup location was provided.
2. Review the recovered native server functions, types and source-path references.
   The supplied package resolves the missing-server-artifact problem. Complete
   database recovery and verify which historical client build matches the servers.
3. Establish protocol framing, transport, message identities and connection state
   transitions from evidence. Record fixtures and provenance for each mapping.
4. Reconstruct compilable native server modules from the reviewed evidence.
   Prove successful stock-client login, rejection of invalid login, server selection
   and reconnect. The earlier independent HTTP API is not a reconstruction.
5. Recover or independently implement ship/item/crew data schemas and remaining
   asset formats. Validate counts, units, IDs and references against this build.
6. Implement authoritative harbor state, inventory, equipment, fleets, economy,
   progression and persistence using proven schemas and behavior.
7. Implement room transport, combat simulation, movement, projectiles, torpedoes,
   aircraft, damage, missions, victory rules, rewards and disconnect recovery.
8. Build an original client/renderer if the intended final result is entirely
   open source. Assets require separate handling; a source license does not
   transfer rights to the original game's art, audio or binaries.
9. Validate full client/server flows, rendering comparisons, deterministic combat
   fixtures and multiplayer soak tests before claiming 1:1 behavior.

Do not replace missing evidence with invented packet formats, success responses,
empty ship lists or arbitrary combat constants and call that compatibility.
Do not patch out game authentication or protection components as a substitute
for reconstructing the required interfaces.
