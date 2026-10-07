// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 357 bytes in 1 exact ranges.
// Source symbol alias: FUN_58886ae0.

// Ghidra body range 0x58886AE0..0x58886C45; 357 mapped bytes.
extern "C" __declspec(naked) void FUN_58886ae0_segment_00() {
    __asm {
        // 0x58886AE0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58886AE3: push ebx
        __asm _emit 0x53
        // 0x58886AE4: mov ebx, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886AEA: push ebp
        __asm _emit 0x55
        // 0x58886AEB: push esi
        __asm _emit 0x56
        // 0x58886AEC: lea esi, [ecx + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886AF2: push edi
        __asm _emit 0x57
        // 0x58886AF3: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58886AF7: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58886AFA: jbe 0x58886b01
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58886AFC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x61
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58886B01: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58886B04: mov ebp, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x2E
        // 0x58886B06: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58886B09: jbe 0x58886b10
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58886B0B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x61
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58886B10: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58886B12: push ebx
        __asm _emit 0x53
        // 0x58886B13: push ebp
        __asm _emit 0x55
        // 0x58886B14: push edi
        __asm _emit 0x57
        // 0x58886B15: push eax
        __asm _emit 0x50
        // 0x58886B16: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58886B1A: push eax
        __asm _emit 0x50
        // 0x58886B1B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58886B1D: call 0x58880d00
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xA1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886B22: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58886B26: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58886B28: jbe 0x58886b40
        __asm _emit 0x76
        __asm _emit 0x16
        // 0x58886B2A: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58886B2E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58886B30: push edi
        __asm _emit 0x57
        // 0x58886B31: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58886B33: call 0x58886870
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886B38: add edi, 0x22
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x22
        // 0x58886B3B: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58886B3E: jne 0x58886b30
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58886B40: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58886B44: mov ecx, dword ptr [ebp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886B4A: sub ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x2B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886B50: lea ebx, [ebp + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x9D
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886B56: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58886B5B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58886B5D: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886B60: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58886B62: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58886B65: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58886B67: je 0x58886c0d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886B6D: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58886B70: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58886B73: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58886B78: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58886B7A: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886B7D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58886B7F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58886B82: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58886B84: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58886B86: je 0x58886be0
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x58886B88: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58886B8A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886B90: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58886B93: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58886B96: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58886B9B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58886B9D: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886BA0: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58886BA2: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58886BA5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58886BA7: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x58886BA9: jb 0x58886bb0
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58886BAB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x60
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58886BB0: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58886BB3: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x58886BB5: push edx
        __asm _emit 0x52
        // 0x58886BB6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58886BB8: call 0x58886870
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886BBD: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58886BC0: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58886BC3: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58886BC8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58886BCA: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886BCD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58886BCF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58886BD2: inc edi
        __asm _emit 0x47
        // 0x58886BD3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58886BD5: add ebp, 0x22
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x22
        // 0x58886BD8: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58886BDA: jb 0x58886b90
        __asm _emit 0x72
        __asm _emit 0xB4
        // 0x58886BDC: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58886BE0: movzx ecx, word ptr [ebp + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x58886BE4: push ecx
        __asm _emit 0x51
        // 0x58886BE5: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58886BE7: mov dword ptr [ebp + 0x70], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886BEE: call 0x5887cfb0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x63
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886BF3: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58886BF5: call 0x58880df0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xA1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886BFA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58886BFC: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58886BFE: call 0x5887bee0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886C03: pop edi
        __asm _emit 0x5F
        // 0x58886C04: pop esi
        __asm _emit 0x5E
        // 0x58886C05: pop ebp
        __asm _emit 0x5D
        // 0x58886C06: pop ebx
        __asm _emit 0x5B
        // 0x58886C07: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58886C0A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58886C0D: mov ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x58886C10: cmp dword ptr [ebx + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x58886C13: jbe 0x58886c1a
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58886C15: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58886C1A: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x58886C1D: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x58886C1F: cmp esi, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x58886C22: jbe 0x58886c29
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58886C24: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x60
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58886C29: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58886C2B: push ebp
        __asm _emit 0x55
        // 0x58886C2C: push edi
        __asm _emit 0x57
        // 0x58886C2D: push esi
        __asm _emit 0x56
        // 0x58886C2E: push eax
        __asm _emit 0x50
        // 0x58886C2F: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58886C33: push edx
        __asm _emit 0x52
        // 0x58886C34: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58886C36: call 0x58880d00
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xA0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886C3B: pop edi
        __asm _emit 0x5F
        // 0x58886C3C: pop esi
        __asm _emit 0x5E
        // 0x58886C3D: pop ebp
        __asm _emit 0x5D
        // 0x58886C3E: pop ebx
        __asm _emit 0x5B
        // 0x58886C3F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58886C42: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
