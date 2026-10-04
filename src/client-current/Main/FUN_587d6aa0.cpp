// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D6AA0 .. +0xAC bytes.
// Source symbol alias: FUN_587d6aa0.
extern "C" __declspec(naked) void FUN_587d6aa0() {
    __asm {
        // 0x587D6AA0: push esi
        __asm _emit 0x56
        // 0x587D6AA1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D6AA3: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D6AA9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D6AAB: je 0x587d6ab4
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587D6AAD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D6AAF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587D6AB2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D6AB4: movzx eax, word ptr [esi + 0xd54]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6ABB: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587D6ABE: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587D6AC1: ja 0x587d6b0d
        __asm _emit 0x77
        __asm _emit 0x4A
        // 0x587D6AC3: jmp dword ptr [eax*4 + 0x587d6b4c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x6B
        __asm _emit 0x7D
        __asm _emit 0x58
        // 0x587D6ACA: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587D6ACD: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587D6AD0: jmp 0x587d6b13
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x587D6AD2: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x587D6AD5: mov dword ptr [esi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x587D6AD8: jmp 0x587d6b13
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x587D6ADA: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587D6ADD: jmp 0x587d6b10
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x587D6ADF: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587D6AE2: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587D6AE5: jmp 0x587d6b13
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x587D6AE7: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x587D6AEA: mov dword ptr [esi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x587D6AED: jmp 0x587d6b13
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x587D6AEF: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6AF5: jmp 0x587d6b10
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587D6AF7: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6AFD: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587D6B00: jmp 0x587d6b13
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587D6B02: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6B08: mov dword ptr [esi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x587D6B0B: jmp 0x587d6b13
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587D6B0D: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587D6B10: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587D6B13: cmp dword ptr [0x58a244fc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xFC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587D6B1A: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587D6B1D: mov dword ptr [0x58a24780], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D6B23: je 0x587d6b48
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587D6B25: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587D6B28: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D6B2A: mov eax, dword ptr [0x58a248d4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D6B2F: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x587D6B32: push eax
        __asm _emit 0x50
        // 0x587D6B33: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D6B35: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587D6B38: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D6B3A: pop esi
        __asm _emit 0x5E
        // 0x587D6B3B: mov dword ptr [esp + 4], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6B43: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D6B46: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x587D6B48: pop esi
        __asm _emit 0x5E
        // 0x587D6B49: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
