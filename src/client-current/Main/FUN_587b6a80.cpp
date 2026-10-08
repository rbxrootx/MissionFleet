// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 341 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b6a80.

// Ghidra body range 0x587B6A80..0x587B6BD5; 341 mapped bytes.
extern "C" __declspec(naked) void FUN_587b6a80_segment_00() {
    __asm {
        // 0x587B6A80: push esi
        __asm _emit 0x56
        // 0x587B6A81: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B6A83: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587B6A86: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587B6A89: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B6A8B: jne 0x587b6a99
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587B6A8D: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587B6A90: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x587B6A93: je 0x587b6b1a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6A99: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587B6A9B: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x587B6A9E: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587B6AA1: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x587B6AA4: push edi
        __asm _emit 0x57
        // 0x587B6AA5: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x587B6AA8: ja 0x587b6acf
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x587B6AAA: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x587B6AAD: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B6AB0: ja 0x587b6ac6
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x587B6AB2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B6AB4: jge 0x587b6abb
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587B6AB6: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x587B6AB9: jmp 0x587b6ada
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587B6ABB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B6ABD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B6ABF: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x587B6AC2: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587B6AC4: jmp 0x587b6ada
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x587B6AC6: cdq
        __asm _emit 0x99
        // 0x587B6AC7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B6AC9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B6ACB: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x587B6ACD: jmp 0x587b6ada
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587B6ACF: cdq
        __asm _emit 0x99
        // 0x587B6AD0: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587B6AD3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B6AD5: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B6AD7: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x587B6ADA: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x587B6ADD: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x587B6AE0: ja 0x587b6b05
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x587B6AE2: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x587B6AE5: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B6AE8: ja 0x587b6afc
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x587B6AEA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B6AEC: jge 0x587b6af3
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587B6AEE: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587B6AF1: jmp 0x587b6b10
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x587B6AF3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B6AF5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B6AF7: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x587B6AFA: jmp 0x587b6b10
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x587B6AFC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B6AFE: cdq
        __asm _emit 0x99
        // 0x587B6AFF: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B6B01: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B6B03: jmp 0x587b6b10
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587B6B05: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B6B07: cdq
        __asm _emit 0x99
        // 0x587B6B08: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587B6B0B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B6B0D: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587B6B10: push eax
        __asm _emit 0x50
        // 0x587B6B11: push edi
        __asm _emit 0x57
        // 0x587B6B12: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6B14: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B6B19: pop edi
        __asm _emit 0x5F
        // 0x587B6B1A: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587B6B1D: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x587B6B20: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B6B22: je 0x587b6b4e
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587B6B24: jle 0x587b6b37
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x587B6B26: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587B6B28: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B6B2A: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x587B6B2D: jg 0x587b6b32
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x587B6B2F: push eax
        __asm _emit 0x50
        // 0x587B6B30: jmp 0x587b6b47
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587B6B32: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x587B6B35: jmp 0x587b6b46
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587B6B37: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587B6B39: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B6B3B: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x587B6B3E: jg 0x587b6b43
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x587B6B40: push eax
        __asm _emit 0x50
        // 0x587B6B41: jmp 0x587b6b47
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B6B43: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x587B6B46: push ecx
        __asm _emit 0x51
        // 0x587B6B47: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6B49: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xC1
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B6B4E: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587B6B51: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587B6B54: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B6B56: je 0x587b6b82
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587B6B58: jle 0x587b6b6b
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x587B6B5A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587B6B5C: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B6B5E: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x587B6B61: jg 0x587b6b66
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x587B6B63: push eax
        __asm _emit 0x50
        // 0x587B6B64: jmp 0x587b6b7b
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587B6B66: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x587B6B69: jmp 0x587b6b7a
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587B6B6B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587B6B6D: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B6B6F: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x587B6B72: jg 0x587b6b77
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x587B6B74: push eax
        __asm _emit 0x50
        // 0x587B6B75: jmp 0x587b6b7b
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B6B77: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x587B6B7A: push ecx
        __asm _emit 0x51
        // 0x587B6B7B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6B7D: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xC1
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B6B82: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587B6B85: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587B6B88: jne 0x587b6bd3
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x587B6B8A: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587B6B8D: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x587B6B90: jne 0x587b6bd3
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x587B6B92: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x587B6B95: cmp edx, dword ptr [esi + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x587B6B98: jne 0x587b6bd3
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x587B6B9A: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587B6B9D: cmp eax, dword ptr [esi + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x587B6BA0: jne 0x587b6bd3
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x587B6BA2: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587B6BA6: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6BAB: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587B6BAE: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6BB3: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B6BB6: jne 0x587b6bbe
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587B6BB8: mov byte ptr [esi + 0x60], 2
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x02
        // 0x587B6BBC: pop esi
        __asm _emit 0x5E
        // 0x587B6BBD: ret
        __asm _emit 0xC3
        // 0x587B6BBE: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587B6BC2: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587B6BC5: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6BCA: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B6BCD: jne 0x587b6bd3
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587B6BCF: mov byte ptr [esi + 0x60], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x587B6BD3: pop esi
        __asm _emit 0x5E
        // 0x587B6BD4: ret
        __asm _emit 0xC3
    }
}
