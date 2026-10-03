"""Build the installed Main.dll byte-match inventory from the local capture."""
import argparse
import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = (
    "587962C0", "587C35A0", "587956B0", "58796310", "58907CE0",
    "58902C20", "58902C70", "58902EE0", "58902F50", "589031A0",
    "58733280", "58731700", "5897CC4E", "5897CC48", "58731CE0",
    "5878D6D0", "587C75E0", "5897CBC2", "58793FF0", "58761090",
    "5890A5B0", "58748E40", "5875F420", "5875F0D0", "58907FD0",
    "5876E510", "5875B000", "58902CE0", "58902D20",
    "588F3D70", "58906DE0", "58903E40", "587750B0", "58731BD0",
    "5874BA60", "5897CEC8", "58731500", "5897CE38",
    "5892DEF0", "58937510", "58943C70", "5894CC60", "589563E0",
    "58962D40", "5891CD00", "5891FB10", "58926C10", "5890E600",
    "58910C20", "58916B60",
    "5892DF10", "5892DF50", "58931D20", "58937530", "58937580",
    "58933B50", "58943C90", "58943CE0", "589402F0", "5894CC80",
    "5894CCC0", "58950B50", "58956400", "58956450", "589529D0",
    "58962D60", "58962DE0", "5895F370", "58903AC0", "5897CF96",
    "5897CC42", "5897CBDA", "58789FB0", "5890C1C0",
    "5891CD20", "5891CD60", "5891E820", "5891FB30", "5891FB70",
    "58923DC0", "58926C30", "58926C70", "5892AFD0",
    "5890E620", "5890E650", "5890FA20",
    "58910C40", "58910C70", "58913D40",
    "58916B80", "58916BB0", "58919DE0",
    "58F76B6B", "58C3A998", "58BF62F5", "58DDB193", "58BFF900",
    "58C60FD6", "58E0A61E", "58F8160D", "58C84F0B", "58DC34AD",
    "58C319AB", "58D6F6B0", "58D6F58A", "58C5D37B", "58FAC690",
    "58753590", "58753DE0", "587535C0", "58753E10",
    "58906EA0", "58907100", "58907180", "589071A0",
    "58906F30", "58907380", "58907390",
    "587B67C0", "587B67F0", "587B69E0",
    "5884E690", "5884DD00", "5884E500", "5884DF70", "5884DD20",
    "5884DAD0", "5884DCC0", "5884E1C0", "5884E210",
    "58731540", "58759F20", "58759F60", "587B99F0", "587D89F0",
    "58875190", "588752D0", "588F4060", "58907990", "589087F0",
    "589088D0",
    "587315F0", "587B9970", "587BABC0", "587DAC20", "587DAD80",
    "58815C80", "58816DB0", "58816EE0", "588172D0", "588193B0",
    "58819A70", "587B67A0", "588EC200", "588EC5B0", "588ECC80",
    "588ECCC0", "588ECD00", "588EC5D0", "58889020",
    "588EF600", "588EFC40", "588EFD00", "588EFA20", "588F1160",
    "5880AF30", "588F0460", "588EF260", "587B7400", "587D7820",
    "587D8840", "588E65D0", "588EFF30", "588F0150", "58908170",
    "58908650", "589086F0", "587B98B0", "58907820", "5897CC90",
)
RELOCATION_OVERRIDES = {
    # Preserve the direct-call relocation as a symbolic target in both object
    # files; the mapped destination is still audited independently.
    "587956B0": [
        {
            "offset": 6,
            "target_address": "58907CE0",
            "kind": "relative",
            "symbol": "_FUN_58907ce0",
            "audit_only": False,
        },
    ],
}
SOURCE_COMPILER_ADDRESSES = {
    # The legacy MSVC 6 executable cannot start in the current Windows
    # environment (WinError 623). These all emit literal x86 instruction
    # bytes, and clang-cl is pinned by its SHA-256 in each match record.
    "58906EA0", "58907100", "58907180", "589071A0",
    "58906F30", "58907380", "58907390",
    "587B67C0", "587B67F0", "587B69E0",
    "5884E690", "5884DD00", "5884E500", "5884DF70", "5884DD20",
    "5884DAD0", "5884DCC0", "5884E1C0", "5884E210",
    "58731540", "58759F20", "58759F60", "587B99F0", "587D89F0",
    "58875190", "588752D0", "588F4060", "58907990", "589087F0",
    "589088D0",
    "587315F0", "587B9970", "587BABC0", "587DAC20", "587DAD80",
    "58815C80", "58816DB0", "58816EE0", "588172D0", "588193B0",
    "58819A70", "587B67A0", "588EC200", "588EC5B0", "588ECC80",
    "588ECCC0", "588ECD00", "588EC5D0", "58889020",
    "588EF600", "588EFC40", "588EFD00", "588EFA20", "588F1160",
    "5880AF30", "588F0460", "588EF260", "587B7400", "587D7820",
    "587D8840", "588E65D0", "588EFF30", "588F0150", "58908170",
    "58908650", "589086F0", "587B98B0", "58907820", "5897CC90",
}
SOURCE_COMPILER = {
    "kind": "clang-cl",
    "version": "19.1.4",
    "sha256": "f169c5b02772a3c9cbce571fe539c3db6a2f664c6d1e36c4ed820de451b49c69",
}
EVIDENCE = {
    "5878D6D0": {
        "name_in_analysis": "FUN_5878d6d0",
        "called_by": "Ghidra identifies the function as the CLogoControlMenuScreen constructor from its vtable writes. Its allocation/registration caller has not yet been traced.",
        "behavior": "Initializes the CScreen base, installs the CMenuScreen and CLogoControlMenuScreen vtables, allocates sprite-data and control children, and loads Logo.spr, IMGLDN.spr, IMGLGN.spr, Interface.spr, and ITDM0A.spr through the observed sprite-file helpers. It initializes child-list ordering fields and extracts selected sprite bundles into screen controls.",
        "uncertainty": "The semantic names of most object offsets, the user-facing roles of individual child controls, and the constructor's caller/registration path remain unresolved. The screen has not yet been exercised in the emulator; this record is exact function-level code matching, not a recovered high-level UI implementation.",
    },
    "587C75E0": {
        "name_in_analysis": "FUN_587c75e0",
        "called_by": "Directly called by the installed CLogoControlMenuScreen constructor at 0x5878D6D0.",
        "behavior": "Installs the CNFScreenShot vtable, initializes its fields, allocates and constructs child objects, configures a screen region through FUN_58907100, creates a static-text child through FUN_58733280, and applies list flags through FUN_58902D20.",
        "uncertainty": "The semantic roles of the allocated child objects and several stored offsets are unknown; the description follows observed calls and writes only.",
    },
    "5897CBC2": {
        "name_in_analysis": "FUN_5897cbc2",
        "called_by": "Called by the installed logo/control screen constructor at 0x5878D6D0 with DAT_58A284C4 and zero.",
        "behavior": "A six-byte indirect-call thunk through the host callback slot at 0x5898C0A8.",
        "uncertainty": "The callback target, calling convention, and host-side meaning are unresolved; no API name is inferred from the call site.",
    },
    "58793FF0": {
        "name_in_analysis": "FUN_58793ff0",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0 on its fallback child-construction path.",
        "behavior": "Calls the FUN_58734A30 base initializer, installs the CLoopBackSpriteBundleScreen vtable, derives a stored value from the sprite entry count at object offset +0x54, and initializes adjacent state fields.",
        "uncertainty": "The meaning of the count-derived field and neighboring state offsets is not recovered beyond the observed assignments.",
    },
    "58761090": {
        "name_in_analysis": "FUN_58761090",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0 to construct a text/sprite-bundle child.",
        "behavior": "Initializes the static-text base through FUN_58731700, allocates and clears bounded buffers through FUN_5897152E and FUN_5897CC48, initializes a sprite-bundle base through FUN_589031A0, and installs the CExEditTextScreen and CSpriteBundleScreen vtables while setting edit-state fields.",
        "uncertainty": "The exact roles of the internal buffers, object offsets, and the supplied dimension/flag arguments are not established by this constructor alone.",
    },
    "5890A5B0": {
        "name_in_analysis": "FUN_5890a5b0",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0.",
        "behavior": "Forwards the supplied control parameters to FUN_5890B370 with a final zero argument, then installs the CPasswordEditTextScreen vtable.",
        "uncertainty": "The delegated base initializer's parameter semantics and password-field behavior are not recovered here.",
    },
    "58748E40": {
        "name_in_analysis": "FUN_58748e40",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0 with value 0x18.",
        "behavior": "When the requested length differs from object offset +0x90, frees three existing buffers when present, allocates replacement buffers of requested length plus one, clears them, and stores the new buffer pointers.",
        "uncertainty": "The three buffer roles and field semantics are unknown. The verified span is 230 bytes: it reaches `ret 4` at 0x58748F23, followed by INT3 padding through the next indexed function at 0x58748F30; the inventory's earlier 191-byte extent truncated executable code.",
    },
    "5875F420": {
        "name_in_analysis": "FUN_5875f420",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0 to create a text/effect child.",
        "behavior": "Initializes the static-text base through FUN_58733280, zeroes several child fields, installs the CEffectText vtable, and applies observed flag masks to its 16-bit state fields.",
        "uncertainty": "The semantic roles of the cleared fields and state bits are not established by the constructor alone.",
    },
    "5875F0D0": {
        "name_in_analysis": "FUN_5875f0d0",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0 with value 0x32.",
        "behavior": "Stores the supplied 32-bit value at object offsets +0x70 and +0x74.",
        "uncertainty": "The higher-level meaning of the two fields is unknown; the record states only the observed writes.",
    },
    "58907FD0": {
        "name_in_analysis": "FUN_58907fd0",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0.",
        "behavior": "Initializes the static-text base through FUN_58731700, copies two supplied arguments into object fields, clears the adjacent state fields, installs the CListTextScreen vtable, and initializes one field to 0xFFFF.",
        "uncertainty": "The role of the copied arguments and initialized state fields is not established by this constructor alone.",
    },
    "5876E510": {
        "name_in_analysis": "FUN_5876e510",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0 with a sprite-bundle pointer and screen parameters.",
        "behavior": "Initializes the moving-sprite-bundle base through FUN_587B66E0, installs the CFadeMovingSpriteBundleScreen vtable, stores supplied coordinate/state values, and copies fields from the referenced bundle when it is nonnull.",
        "uncertainty": "The animation timing and meaning of the copied bundle fields are not fully established from this constructor.",
    },
    "5875B000": {
        "name_in_analysis": "FUN_5875b000",
        "called_by": "Directly called by the installed logo/control screen constructor at 0x5878D6D0 when constructing its associated data/encryptor object.",
        "behavior": "Installs the CDataEncryptor vtable, clears the observed object fields, allocates a 0x98-byte internal object, and initializes its nested state through the captured callback/helper path.",
        "uncertainty": "The nested allocation's data format, ownership, and encryption behavior are not established by this constructor alone.",
    },
    "58902CE0": {
        "name_in_analysis": "FUN_58902ce0",
        "called_by": "Called repeatedly by the installed logo/control screen constructor at 0x5878D6D0 while configuring its child lists.",
        "behavior": "Writes the supplied value to object offset +0x28, walks the circular child chain rooted at +0x3C using the link at +0x38, and recurses into children whose 16-bit flags at +0x24 contain bit 0x4000.",
        "uncertainty": "The list and flag semantics are unknown; the description records only observed field access and control flow.",
    },
    "58902D20": {
        "name_in_analysis": "FUN_58902d20",
        "called_by": "Called repeatedly by the installed logo/control screen constructor at 0x5878D6D0 and by its CNFScreenShot child constructor at 0x587C75E0.",
        "behavior": "Writes the supplied value to object offset +0x2C, walks the circular child chain rooted at +0x3C using the link at +0x38, and recurses into children whose 16-bit flags at +0x24 contain bit 0x8000.",
        "uncertainty": "The list and flag semantics are unknown; the description records only observed field access and control flow.",
    },
    "5892DEF0": {
        "name_in_analysis": "FUN_5892def0",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-2, variant-0 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType0MMXHigh555SpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "58937510": {
        "name_in_analysis": "FUN_58937510",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-2, variant-1 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType1MMXHigh555SpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "58943C70": {
        "name_in_analysis": "FUN_58943c70",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-2, variant-2 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType2MMXHigh555SpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "5894CC60": {
        "name_in_analysis": "FUN_5894cc60",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-2 high-color variant-0 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType0MMXHigh565SpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "589563E0": {
        "name_in_analysis": "FUN_589563e0",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-2 high-color variant-1 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType1MMXHigh565SpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "58962D40": {
        "name_in_analysis": "FUN_58962d40",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-2 high-color variant-2 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType2MMXHigh565SpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "5891CD00": {
        "name_in_analysis": "FUN_5891cd00",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-3 variant-0 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType0MMXTrueSpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "5891FB10": {
        "name_in_analysis": "FUN_5891fb10",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-3 variant-1 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType1MMXTrueSpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "58926C10": {
        "name_in_analysis": "FUN_58926c10",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-3 variant-2 branch.",
        "behavior": "Stores the three supplied values in object slots 3, 1, and 2, then installs the CType2MMXTrueSpriteData vtable.",
        "uncertainty": "The semantic meanings of the three object slots and the parser's format discriminator values are not independently decoded.",
    },
    "5890E620": {
        "name_in_analysis": "FUN_5890e620",
        "called_by": "Vtable slot +0 at 0x589A2D58 for CType0MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_5890E600 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 0.",
        "behavior": "Installs the CType0MMXAlphaSpriteData vtable, invokes the CSpriteData base destructor FUN_58903AC0, and passes this to FUN_5897CC42 when the low bit of the second argument is set.",
        "uncertainty": "The deletion callback target and ownership contract are unresolved; the destructor does not itself clear or release the object field at +0x0C in the captured body.",
    },
    "5890E650": {
        "name_in_analysis": "FUN_5890e650",
        "called_by": "Vtable slot +4 at 0x589A2D58 for CType0MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_5890E600 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 0.",
        "behavior": "Checks the object data pointer, clips the requested rectangle against stored bounds, obtains row stride and buffer origin through FUN_5890C1C0 and FUN_58789FB0, and mixes packed source/destination pixel data using scalar and MMX paths with masks DAT_58A284DC and DAT_58A284E4.",
        "uncertainty": "The meaning of the rectangle and final two arguments, pixel/channel layout, mask semantics, source data schema, and virtual method contract remain unresolved.",
    },
    "5890FA20": {
        "name_in_analysis": "FUN_5890fa20",
        "called_by": "Vtable slot +8 at 0x589A2D58 for CType0MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_5890E600 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 0.",
        "behavior": "Checks the object data pointer, clips the requested rectangle against stored bounds, obtains row stride and buffer origin through FUN_5890C1C0 and FUN_58789FB0, then processes packed pixel data with MMX paths and the observed masks DAT_58A284DC, DAT_58A284E4, DAT_58A284EC, DAT_58A284F4, and DAT_58A284FC.",
        "uncertainty": "The parameter roles, color/channel layout, masks' semantics, pixel-buffer organization, and virtual method contract remain unresolved.",
    },
    "58910C40": {
        "name_in_analysis": "FUN_58910c40",
        "called_by": "Vtable slot +0 at 0x589A2D68 for CType1MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_58910C20 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 1.",
        "behavior": "Installs the CType1MMXAlphaSpriteData vtable, invokes the CSpriteData base destructor FUN_58903AC0, and passes this to FUN_5897CC42 when the low bit of the second argument is set.",
        "uncertainty": "The deletion callback target and ownership contract are unresolved; the destructor does not itself clear or release the object field at +0x0C in the captured body.",
    },
    "58910C70": {
        "name_in_analysis": "FUN_58910c70",
        "called_by": "Vtable slot +4 at 0x589A2D68 for CType1MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_58910C20 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 1.",
        "behavior": "Checks the object data pointer, clips the requested rectangle against stored bounds, obtains row stride and buffer origin through FUN_5890C1C0 and FUN_58789FB0, walks the signed-word encoded source stream while clipping rows, and processes packed source/destination pixel data with scalar and MMX paths using masks DAT_58A284DC and DAT_58A284E4.",
        "uncertainty": "The stream record schema, rectangle and final argument roles, pixel/channel layout, mask semantics, and virtual method contract remain unresolved.",
    },
    "58913D40": {
        "name_in_analysis": "FUN_58913d40",
        "called_by": "Vtable slot +8 at 0x589A2D68 for CType1MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_58910C20 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 1.",
        "behavior": "Checks the object data pointer, clips the requested rectangle against stored bounds, obtains row stride and buffer origin through FUN_5890C1C0 and FUN_58789FB0, traverses signed-word stream records while clipping rows, then processes packed pixel data with MMX paths and masks DAT_58A284DC, DAT_58A284E4, DAT_58A284EC, DAT_58A284F4, and DAT_58A284FC.",
        "uncertainty": "The stream record schema, parameter roles, pixel/channel layout, mask meanings, and virtual method contract remain unresolved.",
    },
    "58916B80": {
        "name_in_analysis": "FUN_58916b80",
        "called_by": "Vtable slot +0 at 0x589A2D78 for CType2MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_58916B60 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 2.",
        "behavior": "Installs the CType2MMXAlphaSpriteData vtable, invokes the CSpriteData base destructor FUN_58903AC0, and passes this to FUN_5897CC42 when the low bit of the second argument is set.",
        "uncertainty": "The deletion callback target and ownership contract are unresolved; the destructor does not itself clear or release the object field at +0x0C in the captured body.",
    },
    "58916BB0": {
        "name_in_analysis": "FUN_58916bb0",
        "called_by": "Vtable slot +4 at 0x589A2D78 for CType2MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_58916B60 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 2.",
        "behavior": "Checks the object data pointer, clips the requested rectangle against stored bounds, obtains row stride and buffer origin through FUN_5890C1C0 and FUN_58789FB0, traverses the signed-word source stream to skip clipped rows and variable-sized records, then mixes packed source/destination pixel data with scalar and MMX paths using masks DAT_58A284DC and DAT_58A284E4.",
        "uncertainty": "The stream record schema, rectangle and final argument roles, pixel/channel layout, mask semantics, and virtual method contract remain unresolved.",
    },
    "58919DE0": {
        "name_in_analysis": "FUN_58919de0",
        "called_by": "Vtable slot +8 at 0x589A2D78 for CType2MMXAlphaSpriteData; the parser installs that vtable through constructor FUN_58916B60 when DAT_589CDFFC equals 4 and record subfield piVar13[0xB] is 2.",
        "behavior": "Checks the object data pointer, clips the requested rectangle against stored bounds, obtains row stride and buffer origin through FUN_5890C1C0 and FUN_58789FB0, traverses signed-word stream records while clipping rows, then processes packed pixel data with MMX paths and masks DAT_58A284DC, DAT_58A284E4, DAT_58A284EC, DAT_58A284F4, and DAT_58A284FC.",
        "uncertainty": "The stream record schema, parameter roles, pixel/channel layout, mask meanings, and virtual method contract remain unresolved.",
    },
    "5890E600": {
        "name_in_analysis": "FUN_5890e600",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-4 variant-0 branch.",
        "behavior": "Clears object slots 3, 1, and 2, then installs the CType0MMXAlphaSpriteData vtable.",
        "uncertainty": "The semantic meanings of the cleared fields and the parser's format discriminator values are not independently decoded.",
    },
    "58910C20": {
        "name_in_analysis": "FUN_58910c20",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-4 variant-1 branch.",
        "behavior": "Clears object slots 3, 1, and 2, then installs the CType1MMXAlphaSpriteData vtable.",
        "uncertainty": "The semantic meanings of the cleared fields and the parser's format discriminator values are not independently decoded.",
    },
    "58916B60": {
        "name_in_analysis": "FUN_58916b60",
        "called_by": "Directly selected by the installed sprite parser at 0x58903E40 in its format-4 variant-2 branch.",
        "behavior": "Clears object slots 3, 1, and 2, then installs the CType2MMXAlphaSpriteData vtable.",
        "uncertainty": "The semantic meanings of the cleared fields and the parser's format discriminator values are not independently decoded.",
    },
    "5892DF10": {
        "name_in_analysis": "FUN_5892df10",
        "called_by": "Vtable slot +0 at 0x589A2DB8 for CType0MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_5892DEF0.",
        "behavior": "Installs the CType0MMXHigh555SpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "5892DF50": {
        "name_in_analysis": "FUN_5892df50",
        "called_by": "Vtable slot +4 at 0x589A2DB8 for CType0MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_5892DEF0.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then processes the supplied buffers through a long loop containing MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58931D20": {
        "name_in_analysis": "FUN_58931d20",
        "called_by": "Vtable slot +8 at 0x589A2DB8 for CType0MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_5892DEF0.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second long pixel-processing loop with MMX operations including MOVQ, PAND, PSRLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58937530": {
        "name_in_analysis": "FUN_58937530",
        "called_by": "Vtable slot +0 at 0x589A2DC8 for CType1MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_58937510 when the format-2 High555 branch has record subfield piVar13[0xB] equal to 1.",
        "behavior": "Installs the CType1MMXHigh555SpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "58937580": {
        "name_in_analysis": "FUN_58937580",
        "called_by": "Vtable slot +4 at 0x589A2DC8 for CType1MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_58937510 when the format-2 High555 branch has record subfield piVar13[0xB] equal to 1.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then processes the supplied buffers through a long loop containing packed MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58933B50": {
        "name_in_analysis": "FUN_58933b50",
        "called_by": "Vtable slot +8 at 0x589A2DC8 for CType1MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_58937510 when the format-2 High555 branch has record subfield piVar13[0xB] equal to 1.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second long buffer-processing loop with MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58943C90": {
        "name_in_analysis": "FUN_58943c90",
        "called_by": "Vtable slot +0 at 0x589A2DD8 for CType2MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_58943C70 when the format-2 High555 branch has record subfield piVar13[0xB] equal to 2.",
        "behavior": "Installs the CType2MMXHigh555SpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "58943CE0": {
        "name_in_analysis": "FUN_58943ce0",
        "called_by": "Vtable slot +4 at 0x589A2DD8 for CType2MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_58943C70 when the format-2 High555 branch has record subfield piVar13[0xB] equal to 2.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, clips the requested rectangle against object bounds, and processes a signed-word run stream and pixel buffers with packed MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "589402F0": {
        "name_in_analysis": "FUN_589402f0",
        "called_by": "Vtable slot +8 at 0x589A2DD8 for CType2MMXHigh555SpriteData; the parser installs that vtable through constructor FUN_58943C70 when the format-2 High555 branch has record subfield piVar13[0xB] equal to 2.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second rectangle/buffer path with packed MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "5894CC80": {
        "name_in_analysis": "FUN_5894cc80",
        "called_by": "Vtable slot +0 at 0x589A2DE8 for CType0MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_5894CC60 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is zero.",
        "behavior": "Installs the CType0MMXHigh565SpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "5894CCC0": {
        "name_in_analysis": "FUN_5894ccc0",
        "called_by": "Vtable slot +4 at 0x589A2DE8 for CType0MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_5894CC60 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is zero.",
        "behavior": "Reads sprite-data fields at +4, +8, and +0x0C, clips a requested rectangle against stored bounds, and processes packed pixel buffers with MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, color-mask interpretation, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58950B50": {
        "name_in_analysis": "FUN_58950b50",
        "called_by": "Vtable slot +8 at 0x589A2DE8 for CType0MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_5894CC60 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is zero.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second buffer-processing path with packed MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, color-mask interpretation, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58956400": {
        "name_in_analysis": "FUN_58956400",
        "called_by": "Vtable slot +0 at 0x589A2DF8 for CType1MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_589563E0 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is 1.",
        "behavior": "Installs the CType1MMXHigh565SpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "58956450": {
        "name_in_analysis": "FUN_58956450",
        "called_by": "Vtable slot +4 at 0x589A2DF8 for CType1MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_589563E0 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is 1.",
        "behavior": "Reads sprite-data fields at +4, +8, and +0x0C, clips a requested rectangle against stored bounds, walks the signed-word encoded source stream, and processes packed pixel buffers with MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, run-stream schema, color-mask interpretation, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "589529D0": {
        "name_in_analysis": "FUN_589529d0",
        "called_by": "Vtable slot +8 at 0x589A2DF8 for CType1MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_589563E0 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is 1.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second buffer-processing path with packed MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, color-mask interpretation, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58962D60": {
        "name_in_analysis": "FUN_58962d60",
        "called_by": "Vtable slot +0 at 0x589A2E08 for CType2MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_58962D40 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is 2.",
        "behavior": "Installs the CType2MMXHigh565SpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "58962DE0": {
        "name_in_analysis": "FUN_58962de0",
        "called_by": "Vtable slot +4 at 0x589A2E08 for CType2MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_58962D40 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is 2.",
        "behavior": "Reads sprite-data fields at +4, +8, and +0x0C, clips the requested rectangle against stored bounds, walks the signed-word encoded source stream, and processes packed pixel buffers with MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, run-stream schema, color-mask interpretation, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "5895F370": {
        "name_in_analysis": "FUN_5895f370",
        "called_by": "Vtable slot +8 at 0x589A2E08 for CType2MMXHigh565SpriteData; the parser installs that vtable through constructor FUN_58962D40 in the format-2 branch when the High565 flag is set and record subfield piVar13[0xB] is 2.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second buffer-processing path with packed MMX operations including MOVQ, PAND, PSRLW, PMULLW, and PADDUSW.",
        "uncertainty": "The exact argument roles, color-mask interpretation, pixel-buffer layout, and return/result contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "5891CD20": {
        "name_in_analysis": "FUN_5891cd20",
        "called_by": "Vtable slot +0 at 0x589A2D88 for CType0MMXTrueSpriteData; the parser installs that vtable through constructor FUN_5891CD00 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is zero.",
        "behavior": "Installs the CType0MMXTrueSpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "5891CD60": {
        "name_in_analysis": "FUN_5891cd60",
        "called_by": "Vtable slot +4 at 0x589A2D88 for CType0MMXTrueSpriteData; the parser installs that vtable through constructor FUN_5891CD00 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is zero.",
        "behavior": "Reads sprite-data fields at +4, +8, and +0x0C, clips requested coordinates against stored bounds, uses the format stride and color masks, and performs packed channel multiply/add operations through MMX.",
        "uncertainty": "The exact channel layout, weighting arguments, source-buffer organization, virtual method name, and return contract remain unresolved; the multiply/add sequence is consistent with blending but does not alone prove its call-site semantics.",
    },
    "5891E820": {
        "name_in_analysis": "FUN_5891e820",
        "called_by": "Vtable slot +8 at 0x589A2D88 for CType0MMXTrueSpriteData; the parser installs that vtable through constructor FUN_5891CD00 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is zero.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second packed MMX buffer operation using the format's color masks.",
        "uncertainty": "The exact argument roles, channel layout, buffer organization, virtual method name, and return contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "5891FB30": {
        "name_in_analysis": "FUN_5891fb30",
        "called_by": "Vtable slot +0 at 0x589A2D98 for CType1MMXTrueSpriteData; the parser installs that vtable through constructor FUN_5891FB10 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is 1.",
        "behavior": "Installs the CType1MMXTrueSpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "5891FB70": {
        "name_in_analysis": "FUN_5891fb70",
        "called_by": "Vtable slot +4 at 0x589A2D98 for CType1MMXTrueSpriteData; the parser installs that vtable through constructor FUN_5891FB10 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is 1.",
        "behavior": "Reads sprite-data fields at +4, +8, and +0x0C, clips requested coordinates against stored bounds, walks a signed-word encoded source stream, and performs packed color arithmetic with MMX and the format masks.",
        "uncertainty": "The exact channel layout, weighting arguments, source-buffer organization, virtual method name, and return contract remain unresolved.",
    },
    "58923DC0": {
        "name_in_analysis": "FUN_58923dc0",
        "called_by": "Vtable slot +8 at 0x589A2D98 for CType1MMXTrueSpriteData; the parser installs that vtable through constructor FUN_5891FB10 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is 1.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second packed MMX buffer operation using the format's color masks.",
        "uncertainty": "The exact argument roles, channel layout, buffer organization, virtual method name, and return contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58926C30": {
        "name_in_analysis": "FUN_58926c30",
        "called_by": "Vtable slot +0 at 0x589A2DA8 for CType2MMXTrueSpriteData; the parser installs that vtable through constructor FUN_58926C10 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is 2.",
        "behavior": "Installs the CType2MMXTrueSpriteData vtable, dispatches the optional object field at +0x0C through FUN_5897CF96, invokes the CSpriteData base destructor FUN_58903AC0, and passes the object to FUN_5897CC42 when the low bit of its second argument is set.",
        "uncertainty": "The callback targets and ownership contract are not recovered; the low-bit flag is described only from its observed branch.",
    },
    "58926C70": {
        "name_in_analysis": "FUN_58926c70",
        "called_by": "Vtable slot +4 at 0x589A2DA8 for CType2MMXTrueSpriteData; the parser installs that vtable through constructor FUN_58926C10 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is 2.",
        "behavior": "Reads sprite-data fields at +4, +8, and +0x0C, clips requested coordinates against stored bounds, walks a signed-word encoded source stream, and performs packed color arithmetic with MMX and the format masks.",
        "uncertainty": "The exact channel layout, weighting arguments, source-buffer organization, virtual method name, and return contract remain unresolved.",
    },
    "5892AFD0": {
        "name_in_analysis": "FUN_5892afd0",
        "called_by": "Vtable slot +8 at 0x589A2DA8 for CType2MMXTrueSpriteData; the parser installs that vtable through constructor FUN_58926C10 when its format discriminator DAT_589CDFFC equals 3 and record subfield piVar13[0xB] is 2.",
        "behavior": "Reads the sprite-data object's +8 and +0x0C fields through FUN_58789FB0 and FUN_5890C1C0, then runs a second packed MMX buffer operation using the format's color masks.",
        "uncertainty": "The exact argument roles, channel layout, buffer organization, virtual method name, and return contract are not established by the vtable slot or Ghidra pseudocode alone.",
    },
    "58903AC0": {
        "name_in_analysis": "FUN_58903ac0",
        "called_by": "Called by CType0MMXHigh555SpriteData destructor FUN_5892DF10.",
        "behavior": "Installs the CSpriteData base vtable and dispatches object field +0x0C through FUN_5897CF96 when that field is nonzero.",
        "uncertainty": "The host callback address and ownership policy are unresolved.",
    },
    "5897CF96": {
        "name_in_analysis": "FUN_5897cf96",
        "called_by": "Called by the CType0MMXHigh555SpriteData and CSpriteData destructors when object field +0x0C is nonzero.",
        "behavior": "A six-byte indirect-call thunk through the host callback slot at 0x5898C2AC.",
        "uncertainty": "The callback target, ABI, and allocation/free semantics are not statically identified.",
    },
    "5897CC42": {
        "name_in_analysis": "FUN_5897cc42",
        "called_by": "Called by FUN_5892DF10 when the low bit of its second argument is set.",
        "behavior": "A six-byte indirect-call thunk through the host callback slot at 0x5898C1F8.",
        "uncertainty": "The callback target and object-ownership contract are unresolved.",
    },
    "5897CBDA": {
        "name_in_analysis": "__security_check_cookie",
        "called_by": "Directly called by both large CType0MMXHigh555SpriteData vtable methods in their epilogues.",
        "behavior": "The installed MSVC security-cookie check routine; both methods call it after restoring their saved registers and before returning.",
        "uncertainty": "This compiler-runtime helper is included only to preserve the observed call target; its broader runtime policy is outside this sprite-data slice.",
    },
    "58789FB0": {
        "name_in_analysis": "FUN_58789fb0",
        "called_by": "Called by FUN_5892DF50 and FUN_58931D20 with the sprite-data object as their argument.",
        "behavior": "Returns the 32-bit value stored at argument offset +8.",
        "uncertainty": "The field's higher-level meaning is unresolved.",
    },
    "5890C1C0": {
        "name_in_analysis": "FUN_5890c1c0",
        "called_by": "Called by FUN_5892DF50 and FUN_58931D20 with the sprite-data object as their argument.",
        "behavior": "Returns the 32-bit value stored at argument offset +0x0C.",
        "uncertainty": "The field's higher-level meaning is unresolved.",
    },
    "588F3D70": {
        "name_in_analysis": "FUN_588f3d70",
        "called_by": "Called by the installed logo/control screen constructor at 0x5878D6D0 for the Logo.spr path.",
        "behavior": "Calls FUN_58906de0 to initialize/load the supplied sprite-file object, installs the CSpriteFileFDL vtable, checks the resulting sprite/effect/bundle arrays, and calls FUN_587750B0 with mode 2 only when those arrays are empty and the final flag is 1.",
        "uncertainty": "The caller-visible meaning of the final flag and the empty-file fallback path are not established; the sprite object’s indexed field names are retained as offsets.",
    },
    "58906DE0": {
        "name_in_analysis": "FUN_58906de0",
        "called_by": "Called by FUN_588F3D70 and other sprite-file consumers.",
        "behavior": "Installs the CSpriteFile vtable and delegates to FUN_58903E40. When the input is null or the parser reports zero, it resets the header fields and writes the 40-byte `Sangduck Sprite File` fallback signature.",
        "uncertainty": "The parser’s success status and ownership of allocated payloads are only partially established; several fallback structure fields have no recovered semantic names.",
    },
    "58903E40": {
        "name_in_analysis": "FUN_58903e40",
        "called_by": "Directly called by FUN_58906DE0; the parent loader is reached from the installed logo screen’s `.\\SPR\\Logo.spr` path.",
        "behavior": "The 12,100-byte parser has both host-resource and file-callback input paths. It checks the 40-byte `Sangduck Sprite File` signature, handles format versions 1 through 3, validates size/check fields, allocates sprite/effect/bundle tables, decodes sprite payload data, and formats errors through FUN_5874BA60.",
        "uncertainty": "The exact meanings of the packed header fields, renderer mode globals, payload encodings, and many directly called record/decoder helpers remain unresolved. The corrected extent includes the observed security-cookie epilogue and `ret 8`; the Ghidra body-byte count had stopped five bytes short of that return.",
    },
    "587750B0": {
        "name_in_analysis": "FUN_587750b0",
        "called_by": "Called by FUN_588F3D70 with mode 2 when the loaded file’s checked arrays are empty and its final flag is 1.",
        "behavior": "If the object’s handle at +4 is nonzero, builds a bounded path/message buffer from the input and one of several mode-specific strings, appends CRLF, and uses host-supplied callbacks to open, seek, write, and close a handle. The verified code span ends at `ret 8` and is 515 bytes.",
        "uncertainty": "The callback signatures, file/path roles, and purpose of this conditional write are not resolved; the function is not labeled as a save or log routine.",
    },
    "58731BD0": {
        "name_in_analysis": "FUN_58731bd0",
        "called_by": "Called by FUN_587750B0 to append a mode-specific path component; it delegates destination-length checking to FUN_58731500.",
        "behavior": "Checks the supplied destination capacity, scans the existing destination through FUN_58731500, appends bytes from the supplied source until NUL or capacity exhaustion, terminates the destination, and returns the captured negative error code on invalid size or truncation.",
        "uncertainty": "The helper’s intended library/API name and exact meaning of its error constants are not established by the client call graph.",
    },
    "5874BA60": {
        "name_in_analysis": "FUN_5874ba60",
        "called_by": "Called by FUN_58903E40 on malformed sprite headers and payloads to populate its local error buffer.",
        "behavior": "Validates the destination size, forwards the format string and variadic argument list through FUN_5897CE38 with a maximum output of size minus one, and explicitly terminates the buffer on truncation/error.",
        "uncertainty": "The host callback behind FUN_5897CE38 and exact callback ABI are unresolved; this record describes the observed wrapper contract only.",
    },
    "5897CEC8": {
        "name_in_analysis": "FUN_5897cec8",
        "called_by": "Called by FUN_587750B0 with the supplied path and character `\\`; its return value controls the append offset.",
        "behavior": "A six-byte indirect-call thunk through the host callback slot at 0x5898C28C.",
        "uncertainty": "The callback target and semantics are unresolved; the call-site arguments alone do not prove a particular CRT function.",
    },
    "58731500": {
        "name_in_analysis": "FUN_58731500",
        "called_by": "Directly called by FUN_58731BD0 to scan the existing destination string and report the consumed length through a register-based output path.",
        "behavior": "Scans at most the requested number of bytes for NUL, writes the consumed length through the observed register-based output pointer when it finds NUL, writes zero when the limit is exhausted, and returns void.",
        "uncertainty": "Ghidra reports an `unaff_EDI` output because the original register/ABI contract is not fully recovered; no standard-library name is assigned.",
    },
    "5897CE38": {
        "name_in_analysis": "FUN_5897ce38",
        "called_by": "Called by FUN_5874BA60 with the destination buffer, bounded count, format string, and variadic argument-list address.",
        "behavior": "A six-byte indirect-call thunk through a fixed host callback slot.",
        "uncertainty": "The callback target and variadic-format implementation are not statically identified; its role is inferred from the wrapper call arguments.",
    },
    "587956B0": {
        "name_in_analysis": "InitCGCDLL",
        "called_by": "Export InitCGCDLL at RVA 0x656B0 in the installed Main.dll image.",
        "behavior": "Forwards its first argument to FUN_58907ce0 using a cdecl call, discards that function's return value, and returns zero.",
        "uncertainty": "The callback-table layout consumed by FUN_58907ce0 and the export's full host contract remain unresolved. This capture is the installed 2026 build, distinct from archived 2062 Main.dll.",
    },
    "58796310": {
        "name_in_analysis": "GetUserId",
        "called_by": "Export GetUserId at RVA 0x66310 in the installed Main.dll image.",
        "behavior": "Returns the address 0x58A0B450 in EAX; Ghidra labels the target DAT_58a0b450 and types the result as a pointer to a 32-bit value.",
        "uncertainty": "The value's runtime contents, ownership, and host-side meaning are not established by this leaf export. This capture is the installed 2026 build, distinct from archived 2062 Main.dll.",
    },
    "58907CE0": {
        "name_in_analysis": "FUN_58907ce0",
        "called_by": "Direct call from exported InitCGCDLL at 0x587956B0.",
        "behavior": "Reads the host callback table at offsets 0x00 through 0x88 and 0x1CC, copies its 32-bit, 16-bit, and 8-bit fields into fixed Main.dll globals, then returns 1. The highest observed read ends at byte 0x1CF.",
        "uncertainty": "The semantic names and ownership of the copied callback/global fields remain unknown. No length parameter or validation is visible in this function; do not infer the host table contract beyond its observed reads.",
    },
    "58902C20": {
        "name_in_analysis": "FUN_58902c20",
        "called_by": "Called by FUN_58902ee0 when the child node's offset-0x30 owner pointer is nonzero.",
        "behavior": "Unlinks a child from the circular doubly linked structure using child offsets +0x34/+0x38 and the owner's head at +0x3C; resets the child links to itself and clears its owner pointer.",
        "uncertainty": "The semantic role of this child list is unknown. Field meanings are inferred only from Ghidra's decompilation and their concrete pointer updates.",
    },
    "58902C70": {
        "name_in_analysis": "FUN_58902c70",
        "called_by": "Called by FUN_58902f50 when the child node's offset-0x40 owner pointer is nonzero.",
        "behavior": "Unlinks a child from a null-terminated doubly linked structure using child offsets +0x44/+0x48 and the owner's head at +0x4C; clears the child owner and link pointers.",
        "uncertainty": "The semantic role of this child list is unknown. Field meanings are inferred only from Ghidra's decompilation and their concrete pointer updates.",
    },
    "58902EE0": {
        "name_in_analysis": "FUN_58902ee0",
        "called_by": "Directly called by the installed screen constructor at 0x587C35A0 for child nodes with a nonzero +0x30 owner field; it also calls FUN_58902c20 on already-owned nodes.",
        "behavior": "Inserts a child into the owner's circular doubly linked list headed at +0x3C, ordered by the signed 16-bit child key at +0x26; equal keys are placed after existing equal-key nodes.",
        "uncertainty": "The list's user-facing purpose and the meaning of key +0x26 are unknown. Ghidra identifies these offsets and branch comparisons, not their higher-level names.",
    },
    "58902F50": {
        "name_in_analysis": "FUN_58902f50",
        "called_by": "Directly called by the installed screen constructor at 0x587C35A0 for child nodes with a nonzero +0x40 owner field; it also calls FUN_58902c70 on already-owned nodes.",
        "behavior": "Inserts a child into the owner's null-terminated doubly linked list headed at +0x4C, ordered by the signed 16-bit child key at +0x26; equal keys are placed after existing equal-key nodes.",
        "uncertainty": "The list's user-facing purpose and the meaning of key +0x26 are unknown. Ghidra identifies these offsets and branch comparisons, not their higher-level names.",
    },
    "589031A0": {
        "name_in_analysis": "FUN_589031a0",
        "called_by": "Directly called from installed Main.dll screen constructors including 0x587C35A0 and 0x5878D6D0.",
        "behavior": "Initializes the CScreen base fields, geometry, flag word, priority key at +0x26, and both child-list link sets; if its second argument is nonzero, it inserts the node into both helper-managed lists.",
        "uncertainty": "Ghidra reveals the field writes and optional list calls, but the second argument's meaning and the user-facing roles of both lists remain unknown.",
    },
    "58733280": {
        "name_in_analysis": "FUN_58733280",
        "called_by": "The installed screen constructor at 0x587C35A0 calls this constructor seven times for its initial text rows.",
        "behavior": "Builds a CStaticTextScreen over CTextScreen, allocates an 0x80-byte text buffer through FUN_5897cc4e, clears it through FUN_5897cc48, copies its string argument through FUN_58731ce0, and returns the object.",
        "uncertainty": "The seven rows' user-facing content and several inherited field meanings are unknown. The two host callback thunks are identified only by their fixed indirect call slots and call-site arguments.",
    },
    "58731700": {
        "name_in_analysis": "FUN_58731700",
        "called_by": "Directly called by the installed static-text constructor at 0x58733280.",
        "behavior": "Initializes the CTextScreen base through FUN_589031a0 with a 0x40 default key, then stores the constructor's remaining base fields and installs the CTextScreen vtable.",
        "uncertainty": "The meanings of the fields at offsets +0x50 through +0x68 and the CTextScreen virtual contract are not established by this helper alone.",
    },
    "5897CC4E": {
        "name_in_analysis": "FUN_5897cc4e",
        "called_by": "Directly called by FUN_58733280 to request the 0x80-byte text buffer; also appears as an allocator-like helper in the installed screen constructor.",
        "behavior": "Transfers control through the absolute function pointer at 0x5898C200.",
        "uncertainty": "The callback target and host allocator contract are not statically resolved in this capture; allocator purpose is supported by caller arguments and use, not by the thunk body itself.",
    },
    "5897CC48": {
        "name_in_analysis": "FUN_5897cc48",
        "called_by": "Directly called by FUN_58733280 with (buffer, 0, 0x80) after allocating the text buffer.",
        "behavior": "Transfers control through the absolute function pointer at 0x5898C1FC.",
        "uncertainty": "The callback target and host helper contract are not statically resolved in this capture; zero-fill purpose is supported by caller arguments and subsequent buffer use, not by the thunk body itself.",
    },
    "58731CE0": {
        "name_in_analysis": "FUN_58731ce0",
        "called_by": "Directly called by FUN_58733280 with the constructor's string argument.",
        "behavior": "If the destination pointer at object offset +0x6C and the source string are nonnull, copies bytes into the buffer and writes a terminator; the 0x80-byte bound allows at most 127 non-NUL characters.",
        "uncertainty": "The buffer is cleared before this helper is called by the observed constructor path, but other callers and non-cleared-buffer behavior are not audited. The string's higher-level role is unknown.",
    },
    "587962C0": {
        "name_in_analysis": "AllocScreen",
        "called_by": "Export AllocScreen at RVA 0x662C0 in the installed Main.dll image.",
        "behavior": "Allocates 0x84 bytes through 0x5897CC4E, constructs the screen through FUN_587C35A0, stores the pointer at 0x58A24584, optionally calls vtable offset +0x20 through 0x58A24594, and returns the stored pointer.",
        "uncertainty": "The host meaning of the optional third parameter and vtable callback is unknown. This capture is the installed 2026 build, distinct from the archived 2062 Main.dll.",
    },
    "587C35A0": {
        "name_in_analysis": "FUN_587c35a0",
        "called_by": "Directly called by exported AllocScreen at 0x587962C0.",
        "behavior": "Initializes a CMenuScreen/CNavyFIELDScreen object, constructs a series of child controls with 0x70-byte allocations, initializes shared menu fields, and reads a FleetMission registry version value before returning the screen object.",
        "uncertainty": "The exact purpose and labels of several child controls and the significance of the registry/version paths are not fully established. Ghidra's indexed function extent is 1,704 bytes.",
    },
    "58F76B6B": {
        "name_in_analysis": "entry",
        "called_by": "PE module entrypoint at RVA 0x846B6B in the installed Main.dll.",
        "behavior": "The 37-byte entry stream pushes 0x45D54D3E, calls 0x58C3A998, then contains flag/register operations ending in a JMP to 0x58C60FD6.",
        "uncertainty": "The on-disk .vmp1 bytes are unchanged in this function. Dynamic reachability of its trailing JMP is not established because the C3A998 helper chain ends in PUSH EBP; RET, whose EBP target is unknown.",
    },
    "58C3A998": {
        "name_in_analysis": "FUN_58c3a998",
        "called_by": "Direct call from entry at 0x58F76B6B.",
        "behavior": "The captured function transfers into helper 0x58BF62F5.",
        "uncertainty": "Ghidra's register/flag-level pseudocode does not establish the helper's VMProtect semantics.",
    },
    "58BF62F5": {
        "name_in_analysis": "FUN_58bf62f5",
        "called_by": "Reached from the entry setup helper at 0x58C3A998.",
        "behavior": "A 179-byte protected-section routine ending in a JMP to 0x58DDB193; its mapped immediate operands include load-time values that differ from the on-disk bytes.",
        "uncertainty": "The transfer chain is statically observed, but the EBP-based dynamic target and the routine's VM state/application-level behavior are not recovered.",
    },
    "58DDB193": {
        "name_in_analysis": "FUN_58ddb193",
        "called_by": "Static helper chain from 0x58BF62F5.",
        "behavior": "A 13-byte transfer in the entry setup helper chain.",
        "uncertainty": "The transfer target is recorded from captured code; the protected state transition is unknown.",
    },
    "58BFF900": {
        "name_in_analysis": "FUN_58bff900",
        "called_by": "Static helper chain through 0x58DDB193.",
        "behavior": "The two captured instructions are PUSH EBP; RET, transferring control to the runtime value in EBP.",
        "uncertainty": "The EBP target and the dynamic return destination are unknown; this is not proven to return to the lexical caller.",
    },
    "58C60FD6": {
        "name_in_analysis": "thunk_FUN_58e0a61e",
        "called_by": "The entry function has a direct JMP at 0x58F76B8B to this thunk after its call to 0x58C3A998; whether runtime execution reaches that lexical JMP is unresolved.",
        "behavior": "A 5-byte thunk that transfers to 0x58E0A61E.",
        "uncertainty": "This records the captured trampoline edge only.",
    },
    "58E0A61E": {
        "name_in_analysis": "FUN_58e0a61e",
        "called_by": "Reached through thunk 0x58C60FD6.",
        "behavior": "Compares EDI with ESP+0x60, then jumps to 0x58F8160D; that CMP supplies flags for the following JA.",
        "uncertainty": "The VM interpreter state and intended application routine remain unresolved.",
    },
    "58F8160D": {
        "name_in_analysis": "FUN_58f8160d",
        "called_by": "Reached from 0x58E0A61E.",
        "behavior": "JA transfers to the 2-byte JMP ESI stub at 0x58C84F0B; fallthrough loads EDX from ESP and JMPs to 0x58DC34AD. The JA flags were set by the preceding CMP at 0x58E0A622.",
        "uncertainty": "The runtime comparison outcome and ESI target are unknown; do not infer handler semantics from the static branch.",
    },
    "58C84F0B": {
        "name_in_analysis": "FUN_58c84f0b",
        "called_by": "Conditional path from 0x58F8160D.",
        "behavior": "The captured 2-byte function body is JMP ESI.",
        "uncertainty": "The runtime ESI value and handler set are not present in the static capture.",
    },
    "58DC34AD": {
        "name_in_analysis": "FUN_58dc34ad",
        "called_by": "Conditional path from 0x58F8160D.",
        "behavior": "Transfers to 0x58C319AB with an unconditional JMP.",
        "uncertainty": "The protected state transition and meaning of the alternate path are unknown.",
    },
    "58C319AB": {
        "name_in_analysis": "FUN_58c319ab",
        "called_by": "Reached from 0x58DC34AD.",
        "behavior": "Transfers to 0x58D6F6B0.",
        "uncertainty": "The destination's role in the VMProtect protocol remains unknown.",
    },
    "58D6F6B0": {
        "name_in_analysis": "FUN_58d6f6b0",
        "called_by": "Reached from 0x58C319AB.",
        "behavior": "Pushes EDI and jumps to the 25-byte routine at 0x58D6F58A.",
        "uncertainty": "The runtime purpose of the register transfer is unknown.",
    },
    "58D6F58A": {
        "name_in_analysis": "FUN_58d6f58a",
        "called_by": "Direct JMP from 0x58D6F6B0.",
        "behavior": "A 25-byte flag/register-sensitive routine ending in a JMP to thunk 0x58C5D37B.",
        "uncertainty": "No application-level meaning is established from this static body.",
    },
    "58C5D37B": {
        "name_in_analysis": "thunk_FUN_58fac690",
        "called_by": "Direct JMP from 0x58D6F59E.",
        "behavior": "Executes CLD and jumps to 0x58FAC690.",
        "uncertainty": "This is a transfer stub; its runtime context is not fully understood.",
    },
    "58FAC690": {
        "name_in_analysis": "FUN_58fac690",
        "called_by": "Direct JMP from thunk 0x58C5D37B.",
        "behavior": "Executes a REP MOVSB sequence and then jumps to the shared JMP ESI stub at 0x58C84F0B.",
        "uncertainty": "The copy count, source/destination register meaning, and indirect ESI target are not established for the VMProtect runtime path.",
    },
    "58753590": {
        "name_in_analysis": "FUN_58753590",
        "called_by": "Directly used by wrapper 0x58753DE0 inside collection routine 0x587540C0.",
        "behavior": "Walks source and destination pointers in 18-DWORD (0x48-byte) steps. For each element, when the destination is nonnull, it copies exactly 18 DWORDs; the source/destination advances are direct Ghidra observations.",
        "uncertainty": "The 0x48-byte record's type and the reason the copy is conditional on the destination are unknown. The record stride and copied field count are directly visible.",
    },
    "58753DE0": {
        "name_in_analysis": "FUN_58753de0",
        "called_by": "Collection routine 0x587540C0 calls this from two insertion branches.",
        "behavior": "Masks the low byte of the receiver pointer into a local value, then calls 0x58753590 with the supplied source range, receiver field at +8, and that mask value. Ghidra shows the same wrapper shape as 0x58753E10, but the target helper uses 0x48-byte records.",
        "uncertainty": "The low-byte mask's semantic role and record type are unknown; arguments and call flow are directly visible.",
    },
    "587535C0": {
        "name_in_analysis": "FUN_587535c0",
        "called_by": "Directly used by wrapper 0x58753E10 inside collection routine 0x58754360.",
        "behavior": "Walks source and destination pointers in 0x202-DWORD (0x808-byte) steps. For each element, when the destination is nonnull, it copies exactly 0x202 DWORDs; the source/destination advances are direct Ghidra observations.",
        "uncertainty": "The 0x808-byte record's type and the reason the copy is conditional on the destination are unknown. The record stride and copied field count are directly visible.",
    },
    "58753E10": {
        "name_in_analysis": "FUN_58753e10",
        "called_by": "Collection routine 0x58754360 calls this from two insertion branches.",
        "behavior": "Masks the low byte of the receiver pointer into a local value, then calls 0x587535C0 with the supplied source range, receiver field at +8, and that mask value. Ghidra shows the same wrapper shape as 0x58753DE0, but the target helper uses 0x808-byte records.",
        "uncertainty": "The low-byte mask's semantic role and record type are unknown; arguments and call flow are directly visible.",
    },
    "58906EA0": {
        "name_in_analysis": "FUN_58906ea0",
        "called_by": "Called by the CNumberScreen scalar-deleting destructor at 0x58907180.",
        "behavior": "Installs the CNumberScreen vtable, invokes the first virtual method with argument 1 for nonnull fields at +0xF4 and +0xF0, clears both fields, then calls the CScreen cleanup helper at 0x58902D60.",
        "uncertainty": "The two child fields' semantic roles and ownership policy are unresolved; the virtual dispatch and field updates are directly observed.",
    },
    "58907100": {
        "name_in_analysis": "FUN_58907100",
        "called_by": "Directly called twice by the verified CPannelJump_ControlMenuScreen constructor FUN_58889640.",
        "behavior": "Calls the CScreen/base initializer at 0x589031A0, installs RTTI-backed CNumberScreen vtable 0x589A2938, stores the supplied fields, initializes observed state and child fields, and calls helper 0x58907040.",
        "uncertainty": "Constructor argument meanings and most receiver field roles remain unresolved; the client/emulator runtime behavior has not been exercised.",
    },
    "58907180": {
        "name_in_analysis": "FUN_58907180",
        "called_by": "Vtable slot +0 at 0x589A2938 for RTTI type .?AVCNumberScreen@@.",
        "behavior": "Calls cleanup body 0x58906EA0, calls host thunk 0x5897CC42 when bit 0 of the stack deletion flag is set, and returns the receiver with ret 4.",
        "uncertainty": "The host thunk's destruction/ownership contract is unresolved. The 30-byte extent includes ret 4; the following two int3 bytes are padding.",
    },
    "589071A0": {
        "name_in_analysis": "FUN_589071a0",
        "called_by": "Vtable slot +0x0C at 0x589A2938 for RTTI type .?AVCNumberScreen@@.",
        "behavior": "When receiver flag bit 2 is set and the values at +0x60 and +0x64 differ, moves the value at +0x60 toward +0x64 using the observed thresholds and step sizes, stores it, calls 0x58907040, and dispatches virtual slot +0x0C over the child list at +0x3C.",
        "uncertainty": "The values' units, meanings, thresholds, and child update contract are unknown; no numeric or UI semantics are inferred.",
    },
    "58906F30": {
        "name_in_analysis": "FUN_58906f30",
        "called_by": "Vtable slot +0x14 at 0x589A2938 for RTTI type .?AVCNumberScreen@@.",
        "behavior": "When receiver flag bit 0 is set, walks the child list at +0x4C, dispatches slot +0x14 for qualifying entries, uses helper 0x5873A5D0 with receiver fields including +0xF8 and +0xE8, then traverses the child list again and dispatches the same slot.",
        "uncertainty": "The visible result, helper semantics, child eligibility, and fields' semantic roles are not established; no emulator visual test was performed.",
    },
    "58907380": {
        "name_in_analysis": "FUN_58907380",
        "called_by": "Vtable slot +0x18 at 0x589A2938 for RTTI type .?AVCNumberScreen@@.",
        "behavior": "Loads the receiver field at +0xEC and forwards it to helper 0x589072A0.",
        "uncertainty": "The field and helper contract are unresolved.",
    },
    "58907390": {
        "name_in_analysis": "FUN_58907390",
        "called_by": "Vtable slot +0x1C at 0x589A2938 for RTTI type .?AVCNumberScreen@@.",
        "behavior": "Loads the receiver field at +0xEC and forwards it to helper 0x58907300.",
        "uncertainty": "The field and helper contract are unresolved.",
    },
    "587B69E0": {
        "name_in_analysis": "FUN_587b69e0",
        "called_by": "Directly called by the verified CPannelJump_ControlMenuScreen constructor FUN_58889640.",
        "behavior": "Calls helper 0x58731C60, stores constructor inputs and initial values in receiver fields, and installs the RTTI-backed vtable for CMovingSpriteDataScreen at 0x5899A0CC.",
        "uncertainty": "Constructor argument meanings and the purpose/units of the initialized fields remain unresolved.",
    },
    "587B67C0": {
        "name_in_analysis": "FUN_587b67c0",
        "called_by": "Vtable slot +0 at 0x5899A0CC for RTTI type .?AVCMovingSpriteDataScreen@@.",
        "behavior": "Reinstalls the class vtable, calls cleanup helper 0x589038B0, invokes host thunk 0x5897CC42 when bit 0 of the stack deletion flag is set, and returns the receiver with ret 4.",
        "uncertainty": "The host thunk's ownership contract is unresolved. The 36-byte extent includes ret 4; the following int3 bytes are padding.",
    },
    "587B67F0": {
        "name_in_analysis": "FUN_587b67f0",
        "called_by": "Vtable slot +0x0C at 0x5899A0CC for RTTI type .?AVCMovingSpriteDataScreen@@.",
        "behavior": "When receiver flag bit 2 is set, examines mode bits in +0x24 and compares receiver fields +4/+8 with cached values +0x68/+0x6C; observed branches update state fields and call helper 0x58902E10. It then traverses the circular child list at +0x3C and dispatches each child's slot +0x0C.",
        "uncertainty": "The mode labels, field meanings, helper contract, and user-visible effect are unresolved; this description records only observed branches, accesses, and dispatches.",
    },
    "5884E690": {
        "name_in_analysis": "FUN_5884e690",
        "called_by": "The verified FUN_587DBA00 calls it at 0x587DC66B after requesting a 0xE8-byte object; the returned pointer is stored at caller offset +0xDD4.",
        "behavior": "Initializes the screen base through 0x589031A0, installs the RTTI-backed CPannelEscortShipConfig vtable at 0x5899E830, and constructs nested screen/control objects through the observed helper calls and child-list setup.",
        "uncertainty": "The roles of the nested controls, resource records, and constructor arguments remain unknown; no client runtime or visual test was performed.",
    },
    "5884DD00": {
        "name_in_analysis": "FUN_5884dd00",
        "called_by": "Vtable slot +0 at 0x5899E830 for RTTI type .?AVCPannelEscortShipConfig@@.",
        "behavior": "Calls cleanup body 0x5884DAD0, invokes host thunk 0x5897CC42 when bit 0 of the stack deletion flag is set, and returns the receiver with ret 4.",
        "uncertainty": "The host thunk's ownership policy is unresolved. The 30-byte extent includes ret 4; trailing int3 bytes are excluded.",
    },
    "5884E500": {
        "name_in_analysis": "FUN_5884e500",
        "called_by": "Vtable slot +0x0C at 0x5899E830 for RTTI type .?AVCPannelEscortShipConfig@@.",
        "behavior": "When receiver flag bit 2 is set, checks selector byte +0xD4 and a child value reached from +0x64; its branches call 0x58902E60 and local helpers 0x5884E210/0x5884E1C0 while updating observed state.",
        "uncertainty": "The selector values, child meaning, state names, and visible effect remain unknown.",
    },
    "5884DF70": {
        "name_in_analysis": "FUN_5884df70",
        "called_by": "Vtable slot +0x10 at 0x5899E830 for RTTI type .?AVCPannelEscortShipConfig@@.",
        "behavior": "When receiver flag bit 1 is set, walks the circular child list at +0x3C, dispatches child slot +0x10, compares the returned value with child field +0x34, and calls helpers 0x58907990 and 0x58731540 on observed branches.",
        "uncertainty": "The event/result contract and meanings of the child fields remain unresolved.",
    },
    "5884DD20": {
        "name_in_analysis": "FUN_5884dd20",
        "called_by": "Vtable slot +0x18 at 0x5899E830 for RTTI type .?AVCPannelEscortShipConfig@@.",
        "behavior": "Dispatches on its stack arguments and receiver fields +0x60/+0xD4, updates observed selector/state bits, and calls helpers 0x587B99F0, 0x587D89F0, and 0x5884DCC0.",
        "uncertainty": "Argument labels, selector meanings, and user-facing actions remain unresolved.",
    },
    "5884DAD0": {
        "name_in_analysis": "FUN_5884dad0",
        "called_by": "Directly called by scalar-deleting destructor 0x5884DD00.",
        "behavior": "Installs the class vtable, traverses and cleans the class's observed child/object fields, and calls cleanup helper 0x589033E0; the body uses the captured MSVC exception-registration pattern.",
        "uncertainty": "Child ownership and several field roles are unresolved; the description follows the observed cleanup calls and writes.",
    },
    "5884DCC0": {
        "name_in_analysis": "FUN_5884dcc0",
        "called_by": "Directly called by class vtable method 0x5884DD20.",
        "behavior": "Scans DWORD entries from 0x589CC878 up to 0x589CCC78 for the supplied 16-bit value and returns 1 on a match or 0 when absent.",
        "uncertainty": "The table's contents and the compared value's semantic role are unknown. Its 52-byte extent includes ret 4.",
    },
    "5884E1C0": {
        "name_in_analysis": "FUN_5884e1c0",
        "called_by": "Directly called by class methods 0x5884E500 and 0x5884E210.",
        "behavior": "Loops over five entries rooted at receiver +0x98, checks globals at 0x58A0B1E4/0x58A0B1FD, and writes 0 or 1 to field +0x50 of the corresponding referenced objects.",
        "uncertainty": "The five entries, global selector, and field +0x50's meaning are unresolved.",
    },
    "5884E210": {
        "name_in_analysis": "FUN_5884e210",
        "called_by": "Directly called by class constructor 0x5884E690 and vtable method 0x5884E500.",
        "behavior": "Processes a bounded set of receiver data, calls helpers 0x589087F0 and 0x589088D0 across its branches, invokes 0x588F4060, and applies the five-entry update helper 0x5884E1C0.",
        "uncertainty": "The data-record schema and helper parameter meanings remain unresolved.",
    },
    "58731540": {
        "name_in_analysis": "FUN_58731540",
        "called_by": "Directly called by class vtable method 0x5884DF70.",
        "behavior": "Tests a supplied point against the receiver's bounds formed from offsets +0x14/+0x18 and +0x1C/+0x20 with the observed origin offsets, returning 1 inside and 0 outside.",
        "uncertainty": "The coordinate space and caller's interpretation of the hit-test result are unresolved.",
    },
    "58759F20": {
        "name_in_analysis": "FUN_58759f20",
        "called_by": "Directly called by CPannelEscortShipConfig constructor 0x5884E690.",
        "behavior": "If receiver field +0x50 is null, allocates a 12-byte record, clears its first two DWORDs, stores the supplied value at +8, and mirrors the record pointer at receiver +0x54.",
        "uncertainty": "The record's type and the two receiver fields' ownership relationship are unknown.",
    },
    "58759F60": {
        "name_in_analysis": "FUN_58759f60",
        "called_by": "Directly called by CPannelEscortShipConfig constructor 0x5884E690.",
        "behavior": "Calls base initializer 0x589031A0, briefly installs vtable 0x5898C500, sets bit 0x20 in flags +0x24, clears fields +0x50/+0x54/+0x58, then installs vtable 0x5898D7A0.",
        "uncertainty": "The final RTTI type and fields' meanings are not established by this body alone.",
    },
    "587B99F0": {
        "name_in_analysis": "FUN_587b99f0",
        "called_by": "Directly called by class vtable method 0x5884DD20.",
        "behavior": "Forwards two supplied arguments, an observed byte, three zero values, and selector 0x8001F009 to helper 0x58970C70.",
        "uncertainty": "The forwarded selector and dispatch result semantics are unresolved.",
    },
    "587D89F0": {
        "name_in_analysis": "FUN_587d89f0",
        "called_by": "Directly called by class vtable method 0x5884DD20.",
        "behavior": "Uses helper 0x588F4060 to look up a selected entry, initializes and clears bounded buffers with 0x5897152E/0x5897CC48, then processes indexed data through the observed branches and helper calls.",
        "uncertainty": "The record layout and selector meanings are unresolved. The corrected 1,143-byte extent includes the tail jump at 0x587D8E62 back into this function; bytes after that jump are padding.",
    },
    "58875190": {
        "name_in_analysis": "FUN_58875190",
        "called_by": "Directly called by CPannelEscortShipConfig constructor 0x5884E690.",
        "behavior": "Selects a record from receiver table +0x18C when count +0x164 exceeds 0x1A, then copies its observed fields into the supplied child object, including the pointer at record +0x68.",
        "uncertainty": "The table's record type and copied field meanings are unresolved.",
    },
    "588752D0": {
        "name_in_analysis": "FUN_588752d0",
        "called_by": "Directly called by CPannelEscortShipConfig constructor 0x5884E690.",
        "behavior": "Initializes nested screen objects through 0x589031A0, installs observed screen vtables including 0x5899EF40, allocates child objects, configures child-list fields, and calls 0x58907100 for one nested object.",
        "uncertainty": "The roles of the nested controls and the installed vtable's semantic type remain unresolved.",
    },
    "588F4060": {
        "name_in_analysis": "FUN_588f4060",
        "called_by": "Directly called by 0x5884E210 and 0x587D89F0.",
        "behavior": "Walks a linked chain rooted at receiver +4, compares each entry's field +0x48 shifted right by 10 with the supplied selector, and returns the matching entry or zero.",
        "uncertainty": "The selector encoding and entry type are unresolved. The 41-byte extent includes ret 4.",
    },
    "58907990": {
        "name_in_analysis": "FUN_58907990",
        "called_by": "Directly called by class vtable method 0x5884DF70.",
        "behavior": "Converts an integer argument to the observed floating-point record fields and calls helper 0x58907820; other branches test values through 9 and select alternate exits.",
        "uncertainty": "The record type, units, and meaning of the range branches are unresolved.",
    },
    "589087F0": {
        "name_in_analysis": "FUN_589087f0",
        "called_by": "Directly called by helper 0x5884E210.",
        "behavior": "Walks child links from receiver +0x78, dispatches child slot +0 with argument 1, then clears receiver fields +0x78 through +0x88.",
        "uncertainty": "The child ownership policy and roles of the cleared fields remain unresolved.",
    },
    "589088D0": {
        "name_in_analysis": "FUN_589088d0",
        "called_by": "Directly called by helper 0x5884E210.",
        "behavior": "Scans a supplied NUL-terminated string, allocates and clears a buffer, copies string data, and updates the receiver's observed string fields through helpers 0x58731B60 and 0x58907F80.",
        "uncertainty": "The string's role and receiver field meanings are unresolved. Its corrected 268-byte extent includes the observed register epilogue and ret 0x0C.",
    },
    "587315F0": {
        "name_in_analysis": "FUN_587315f0",
        "called_by": "Directly called by CPannelArmorControl vtable method 0x588172D0 while processing a pointer/mouse event.",
        "behavior": "Receives the boolean-like result of the panel's point-in-control test and updates a short control-state field; the 34-byte body contains no mapped operands.",
        "uncertainty": "The precise control-state bit meaning and visual consequence are unresolved.",
    },
    "587B9970": {
        "name_in_analysis": "FUN_587b9970",
        "called_by": "Directly called by CPannelArmorControl method 0x58816EE0 after it builds a four-value record from panel state.",
        "behavior": "Forwards the selector derived from an object field shifted right by 10 and a pointer to the assembled four-value record into the observed helper dispatch.",
        "uncertainty": "The destination contract, record schema, and selector meaning remain unresolved.",
    },
    "587BABC0": {
        "name_in_analysis": "FUN_587babc0",
        "called_by": "Directly called by 0x58816DB0 after it copies the armor panel's four-value state into a snapshot object.",
        "behavior": "Receives the constant selector 4 after the snapshot fields and display values have been updated.",
        "uncertainty": "The selector's receiver and downstream state-transition meaning are unresolved.",
    },
    "587DAC20": {
        "name_in_analysis": "FUN_587dac20",
        "called_by": "Directly called by CPannelArmorControl vtable method 0x588172D0 for one of its keyboard/event-code branches; additional callers occur in other client event handlers.",
        "behavior": "Runs the observed event path and reaches a complete stack-cookie call, stack restore, and return at 0x587DAD7B. The inventory extent was corrected to 348 bytes to include that epilogue; four following int3 bytes precede 0x587DAD80.",
        "uncertainty": "The event code's user-facing action and shared state contract across its callers remain unresolved.",
    },
    "587DAD80": {
        "name_in_analysis": "FUN_587dad80",
        "called_by": "Directly called by CPannelArmorControl vtable method 0x588172D0 for its observed keyboard/event-code branch; additional callers occur in other client event handlers.",
        "behavior": "Executes the selected event path, calls helper 0x5897CBDA, restores its stack, and returns.",
        "uncertainty": "The event code's user-facing action and helper contract remain unresolved.",
    },
    "58815C80": {
        "name_in_analysis": "FUN_58815c80",
        "called_by": "Directly called by CPannelArmorControl vtable method 0x58816EE0 on its selected-control branch.",
        "behavior": "Updates the panel's observed short-valued state fields, clamping a value at offset +0x8C to zero on the corresponding branch.",
        "uncertainty": "The meaning of the selected control and the short fields is unresolved.",
    },
    "58816DB0": {
        "name_in_analysis": "FUN_58816db0",
        "called_by": "Identified by its receiver fields and direct calls as a CPannelArmorControl state/snapshot routine; Ghidra caller ownership is not yet resolved.",
        "behavior": "Copies 0x3C3 dwords from the observed global record at 0x58A24598+0xD78 into receiver +0x198, snapshots four associated values and four short fields, refreshes the panel, and clears bit 1 on a child flag.",
        "uncertainty": "The global record schema, ownership of the snapshot receiver, and caller lifecycle remain unresolved.",
    },
    "58816EE0": {
        "name_in_analysis": "FUN_58816ee0",
        "called_by": "RTTI identifies this as CPannelArmorControl vtable slot +0x18 at address point 0x5899D7AC.",
        "behavior": "Handles command 2 for four paired increment/decrement controls, clamps counts to the observed 0..255 range, refreshes the panel, and forwards an assembled four-value record on the selection branch.",
        "uncertainty": "The control labels, four field meanings, and downstream dispatch contract remain unresolved.",
    },
    "588172D0": {
        "name_in_analysis": "FUN_588172d0",
        "called_by": "RTTI identifies this as CPannelArmorControl vtable slot +0x10 at address point 0x5899D7AC.",
        "behavior": "Processes event records, hit-tests four controls, increments or decrements the associated short values, invokes refresh, and dispatches observed event codes through 0x587DAC20/0x587DAD80 and other helpers.",
        "uncertainty": "The event payload fields, control labels, event-code meanings, and dispatch outcomes are unresolved.",
    },
    "588193B0": {
        "name_in_analysis": "FUN_588193b0",
        "called_by": "Ghidra shows four direct calls to the CPannelArmorControl refresh method 0x58815E10; the caller and exact callback registration are unresolved.",
        "behavior": "Selects one of four state slots from a 16-bit selector, stores the supplied pointer/value pair, zeroes the corresponding count when the pointer is null, and marks the related child for refresh when its flag is set.",
        "uncertainty": "The selector enum, pointer/value pair semantics, and callback owner are unresolved.",
    },
    "58819A70": {
        "name_in_analysis": "FUN_58819a70",
        "called_by": "Directly called by CPannelArmorControl vtable method 0x588172D0 after its four-way point test selects a control.",
        "behavior": "Updates a nested control through the observed base helper and helper 0x58902D20, then returns the updated object result.",
        "uncertainty": "The nested-control identity and exact state semantics are unresolved.",
    },
    "587B67A0": {
        "name_in_analysis": "FUN_587b67a0",
        "called_by": "Directly called by CSpecBoard_Body vtable method 0x58889020.",
        "behavior": "Stores its two stack arguments at receiver offsets +0x68 and +0x6C, sets +0x70 to 0x40000000, and returns with ret 8.",
        "uncertainty": "The receiver type and the meanings of the three fields are unresolved.",
    },
    "588EC200": {
        "name_in_analysis": "FUN_588ec200",
        "called_by": "Directly called by the CSpecBoard_Body scalar deleting destructor at vtable slot +0x00.",
        "behavior": "Performs the class cleanup path and calls the base cleanup helper 0x58902C10 before returning.",
        "uncertainty": "Child field ownership and individual child roles are unresolved.",
    },
    "588EC5B0": {
        "name_in_analysis": "FUN_588ec5b0",
        "called_by": "RTTI identifies this as CSpecBoard_Body vtable slot +0x00 at address point 0x589A1548.",
        "behavior": "Calls class cleanup 0x588EC200, conditionally releases the object through 0x5897CC42, returns the receiver, and includes ret 4.",
        "uncertainty": "The scalar-deletion flag's ownership policy is visible, but the managed allocation origin is not traced here.",
    },
    "588ECC80": {
        "name_in_analysis": "FUN_588ecc80",
        "called_by": "RTTI identifies this as CSpecBoard_Body vtable slot +0x04 at address point 0x589A1548.",
        "behavior": "Updates receiver flag bits and fields +0x50/+0x54 from an observed child/global value, then tail-jumps to 0x58888FF0.",
        "uncertainty": "The flag meanings, child role, and destination method contract are unresolved.",
    },
    "588ECCC0": {
        "name_in_analysis": "FUN_588eccc0",
        "called_by": "RTTI identifies this as CSpecBoard_Body vtable slot +0x08 at address point 0x589A1548.",
        "behavior": "Sets and clears observed receiver flag bits, copies the child pointer at +0x04 into +0x50, stores -0x15E at +0x54, and returns.",
        "uncertainty": "The flags and stored selector are not assigned semantic names.",
    },
    "588ECD00": {
        "name_in_analysis": "FUN_588ecd00",
        "called_by": "RTTI identifies this as CSpecBoard_Body vtable slot +0x0C at address point 0x589A1548.",
        "behavior": "Tests the receiver flag at +0x24, dispatches through helpers 0x58902E10 and 0x58889020, and has a tail path ending in jmp eax.",
        "uncertainty": "The dispatch event schema and indirect target identity are unresolved. Its corrected 412-byte extent includes the final pop/pop/jmp sequence at 0x588ECE99..0x588ECE9B; four following int3 bytes are padding.",
    },
    "588EC5D0": {
        "name_in_analysis": "FUN_588ec5d0",
        "called_by": "RTTI identifies this as CSpecBoard_Body vtable slot +0x18 at address point 0x589A1548.",
        "behavior": "Processes the class's observed event path through calls to 0x588F3FA0, 0x587D8E70, 0x58764D30, 0x5876A570, 0x58798D60, and other mapped helpers, then exits through its stack-cookie path and ret 0x0C.",
        "uncertainty": "The event payload meaning, child identities, and most helper contracts remain unresolved.",
    },
    "58889020": {
        "name_in_analysis": "FUN_58889020",
        "called_by": "Directly called by CSpecBoard_Body vtable method 0x588ECD00.",
        "behavior": "Reads receiver fields +0x68 and +0x54, passes derived values to 0x587B67A0, then tail-dispatches through a child vtable slot at +0x04.",
        "uncertainty": "The child class and purpose of the indirect method remain unresolved.",
    },
    "588EF600": {
        "name_in_analysis": "FUN_588ef600",
        "called_by": "RTTI identifies this as CSpecBoard_Equip vtable slot +0x00 at address point 0x589A1758.",
        "behavior": "Calls class cleanup 0x588EF260, conditionally releases through 0x5897CC42, returns the receiver, and includes ret 4.",
        "uncertainty": "The scalar-deletion flag policy is observed; the object's allocation origin is outside this slice.",
    },
    "588EF260": {
        "name_in_analysis": "FUN_588ef260",
        "called_by": "Directly called by the CSpecBoard_Equip scalar deleting destructor at vtable slot +0x00.",
        "behavior": "Performs the class cleanup path and calls the base cleanup helper 0x58902C10 before returning.",
        "uncertainty": "Child ownership and individual child roles remain unresolved.",
    },
    "588EFC40": {
        "name_in_analysis": "FUN_588efc40",
        "called_by": "RTTI identifies this as CSpecBoard_Equip vtable slot +0x04 at address point 0x589A1758.",
        "behavior": "Updates observed receiver flags and fields, calls 0x58907990, then reaches an indirect child-method path and returns.",
        "uncertainty": "The field flags, child-method contract, and result meaning are unresolved.",
    },
    "588EFD00": {
        "name_in_analysis": "FUN_588efd00",
        "called_by": "RTTI identifies this as CSpecBoard_Equip vtable slot +0x08 at address point 0x589A1758.",
        "behavior": "Updates a child/control state, calls 0x587D7820 and 0x58907990, then invokes an indirect child method.",
        "uncertainty": "The child identity, state fields, and indirect method contract are unresolved.",
    },
    "588EFA20": {
        "name_in_analysis": "FUN_588efa20",
        "called_by": "RTTI identifies this as CSpecBoard_Equip vtable slot +0x0C at address point 0x589A1758.",
        "behavior": "Checks receiver flags, calls 0x58902E10 and 0x587B7400, and ends on a dynamic dispatch path through eax.",
        "uncertainty": "The event payload and indirect dispatch target are unresolved.",
    },
    "587B7400": {
        "name_in_analysis": "FUN_587b7400",
        "called_by": "Directly called twice by CSpecBoard_Equip vtable method 0x588EFA20.",
        "behavior": "Processes supplied panel values through helper 0x58907820 and returns with ret 0x0C.",
        "uncertainty": "The input record schema and result semantics remain unresolved.",
    },
    "588F1160": {
        "name_in_analysis": "FUN_588f1160",
        "called_by": "RTTI identifies this as CSpecBoard_Equip vtable slot +0x10 at address point 0x589A1758.",
        "behavior": "Processes control events, hit-tests through 0x58731540, and calls the observed repeated-control helpers 0x588EFF30 and 0x588F0150 alongside state helpers.",
        "uncertainty": "The event payload, repeated control identities, and user-visible actions are unresolved.",
    },
    "5880AF30": {
        "name_in_analysis": "FUN_5880af30",
        "called_by": "RTTI identifies this as CSpecBoard_Equip vtable slot +0x14 at address point 0x589A1758.",
        "behavior": "Runs a short receiver-state branch and returns with ret 0x0C; its 91-byte body contains no mapped operand targets.",
        "uncertainty": "The event meaning and returned state are unresolved.",
    },
    "588F0460": {
        "name_in_analysis": "FUN_588f0460",
        "called_by": "RTTI identifies this as CSpecBoard_Equip vtable slot +0x18 at address point 0x589A1758.",
        "behavior": "Dispatches the panel's observed event path through helpers 0x588EFF30, 0x588F0150, 0x587D8840, 0x588E65D0, and other mapped control helpers, then returns with ret 0x0C.",
        "uncertainty": "The event payload, control identities, and user-visible actions remain unresolved.",
    },
    "587D7820": {
        "name_in_analysis": "FUN_587d7820",
        "called_by": "Directly called by CSpecBoard_Equip vtable method 0x588EFD00.",
        "behavior": "Walks an indexed control/state sequence, updates observed child flags, and returns with ret 4 after the complete eight-byte epilogue.",
        "uncertainty": "The sequence schema and flag meanings remain unresolved.",
    },
    "587D8840": {
        "name_in_analysis": "FUN_587d8840",
        "called_by": "Directly called by CSpecBoard_Equip vtable method 0x588F0460.",
        "behavior": "Forwards the observed values through helper 0x587B98B0 on three branches and returns.",
        "uncertainty": "The forwarded values and helper contract are unresolved.",
    },
    "588E65D0": {
        "name_in_analysis": "FUN_588e65d0",
        "called_by": "Directly called by CSpecBoard_Equip vtable method 0x588F0460.",
        "behavior": "Returns true when the observed word at record offset +6 equals 7, and false otherwise.",
        "uncertainty": "The tested record type and discriminator meaning are unresolved.",
    },
    "588EFF30": {
        "name_in_analysis": "FUN_588eff30",
        "called_by": "Directly called by CSpecBoard_Equip vtable methods 0x588F1160 and 0x588F0460.",
        "behavior": "Processes repeated child/control records through helpers 0x58908170, 0x58908650, 0x58902EA0, and 0x58903360; its complete six-byte register/stack epilogue is included.",
        "uncertainty": "The table schema and child/control meanings remain unresolved.",
    },
    "588F0150": {
        "name_in_analysis": "FUN_588f0150",
        "called_by": "Directly called by CSpecBoard_Equip vtable methods 0x588F1160 and 0x588F0460.",
        "behavior": "Processes a related repeated child/control path through helpers 0x58908170, 0x589086F0, 0x58902EA0, and 0x58903360. The 726-byte mapped extent is emitted byte-for-byte; its final two bytes are FF FF, which Capstone does not decode as a valid x86 instruction.",
        "uncertainty": "The final FF FF bytes may be embedded data or an invalid/unidentified instruction sequence; they are retained because the original indexed Ghidra extent and direct callsites cover the complete 726-byte body. The table schema remains unresolved.",
    },
    "58908170": {
        "name_in_analysis": "FUN_58908170",
        "called_by": "Directly called by CSpecBoard_Equip helpers 0x588F1160, 0x588EFF30, and 0x588F0150.",
        "behavior": "Walks an observed linked field at +0x14, increments the returned index, and yields -1 when the walk terminates without a matching entry.",
        "uncertainty": "The entry type and the meaning of the returned index are unresolved.",
    },
    "58908650": {
        "name_in_analysis": "FUN_58908650",
        "called_by": "Directly called by CSpecBoard_Equip helper 0x588EFF30.",
        "behavior": "If receiver +0x80 is null, copies receiver +0x7C there; otherwise follows the pointer at +0x80 to its +0x10 field and stores that field when non-null.",
        "uncertainty": "The child-link type and the purpose of the +0x7C/+0x80 fields remain unresolved.",
    },
    "589086F0": {
        "name_in_analysis": "FUN_589086f0",
        "called_by": "Directly called by CSpecBoard_Equip helper 0x588F0150.",
        "behavior": "Uses receiver child pointers at +0x78/+0x80, walks +0x14-linked entries, and applies an observed index/stride versus bounds check before updating +0x80.",
        "uncertainty": "The linked-entry schema, dimension units, and choice policy remain unresolved.",
    },
    "587B98B0": {
        "name_in_analysis": "FUN_587b98b0",
        "called_by": "Directly called three times by CSpecBoard_Equip helper 0x587D8840.",
        "behavior": "Builds the observed byte/word payload from its arguments, dispatches selector 0x80011004 through 0x58970C70, then runs the stack-cookie check and returns with ret 0x18.",
        "uncertainty": "The payload schema, dispatch result, and caller's state semantics are unresolved.",
    },
    "58907820": {
        "name_in_analysis": "FUN_58907820",
        "called_by": "Directly called by CSpecBoard_Equip helper 0x587B7400.",
        "behavior": "Branches on receiver field +0x1C, converts the supplied floating-point values through x87 operations, and dispatches through observed vtable offsets +0x4C, +0x0C, and +0x10; one branch calls 0x5897CCA0.",
        "uncertainty": "The numeric record type, units, and downstream helper contract are unresolved. Helper 0x5897CCA0 remains unmatched in this slice.",
    },
    "5897CC90": {
        "name_in_analysis": "FUN_5897cc90",
        "called_by": "Directly called by CSpecBoard_Equip helper 0x58907820.",
        "behavior": "A six-byte indirect jump thunk through the callback slot at 0x5898C228.",
        "uncertainty": "The callback target and host-side contract are unresolved.",
    },
}


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def merge_match_records(previous, updates):
    """Replace updated addresses in place and retain all other catalog rows."""
    pending = {item["address"].upper(): item for item in updates}
    merged = []
    for item in previous:
        address = item["address"].upper()
        merged.append(pending.pop(address, item))
    merged.extend(pending.values())
    return merged


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--mark-verified", action="store_true",
                        help="record objdiff verification after verify_client_matches.py passes")
    args = parser.parse_args()
    old_config = json.loads((ROOT / "config/NF2_2062/client-verifications.json").read_text(encoding="utf-8"))
    manifest_path = ROOT / "reports/unpacked-current-main/manifest.json"
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    module = next(item for item in manifest["modules"] if item["name"] == "Main.dll")
    capture = ROOT / "reports/unpacked-current-main/Main.mapped.bin"
    inventory_path = ROOT / "config/NF2_2026/client-functions.tsv"
    with inventory_path.open(encoding="utf-8", newline="") as stream:
        inventory = {row["address"].upper(): row for row in csv.DictReader(stream, delimiter="\t")}
    relocation_data = json.loads((ROOT / "var/current-main-relocations.json").read_text(encoding="utf-8"))
    marker = "objdiff-3.8.0-byte-identical" if args.mark_verified else "candidate-not-yet-verified"
    matches = []
    for address in ADDRESSES:
        row = inventory[address]
        source = f"src/client-current/Main/{row['name']}.cpp"
        source_path = ROOT / source
        name = row["name"]
        relocations = RELOCATION_OVERRIDES.get(address, relocation_data.get(address, []))
        if address == "58907CE0":
            # The generated native-instruction source emits each fixed absolute
            # operand literally; keep these entries as destination audits.
            relocations = [dict(item, audit_only=True) for item in relocations]
        matches.append({
            "address": address,
            "name": name,
            "size": int(row["size"]),
            "symbol": "_" + name,
            "source": source,
            "source_sha256": sha256(source_path),
            "verified_by": marker,
            "flags": ["/O2", "/GX-", "/Zm200"],
            **({"source_compiler": SOURCE_COMPILER}
               if address in SOURCE_COMPILER_ADDRESSES else {}),
            "relocations": [dict(item, audit_only=item.get("audit_only", True))
                            for item in relocations],
            "evidence": EVIDENCE[address],
        })
    # This script maintains a rolling subset of the full current-client
    # verification catalog. Preserve older verified records outside the
    # subset so adding a focused batch cannot silently erase progress.
    output = ROOT / "config/NF2_2026/client-verifications.json"
    if output.is_file():
        previous = json.loads(output.read_text(encoding="utf-8"))
        matches = merge_match_records(previous["matches"], matches)
    document = {
        "schema_version": 1,
        "component": "Main.dll",
        "image_base": "58730000",
        "mapped_image": "reports/unpacked-current-main/Main.mapped.bin",
        "manifest": "reports/unpacked-current-main/manifest.json",
        "mapped_sha256": sha256(capture),
        "original_sha256": module["original_sha256"],
        "compiler": old_config["compiler"],
        "matches": matches,
    }
    output.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(f"Wrote {len(matches)} {marker} records to {output.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
