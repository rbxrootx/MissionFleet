// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885CACC .. +0x2F4 bytes.
extern "C" __declspec(naked) void FUN_5885cacc() {
    __asm {
        // 0x5885CACC: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885CACE: push ebp
        __asm _emit 0x55
        // 0x5885CACF: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885CAD1: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x5885CAD4: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CAD7: push ebx
        __asm _emit 0x53
        // 0x5885CAD8: push esi
        __asm _emit 0x56
        // 0x5885CAD9: mov esi, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885CADC: push edi
        __asm _emit 0x57
        // 0x5885CADD: call 0x58861412
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CAE2: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885CAE4: je 0x5885cd17
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CAEA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CAEC: je 0x5885cb34
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5885CAEE: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x5885CAF1: jl 0x5885caf8
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x5885CAF3: cmp esi, 0x24
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x24
        // 0x5885CAF6: jle 0x5885cb34
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5885CAF8: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885CAFB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885CAFD: push eax
        __asm _emit 0x50
        // 0x5885CAFE: push ebx
        __asm _emit 0x53
        // 0x5885CAFF: push ebx
        __asm _emit 0x53
        // 0x5885CB00: push ebx
        __asm _emit 0x53
        // 0x5885CB01: push ebx
        __asm _emit 0x53
        // 0x5885CB02: push ebx
        __asm _emit 0x53
        // 0x5885CB03: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885CB07: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CB0E: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x44
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CB13: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885CB16: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885CB19: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885CB1B: je 0x5885cd28
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CB21: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885CB24: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885CB27: jne 0x5885cd28
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CB2D: mov byte ptr [ecx], bl
        __asm _emit 0x88
        __asm _emit 0x19
        // 0x5885CB2F: jmp 0x5885cd28
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CB34: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885CB37: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CB3A: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5885CB3D: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885CB40: mov eax, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885CB43: movlpd qword ptr [ebp - 0x28], xmm0
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x5885CB48: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x5885CB4B: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CB50: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885CB53: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CB55: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CB58: cmp byte ptr [edi + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5885CB5C: jne 0x5885cb65
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5885CB5E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885CB60: call 0x58855ea0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x93
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CB65: add edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0C
        // 0x5885CB68: jmp 0x5885cb77
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5885CB6A: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CB6D: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CB72: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CB74: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CB77: push edi
        __asm _emit 0x57
        // 0x5885CB78: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x5885CB7B: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885CB7D: push eax
        __asm _emit 0x50
        // 0x5885CB7E: call 0x5885761b
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xAA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CB83: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885CB86: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885CB88: jne 0x5885cb6a
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5885CB8A: movzx eax, byte ptr [ebp + 0x30]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0x30
        // 0x5885CB8E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885CB90: or ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x02
        // 0x5885CB93: cmp bl, 0x2d
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x2D
        // 0x5885CB96: cmovne ecx, eax
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x5885CB99: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885CB9C: je 0x5885cba3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885CB9E: cmp bl, 0x2b
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x2B
        // 0x5885CBA1: jne 0x5885cbb0
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5885CBA3: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CBA6: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CBAB: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CBAD: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CBB0: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5885CBB2: pop edi
        __asm _emit 0x5F
        // 0x5885CBB3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CBB5: je 0x5885cbbb
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885CBB7: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5885CBB9: jne 0x5885cc2f
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x5885CBBB: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CBBD: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885CBBF: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885CBC1: ja 0x5885cbcb
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CBC3: movsx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC3
        // 0x5885CBC6: add eax, -0x30
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xD0
        // 0x5885CBC9: jmp 0x5885cbe9
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5885CBCB: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CBCD: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885CBCF: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885CBD1: ja 0x5885cbdb
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CBD3: movsx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC3
        // 0x5885CBD6: add eax, -0x57
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xA9
        // 0x5885CBD9: jmp 0x5885cbe9
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5885CBDB: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CBDD: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885CBDF: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885CBE1: ja 0x5885cc25
        __asm _emit 0x77
        __asm _emit 0x42
        // 0x5885CBE3: movsx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC3
        // 0x5885CBE6: add eax, -0x37
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xC9
        // 0x5885CBE9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885CBEB: jne 0x5885cc25
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5885CBED: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CBF0: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CBF5: mov byte ptr [ebp - 0x10], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885CBF8: cmp al, 0x78
        __asm _emit 0x3C
        __asm _emit 0x78
        // 0x5885CBFA: je 0x5885cc0f
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5885CBFC: cmp al, 0x58
        __asm _emit 0x3C
        __asm _emit 0x58
        // 0x5885CBFE: je 0x5885cc0f
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885CC00: push dword ptr [ebp - 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5885CC03: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CC06: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CC0B: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885CC0D: jmp 0x5885cc27
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x5885CC0F: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CC12: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CC17: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CC19: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CC1B: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CC1E: cmovne edi, esi
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xFE
        // 0x5885CC21: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5885CC23: jmp 0x5885cc2f
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5885CC25: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5885CC27: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CC29: pop eax
        __asm _emit 0x58
        // 0x5885CC2A: cmovne eax, esi
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xC6
        // 0x5885CC2D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885CC2F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885CC31: cdq
        __asm _emit 0x99
        // 0x5885CC32: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5885CC34: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5885CC37: push ecx
        __asm _emit 0x51
        // 0x5885CC38: push eax
        __asm _emit 0x50
        // 0x5885CC39: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5885CC3B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5885CC3D: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885CC40: call 0x58831ba0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x4F
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885CC45: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885CC48: mov edi, dword ptr [ebp - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xDC
        // 0x5885CC4B: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885CC4E: mov dword ptr [ebp - 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5885CC51: mov dword ptr [ebp - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885CC54: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CC56: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885CC58: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885CC5A: ja 0x5885cc64
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CC5C: movsx ebx, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xDB
        // 0x5885CC5F: add ebx, -0x30
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0xD0
        // 0x5885CC62: jmp 0x5885cc87
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5885CC64: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CC66: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885CC68: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885CC6A: ja 0x5885cc74
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CC6C: movsx ebx, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xDB
        // 0x5885CC6F: add ebx, -0x57
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0xA9
        // 0x5885CC72: jmp 0x5885cc87
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5885CC74: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885CC76: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885CC78: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885CC7A: ja 0x5885cc84
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885CC7C: movsx ebx, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xDB
        // 0x5885CC7F: add ebx, -0x37
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0xC9
        // 0x5885CC82: jmp 0x5885cc87
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885CC84: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x5885CC87: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x5885CC89: jae 0x5885ccf7
        __asm _emit 0x73
        __asm _emit 0x6C
        // 0x5885CC8B: push edi
        __asm _emit 0x57
        // 0x5885CC8C: push ecx
        __asm _emit 0x51
        // 0x5885CC8D: push dword ptr [ebp - 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x5885CC90: push dword ptr [ebp - 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5885CC93: call 0x58831b50
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x4E
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885CC98: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885CC9A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885CC9C: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x5885CC9E: mov dword ptr [ebp - 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xDC
        // 0x5885CCA1: adc eax, edx
        __asm _emit 0x13
        __asm _emit 0xC2
        // 0x5885CCA3: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885CCA6: cmp edi, dword ptr [ebp - 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0xE4
        // 0x5885CCA9: jb 0x5885ccbd
        __asm _emit 0x72
        __asm _emit 0x12
        // 0x5885CCAB: ja 0x5885ccb8
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x5885CCAD: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885CCB0: cmp eax, dword ptr [ebp - 0x20]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885CCB3: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885CCB6: jbe 0x5885ccbd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5885CCB8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885CCBA: inc ecx
        __asm _emit 0x41
        // 0x5885CCBB: jmp 0x5885ccbf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885CCBD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885CCBF: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5885CCC1: ja 0x5885cccf
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x5885CCC3: jb 0x5885ccca
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5885CCC5: cmp ebx, dword ptr [ebp - 0x24]
        __asm _emit 0x3B
        __asm _emit 0x5D
        __asm _emit 0xDC
        // 0x5885CCC8: jae 0x5885cccf
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5885CCCA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885CCCC: inc eax
        __asm _emit 0x40
        // 0x5885CCCD: jmp 0x5885ccd1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885CCCF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885CCD1: mov edi, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF0
        // 0x5885CCD4: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x5885CCD6: shl eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x02
        // 0x5885CCD9: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CCDC: or eax, 8
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x08
        // 0x5885CCDF: mov dword ptr [ebp - 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xF4
        // 0x5885CCE2: or dword ptr [ebp - 8], eax
        __asm _emit 0x09
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885CCE5: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CCEA: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885CCED: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x5885CCEF: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5885CCF2: jmp 0x5885cc54
        __asm _emit 0xE9
        __asm _emit 0x5D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CCF7: push dword ptr [ebp - 4]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885CCFA: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CCFD: call 0x5886132b
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CD02: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885CD05: test al, 8
        __asm _emit 0xA8
        __asm _emit 0x08
        // 0x5885CD07: jne 0x5885cd31
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5885CD09: push dword ptr [ebp - 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5885CD0C: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885CD0F: push dword ptr [ebp - 0x30]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x5885CD12: call 0x58860d5f
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CD17: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885CD1A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885CD1C: je 0x5885cd28
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885CD1E: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885CD21: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885CD24: jne 0x5885cd28
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885CD26: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5885CD28: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885CD2A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885CD2C: jmp 0x5885cdbb
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CD31: mov ebx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xF4
        // 0x5885CD34: push edi
        __asm _emit 0x57
        // 0x5885CD35: push ebx
        __asm _emit 0x53
        // 0x5885CD36: push eax
        __asm _emit 0x50
        // 0x5885CD37: call 0x58856abc
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x9D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CD3C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885CD3F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885CD41: je 0x5885cd99
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x5885CD43: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885CD46: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885CD4A: mov dword ptr [eax + 0x18], 0x22
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CD51: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885CD54: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885CD56: jne 0x5885cd60
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885CD58: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x5885CD5B: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5885CD5E: jmp 0x5885cda6
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x5885CD60: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5885CD62: je 0x5885cd7e
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5885CD64: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885CD67: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885CD69: je 0x5885cd75
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885CD6B: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885CD6E: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885CD71: jne 0x5885cd75
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885CD73: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5885CD75: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885CD77: mov edx, 0x80000000
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5885CD7C: jmp 0x5885cdbb
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x5885CD7E: mov edx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x5885CD81: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885CD83: je 0x5885cd8f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885CD85: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885CD88: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885CD8B: jne 0x5885cd8f
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885CD8D: mov byte ptr [edx], cl
        __asm _emit 0x88
        __asm _emit 0x0A
        // 0x5885CD8F: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885CD92: mov edx, 0x7fffffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5885CD97: jmp 0x5885cdbb
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x5885CD99: test byte ptr [ebp - 8], 2
        __asm _emit 0xF6
        __asm _emit 0x45
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5885CD9D: je 0x5885cda6
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5885CD9F: neg ebx
        __asm _emit 0xF7
        __asm _emit 0xDB
        // 0x5885CDA1: adc edi, 0
        __asm _emit 0x83
        __asm _emit 0xD7
        __asm _emit 0x00
        // 0x5885CDA4: neg edi
        __asm _emit 0xF7
        __asm _emit 0xDF
        // 0x5885CDA6: mov eax, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5885CDA9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885CDAB: je 0x5885cdb7
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885CDAD: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885CDB0: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885CDB3: jne 0x5885cdb7
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885CDB5: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5885CDB7: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885CDB9: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5885CDBB: pop edi
        __asm _emit 0x5F
        // 0x5885CDBC: pop esi
        __asm _emit 0x5E
        // 0x5885CDBD: pop ebx
        __asm _emit 0x5B
        // 0x5885CDBE: leave
        __asm _emit 0xC9
        // 0x5885CDBF: ret
        __asm _emit 0xC3
    }
}
