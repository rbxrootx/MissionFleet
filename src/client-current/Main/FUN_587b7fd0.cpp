// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7FD0 .. +0x13B bytes.
// Source symbol alias: FUN_587b7fd0.
extern "C" __declspec(naked) void FUN_587b7fd0() {
    __asm {
        // 0x587B7FD0: sub esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7FD6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B7FDB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B7FDD: mov dword ptr [esp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7FE4: push ebx
        __asm _emit 0x53
        // 0x587B7FE5: mov ebx, dword ptr [esp + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7FEC: push ebp
        __asm _emit 0x55
        // 0x587B7FED: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587B7FEF: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587B7FF1: je 0x587b80f2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7FF7: push esi
        __asm _emit 0x56
        // 0x587B7FF8: push edi
        __asm _emit 0x57
        // 0x587B7FF9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B7FFB: lea esi, [ebp + 0x130]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B8001: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B8003: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B8005: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587B8007: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x587B8009: jne 0x587b8025
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587B800B: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B800D: je 0x587b8021
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587B800F: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587B8012: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x587B8015: jne 0x587b8025
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B8017: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587B801A: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x587B801D: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B801F: jne 0x587b8005
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587B8021: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B8023: jmp 0x587b802a
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587B8025: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587B8027: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x587B802A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B802C: je 0x587b803c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587B802E: inc edi
        __asm _emit 0x47
        // 0x587B802F: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x587B8032: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x587B8035: jl 0x587b8001
        __asm _emit 0x7C
        __asm _emit 0xCA
        // 0x587B8037: jmp 0x587b80f0
        __asm _emit 0xE9
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B803C: push 0x48
        __asm _emit 0x6A
        __asm _emit 0x48
        // 0x587B803E: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B8042: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B8044: push eax
        __asm _emit 0x50
        // 0x587B8045: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x4B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B804A: push 0x49
        __asm _emit 0x6A
        __asm _emit 0x49
        // 0x587B804C: lea ecx, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587B8050: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B8052: push ecx
        __asm _emit 0x51
        // 0x587B8053: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x4B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B8058: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B805C: mov edx, 0x58a0b450
        __asm _emit 0xBA
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B8061: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B8063: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587B8066: mov esi, 0x18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B806B: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B806D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587B8070: lea ecx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587B8076: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B8078: je 0x587b808b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587B807A: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587B807D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587B807F: je 0x587b808b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587B8081: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587B8083: inc eax
        __asm _emit 0x40
        // 0x587B8084: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587B8087: jne 0x587b8070
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587B8089: jmp 0x587b808f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B808B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B808D: jne 0x587b8090
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587B808F: dec eax
        __asm _emit 0x48
        // 0x587B8090: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B8093: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B8097: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x587B8099: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B809B: mov esi, 0x18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B80A0: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B80A2: lea ecx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587B80A8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B80AA: je 0x587b80bd
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587B80AC: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587B80AF: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587B80B1: je 0x587b80bd
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587B80B3: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587B80B5: inc eax
        __asm _emit 0x40
        // 0x587B80B6: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587B80B9: jne 0x587b80a2
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587B80BB: jmp 0x587b80c1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B80BD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B80BF: jne 0x587b80c2
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587B80C1: dec eax
        __asm _emit 0x48
        // 0x587B80C2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B80C4: push 0x49
        __asm _emit 0x6A
        __asm _emit 0x49
        // 0x587B80C6: lea edx, [esp + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587B80CA: push edx
        __asm _emit 0x52
        // 0x587B80CB: push 0x50000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587B80D0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B80D3: mov ecx, 0x12
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B80D8: lea esi, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B80DC: lea edi, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587B80E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B80E2: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B80E4: push 0x8001b112
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B80E9: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587B80EB: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x8B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B80F0: pop edi
        __asm _emit 0x5F
        // 0x587B80F1: pop esi
        __asm _emit 0x5E
        // 0x587B80F2: mov ecx, dword ptr [esp + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B80F9: pop ebp
        __asm _emit 0x5D
        // 0x587B80FA: pop ebx
        __asm _emit 0x5B
        // 0x587B80FB: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587B80FD: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x4A
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B8102: add esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B8108: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
