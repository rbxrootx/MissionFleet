// FUN_587B2A40: type-0x05 record-backed child-state initializer.
// The two verified callers pass a 0x2D-DWORD record, an entry index, and a
// word from +0x350. This preserves the full 592-byte mapped instruction
// stream; offsets and record meanings remain provisional. See
// docs/current-main-type-05-record-child-state.md.
// Source symbol alias: FUN_587b2a40.
extern "C" __declspec(naked) void FUN_587b2a40() {
    __asm {
        // 0x587B2A40: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B2A44: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B2A48: push ebx
        __asm _emit 0x53
        // 0x587B2A49: push ebp
        __asm _emit 0x55
        // 0x587B2A4A: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587B2A4C: push esi
        __asm _emit 0x56
        // 0x587B2A4D: lea ebx, [ebp + 0x18c]
        __asm _emit 0x8D
        __asm _emit 0x9D
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2A53: push edi
        __asm _emit 0x57
        // 0x587B2A54: mov dword ptr [ebp + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2A5A: mov ecx, 0x2d
        __asm _emit 0xB9
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2A5F: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587B2A61: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587B2A63: mov dword ptr [ebp + 0x68], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B2A6A: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B2A6C: mov al, byte ptr [ebx]
        __asm _emit 0x8A
        __asm _emit 0x03
        // 0x587B2A6E: movzx ecx, word ptr [ebp + 0x18e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2A75: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x587B2A77: jne 0x587b2ab0
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x587B2A79: cmp byte ptr [ebp + 0x18d], 0
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0x8D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2A80: jne 0x587b2ab0
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587B2A82: cmp ecx, 0x1b1
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2A88: je 0x587b2aa2
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587B2A8A: cmp ecx, 0x247
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2A90: je 0x587b2aa2
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587B2A92: cmp ecx, 0x248
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2A98: je 0x587b2aa2
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B2A9A: cmp ecx, 0x367
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AA0: jne 0x587b2ab0
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B2AA2: mov dword ptr [ebp + 0x25c], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AAC: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587B2AAE: jmp 0x587b2ab8
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587B2AB0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587B2AB2: mov dword ptr [ebp + 0x25c], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AB8: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2ABD: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x587B2ABF: jne 0x587b2ade
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587B2AC1: cmp byte ptr [ebp + 0x18d], 0
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0x8D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AC8: jne 0x587b2ade
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587B2ACA: mov ecx, 0xc1c
        __asm _emit 0xB9
        __asm _emit 0x1C
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2ACF: cmp word ptr [edx + 0xa0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AD6: jb 0x587b2ade
        __asm _emit 0x72
        __asm _emit 0x06
        // 0x587B2AD8: mov dword ptr [ebp + 0x25c], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2ADE: movzx eax, word ptr [ebp + 0x190]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AE5: mov ecx, dword ptr [ebp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AEB: inc eax
        __asm _emit 0x40
        // 0x587B2AEC: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AF2: jle 0x587b2b09
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587B2AF4: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B2AF6: jl 0x587b2b09
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x587B2AF8: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2AFE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587B2B00: je 0x587b2b09
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587B2B02: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587B2B05: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587B2B07: jmp 0x587b2b0b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B2B09: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B2B0B: mov ecx, dword ptr [ebp + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2B11: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587B2B14: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B2B16: je 0x587b2b40
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587B2B18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587B2B1B: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587B2B1E: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587B2B21: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587B2B24: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587B2B27: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587B2B29: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587B2B2C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587B2B2E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B2B31: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587B2B34: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587B2B37: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587B2B3A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587B2B3D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587B2B40: mov eax, dword ptr [ebp + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2B46: mov ecx, 0x8000
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2B4B: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587B2B4F: movzx edx, word ptr [ebp + 0x22a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x2A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2B56: mov eax, dword ptr [ebp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2B5C: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2B62: mov dword ptr [ebp + 0x154], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2B68: mov dword ptr [ebp + 0x158], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2B72: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B2B78: cmp dword ptr [ecx + 4], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587B2B7B: jne 0x587b2bbe
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x587B2B7D: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B2B7F: je 0x587b2b97
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587B2B81: mov edx, dword ptr [ebp + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2B87: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B2B8D: push edx
        __asm _emit 0x52
        // 0x587B2B8E: call 0x58854230
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x16
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587B2B93: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B2B95: jne 0x587b2bab
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587B2B97: movzx eax, word ptr [ebp + 0x314]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2B9E: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2BA3: mov dword ptr [ebp + 0x158], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2BA9: jmp 0x587b2bbe
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587B2BAB: movzx ecx, word ptr [ebp + 0x3c8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2BB2: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2BB8: mov dword ptr [ebp + 0x158], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2BBE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587B2BC0: call 0x587b1850
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B2BC5: movzx eax, word ptr [ebp + 0x226]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2BCC: movzx edx, word ptr [ebp + 0x224]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2BD3: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x587B2BD6: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x587B2BD9: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B2BDC: push eax
        __asm _emit 0x50
        // 0x587B2BDD: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587B2BDF: mov dword ptr [ebp + 0xe0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2BE5: call 0x587b08c0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B2BEA: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587B2BEC: call 0x587b1b70
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B2BF1: movzx eax, word ptr [ebp + 0x22c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2BF8: mov cx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B2BFD: mov edx, 0x5dc
        __asm _emit 0xBA
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C02: mov word ptr [ebp + 0x24c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C09: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B2C0C: jbe 0x587b2c1a
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x587B2C0E: mov dword ptr [ebp + 0x254], 3
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C18: jmp 0x587b2c4d
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x587B2C1A: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C1F: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B2C22: jb 0x587b2c2c
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x587B2C24: mov dword ptr [ebp + 0x254], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C2A: jmp 0x587b2c4d
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x587B2C2C: mov edx, 0x1f4
        __asm _emit 0xBA
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C31: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B2C34: jbe 0x587b2c47
        __asm _emit 0x76
        __asm _emit 0x11
        // 0x587B2C36: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B2C39: jae 0x587b2c47
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x587B2C3B: mov dword ptr [ebp + 0x254], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C45: jmp 0x587b2c4d
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587B2C47: mov dword ptr [ebp + 0x254], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C4D: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587B2C4F: mov dword ptr [ebp + 0x258], 0x15
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C59: mov dword ptr [ebp + 0x243e4], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xE4
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B2C5F: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B2C65: push edx
        __asm _emit 0x52
        // 0x587B2C66: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587B2C6B: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B2C6D: je 0x587b2c83
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587B2C6F: movzx eax, word ptr [eax + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2C76: pop edi
        __asm _emit 0x5F
        // 0x587B2C77: pop esi
        __asm _emit 0x5E
        // 0x587B2C78: mov dword ptr [ebp + 0x243e8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B2C7E: pop ebp
        __asm _emit 0x5D
        // 0x587B2C7F: pop ebx
        __asm _emit 0x5B
        // 0x587B2C80: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B2C83: pop edi
        __asm _emit 0x5F
        // 0x587B2C84: mov dword ptr [ebp + 0x243e8], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B2C8A: pop esi
        __asm _emit 0x5E
        // 0x587B2C8B: pop ebp
        __asm _emit 0x5D
        // 0x587B2C8C: pop ebx
        __asm _emit 0x5B
        // 0x587B2C8D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
