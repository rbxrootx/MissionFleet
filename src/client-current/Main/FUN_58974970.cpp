// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 306 bytes in 1 exact ranges.
// Source symbol alias: FUN_58974970.

// Ghidra body range 0x58974970..0x58974AA2; 306 mapped bytes.
extern "C" __declspec(naked) void FUN_58974970_segment_00() {
    __asm {
        // 0x58974970: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58974974: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58974977: fld qword ptr [0x589a3058]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897497D: dec eax
        __asm _emit 0x48
        // 0x5897497E: push esi
        __asm _emit 0x56
        // 0x5897497F: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58974982: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58974984: ja 0x58974a9b
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897498A: jmp dword ptr [eax*4 + 0x58974aa4]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x4A
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58974991: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974995: pop esi
        __asm _emit 0x5E
        // 0x58974996: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58974998: movsx edx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x11
        // 0x5897499B: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897499F: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589749A3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x589749A6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x589749A9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589749AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589749AF: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x589749B1: mov al, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x01
        // 0x589749B3: pop esi
        __asm _emit 0x5E
        // 0x589749B4: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589749B8: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589749BC: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x589749BF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x589749C2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589749C6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x589749C8: push edx
        __asm _emit 0x52
        // 0x589749C9: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x589749CB: call 0x58973f70
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589749D0: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589749D4: pop esi
        __asm _emit 0x5E
        // 0x589749D5: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589749D9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x589749DC: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x589749DF: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589749E3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x589749E5: push eax
        __asm _emit 0x50
        // 0x589749E6: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x589749E8: call 0x58974000
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589749ED: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589749F1: mov dword ptr [esp + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589749F9: fild qword ptr [esp + 4]
        __asm _emit 0xDF
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589749FD: pop esi
        __asm _emit 0x5E
        // 0x589749FE: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58974A01: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58974A04: push edi
        __asm _emit 0x57
        // 0x58974A05: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58974A09: push edi
        __asm _emit 0x57
        // 0x58974A0A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974A0C: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58974A0E: call 0x58973fa0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974A13: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58974A16: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974A18: push edi
        __asm _emit 0x57
        // 0x58974A19: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58974A1D: call 0x58973fa0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974A22: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58974A24: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58974A28: pop edi
        __asm _emit 0x5F
        // 0x58974A29: jne 0x58974a38
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58974A2B: fld qword ptr [0x589a3058]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58974A31: pop esi
        __asm _emit 0x5E
        // 0x58974A32: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58974A35: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58974A38: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974A3C: pop esi
        __asm _emit 0x5E
        // 0x58974A3D: fidiv dword ptr [esp + 0x10]
        __asm _emit 0xDA
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974A41: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58974A44: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58974A47: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974A4B: push ecx
        __asm _emit 0x51
        // 0x58974A4C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974A4E: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58974A50: call 0x58973f70
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974A55: movsx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD0
        // 0x58974A58: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974A5C: pop esi
        __asm _emit 0x5E
        // 0x58974A5D: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58974A61: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58974A64: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58974A67: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974A6B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58974A6D: push eax
        __asm _emit 0x50
        // 0x58974A6E: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58974A70: call 0x58973fa0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58974A75: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974A79: pop esi
        __asm _emit 0x5E
        // 0x58974A7A: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58974A7E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58974A81: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58974A84: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974A88: pop esi
        __asm _emit 0x5E
        // 0x58974A89: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58974A8B: fld dword ptr [ecx]
        __asm _emit 0xD9
        __asm _emit 0x01
        // 0x58974A8D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58974A90: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58974A93: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58974A97: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58974A99: fld qword ptr [edx]
        __asm _emit 0xDD
        __asm _emit 0x02
        // 0x58974A9B: pop esi
        __asm _emit 0x5E
        // 0x58974A9C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58974A9F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
