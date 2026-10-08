// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 222 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882f270.

// Ghidra body range 0x5882F270..0x5882F34E; 222 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f270_segment_00() {
    __asm {
        // 0x5882F270: push esi
        __asm _emit 0x56
        // 0x5882F271: push edi
        __asm _emit 0x57
        // 0x5882F272: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882F276: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882F278: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F27E: push edi
        __asm _emit 0x57
        // 0x5882F27F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x80
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882F284: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F287: push edi
        __asm _emit 0x57
        // 0x5882F288: call 0x58786590
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x73
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F28D: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F293: push eax
        __asm _emit 0x50
        // 0x5882F294: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F29A: call 0x5890bc40
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xC9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882F29F: mov eax, dword ptr [0x58a0b468]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F2A4: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5882F2A9: cmp eax, dword ptr [esi + 0xc4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F2AF: jb 0x5882f30a
        __asm _emit 0x72
        __asm _emit 0x59
        // 0x5882F2B1: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F2B4: call 0x58785f90
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x6C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F2B9: add eax, dword ptr [esi + 0xc4]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F2BF: cmp eax, 0xf4240
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5882F2C4: ja 0x5882f30a
        __asm _emit 0x77
        __asm _emit 0x44
        // 0x5882F2C6: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F2CB: cmp dword ptr [eax + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5882F2D2: jle 0x5882f2ea
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5882F2D4: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F2DB: je 0x5882f2ea
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5882F2DD: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F2E3: add eax, 0x8c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F2E8: jmp 0x5882f2ec
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882F2EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F2EC: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F2F2: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F2F8: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F2FE: pop edi
        __asm _emit 0x5F
        // 0x5882F2FF: mov dword ptr [edx + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882F306: pop esi
        __asm _emit 0x5E
        // 0x5882F307: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882F30A: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F30F: cmp dword ptr [eax + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5882F316: jle 0x5882f32e
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5882F318: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F31F: je 0x5882f32e
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5882F321: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F327: add eax, 0x940
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F32C: jmp 0x5882f330
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882F32E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F330: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F336: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F33C: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F342: pop edi
        __asm _emit 0x5F
        // 0x5882F343: mov dword ptr [edx + 0x60], 0xff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F34A: pop esi
        __asm _emit 0x5E
        // 0x5882F34B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
