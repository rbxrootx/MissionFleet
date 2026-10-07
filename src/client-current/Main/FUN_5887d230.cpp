// Complete Ghidra body ranges for the selected function.
// 6 discontiguous segments; total 2066 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D230 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_00() {
    __asm {
        sub esp, 108h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 104h], eax
        mov eax, dword ptr [esp + 10ch]
        movzx eax, word ptr [eax + 2]
        push ebx
        mov ebx, ecx
        mov ecx, 0ddh
        mov dword ptr [esp + 4], ebx
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 2E: je 0x5887d28e
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, 0deh
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 24: je 0x5887d28e
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, 0dfh
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 1A: je 0x5887d28e
        __asm _emit 0x74
        __asm _emit 0x1a
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 104h]
        xor ecx, esp
        ; Exact mapped bytes E8 55 F9 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 108h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 8]
        mov ecx, dword ptr [ebx + 264h]
        push esi
        push edi
        add edx, 1cdh
        push edx
        ; Exact mapped bytes E8 BB 60 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        mov ecx, dword ptr [ebx + 238h]
        add eax, 2b2h
        push eax
        ; Exact mapped bytes E8 27 60 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        add ecx, 1c2h
        push ecx
        mov ecx, dword ptr [ebx + 238h]
        ; Exact mapped bytes E8 92 60 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        lea esi, [ebx + 1f4h]
        mov edi, 3
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 8]
        mov ecx, dword ptr [esi]
        add edx, 1c9h
        push edx
        ; Exact mapped bytes E8 6F 60 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d2e0
        __asm _emit 0x75
        __asm _emit 0xe7
        push ebp
        mov ebp, ebx
        add ebp, 1c8h
        mov edi, ebp
        mov ebx, 0bh
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5887d346
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, 5898d61ch
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d33e
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d33e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d323
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d342
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d343
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 BB: jne 0x5887d310
        __asm _emit 0x75
        __asm _emit 0xbb
        cmp dword ptr [esp + 120h], ebx
        ; Exact mapped bytes 0F 84 E4 05 00 00: je 0x5887d946
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        mov edi, 18bh
        add esi, 270h
        mov eax, dword ptr [esi]
        lea edx, [ebx + 9]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [esi]
        push edi
        push 208h
        ; Exact mapped bytes E8 03 5F 08 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 14h
        inc ebx
        add esi, 4
        cmp edi, 1b3h
        ; Exact mapped bytes 7C D5: jl 0x5887d371
        __asm _emit 0x7c
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899f418h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp]
        mov ecx, dword ptr [ecx + 6ch]
        add esp, 4
        test ecx, ecx
        ; Exact mapped bytes 74 30: je 0x5887d3e6
        __asm _emit 0x74
        __asm _emit 0x30
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5887d3e6
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, eax
        mov esi, 80h
        mov eax, ecx
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d3de
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d3de
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d3c3
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d3e2
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d3e3
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov ebp, dword ptr [esp + 10h]
        mov eax, dword ptr [ebp + 1cch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5887d424
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, 5898c922h
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d41c
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d41c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d401
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d420
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d421
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f3fch
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 1d0h]
        mov ecx, dword ptr [ecx + 6ch]
        add esp, 4
        test ecx, ecx
        ; Exact mapped bytes 74 38: je 0x5887d473
        __asm _emit 0x74
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x5887d473
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, eax
        mov esi, 80h
        mov eax, ecx
        ; Exact mapped bytes EB 06: jmp 0x5887d450
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D450 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_01() {
    __asm {
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d46b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d46b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d450
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d46f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d470
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f3e0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 1d4h]
        mov ecx, dword ptr [ecx + 6ch]
        add esp, 4
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x5887d4c3
        __asm _emit 0x74
        __asm _emit 0x39
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5887d4c3
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, eax
        mov esi, 80h
        mov eax, ecx
        ; Exact mapped bytes EB 07: jmp 0x5887d4a0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D4A0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_02() {
    __asm {
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d4bb
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d4bb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d4a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d4bf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d4c0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f3c4h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 1d8h]
        mov ecx, dword ptr [ecx + 6ch]
        add esp, 4
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x5887d513
        __asm _emit 0x74
        __asm _emit 0x39
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5887d513
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, eax
        mov esi, 80h
        mov eax, ecx
        ; Exact mapped bytes EB 07: jmp 0x5887d4f0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D4F0 .. +0x4CD bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_03() {
    __asm {
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d50b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d50b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d4f0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d50f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d510
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 1dch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887d553
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 5898c922h
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d54b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d54b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d530
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d54f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d550
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov esi, dword ptr [ebp + 60h]
        xor edi, edi
        cmp dword ptr [esi + 74h], edi
        ; Exact mapped bytes 76 4C: jbe 0x5887d5a9
        __asm _emit 0x76
        __asm _emit 0x4c
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi + 64h]
        sub edx, dword ptr [esi + 60h]
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x5887d572
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 00 F7 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov eax, dword ptr [eax + edi*4]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov esi, dword ptr [ebp + 60h]
        mov ecx, dword ptr [esi + 64h]
        sub ecx, dword ptr [esi + 60h]
        add esi, 54h
        sar ecx, 2
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5887d595
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 DD F6 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf6
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ch]
        mov eax, dword ptr [edx + edi*4]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov esi, dword ptr [ebp + 60h]
        inc edi
        cmp edi, dword ptr [esi + 74h]
        ; Exact mapped bytes 72 B7: jb 0x5887d560
        __asm _emit 0x72
        __asm _emit 0xb7
        push 5899f3b0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 1f0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5887d5f8
        __asm _emit 0x74
        __asm _emit 0x2c
        lea edx, [esp + 14h]
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d5f0
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d5f0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d5d5
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d5f4
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d5f5
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 1f0h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov edx, dword ptr [esp + 11ch]
        movzx eax, word ptr [edx + 2]
        sub eax, 0ddh
        ; Exact mapped bytes 0F 84 C9 02 00 00: je 0x5887d8e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 84 60 01 00 00: je 0x5887d782
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 74 07: je 0x5887d62e
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 17 04 00 00: jmp 0x5887da45
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1e0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x5887d668
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, 5899f39ch
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d660
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d660
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d645
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d664
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d665
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 1e4h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x5887d6a3
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, 5899f384h
        mov esi, 80h
        nop
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d69b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d69b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d680
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d69f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d6a0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 1e8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887d6e3
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 5899f36ch
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d6db
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d6db
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d6c0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d6df
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d6e0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 1ech]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887d723
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 5899f354h
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d71b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d71b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d700
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d71f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d720
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov esi, dword ptr [ebp + 64h]
        xor edi, edi
        cmp dword ptr [esi + 74h], edi
        ; Exact mapped bytes 0F 86 0F 03 00 00: jbe 0x5887da40
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edi + 1]
        mov edx, dword ptr [esi + 64h]
        sub edx, dword ptr [esi + 60h]
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x5887d746
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 2C F5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov eax, dword ptr [eax + edi*4]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov esi, dword ptr [ebp + 64h]
        mov ecx, dword ptr [esi + 64h]
        sub ecx, dword ptr [esi + 60h]
        add esi, 54h
        sar ecx, 2
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5887d768
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 0A F5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ch]
        mov eax, dword ptr [edx + edi*4]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov esi, dword ptr [ebp + 64h]
        add edi, ebx
        cmp edi, dword ptr [esi + 74h]
        ; Exact mapped bytes 72 B7: jb 0x5887d734
        __asm _emit 0x72
        __asm _emit 0xb7
        ; Exact mapped bytes E9 BE 02 00 00: jmp 0x5887da40
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1e0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x5887d7c3
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, 5899f39ch
        mov esi, 80h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d7bb
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d7bb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d7a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d7bf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d7c0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 1e4h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887d803
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 5899f33ch
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d7fb
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d7fb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d7e0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d7ff
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d800
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 1e8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887d843
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 5899f31ch
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d83b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d83b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d820
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d83f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d840
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 1ech]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887d883
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 5899f300h
        mov esi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d87b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d87b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d860
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d87f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d880
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov esi, dword ptr [ebp + 64h]
        xor edi, edi
        cmp dword ptr [esi + 74h], edi
        ; Exact mapped bytes 0F 86 AF 01 00 00: jbe 0x5887da40
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edi + 1]
        mov edx, dword ptr [esi + 64h]
        sub edx, dword ptr [esi + 60h]
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x5887d8a6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 CC F3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov eax, dword ptr [eax + edi*4]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov esi, dword ptr [ebp + 64h]
        mov ecx, dword ptr [esi + 64h]
        sub ecx, dword ptr [esi + 60h]
        add esi, 54h
        sar ecx, 2
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5887d8c8
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 AA F3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ch]
        mov eax, dword ptr [edx + edi*4]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov esi, dword ptr [ebp + 64h]
        add edi, ebx
        cmp edi, dword ptr [esi + 74h]
        ; Exact mapped bytes 72 B7: jb 0x5887d894
        __asm _emit 0x72
        __asm _emit 0xb7
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x5887da40
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 64h]
        xor edi, edi
        cmp dword ptr [esi + 74h], edi
        ; Exact mapped bytes 0F 86 50 01 00 00: jbe 0x5887da40
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        sub eax, dword ptr [esi + 60h]
        sar eax, 2
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887d902
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 70 F3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        mov eax, dword ptr [ecx + edi*4]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [ebp + 64h]
        mov eax, dword ptr [esi + 64h]
        sub eax, dword ptr [esi + 60h]
        add esi, 54h
        sar eax, 2
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887d929
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 49 F3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        mov eax, dword ptr [ecx + edi*4]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [ebp + 64h]
        inc edi
        cmp edi, dword ptr [esi + 74h]
        ; Exact mapped bytes 72 AF: jb 0x5887d8f0
        __asm _emit 0x72
        __asm _emit 0xaf
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x5887da40
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899f2d8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp]
        mov ecx, dword ptr [ecx + 6ch]
        add esp, 4
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x5887d993
        __asm _emit 0x74
        __asm _emit 0x33
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x5887d993
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, eax
        mov esi, 80h
        mov eax, ecx
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d98b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d98b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d970
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d98f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d990
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f2b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [esp + 14h]
        mov ecx, dword ptr [ebx + 1d0h]
        mov ecx, dword ptr [ecx + 6ch]
        add esp, 4
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x5887d9e3
        __asm _emit 0x74
        __asm _emit 0x35
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5887d9e3
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, eax
        mov esi, 80h
        mov eax, ecx
        ; Exact mapped bytes EB 03: jmp 0x5887d9c0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D9C0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_04() {
    __asm {
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887d9db
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887d9db
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887d9c0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d9df
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887d9e0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 5899f288h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [ebx + 1d4h]
        mov ecx, dword ptr [ecx + 6ch]
        add esp, 4
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x5887da33
        __asm _emit 0x74
        __asm _emit 0x39
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5887da33
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, eax
        mov esi, 80h
        mov eax, ecx
        ; Exact mapped bytes EB 07: jmp 0x5887da10
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DA10 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_05() {
    __asm {
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887da2b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887da2b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887da10
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887da2f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5887da30
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        push 0
        push 0
        push 1
        mov ecx, ebx
        ; Exact mapped bytes E8 70 CE FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov ecx, dword ptr [esp + 114h]
        pop ebp
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 83 F1 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 108h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
