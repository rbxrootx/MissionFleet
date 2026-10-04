// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848A00 .. +0x5C bytes.
// Source symbol alias: FUN_58848a00.
extern "C" __declspec(naked) void FUN_58848a00() {
    __asm {
        // 0x58848A00: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58848A05: push edi
        __asm _emit 0x57
        // 0x58848A06: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58848A08: je 0x58848a58
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x58848A0A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58848A0E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848A10: jbe 0x58848a58
        __asm _emit 0x76
        __asm _emit 0x46
        // 0x58848A12: push ebx
        __asm _emit 0x53
        // 0x58848A13: push esi
        __asm _emit 0x56
        // 0x58848A14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58848A18: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58848A1A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848A20: mov al, byte ptr [esi]
        __asm _emit 0x8A
        __asm _emit 0x06
        // 0x58848A22: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58848A24: jne 0x58848a33
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58848A26: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x58848A29: push eax
        __asm _emit 0x50
        // 0x58848A2A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58848A2C: call 0x58848380
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848A31: jmp 0x58848a42
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58848A33: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58848A35: jne 0x58848a4e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58848A37: lea ecx, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x01
        // 0x58848A3A: push ecx
        __asm _emit 0x51
        // 0x58848A3B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58848A3D: call 0x588483d0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58848A42: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848A44: je 0x58848a4e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58848A46: push esi
        __asm _emit 0x56
        // 0x58848A47: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58848A49: call 0x5875a4b0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x1A
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58848A4E: add esi, 0x60
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x60
        // 0x58848A51: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58848A54: jne 0x58848a20
        __asm _emit 0x75
        __asm _emit 0xCA
        // 0x58848A56: pop esi
        __asm _emit 0x5E
        // 0x58848A57: pop ebx
        __asm _emit 0x5B
        // 0x58848A58: pop edi
        __asm _emit 0x5F
        // 0x58848A59: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
