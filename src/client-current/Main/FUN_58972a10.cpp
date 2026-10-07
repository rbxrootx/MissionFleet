// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 430 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972a10.

// Ghidra body range 0x58972A10..0x58972BBE; 430 mapped bytes.
extern "C" __declspec(naked) void FUN_58972a10_segment_00() {
    __asm {
        // 0x58972A10: push ebx
        __asm _emit 0x53
        // 0x58972A11: push ebp
        __asm _emit 0x55
        // 0x58972A12: push esi
        __asm _emit 0x56
        // 0x58972A13: push edi
        __asm _emit 0x57
        // 0x58972A14: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58972A16: call 0x589728f0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972A1B: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58972A1D: je 0x58972bb5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972A23: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58972A27: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58972A29: je 0x58972b90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972A2F: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58972A33: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58972A35: je 0x58972b90
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972A3B: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58972A3F: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58972A42: ja 0x58972a4b
        __asm _emit 0x77
        __asm _emit 0x07
        // 0x58972A44: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972A49: jmp 0x58972a66
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58972A4B: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58972A4E: ja 0x58972a57
        __asm _emit 0x77
        __asm _emit 0x07
        // 0x58972A50: mov ecx, 4
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972A55: jmp 0x58972a66
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58972A57: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972A5C: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58972A5E: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x58972A60: and ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x10
        // 0x58972A63: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58972A66: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58972A68: imul esi, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF7
        // 0x58972A6B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58972A6D: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58972A70: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58972A72: and edx, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0xF8
        // 0x58972A75: cmp edx, 0x80000000
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58972A7B: ja 0x58972b86
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972A81: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58972A83: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58972A85: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58972A87: jne 0x58972b86
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972A8D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58972A8F: dec eax
        __asm _emit 0x48
        // 0x58972A90: je 0x58972ab7
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58972A92: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x58972A95: je 0x58972aae
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58972A97: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58972A9A: je 0x58972aa5
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58972A9C: mov dword ptr [ebx + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972AA3: jmp 0x58972abe
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x58972AA5: mov dword ptr [ebx + 0x28], 0x100
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972AAC: jmp 0x58972abe
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58972AAE: mov dword ptr [ebx + 0x28], 0x10
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972AB5: jmp 0x58972abe
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58972AB7: mov dword ptr [ebx + 0x28], 2
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972ABE: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58972AC0: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58972AC4: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58972AC7: add eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1F
        // 0x58972ACA: lea esi, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x58972ACD: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x58972AD0: shl eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x02
        // 0x58972AD3: mov dword ptr [ebx + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x58972AD6: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58972AD9: mov word ptr [ebx + 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x16
        // 0x58972ADD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58972ADF: mov dword ptr [ebx + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x40
        // 0x58972AE2: mov dword ptr [esi], 0x28
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972AE8: mov dword ptr [ebx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x58972AEB: mov dword ptr [ebx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x58972AEE: mov word ptr [ebx + 0x14], 1
        __asm _emit 0x66
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58972AF4: mov dword ptr [ebx + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972AFB: mov dword ptr [ebx + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x58972AFE: call 0x58972c20
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B03: push eax
        __asm _emit 0x50
        // 0x58972B04: call dword ptr [0x5898c30c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58972B0A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58972B0D: mov dword ptr [ebx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58972B10: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58972B12: jne 0x58972b1e
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58972B14: lea edx, [ebx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x44
        // 0x58972B17: mov edi, 0x589ce66c
        __asm _emit 0xBF
        __asm _emit 0x6C
        __asm _emit 0xE6
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58972B1C: jmp 0x58972b98
        __asm _emit 0xEB
        __asm _emit 0x7A
        // 0x58972B1E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58972B20: call 0x58973790
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B25: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58972B27: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58972B29: je 0x58972b44
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58972B2B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58972B2D: call 0x58973780
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B32: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58972B34: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972B36: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58972B38: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58972B3B: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x58972B3D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58972B3F: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58972B42: rep stosb byte ptr es:[edi], al
        __asm _emit 0xF3
        __asm _emit 0xAA
        // 0x58972B44: mov eax, dword ptr [ebx + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B4A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58972B4C: je 0x58972b55
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58972B4E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58972B50: call 0x589738e0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B55: mov eax, dword ptr [ebx + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58972B5D: je 0x58972b66
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58972B5F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58972B61: call 0x58973870
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B66: mov edi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x58972B69: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B6E: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58972B70: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58972B72: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58972B74: call 0x58972bc0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972B79: pop edi
        __asm _emit 0x5F
        // 0x58972B7A: mov dword ptr [ebx + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x34
        // 0x58972B7D: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58972B80: pop esi
        __asm _emit 0x5E
        // 0x58972B81: pop ebp
        __asm _emit 0x5D
        // 0x58972B82: pop ebx
        __asm _emit 0x5B
        // 0x58972B83: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58972B86: lea edx, [ebx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x44
        // 0x58972B89: mov edi, 0x589ce650
        __asm _emit 0xBF
        __asm _emit 0x50
        __asm _emit 0xE6
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58972B8E: jmp 0x58972b98
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58972B90: lea edx, [ebx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x44
        // 0x58972B93: mov edi, 0x589ce610
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0xE6
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58972B98: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58972B9B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972B9D: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58972B9F: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58972BA1: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58972BA3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58972BA5: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58972BA7: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58972BA9: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58972BAC: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58972BAE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58972BB0: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58972BB3: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58972BB5: pop edi
        __asm _emit 0x5F
        // 0x58972BB6: pop esi
        __asm _emit 0x5E
        // 0x58972BB7: pop ebp
        __asm _emit 0x5D
        // 0x58972BB8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972BBA: pop ebx
        __asm _emit 0x5B
        // 0x58972BBB: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
