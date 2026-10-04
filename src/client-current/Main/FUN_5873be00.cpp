// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873BE00 .. +0x93 bytes.
// Source symbol alias: FUN_5873be00.
extern "C" __declspec(naked) void FUN_5873be00() {
    __asm {
        // 0x5873BE00: push esi
        __asm _emit 0x56
        // 0x5873BE01: push edi
        __asm _emit 0x57
        // 0x5873BE02: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873BE04: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873BE06: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5873BE08: cmp dword ptr [esi + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5873BE0B: jne 0x5873be4d
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5873BE0D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x0E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873BE12: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873BE15: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5873BE17: je 0x5873be3d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5873BE19: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873BE1D: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5873BE20: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5873BE23: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5873BE26: mov dword ptr [eax], 0x5898cb2c
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873BE2C: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5873BE2F: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BE32: pop edi
        __asm _emit 0x5F
        // 0x5873BE33: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BE36: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873BE39: pop esi
        __asm _emit 0x5E
        // 0x5873BE3A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873BE3D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873BE3F: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BE42: pop edi
        __asm _emit 0x5F
        // 0x5873BE43: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BE46: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873BE49: pop esi
        __asm _emit 0x5E
        // 0x5873BE4A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873BE4D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x0D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873BE52: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873BE55: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5873BE57: je 0x5873be71
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5873BE59: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873BE5D: mov dword ptr [eax], 0x5898cb2c
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873BE63: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5873BE66: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5873BE69: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5873BE6C: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5873BE6F: jmp 0x5873be73
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873BE71: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873BE73: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873BE76: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5873BE79: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BE7C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873BE7F: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873BE82: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BE85: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5873BE88: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BE8B: pop edi
        __asm _emit 0x5F
        // 0x5873BE8C: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873BE8F: pop esi
        __asm _emit 0x5E
        // 0x5873BE90: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
