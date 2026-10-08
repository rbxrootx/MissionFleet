# Installed Main `CPannelCommunicatorConfigDiplomacyTab` event closure

The installed `Main.dll` RTTI names the class `.?AVCPannelCommunicatorConfigDiplomacyTab@@`. Its complete-object locator at `0x589A82BC` points to the four-entry hierarchy headed by this class; its primary vftable address point is `0x5899DC04`. `FUN_588246E0` is slot `+0x18` at `0x5899DC1C`. Constructor `FUN_58824970` writes that vftable and is called by byte-matched `FUN_58843380` at `0x58844325`. Cleanup routine `FUN_58823F40` writes the same vftable and is called by the slot-zero deleting wrapper at `0x58824683`.

The root and its complete direct-call closure add **30 byte-identical functions / 3,876 bytes** across 31 exact Ghidra body ranges. The focused verifier checks fresh Ghidra body coverage, the independent body and call inventories, RTTI and constructor references, caller edges, mapped instruction coverage, and every direct transfer. ObjDiff 3.8.0 reports 100% for all 30 functions from the selected batch run of `tools/verify_client_matches.py`. Rerun the focused static audit with `rtk python tools/verify_current_main_diplomacy_tab.py`. The full selected function set is in [`main-diplomacy-tab-body-ranges.tsv`](../config/NF2_2026/main-diplomacy-tab-body-ranges.tsv).

## Observed behavior and caller evidence

The virtual event handler reads a mode byte at receiver `+0x60`. For event kind 2, controls stored at `+0x270` and `+0x274` change that mode within the observed values 1 through 4. Other events route to mode handlers `FUN_58827D10`, `FUN_58828DF0`, `FUN_58828270`, and `FUN_58827070`. The mode setter records the byte and changes low flag bits on the corresponding child controls.

The four handlers inspect control pointers and event kinds, update observed selection and page fields, refresh child text or record entries, and send action identifiers through existing matched functions. The mapped branches include mode-1 IDs `0x136`–`0x138`, mode-3 IDs `0x13A`–`0x13F`, mode-4 IDs `0x140` and `0x141`, and mode-2 IDs including `0x139` and `0x218`. Seven small wrappers forward observed identifiers `0x80013105`–`0x8001310C` to `FUN_58970C70`. These numbers and branches are recorded as observed; UI names and protocol meanings are not inferred.

Fresh Ghidra references show 28 direct calls into the selected closure from 12 functions. Twenty-one sites are from eight open callers. Seven sites are from four already matched callers: `FUN_588290F0`, `FUN_58882D80`, `FUN_588B96B0` (four sites), and `FUN_588C4210`. Within the selected closure, all 107 direct call sites agree between targeted Ghidra and the independent function-edge inventory. Sixty-six direct transfers leave the closure for byte-verified functions; no unresolved direct in-module target remains.

| Function | Bytes | Function | Bytes |
| --- | ---: | --- | ---: |
| `58759E90` | 18 | `587B9CB0` | 57 |
| `587B9CF0` | 44 | `587B9D20` | 46 |
| `587B9D50` | 46 | `587B9D80` | 46 |
| `587B9DB0` | 25 | `587B9DD0` | 25 |
| `58824630` | 55 | `588246E0` | 195 |
| `58826F20` | 51 | `58827070` | 401 |
| `58827B90` | 58 | `58827BD0` | 68 |
| `58827C20` | 24 | `58827C40` | 37 |
| `58827C70` | 71 | `58827CC0` | 24 |
| `58827CE0` | 37 | `58827D10` | 461 |
| `58828130` | 98 | `588281A0` | 161 |
| `58828250` | 32 | `58828270` | 645 |
| `58828B60` | 115 | `58828BE0` | 206 |
| `58828CB0` | 232 | `58828DA0` | 23 |
| `58828DC0` | 38 | `58828DF0` | 537 |

## Uncertainties

The class, constructor path, vtable slot, mode branches, child updates, and exact function bodies are established from the installed mapped image and fresh Ghidra output. Field names, mode labels, control identities, action meanings, and the event contract remain unresolved. Ten indirect calls remain in the selected direct-call closure; callback pointers `DAT_5898C1A8` and `DAT_5898C198` do not have recovered targets or contracts. Cleanup also dispatches through child vtables whose runtime targets are not established. This validates static instruction matching; no emulator launch or visual test was performed.
