# Current Main.dll child-list lookups

Four installed-client functions at `0x587D8E70`–`0x587D9067` share a node
filter: each selected node points to a child at `+0xCC0`; the child byte at
`+0x35C` must match a selector, and the lookup paths require node `+0xEC` to
be zero. The selector byte `0xFF` is replaced by receiver byte `+0x61` in
the global-list helpers. These are observations from the original x86 code,
not inferred game labels.

| Function | Original behavior | Complete extent |
| --- | --- | ---: |
| `FUN_587D8E70` | Counts qualifying nodes from global `0x58A247F4` list `+4`, walking `+0xCE4`; its two extra arguments conditionally filter node `+0xEC == 1` and child word `+4` category bits `5..9` equal to `3` or `5`. | 120 bytes |
| `FUN_587D8F40` | Returns the first qualifying node from global list `+8`, walking `+0xCE0`. | 74 bytes |
| `FUN_587D8F90` | Searches a supplied root's `+0xCE0` chain, or delegates a null root to verified `FUN_587D8EF0` when fallback is enabled. | 90 bytes |
| `FUN_587D8FF0` | Searches a supplied root's `+0xCE4` chain, or delegates a null root to `FUN_587D8F40` when fallback is enabled. It calls verified `FUN_5876C8B0` on its candidate and returns it only when that helper succeeds. | 120 bytes |

The last function also calls `FUN_5876C8B0` with null on the no-match path;
the original call is preserved because its side effects are unknown. Caller
edges are `FUN_588EC5D0` for the count, `FUN_587DAC20` and `FUN_587E0090`
for the `+0xCE0` root lookup, and `FUN_587DAD80` and `FUN_587E0090` for
the `+0xCE4` lookup. The global-list lookup is called by the latter's null-root
fallback. Node and child classes, selector/category meanings, helper contract,
and runtime-visible behavior remain unresolved.

All four complete bodies compile to byte-identical x86 code under objdiff
3.8.0, including six mapped operand targets. No runtime client test was
performed.
