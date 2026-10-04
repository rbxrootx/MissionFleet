# Current Main.dll state-to-resource child selection

`FUN_5884D630` is a 567-byte routine in the hash-pinned installed-client
`Main.dll`. Verified callers `FUN_588E0260` and `FUN_588E5150` pass decoded
state values. In the latter, the value is selected from the decoded receiver
fields `+0x1438` and `+0x143C`; a separate path passes the result from
`FUN_5897CCA0`.

The helper uses the value to update two child objects rooted at receiver
`+0x50` and `+0x5C`, first calling `FUN_5877E740` for each. Above the receiver
threshold at `+0x60`, it checks resource metadata at `0x58A246A4` and obtains
descriptors at offsets `+0x81C` and `+0x26A8`. It copies six DWORD fields from
those descriptors into the two child objects. In lower value ranges, bounded
by receiver fields `+0x64` and `+0x68`, it selects descriptors at `+0x26AC`,
`+0x26B0`, `+0x26B4`, `+0x26B8`, `+0x26BC`, or `+0x26C0` when the corresponding
resource-count checks pass, then installs those pointers or null through
`FUN_587316C0`.

ObjDiff verifies the complete 567-byte body, `ret 4`, and all 20 mapped operand
targets. The descriptor and child types, range meanings, and visual/gameplay
effect remain unresolved. No emulator test was performed.
