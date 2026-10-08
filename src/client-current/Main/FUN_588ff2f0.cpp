// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 303 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff2f0.

// Ghidra body range 0x588FF2F0..0x588FF41F; 303 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff2f0_segment_00() {
    __asm {
        // 0x588FF2F0: push ebp
        __asm _emit 0x55
        // 0x588FF2F1: push edi
        __asm _emit 0x57
        // 0x588FF2F2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FF2F6: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588FF2F8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FF2FA: je 0x588ff41a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF300: push ebx
        __asm _emit 0x53
        // 0x588FF301: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FF305: lea ecx, [ebx - 1]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0xFF
        // 0x588FF308: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x588FF30D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588FF30F: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x588FF311: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588FF313: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588FF316: push esi
        __asm _emit 0x56
        // 0x588FF317: mov esi, dword ptr [ebp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF31D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FF31F: cmp eax, dword ptr [esi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588FF322: jge 0x588ff418
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF328: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588FF32A: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x588FF32D: push ebx
        __asm _emit 0x53
        // 0x588FF32E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FF330: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FF332: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588FF334: je 0x588ff418
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF33A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FF33E: push ebx
        __asm _emit 0x53
        // 0x588FF33F: push ecx
        __asm _emit 0x51
        // 0x588FF340: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588FF342: call 0x588ff180
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF347: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588FF349: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FF34B: je 0x588ff38f
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588FF34D: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x588FF34F: je 0x588ff38f
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588FF351: mov dl, byte ptr [edi + 0x68]
        __asm _emit 0x8A
        __asm _emit 0x57
        __asm _emit 0x68
        // 0x588FF354: cmp dl, byte ptr [esi + 0x68]
        __asm _emit 0x3A
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x588FF357: jne 0x588ff418
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF35D: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF363: push esi
        __asm _emit 0x56
        // 0x588FF364: push edi
        __asm _emit 0x57
        // 0x588FF365: call 0x588faf30
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF36A: movzx ecx, byte ptr [edi + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0x6A
        // 0x588FF36E: movzx edx, byte ptr [edi + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x6B
        // 0x588FF372: movzx eax, byte ptr [esi + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6A
        // 0x588FF376: movzx ebp, byte ptr [esi + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6E
        __asm _emit 0x6B
        // 0x588FF37A: push ecx
        __asm _emit 0x51
        // 0x588FF37B: push edx
        __asm _emit 0x52
        // 0x588FF37C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF37E: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FF382: call 0x588f7d60
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x89
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF387: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FF38B: push eax
        __asm _emit 0x50
        // 0x588FF38C: push ebp
        __asm _emit 0x55
        // 0x588FF38D: jmp 0x588ff3f1
        __asm _emit 0xEB
        __asm _emit 0x62
        // 0x588FF38F: cmp byte ptr [edi + 0x68], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x68
        __asm _emit 0x00
        // 0x588FF393: jne 0x588ff3d5
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x588FF395: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF39D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588FF3A0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588FF3A2: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FF3A6: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x588FF3A9: push ecx
        __asm _emit 0x51
        // 0x588FF3AA: push edx
        __asm _emit 0x52
        // 0x588FF3AB: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588FF3AD: call 0x588ff180
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF3B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF3B4: je 0x588ff3ba
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588FF3B6: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588FF3B8: jne 0x588ff418
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588FF3BA: inc esi
        __asm _emit 0x46
        // 0x588FF3BB: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x588FF3BE: jl 0x588ff3a2
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x588FF3C0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FF3C4: inc eax
        __asm _emit 0x40
        // 0x588FF3C5: add ebx, 6
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x06
        // 0x588FF3C8: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF3CB: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FF3CF: jl 0x588ff3a0
        __asm _emit 0x7C
        __asm _emit 0xCF
        // 0x588FF3D1: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FF3D5: movzx eax, byte ptr [edi + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x6B
        // 0x588FF3D9: movzx ecx, byte ptr [edi + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0x6A
        // 0x588FF3DD: push eax
        __asm _emit 0x50
        // 0x588FF3DE: push ecx
        __asm _emit 0x51
        // 0x588FF3DF: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF3E5: push edi
        __asm _emit 0x57
        // 0x588FF3E6: call 0x588faf70
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF3EB: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FF3EF: push edx
        __asm _emit 0x52
        // 0x588FF3F0: push ebx
        __asm _emit 0x53
        // 0x588FF3F1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FF3F3: call 0x588f7d60
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF3F8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FF3FA: call 0x588f7e90
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x8A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF3FF: mov eax, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x588FF402: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x588FF405: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FF409: push eax
        __asm _emit 0x50
        // 0x588FF40A: push ecx
        __asm _emit 0x51
        // 0x588FF40B: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FF411: push ebx
        __asm _emit 0x53
        // 0x588FF412: push edx
        __asm _emit 0x52
        // 0x588FF413: call 0x588fc990
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF418: pop esi
        __asm _emit 0x5E
        // 0x588FF419: pop ebx
        __asm _emit 0x5B
        // 0x588FF41A: pop edi
        __asm _emit 0x5F
        // 0x588FF41B: pop ebp
        __asm _emit 0x5D
        // 0x588FF41C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
