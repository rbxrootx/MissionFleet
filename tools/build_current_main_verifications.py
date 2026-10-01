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
    "5892DF10", "5892DF50", "58931D20", "58903AC0", "5897CF96",
    "5897CC42", "5897CBDA", "58789FB0", "5890C1C0",
    "58F76B6B", "58C3A998", "58BF62F5", "58DDB193", "58BFF900",
    "58C60FD6", "58E0A61E", "58F8160D", "58C84F0B", "58DC34AD",
    "58C319AB", "58D6F6B0", "58D6F58A", "58C5D37B", "58FAC690",
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
}


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


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
            "relocations": [dict(item, audit_only=item.get("audit_only", True))
                            for item in relocations],
            "evidence": EVIDENCE[address],
        })
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
    output = ROOT / "config/NF2_2026/client-verifications.json"
    output.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(f"Wrote {len(matches)} {marker} records to {output.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
