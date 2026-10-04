// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FEF50 .. +0x85 bytes.
// Source symbol alias: FUN_588fef50.
extern "C" __declspec(naked) void FUN_588fef50() {
    __asm {
        // 0x588FEF50: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FEF54: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FEF58: push ebx
        __asm _emit 0x53
        // 0x588FEF59: push esi
        __asm _emit 0x56
        // 0x588FEF5A: push edi
        __asm _emit 0x57
        // 0x588FEF5B: push eax
        __asm _emit 0x50
        // 0x588FEF5C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FEF60: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588FEF62: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FEF66: push ecx
        __asm _emit 0x51
        // 0x588FEF67: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FEF6B: push edx
        __asm _emit 0x52
        // 0x588FEF6C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FEF70: push eax
        __asm _emit 0x50
        // 0x588FEF71: push ecx
        __asm _emit 0x51
        // 0x588FEF72: push edx
        __asm _emit 0x52
        // 0x588FEF73: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FEF75: call 0x588fd970
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FEF7A: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEF7F: lea esi, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x588FEF82: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FEF84: push esi
        __asm _emit 0x56
        // 0x588FEF85: mov dword ptr [edi], 0x589a2384
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FEF8B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xDC
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FEF90: mov edx, 0x589a0990
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FEF95: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588FEF98: mov ebx, 0x80
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEF9D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FEF9F: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588FEFA1: lea ecx, [ebx + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588FEFA7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FEFA9: je 0x588fefc5
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588FEFAB: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x588FEFAE: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588FEFB0: je 0x588fefc5
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588FEFB2: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588FEFB4: inc eax
        __asm _emit 0x40
        // 0x588FEFB5: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588FEFB8: jne 0x588fefa1
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588FEFBA: dec eax
        __asm _emit 0x48
        // 0x588FEFBB: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x588FEFBD: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588FEFBF: pop edi
        __asm _emit 0x5F
        // 0x588FEFC0: pop esi
        __asm _emit 0x5E
        // 0x588FEFC1: pop ebx
        __asm _emit 0x5B
        // 0x588FEFC2: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588FEFC5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588FEFC7: jne 0x588fefca
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588FEFC9: dec eax
        __asm _emit 0x48
        // 0x588FEFCA: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEFCD: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588FEFCF: pop edi
        __asm _emit 0x5F
        // 0x588FEFD0: pop esi
        __asm _emit 0x5E
        // 0x588FEFD1: pop ebx
        __asm _emit 0x5B
        // 0x588FEFD2: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
