// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 639 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f69b0.

// Ghidra body range 0x587F69B0..0x587F6BB5; 517 mapped bytes.
extern "C" __declspec(naked) void FUN_587f69b0_segment_00() {
    __asm {
        // 0x587F69B0: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x3C
        // 0x587F69B3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F69B8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F69BA: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F69BE: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587F69C5: push ebx
        __asm _emit 0x53
        // 0x587F69C6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587F69C8: push esi
        __asm _emit 0x56
        // 0x587F69C9: mov dword ptr [esp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F69CD: je 0x587f6c02
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F69D3: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587F69DA: jne 0x587f6c02
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F69E0: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F69E5: cmp dword ptr [eax + 0x640], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F69EC: jne 0x587f6a46
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x587F69EE: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F69F4: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F69F9: push 0x5899c5c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F69FE: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6A00: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6A06: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6A09: push eax
        __asm _emit 0x50
        // 0x587F6A0A: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6A0F: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6A14: push 0x5899c5c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6A19: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6A1B: mov ecx, dword ptr [ebx + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6A21: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6A24: push eax
        __asm _emit 0x50
        // 0x587F6A25: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F6A2A: mov ecx, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6A30: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x8F
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F6A35: pop esi
        __asm _emit 0x5E
        // 0x587F6A36: pop ebx
        __asm _emit 0x5B
        // 0x587F6A37: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F6A3B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F6A3D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6A42: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F6A45: ret
        __asm _emit 0xC3
        // 0x587F6A46: mov ecx, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6A4C: mov esi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6A52: mov al, byte ptr [esi + 1]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x587F6A55: push edi
        __asm _emit 0x57
        // 0x587F6A56: cmp al, 0xa4
        __asm _emit 0x3C
        __asm _emit 0xA4
        // 0x587F6A58: je 0x587f6a91
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x587F6A5A: cmp al, 0xc1
        __asm _emit 0x3C
        __asm _emit 0xC1
        // 0x587F6A5C: jne 0x587f6a79
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587F6A5E: cmp byte ptr [esi + 3], 0xc7
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587F6A62: je 0x587f6a91
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587F6A64: cmp al, al
        __asm _emit 0x3A
        __asm _emit 0xC0
        // 0x587F6A66: jne 0x587f6a79
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587F6A68: cmp byte ptr [esi + 3], 0xbc
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x03
        __asm _emit 0xBC
        // 0x587F6A6C: jne 0x587f6a79
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587F6A6E: mov edi, 0xa
        __asm _emit 0xBF
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6A73: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F6A77: jmp 0x587f6a9d
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x587F6A79: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F6A7B: cmp byte ptr [esi + 2], 0x69
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x02
        __asm _emit 0x69
        // 0x587F6A7F: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x587F6A82: dec edx
        __asm _emit 0x4A
        // 0x587F6A83: and edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0A
        // 0x587F6A86: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587F6A89: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F6A8D: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587F6A8F: jmp 0x587f6a9d
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587F6A91: mov dword ptr [esp + 0xc], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6A99: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F6A9D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F6A9F: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F6AA2: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F6AA4: inc eax
        __asm _emit 0x40
        // 0x587F6AA5: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F6AA7: jne 0x587f6aa2
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6AA9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F6AAB: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F6AAD: jbe 0x587f6bca
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6AB3: cmp byte ptr [esi + edi - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x3E
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x587F6AB8: jne 0x587f6bca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6ABE: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F6AC0: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F6AC4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6AC6: push eax
        __asm _emit 0x50
        // 0x587F6AC7: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6ACC: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xA1
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6AD1: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6AD7: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6ADD: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F6AE1: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6AE6: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F6AEA: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6AF0: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F6AF4: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6AFA: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F6AFE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F6B00: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F6B04: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F6B07: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F6B0B: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F6B0E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587F6B10: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F6B12: inc eax
        __asm _emit 0x40
        // 0x587F6B13: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F6B15: jne 0x587f6b10
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6B17: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F6B19: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587F6B1B: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x31
        // 0x587F6B1E: push ebp
        __asm _emit 0x55
        // 0x587F6B1F: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F6B21: push ebp
        __asm _emit 0x55
        // 0x587F6B22: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xAA
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587F6B27: push ebp
        __asm _emit 0x55
        // 0x587F6B28: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F6B2A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6B2C: push ebx
        __asm _emit 0x53
        // 0x587F6B2D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6B32: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6B37: lea esi, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F6B3B: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587F6B3D: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587F6B3F: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F6B43: mov edx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6B49: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6B4F: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F6B53: lea ecx, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x587F6B56: push ecx
        __asm _emit 0x51
        // 0x587F6B57: push eax
        __asm _emit 0x50
        // 0x587F6B58: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587F6B5B: push ecx
        __asm _emit 0x51
        // 0x587F6B5C: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6B61: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6B67: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587F6B6A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F6B6C: push ebp
        __asm _emit 0x55
        // 0x587F6B6D: push ebx
        __asm _emit 0x53
        // 0x587F6B6E: call 0x587b8370
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x17
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F6B73: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6B79: pop ebp
        __asm _emit 0x5D
        // 0x587F6B7A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F6B7C: jne 0x587f6b99
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587F6B7E: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6B83: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6B88: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F6B8A: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6B90: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6B93: push eax
        __asm _emit 0x50
        // 0x587F6B94: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6B99: push 0x5899c654
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6B9E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F6BA0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6BA3: push eax
        __asm _emit 0x50
        // 0x587F6BA4: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587F6BA6: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F6BA8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F6BAA: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6BAF: push ebx
        __asm _emit 0x53
        // 0x587F6BB0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587F6BB8..0x587F6C32; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_587f69b0_segment_01() {
    __asm {
        // 0x587F6BB8: pop edi
        __asm _emit 0x5F
        // 0x587F6BB9: pop esi
        __asm _emit 0x5E
        // 0x587F6BBA: pop ebx
        __asm _emit 0x5B
        // 0x587F6BBB: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F6BBF: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F6BC1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6BC6: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F6BC9: ret
        __asm _emit 0xC3
        // 0x587F6BCA: mov al, byte ptr [esi + edi - 1]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x3E
        __asm _emit 0xFF
        // 0x587F6BCE: cmp al, 0x20
        __asm _emit 0x3C
        __asm _emit 0x20
        // 0x587F6BD0: je 0x587f6bd6
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587F6BD2: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587F6BD4: jne 0x587f6bb8
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x587F6BD6: push 0x5899c654
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6BDB: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6BE1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6BE4: push eax
        __asm _emit 0x50
        // 0x587F6BE5: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587F6BE7: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F6BE9: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F6BEB: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6BF0: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F6BF4: pop edi
        __asm _emit 0x5F
        // 0x587F6BF5: pop esi
        __asm _emit 0x5E
        // 0x587F6BF6: pop ebx
        __asm _emit 0x5B
        // 0x587F6BF7: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F6BF9: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x5F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6BFE: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F6C01: ret
        __asm _emit 0xC3
        // 0x587F6C02: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6C08: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6C0D: push 0x5899c628
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6C12: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6C14: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6C1A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6C1D: push eax
        __asm _emit 0x50
        // 0x587F6C1E: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6C23: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6C28: push 0x5899c628
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6C2D: jmp 0x587f6a19
        __asm _emit 0xE9
        __asm _emit 0xE7
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
