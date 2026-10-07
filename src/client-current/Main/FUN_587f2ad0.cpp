// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 757 bytes in 1 exact ranges.
// Source symbol alias: FUN_587f2ad0.

// Ghidra body range 0x587F2AD0..0x587F2DC5; 757 mapped bytes.
extern "C" __declspec(naked) void FUN_587f2ad0_segment_00() {
    __asm {
        // 0x587F2AD0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587F2AD2: push 0x589825de
        __asm _emit 0x68
        __asm _emit 0xDE
        __asm _emit 0x25
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F2AD7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2ADD: push eax
        __asm _emit 0x50
        // 0x587F2ADE: sub esp, 0x284
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2AE4: push ebx
        __asm _emit 0x53
        // 0x587F2AE5: push ebp
        __asm _emit 0x55
        // 0x587F2AE6: push esi
        __asm _emit 0x56
        // 0x587F2AE7: push edi
        __asm _emit 0x57
        // 0x587F2AE8: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F2AED: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F2AEF: push eax
        __asm _emit 0x50
        // 0x587F2AF0: lea eax, [esp + 0x298]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2AF7: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2AFD: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F2AFF: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587F2B03: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587F2B05: push 0x23c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2B0A: lea eax, [esp + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587F2B0E: push ebx
        __asm _emit 0x53
        // 0x587F2B0F: push eax
        __asm _emit 0x50
        // 0x587F2B10: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587F2B14: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2B19: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2B1F: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2B25: imul eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2B2C: cdq
        __asm _emit 0x99
        // 0x587F2B2D: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2B33: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587F2B35: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F2B37: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2B3D: imul eax, dword ptr [ecx + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2B44: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2B4A: mov esi, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x70
        // 0x587F2B4D: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F2B53: cdq
        __asm _emit 0x99
        // 0x587F2B54: and edx, 0x1ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2B5A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587F2B5C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F2B5E: sar ebp, 0xa
        __asm _emit 0xC1
        __asm _emit 0xFD
        __asm _emit 0x0A
        // 0x587F2B61: sar edi, 9
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x09
        // 0x587F2B64: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F2B67: mov dword ptr [esp + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587F2B6B: mov dword ptr [esp + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587F2B6F: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x74
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587F2B74: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587F2B76: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587F2B78: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587F2B7A: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F2B7E: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F2B82: jle 0x587f2dab
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2B88: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x587F2B8B: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587F2B8E: lea edx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587F2B92: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F2B96: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F2B9A: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F2B9E: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F2BA2: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587F2BA4: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F2BA8: jle 0x587f2d86
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2BAE: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x587F2BB0: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587F2BB4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587F2BB6: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F2BBA: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587F2BBC: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F2BC0: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F2BC4: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587F2BC8: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F2BCC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587F2BD0: push eax
        __asm _emit 0x50
        // 0x587F2BD1: call 0x5897cc3c
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xA0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2BD6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F2BD9: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xA0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2BDE: cdq
        __asm _emit 0x99
        // 0x587F2BDF: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2BE4: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587F2BE6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587F2BE8: jne 0x587f2d47
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2BEE: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587F2BF0: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xA0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2BF5: cdq
        __asm _emit 0x99
        // 0x587F2BF6: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2BFB: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587F2BFD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587F2BFF: jle 0x587f2d47
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2C05: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F2C09: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F2C0D: mov ebx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x1A
        // 0x587F2C0F: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587F2C11: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587F2C13: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F2C17: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F2C1B: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x587F2C1D: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587F2C20: imul ecx, dword ptr [esp + 0x34]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F2C25: push ecx
        __asm _emit 0x51
        // 0x587F2C26: call 0x5897cc3c
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xA0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2C2B: push 0x98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2C30: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xA0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2C35: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587F2C37: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587F2C3A: mov dword ptr [esp + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587F2C3E: mov dword ptr [esp + 0x2a0], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2C49: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F2C4B: je 0x587f2c99
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x587F2C4D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587F2C4F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F2C51: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F2C53: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x9F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2C58: and eax, 0x800001ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587F2C5D: jns 0x587f2c66
        __asm _emit 0x79
        __asm _emit 0x07
        // 0x587F2C5F: dec eax
        __asm _emit 0x48
        // 0x587F2C60: or eax, 0xfffffe00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2C65: inc eax
        __asm _emit 0x40
        // 0x587F2C66: add eax, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F2C6A: push eax
        __asm _emit 0x50
        // 0x587F2C6B: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x9F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2C70: and eax, 0x800003ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587F2C75: jns 0x587f2c7e
        __asm _emit 0x79
        __asm _emit 0x07
        // 0x587F2C77: dec eax
        __asm _emit 0x48
        // 0x587F2C78: or eax, 0xfffffc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2C7D: inc eax
        __asm _emit 0x40
        // 0x587F2C7E: add eax, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F2C82: mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587F2C86: push eax
        __asm _emit 0x50
        // 0x587F2C87: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2C8D: push eax
        __asm _emit 0x50
        // 0x587F2C8E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F2C90: call 0x58756bc0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x3F
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F2C95: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587F2C97: jmp 0x587f2c9b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F2C99: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587F2C9B: or byte ptr [esi + 0x50], 2
        __asm _emit 0x80
        __asm _emit 0x4E
        __asm _emit 0x50
        __asm _emit 0x02
        // 0x587F2C9F: mov ecx, 0x2710
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2CA4: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x587F2CA8: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587F2CAB: mov dword ptr [esp + 0x2a0], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2CB6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F2CB8: je 0x587f2cc0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F2CBA: push esi
        __asm _emit 0x56
        // 0x587F2CBB: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F2CC0: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587F2CC3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F2CC5: je 0x587f2ccd
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F2CC7: push esi
        __asm _emit 0x56
        // 0x587F2CC8: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F2CCD: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x9F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2CD2: cdq
        __asm _emit 0x99
        // 0x587F2CD3: mov ecx, 0x18
        __asm _emit 0xB9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2CD8: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587F2CDA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F2CDC: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x587F2CDF: push edx
        __asm _emit 0x52
        // 0x587F2CE0: call 0x58796f80
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x42
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587F2CE5: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x587F2CE7: mov dword ptr [esi + 0x54], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2CEE: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x9F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2CF3: cdq
        __asm _emit 0x99
        // 0x587F2CF4: mov ecx, 6
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2CF9: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587F2CFB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F2CFD: push edx
        __asm _emit 0x52
        // 0x587F2CFE: call 0x58756b40
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x3E
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F2D03: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587F2D07: mov dword ptr [esi + 0x88], 0x12c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2D11: mov ecx, dword ptr [edx + 0x20d54]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2D17: push esi
        __asm _emit 0x56
        // 0x587F2D18: call 0x587ef0c0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2D1D: inc ebx
        __asm _emit 0x43
        // 0x587F2D1E: inc ebp
        __asm _emit 0x45
        // 0x587F2D1F: inc edi
        __asm _emit 0x47
        // 0x587F2D20: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x9F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2D25: cdq
        __asm _emit 0x99
        // 0x587F2D26: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2D2B: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587F2D2D: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x587F2D2F: jl 0x587f2c17
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xE2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2D35: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F2D39: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F2D3D: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F2D41: mov dword ptr [edx], ebx
        __asm _emit 0x89
        __asm _emit 0x1A
        // 0x587F2D43: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F2D47: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587F2D4B: add eax, dword ptr [esp + 0x50]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587F2D4F: mov ebp, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587F2D53: add dword ptr [esp + 0x14], 0x30
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x30
        // 0x587F2D58: add dword ptr [esp + 0x20], 0x400
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2D60: inc esi
        __asm _emit 0x46
        // 0x587F2D61: add edi, 2
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x02
        // 0x587F2D64: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587F2D66: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F2D6A: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587F2D6E: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F2D72: jl 0x587f2bd0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x58
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2D78: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F2D7C: mov edi, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587F2D80: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F2D84: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587F2D86: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x587F2D8B: add dword ptr [esp + 0x1c], 3
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        // 0x587F2D90: add dword ptr [esp + 0x24], 0x200
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2D98: inc ebx
        __asm _emit 0x43
        // 0x587F2D99: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587F2D9B: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587F2D9D: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F2DA1: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F2DA5: jl 0x587f2ba2
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF7
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2DAB: mov ecx, dword ptr [esp + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2DB2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2DB9: pop ecx
        __asm _emit 0x59
        // 0x587F2DBA: pop edi
        __asm _emit 0x5F
        // 0x587F2DBB: pop esi
        __asm _emit 0x5E
        // 0x587F2DBC: pop ebp
        __asm _emit 0x5D
        // 0x587F2DBD: pop ebx
        __asm _emit 0x5B
        // 0x587F2DBE: add esp, 0x290
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2DC4: ret
        __asm _emit 0xC3
    }
}
