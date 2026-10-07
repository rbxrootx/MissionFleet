// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 1021 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CBA0 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_5887cba0_segment_00() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 1c4h]
        push edi
        add eax, 58h
        xor edi, edi
        push eax
        mov dword ptr [esi + 80h], edi
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes E8 99 67 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        add ecx, 0f0h
        push ecx
        mov ecx, dword ptr [esi + 260h]
        ; Exact mapped bytes E8 84 67 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1b4h]
        push 5898c922h
        ; Exact mapped bytes E8 F4 50 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1b8h]
        ; Exact mapped bytes E8 F9 BB 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 264h]
        push edi
        ; Exact mapped bytes E8 5D A7 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 268h]
        push edi
        ; Exact mapped bytes E8 51 A7 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 264h]
        add edx, 0d8h
        push edx
        ; Exact mapped bytes E8 3C 67 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 268h]
        add eax, 0ech
        push eax
        ; Exact mapped bytes E8 28 67 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 264h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 268h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 108h]
        mov dword ptr [eax + 50h], edi
        lea ebx, [esi + 1c8h]
        lea ebp, [edi + 0bh]
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5887cca3
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, 5898c922h
        mov edi, 80h
        ; Exact mapped bytes EB 06: jmp 0x5887cc80
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CC80 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5887cba0_segment_01() {
    __asm {
        lea ecx, [edi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887cc9b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887cc9b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887cc80
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887cc9f
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x5887cca0
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 BA: jne 0x5887cc65
        __asm _emit 0x75
        __asm _emit 0xba
        lea edi, [esi + 200h]
        lea ebx, [ebp + 3]
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [edi - 0ch]
        add edx, 0d4h
        push edx
        ; Exact mapped bytes E8 9A 66 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [edi]
        add eax, 0e8h
        push eax
        ; Exact mapped bytes E8 8A 66 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi - 0ch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 C2: jne 0x5887ccb4
        __asm _emit 0x75
        __asm _emit 0xc2
        lea ecx, [esi + 20ch]
        lea edx, [ebx + 9]
        ; Exact mapped bytes EB 03: jmp 0x5887cd00
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CD00 .. +0x2A6 bytes.
extern "C" __declspec(naked) void FUN_5887cba0_segment_02() {
    __asm {
        mov eax, dword ptr [ecx]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5887cd00
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi + 234h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5887cd53
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 5898c922h
        mov edi, 80h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887cd4b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887cd4b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887cd30
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887cd4f
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x5887cd50
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes E8 65 8E 04 00: call 0x588c5bc0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 60h]
        xor edi, edi
        cmp dword ptr [edx + 74h], edi
        ; Exact mapped bytes 0F 86 C6 00 00 00: jbe 0x5887ce2f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 60h]
        mov eax, dword ptr [ebp + 64h]
        sub eax, dword ptr [ebp + 60h]
        mov ebx, dword ptr [esi + 4]
        add ebp, 54h
        sar eax, 2
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887cd8b
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 E7 FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + edi*4]
        add ebx, 19fh
        push ebx
        ; Exact mapped bytes E8 43 65 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 60h]
        mov edx, dword ptr [ebp + 64h]
        sub edx, dword ptr [ebp + 60h]
        mov ebx, dword ptr [esi + 8]
        add ebp, 54h
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x5887cdb8
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 BA FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [ebp + 0ch]
        lea ecx, [eax + ebx + 113h]
        push ecx
        mov ecx, dword ptr [edx + edi*4]
        ; Exact mapped bytes E8 91 65 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 60h]
        mov eax, dword ptr [ebp + 64h]
        sub eax, dword ptr [ebp + 60h]
        add ebp, 54h
        sar eax, 2
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887cde7
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 8B FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + edi*4]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ebp, dword ptr [esi + 60h]
        mov eax, dword ptr [ebp + 64h]
        sub eax, dword ptr [ebp + 60h]
        add ebp, 54h
        sar eax, 2
        cmp edi, eax
        ; Exact mapped bytes 72 05: jb 0x5887ce0e
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 64 FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + edi*4]
        add dword ptr [esp + 10h], 14h
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 60h]
        inc edi
        cmp edi, dword ptr [eax + 74h]
        ; Exact mapped bytes 0F 82 41 FF FF FF: jb 0x5887cd70
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 89 8D 04 00: call 0x588c5bc0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        xor edi, edi
        cmp dword ptr [ecx + 74h], edi
        ; Exact mapped bytes 0F 86 CA 00 00 00: jbe 0x5887cf0f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 64h]
        mov edx, dword ptr [ebp + 64h]
        sub edx, dword ptr [ebp + 60h]
        mov ebx, dword ptr [esi + 4]
        add ebp, 54h
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x5887ce6b
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 07 FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edi*4]
        add ebx, 19fh
        push ebx
        ; Exact mapped bytes E8 63 64 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 64h]
        mov ecx, dword ptr [ebp + 64h]
        sub ecx, dword ptr [ebp + 60h]
        mov ebx, dword ptr [esi + 8]
        add ebp, 54h
        sar ecx, 2
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5887ce98
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 DA FD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + edi*4]
        lea eax, [edx + ebx + 163h]
        push eax
        ; Exact mapped bytes E8 B1 64 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 64h]
        mov edx, dword ptr [ebp + 64h]
        sub edx, dword ptr [ebp + 60h]
        add ebp, 54h
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x5887cec7
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 AB FD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + edi*4]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebp, dword ptr [esi + 64h]
        mov edx, dword ptr [ebp + 64h]
        sub edx, dword ptr [ebp + 60h]
        add ebp, 54h
        sar edx, 2
        cmp edi, edx
        ; Exact mapped bytes 72 05: jb 0x5887ceee
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 84 FD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + edi*4]
        add dword ptr [esp + 10h], 14h
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 64h]
        inc edi
        cmp edi, dword ptr [edx + 74h]
        ; Exact mapped bytes 0F 82 41 FF FF FF: jb 0x5887ce50
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 238h]
        add eax, 2a8h
        push eax
        ; Exact mapped bytes E8 BD 63 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        add ecx, 18bh
        push ecx
        mov ecx, dword ptr [esi + 238h]
        ; Exact mapped bytes E8 28 64 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 6B D9 FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 C2 DA FF FF: call 0x5887aa10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, 186h
        lea edi, [esi + 270h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [edi]
        push ebx
        push 1deh
        ; Exact mapped bytes E8 18 63 08 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        add ebx, 10h
        add edi, 4
        cmp ebx, 226h
        ; Exact mapped bytes 7C DA: jl 0x5887cf60
        __asm _emit 0x7c
        __asm _emit 0xda
        add esi, 244h
        mov edi, 5
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 58 B8 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 F1: jne 0x5887cf91
        __asm _emit 0x75
        __asm _emit 0xf1
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
