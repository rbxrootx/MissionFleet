// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 405 bytes in 2 exact ranges.
// Source symbol alias: FUN_588e9c70.

// Ghidra body range 0x588E9C70..0x588E9CF7; 135 mapped bytes.
extern "C" __declspec(naked) void FUN_588e9c70_segment_00() {
    __asm {
        // 0x588E9C70: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E9C74: push ebx
        __asm _emit 0x53
        // 0x588E9C75: push esi
        __asm _emit 0x56
        // 0x588E9C76: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588E9C78: push edi
        __asm _emit 0x57
        // 0x588E9C79: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588E9C7B: lea edi, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x588E9C7E: mov ecx, 0x45
        __asm _emit 0xB9
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C83: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588E9C85: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E9C89: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E9C8B: push ecx
        __asm _emit 0x51
        // 0x588E9C8C: add eax, 0x44
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x44
        // 0x588E9C8F: push eax
        __asm _emit 0x50
        // 0x588E9C90: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588E9C92: call 0x588e9940
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9C97: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C9C: lea edx, [ebx + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9CA2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E9CA4: push edx
        __asm _emit 0x52
        // 0x588E9CA5: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x2F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E9CAA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588E9CAD: lea eax, [ebx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9CB3: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9CB8: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9CBD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588E9CC0: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x588E9CC2: and esi, 0xcaa2a8aa
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xAA
        __asm _emit 0xA8
        __asm _emit 0xA2
        __asm _emit 0xCA
        // 0x588E9CC8: or esi, 0xaa2a8aa
        __asm _emit 0x81
        __asm _emit 0xCE
        __asm _emit 0xAA
        __asm _emit 0xA8
        __asm _emit 0xA2
        __asm _emit 0x0A
        // 0x588E9CCE: mov byte ptr [eax - 0x13], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0xED
        // 0x588E9CD1: mov byte ptr [eax + 4], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588E9CD4: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x588E9CD6: mov dword ptr [eax - 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xF0
        // 0x588E9CD9: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588E9CDC: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588E9CDF: jne 0x588e9cc0
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x588E9CE1: push ebp
        __asm _emit 0x55
        // 0x588E9CE2: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588E9CE4: cmp byte ptr [ebx + 0x104], 0
        __asm _emit 0x80
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9CEB: jbe 0x588e9da0
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9CF1: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E9CF5: jmp 0x588e9d00
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x588E9D00..0x588E9E0E; 270 mapped bytes.
extern "C" __declspec(naked) void FUN_588e9c70_segment_01() {
    __asm {
        // 0x588E9D00: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x588E9D03: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x588E9D06: lea edi, [ecx + ebx + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x19
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D0D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588E9D0F: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D14: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588E9D16: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x588E9D19: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x588E9D1C: xor byte ptr [ecx + ebx + 0x11d], dl
        __asm _emit 0x30
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D23: lea ecx, [ecx + ebx + 0x11d]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x19
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D2A: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x588E9D2D: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x588E9D30: xor byte ptr [ecx + ebx + 0x134], dl
        __asm _emit 0x30
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D37: lea ecx, [ecx + ebx + 0x134]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x19
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D3E: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x588E9D41: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x588E9D44: lea esi, [ecx + ebx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x19
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D4B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588E9D4D: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x588E9D4F: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x588E9D51: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x588E9D54: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x588E9D57: lea esi, [ecx + ebx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x19
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D5E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588E9D60: xor ecx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E9D66: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x588E9D68: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x588E9D6B: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x588E9D6E: lea esi, [ecx + ebx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x19
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D75: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588E9D77: xor ecx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E9D7D: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x588E9D7F: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x588E9D82: add ecx, 9
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x09
        // 0x588E9D85: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x588E9D88: xor dword ptr [ecx + ebx], edx
        __asm _emit 0x31
        __asm _emit 0x14
        __asm _emit 0x19
        // 0x588E9D8B: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x588E9D8D: movzx ecx, byte ptr [ebx + 0x104]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9D94: inc ebp
        __asm _emit 0x45
        // 0x588E9D95: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588E9D98: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x588E9D9A: jl 0x588e9d00
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9DA0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E9DA2: mov dword ptr [ebx + 0xa28], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9DA8: mov dword ptr [ebx + 0xa2c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x2C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9DAE: mov dword ptr [ebx + 0xa30], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9DB4: mov dword ptr [ebx + 0xa34], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x34
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9DBA: mov dword ptr [ebx + 0xa38], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9DC0: mov dword ptr [ebx + 0xa3c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9DC6: mov dword ptr [ebx + 0xa40], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x40
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9DCC: mov dword ptr [ebx + 0xa44], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9DD2: cmp byte ptr [0x58a2485e], 1
        __asm _emit 0x80
        __asm _emit 0x3D
        __asm _emit 0x5E
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x588E9DD9: pop ebp
        __asm _emit 0x5D
        // 0x588E9DDA: jne 0x588e9e01
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588E9DDC: movzx edx, byte ptr [0x58a0adba]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x15
        __asm _emit 0xBA
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588E9DE3: movzx eax, byte ptr [0x58a0adb9]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x05
        __asm _emit 0xB9
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588E9DEA: movzx ecx, byte ptr [0x58a0adb8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588E9DF1: push edx
        __asm _emit 0x52
        // 0x588E9DF2: push eax
        __asm _emit 0x50
        // 0x588E9DF3: push ecx
        __asm _emit 0x51
        // 0x588E9DF4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588E9DF6: call 0x588e92b0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9DFB: pop edi
        __asm _emit 0x5F
        // 0x588E9DFC: pop esi
        __asm _emit 0x5E
        // 0x588E9DFD: pop ebx
        __asm _emit 0x5B
        // 0x588E9DFE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E9E01: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588E9E03: call 0x588e7c10
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9E08: pop edi
        __asm _emit 0x5F
        // 0x588E9E09: pop esi
        __asm _emit 0x5E
        // 0x588E9E0A: pop ebx
        __asm _emit 0x5B
        // 0x588E9E0B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
