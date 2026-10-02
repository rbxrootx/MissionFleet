// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885BF85 .. +0x46D bytes.
extern "C" __declspec(naked) void FUN_5885bf85() {
    __asm {
        // 0x5885BF85: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885BF87: push ebp
        __asm _emit 0x55
        // 0x5885BF88: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885BF8A: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x5885BF8D: push ebx
        __asm _emit 0x53
        // 0x5885BF8E: push esi
        __asm _emit 0x56
        // 0x5885BF8F: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885BF92: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BF94: push edi
        __asm _emit 0x57
        // 0x5885BF95: call 0x58861412
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BF9A: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885BF9C: je 0x5885c1ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFA2: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5885BFA5: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885BFA8: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885BFAB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BFAD: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885BFB0: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFB5: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885BFB8: lea ecx, [ebp - 7]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BFBB: mov dword ptr [ebp - 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885BFBE: lea ecx, [ebp - 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5885BFC1: mov dword ptr [ebp - 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5885BFC4: mov dword ptr [ebp - 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xDC
        // 0x5885BFC7: jmp 0x5885bfd0
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5885BFC9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885BFCB: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFD0: push edi
        __asm _emit 0x57
        // 0x5885BFD1: mov byte ptr [ebp - 7], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885BFD4: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5885BFD7: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885BFD9: push eax
        __asm _emit 0x50
        // 0x5885BFDA: call 0x5885761b
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xB6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BFDF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885BFE2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885BFE4: jne 0x5885bfc9
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x5885BFE6: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885BFE9: mov cl, byte ptr [ebp - 7]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885BFEC: add edx, 0x308
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BFF2: cmp cl, 0x2d
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x2D
        // 0x5885BFF5: mov dword ptr [ebp - 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x5885BFF8: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5885BFFB: mov byte ptr [edx], al
        __asm _emit 0x88
        __asm _emit 0x02
        // 0x5885BFFD: je 0x5885c004
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885BFFF: cmp cl, 0x2b
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x2B
        // 0x5885C002: jne 0x5885c010
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885C004: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C006: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C00B: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C00D: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C010: cmp cl, 0x49
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x49
        // 0x5885C013: je 0x5885c3e0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C019: cmp cl, 0x69
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x69
        // 0x5885C01C: je 0x5885c3e0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C022: cmp cl, 0x4e
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x4E
        // 0x5885C025: je 0x5885c3c8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C02B: cmp cl, 0x6e
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x6E
        // 0x5885C02E: je 0x5885c3c8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C034: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C036: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C038: inc eax
        __asm _emit 0x40
        // 0x5885C039: mov byte ptr [ebp - 1], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFF
        // 0x5885C03C: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885C03F: jne 0x5885c087
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x5885C041: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5885C044: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C046: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5885C049: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885C04C: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C051: mov byte ptr [ebp - 0x14], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885C054: cmp al, 0x78
        __asm _emit 0x3C
        __asm _emit 0x78
        // 0x5885C056: je 0x5885c06b
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5885C058: cmp al, 0x58
        __asm _emit 0x3C
        __asm _emit 0x58
        // 0x5885C05A: je 0x5885c06b
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885C05C: push dword ptr [ebp - 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x5885C05F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C061: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C066: mov cl, byte ptr [ebp - 7]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C069: jmp 0x5885c084
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x5885C06B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C06D: mov byte ptr [ebp - 1], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5885C071: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C076: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C078: mov dword ptr [ebp - 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xE0
        // 0x5885C07B: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885C07E: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C081: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885C084: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C086: inc eax
        __asm _emit 0x40
        // 0x5885C087: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885C08A: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x5885C08D: mov dword ptr [ebp - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xF0
        // 0x5885C090: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5885C093: mov byte ptr [ebp - 2], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFE
        // 0x5885C096: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885C099: jne 0x5885c0af
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885C09B: mov byte ptr [ebp - 2], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFE
        // 0x5885C09E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C0A0: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C0A5: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C0A7: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C0AA: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885C0AD: je 0x5885c09e
        __asm _emit 0x74
        __asm _emit 0xEF
        // 0x5885C0AF: cmp byte ptr [ebp - 1], bl
        __asm _emit 0x38
        __asm _emit 0x5D
        __asm _emit 0xFF
        // 0x5885C0B2: mov edi, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885C0B5: mov ebx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xE8
        // 0x5885C0B8: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5885C0BA: pop edx
        __asm _emit 0x5A
        // 0x5885C0BB: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x5885C0BD: pop eax
        __asm _emit 0x58
        // 0x5885C0BE: cmovne edx, eax
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x5885C0C1: mov dword ptr [ebp - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x5885C0C4: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C0C6: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885C0C8: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885C0CA: ja 0x5885c0d4
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885C0CC: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C0CF: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5885C0D2: jmp 0x5885c0f7
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5885C0D4: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C0D6: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885C0D8: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C0DA: ja 0x5885c0e4
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885C0DC: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C0DF: sub eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x57
        // 0x5885C0E2: jmp 0x5885c0f7
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5885C0E4: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C0E6: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885C0E8: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C0EA: ja 0x5885c0f4
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885C0EC: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C0EF: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5885C0F2: jmp 0x5885c0f7
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885C0F4: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885C0F7: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5885C0F9: ja 0x5885c11a
        __asm _emit 0x77
        __asm _emit 0x1F
        // 0x5885C0FB: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885C0FF: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5885C101: je 0x5885c106
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885C103: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C105: inc edi
        __asm _emit 0x47
        // 0x5885C106: inc dword ptr [ebp - 0x10]
        __asm _emit 0xFF
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885C109: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C10B: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C110: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x5885C113: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C115: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C118: jmp 0x5885c0c4
        __asm _emit 0xEB
        __asm _emit 0xAA
        // 0x5885C11A: mov dword ptr [ebp - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885C11D: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885C120: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885C122: pop ebx
        __asm _emit 0x5B
        // 0x5885C123: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5885C125: mov eax, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C12B: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5885C12D: cmp cl, byte ptr [eax]
        __asm _emit 0x3A
        __asm _emit 0x08
        // 0x5885C12F: jne 0x5885c1cf
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C135: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C137: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C13C: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5885C13F: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C141: mov edi, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885C144: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x5885C147: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C14A: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5885C14C: jne 0x5885c172
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5885C14E: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885C151: jne 0x5885c172
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5885C153: mov edi, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF0
        // 0x5885C156: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885C15A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C15C: dec edi
        __asm _emit 0x4F
        // 0x5885C15D: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C162: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C164: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C167: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x5885C16A: je 0x5885c15a
        __asm _emit 0x74
        __asm _emit 0xEE
        // 0x5885C16C: mov dword ptr [ebp - 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF0
        // 0x5885C16F: mov edi, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885C172: mov ebx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xEC
        // 0x5885C175: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x5885C177: cmp al, 0x30
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x5885C179: jl 0x5885c188
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x5885C17B: cmp dl, 0x39
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x39
        // 0x5885C17E: jg 0x5885c188
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5885C180: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C183: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5885C186: jmp 0x5885c1ab
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5885C188: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C18A: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885C18C: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C18E: ja 0x5885c198
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885C190: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C193: sub eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x57
        // 0x5885C196: jmp 0x5885c1ab
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5885C198: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C19A: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885C19C: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C19E: ja 0x5885c1a8
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885C1A0: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C1A3: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5885C1A6: jmp 0x5885c1ab
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885C1A8: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885C1AB: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5885C1AD: ja 0x5885c1cb
        __asm _emit 0x77
        __asm _emit 0x1C
        // 0x5885C1AF: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885C1B3: cmp edi, dword ptr [ebp - 0x18]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0xE8
        // 0x5885C1B6: je 0x5885c1bb
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885C1B8: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C1BA: inc edi
        __asm _emit 0x47
        // 0x5885C1BB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C1BD: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C1C2: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C1C4: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C1C7: mov dl, cl
        __asm _emit 0x8A
        __asm _emit 0xD1
        // 0x5885C1C9: jmp 0x5885c177
        __asm _emit 0xEB
        __asm _emit 0xAC
        // 0x5885C1CB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C1CD: jmp 0x5885c1d2
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885C1CF: mov edi, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885C1D2: cmp byte ptr [ebp - 2], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFE
        __asm _emit 0x00
        // 0x5885C1D6: jne 0x5885c1f6
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5885C1D8: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5885C1DB: call 0x5885dc39
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C1E0: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885C1E2: je 0x5885c1ee
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885C1E4: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885C1E8: jne 0x5885c36d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C1EE: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885C1F0: pop eax
        __asm _emit 0x58
        // 0x5885C1F1: pop edi
        __asm _emit 0x5F
        // 0x5885C1F2: pop esi
        __asm _emit 0x5E
        // 0x5885C1F3: pop ebx
        __asm _emit 0x5B
        // 0x5885C1F4: leave
        __asm _emit 0xC9
        // 0x5885C1F5: ret
        __asm _emit 0xC3
        // 0x5885C1F6: push dword ptr [ebp - 7]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5885C1F9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C1FB: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C200: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5885C203: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885C206: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885C209: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C20B: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885C20E: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C213: mov byte ptr [ebp - 7], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885C216: mov cl, bl
        __asm _emit 0x8A
        __asm _emit 0xCB
        // 0x5885C218: cmp al, 0x45
        __asm _emit 0x3C
        __asm _emit 0x45
        // 0x5885C21A: je 0x5885c22d
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5885C21C: cmp al, 0x50
        __asm _emit 0x3C
        __asm _emit 0x50
        // 0x5885C21E: je 0x5885c228
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C220: cmp al, 0x65
        __asm _emit 0x3C
        __asm _emit 0x65
        // 0x5885C222: je 0x5885c22d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5885C224: cmp al, 0x70
        __asm _emit 0x3C
        __asm _emit 0x70
        // 0x5885C226: jne 0x5885c233
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5885C228: mov cl, byte ptr [ebp - 1]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5885C22B: jmp 0x5885c233
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5885C22D: mov cl, byte ptr [ebp - 1]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5885C230: xor cl, 1
        __asm _emit 0x80
        __asm _emit 0xF1
        __asm _emit 0x01
        // 0x5885C233: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5885C235: je 0x5885c34b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C23B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C23D: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C242: mov byte ptr [ebp - 3], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xFD
        // 0x5885C245: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C247: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C24A: cmp al, 0x2b
        __asm _emit 0x3C
        __asm _emit 0x2B
        // 0x5885C24C: je 0x5885c256
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C24E: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x5885C250: mov ch, al
        __asm _emit 0x8A
        __asm _emit 0xE8
        // 0x5885C252: cmp al, 0x2d
        __asm _emit 0x3C
        __asm _emit 0x2D
        // 0x5885C254: jne 0x5885c266
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885C256: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C258: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C25D: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C25F: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C262: mov dl, cl
        __asm _emit 0x8A
        __asm _emit 0xD1
        // 0x5885C264: mov ch, cl
        __asm _emit 0x8A
        __asm _emit 0xE9
        // 0x5885C266: mov byte ptr [ebp - 2], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFE
        // 0x5885C269: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x30
        // 0x5885C26C: jne 0x5885c28a
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5885C26E: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885C272: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C274: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C279: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C27B: mov ch, cl
        __asm _emit 0x8A
        __asm _emit 0xE9
        // 0x5885C27D: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C280: cmp ch, 0x30
        __asm _emit 0x80
        __asm _emit 0xFD
        __asm _emit 0x30
        // 0x5885C283: je 0x5885c272
        __asm _emit 0x74
        __asm _emit 0xED
        // 0x5885C285: mov dl, cl
        __asm _emit 0x8A
        __asm _emit 0xD1
        // 0x5885C287: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x30
        // 0x5885C28A: jl 0x5885c299
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x5885C28C: cmp ch, 0x39
        __asm _emit 0x80
        __asm _emit 0xFD
        __asm _emit 0x39
        // 0x5885C28F: jg 0x5885c299
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5885C291: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C294: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5885C297: jmp 0x5885c2b7
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5885C299: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C29B: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885C29D: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C29F: ja 0x5885c2a9
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885C2A1: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C2A4: sub eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x57
        // 0x5885C2A7: jmp 0x5885c2b7
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5885C2A9: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C2AB: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885C2AD: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C2AF: ja 0x5885c2e2
        __asm _emit 0x77
        __asm _emit 0x31
        // 0x5885C2B1: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C2B4: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5885C2B7: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5885C2BA: jae 0x5885c2e2
        __asm _emit 0x73
        __asm _emit 0x26
        // 0x5885C2BC: imul ebx, ebx, 0xa
        __asm _emit 0x6B
        __asm _emit 0xDB
        __asm _emit 0x0A
        // 0x5885C2BF: mov byte ptr [ebp - 2], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885C2C3: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x5885C2C5: cmp ebx, 0x1450
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C2CB: jg 0x5885c2dd
        __asm _emit 0x7F
        __asm _emit 0x10
        // 0x5885C2CD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C2CF: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C2D4: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C2D6: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C2D9: mov ch, cl
        __asm _emit 0x8A
        __asm _emit 0xE9
        // 0x5885C2DB: jmp 0x5885c285
        __asm _emit 0xEB
        __asm _emit 0xA8
        // 0x5885C2DD: mov ebx, 0x1451
        __asm _emit 0xBB
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C2E2: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C2E4: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885C2E6: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885C2E8: ja 0x5885c2f2
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885C2EA: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C2ED: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5885C2F0: jmp 0x5885c310
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5885C2F2: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C2F4: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885C2F6: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C2F8: ja 0x5885c302
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5885C2FA: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C2FD: sub eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x57
        // 0x5885C300: jmp 0x5885c310
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5885C302: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C304: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885C306: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C308: ja 0x5885c323
        __asm _emit 0x77
        __asm _emit 0x19
        // 0x5885C30A: movsx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC1
        // 0x5885C30D: sub eax, 0x37
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x37
        // 0x5885C310: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5885C313: jae 0x5885c323
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x5885C315: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C317: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C31C: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C31E: mov byte ptr [ebp - 7], cl
        __asm _emit 0x88
        __asm _emit 0x4D
        __asm _emit 0xF9
        // 0x5885C321: jmp 0x5885c2e2
        __asm _emit 0xEB
        __asm _emit 0xBF
        // 0x5885C323: cmp byte ptr [ebp - 3], 0x2d
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFD
        __asm _emit 0x2D
        // 0x5885C327: jne 0x5885c32b
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885C329: neg ebx
        __asm _emit 0xF7
        __asm _emit 0xDB
        // 0x5885C32B: cmp byte ptr [ebp - 2], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFE
        __asm _emit 0x00
        // 0x5885C32F: jne 0x5885c34b
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5885C331: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5885C334: call 0x5885dc39
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C339: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885C33B: je 0x5885c1ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C341: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C343: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C348: mov byte ptr [ebp - 7], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885C34B: push dword ptr [ebp - 7]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5885C34E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C350: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C355: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885C358: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5885C35B: jmp 0x5885c369
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5885C35D: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x5885C360: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C362: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x5885C365: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885C367: jne 0x5885c374
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5885C369: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x5885C36B: jne 0x5885c35d
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5885C36D: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5885C36F: jmp 0x5885c1f0
        __asm _emit 0xE9
        __asm _emit 0x7C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C374: cmp ebx, 0x1450
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C37A: jg 0x5885c3c1
        __asm _emit 0x7F
        __asm _emit 0x45
        // 0x5885C37C: cmp ebx, 0xffffebb0
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xB0
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C382: jl 0x5885c3ba
        __asm _emit 0x7C
        __asm _emit 0x36
        // 0x5885C384: mov dl, byte ptr [ebp - 1]
        __asm _emit 0x8A
        __asm _emit 0x55
        __asm _emit 0xFF
        // 0x5885C387: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885C389: pop edi
        __asm _emit 0x5F
        // 0x5885C38A: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5885C38C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885C38E: pop eax
        __asm _emit 0x58
        // 0x5885C38F: cmovne eax, edi
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xC7
        // 0x5885C392: imul eax, dword ptr [ebp - 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885C396: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x5885C398: cmp ebx, 0x1450
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C39E: jg 0x5885c3c1
        __asm _emit 0x7F
        __asm _emit 0x21
        // 0x5885C3A0: cmp ebx, 0xffffebb0
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xB0
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C3A6: jl 0x5885c3ba
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x5885C3A8: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C3AB: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5885C3AD: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x5885C3AF: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885C3B2: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x5885C3B5: jmp 0x5885c1f1
        __asm _emit 0xE9
        __asm _emit 0x37
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C3BA: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885C3BC: jmp 0x5885c1f0
        __asm _emit 0xE9
        __asm _emit 0x2F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C3C1: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5885C3C3: jmp 0x5885c1f0
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C3C8: push dword ptr [ebp - 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885C3CB: lea eax, [ebp - 7]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885C3CE: push dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5885C3D1: push esi
        __asm _emit 0x56
        // 0x5885C3D2: push eax
        __asm _emit 0x50
        // 0x5885C3D3: call 0x5885c670
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C3D8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885C3DB: jmp 0x5885c1f1
        __asm _emit 0xE9
        __asm _emit 0x11
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C3E0: push dword ptr [ebp - 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885C3E3: lea eax, [ebp - 7]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF9
        // 0x5885C3E6: push dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5885C3E9: push esi
        __asm _emit 0x56
        // 0x5885C3EA: push eax
        __asm _emit 0x50
        // 0x5885C3EB: call 0x5885c4ad
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C3F0: jmp 0x5885c3d8
        __asm _emit 0xEB
        __asm _emit 0xE6
    }
}
