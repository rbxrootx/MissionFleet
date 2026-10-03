// Complete Ghidra body ranges for the selected function.
// 40 discontiguous segments; total 5933 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850A70 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_00() {
    __asm {
        sub esp, 24h
        ; Exact mapped bytes 0F BF 44 24 28: movsx eax, word ptr [esp + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes 8B 35 98 45 A2 58: mov esi, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebp, ecx
        mov ecx, dword ptr [esi + 0db0h]
        push edi
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 30h], ecx
        mov edi, 1
        cmp eax, 0eh
        ; Exact mapped bytes 0F 87 ED 16 00 00: ja 0x5885218d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xed
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 68 22 85 58: jmp dword ptr [eax*4 + 0x58852268]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x85
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 214h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        lea ebx, [ebp + 214h]
        test cl, 1
        ; Exact mapped bytes 75 14: jne 0x58850ad0
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, ebx
        mov edx, 2
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x58850ac3
        __asm _emit 0x75
        __asm _emit 0xf3
        mov esi, ebx
        mov edi, 2
        ; Exact mapped bytes EB 07: jmp 0x58850ae0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850AE0 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_01() {
    __asm {
        mov ecx, dword ptr [esi]
        push 0feh
        push 0aah
        ; Exact mapped bytes E8 9F 27 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58850ae0
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 1B 22 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 218h]
        push 101h
        ; Exact mapped bytes E8 0B 22 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x58850b44
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850b31
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x58850b20
        __asm _emit 0x75
        __asm _emit 0xd4
        lea esi, [ebp + 244h]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 21: je 0x58850b83
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850b70
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 CC: jne 0x58850b57
        __asm _emit 0x75
        __asm _emit 0xcc
        ; Exact mapped bytes E9 FD 15 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x58850ce0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 2f0h]
        mov edx, dword ptr [ecx + 8]
        cmp byte ptr [edx], 1
        ; Exact mapped bytes 0F 85 2C 01 00 00: jne 0x58850ce0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes EB 08: jmp 0x58850bc0
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850BC0 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_02() {
    __asm {
        mov eax, dword ptr [ebp + ebx*8 + 214h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        lea esi, [ebp + ebx*8 + 214h]
        test cl, 1
        ; Exact mapped bytes 75 36: jne 0x58850c0d
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, esi
        mov edx, 2
        mov edi, 1
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x58850be3
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 24 21 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + ebx*8 + 218h]
        push 101h
        ; Exact mapped bytes E8 13 21 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, 2
        test ebx, ebx
        ; Exact mapped bytes 75 2A: jne 0x58850c40
        __asm _emit 0x75
        __asm _emit 0x2a
        lea esi, [ebp + 214h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 102h
        push 0a5h
        ; Exact mapped bytes E8 5F 26 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58850c20
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 1E: jmp 0x58850c59
        __asm _emit 0xeb
        __asm _emit 0x1e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850C40 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_03() {
    __asm {
        mov ecx, dword ptr [esi]
        push 181h
        push 202h
        ; Exact mapped bytes E8 3F 26 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58850c40
        __asm _emit 0x75
        __asm _emit 0xe7
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 5D FF FF FF: jl 0x58850bc0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [ebp + 224h]
        mov edi, 4
        mov edi, edi
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x58850c94
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850c81
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x58850c70
        __asm _emit 0x75
        __asm _emit 0xd4
        lea esi, [ebp + 244h]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 21: je 0x58850cd3
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850cc0
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 CC: jne 0x58850ca7
        __asm _emit 0x75
        __asm _emit 0xcc
        ; Exact mapped bytes E9 AD 14 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes EB 03: jmp 0x58850cf0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850CF0 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_04() {
    __asm {
        mov eax, dword ptr [esi - 30h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        lea ecx, [esi - 30h]
        test dl, 1
        ; Exact mapped bytes 74 18: je 0x58850d17
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850d04
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 21: je 0x58850d43
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850d30
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 A5: jne 0x58850cf0
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes E9 3D 14 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 1E 01 00 00: jne 0x58850e82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2f0h]
        mov edx, dword ptr [eax + 8]
        cmp byte ptr [edx], 1
        ; Exact mapped bytes 0F 85 0C 01 00 00: jne 0x58850e82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 1cch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x58850e82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 244h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea ebx, [ebp + 244h]
        test al, 1
        ; Exact mapped bytes 75 1D: jne 0x58850dc1
        __asm _emit 0x75
        __asm _emit 0x1d
        mov esi, ebx
        mov edi, 2
        ; Exact mapped bytes EB 03: jmp 0x58850db0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850DB0 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_05() {
    __asm {
        mov ecx, dword ptr [esi]
        push 1
        ; Exact mapped bytes E8 37 08 EE FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x08
        __asm _emit 0xee
        __asm _emit 0xff
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EF: jne 0x58850db0
        __asm _emit 0x75
        __asm _emit 0xef
        mov esi, ebx
        mov edi, 2
        ; Exact mapped bytes EB 06: jmp 0x58850dd0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850DD0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_06() {
    __asm {
        mov ecx, dword ptr [esi]
        push 0cbh
        push 189h
        ; Exact mapped bytes E8 AF 24 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58850dd0
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 2B 1F 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 248h]
        push 101h
        ; Exact mapped bytes E8 1B 1F 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        lea esi, [ebp + 214h]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58850e35
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850e22
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58850e10
        __asm _emit 0x75
        __asm _emit 0xd3
        lea esi, [ebp + 24ch]
        mov edi, 5
        ; Exact mapped bytes EB 06: jmp 0x58850e50
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850E50 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_07() {
    __asm {
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58850e75
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850e62
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58850e50
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes E9 0B 13 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi - 30h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea ecx, [esi - 30h]
        test al, 1
        ; Exact mapped bytes 74 18: je 0x58850eb6
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850ea3
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 22: je 0x58850ee3
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes EB 06: jmp 0x58850ed0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850ED0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_08() {
    __asm {
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58850ed0
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 A5: jne 0x58850e90
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes E9 9D 12 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 214h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        lea ebx, [ebp + 214h]
        test cl, 1
        ; Exact mapped bytes 75 18: jne 0x58850f1d
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, ebx
        mov edx, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x58850f10
        __asm _emit 0x75
        __asm _emit 0xf3
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 1d9h
        push 284h
        ; Exact mapped bytes E8 5B 23 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58850f24
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 D7 1D 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 218h]
        push 101h
        ; Exact mapped bytes E8 C7 1D 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes EB 03: jmp 0x58850f60
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850F60 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_09() {
    __asm {
        mov edx, dword ptr [ebp + ebx*8 + 244h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea esi, [ebp + ebx*8 + 244h]
        test al, 1
        ; Exact mapped bytes 75 36: jne 0x58850fac
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, esi
        mov edx, 2
        mov edi, 1
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x58850f82
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 85 1D 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + ebx*8 + 248h]
        push 101h
        ; Exact mapped bytes E8 74 1D 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, 2
        test ebx, ebx
        ; Exact mapped bytes 75 2B: jne 0x58850fe0
        __asm _emit 0x75
        __asm _emit 0x2b
        lea esi, [ebp + 244h]
        ; Exact mapped bytes EB 03: jmp 0x58850fc0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850FC0 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_10() {
    __asm {
        mov ecx, dword ptr [esi]
        push 148h
        push 295h
        ; Exact mapped bytes E8 BF 22 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58850fc0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 1E: jmp 0x58850ff9
        __asm _emit 0xeb
        __asm _emit 0x1e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850FE0 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_11() {
    __asm {
        mov ecx, dword ptr [esi]
        push 202h
        push 2e5h
        ; Exact mapped bytes E8 9F 22 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58850fe0
        __asm _emit 0x75
        __asm _emit 0xe7
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 5D FF FF FF: jl 0x58850f60
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov edi, edi
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58851035
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851022
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851010
        __asm _emit 0x75
        __asm _emit 0xd3
        lea esi, [ebp + 254h]
        mov edi, 4
        ; Exact mapped bytes EB 06: jmp 0x58851050
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851050 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_12() {
    __asm {
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58851075
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851062
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851050
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes E9 0B 11 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0db4h]
        mov eax, dword ptr [edx + 0c0h]
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x58851181
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 244h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        lea ebx, [ebp + 244h]
        test dl, 1
        ; Exact mapped bytes 75 18: jne 0x588510cd
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, ebx
        mov edx, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x588510c0
        __asm _emit 0x75
        __asm _emit 0xf3
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 32h
        push 17ch
        ; Exact mapped bytes E8 AE 21 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EA: jne 0x588510d4
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 2A 1C 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 248h]
        push 101h
        ; Exact mapped bytes E8 1A 1C 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        lea esi, [ebp + 214h]
        mov edi, 6
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58851136
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851123
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851111
        __asm _emit 0x75
        __asm _emit 0xd3
        lea esi, [ebp + 24ch]
        mov edi, 5
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x58851174
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851161
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x58851150
        __asm _emit 0x75
        __asm _emit 0xd4
        ; Exact mapped bytes E9 0C 10 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov edx, dword ptr [esi - 30h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea ecx, [esi - 30h]
        test al, 1
        ; Exact mapped bytes 74 18: je 0x588511b6
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588511a3
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 22: je 0x588511e3
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes EB 06: jmp 0x588511d0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588511D0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_13() {
    __asm {
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588511d0
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 A5: jne 0x58851190
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes E9 9D 0F 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + 214h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebp, dword ptr [esi + 0d78h]
        add edi, 214h
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esp + 18h], 0
        test cl, 1
        ; Exact mapped bytes 75 19: jne 0x58851234
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, edi
        mov edx, 2
        mov esi, 1
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, esi
        ; Exact mapped bytes 75 F3: jne 0x58851227
        __asm _emit 0x75
        __asm _emit 0xf3
        mov esi, edi
        mov ebx, 2
        ; Exact mapped bytes EB 03: jmp 0x58851240
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851240 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_14() {
    __asm {
        mov ecx, dword ptr [esi]
        push 1d9h
        push 284h
        ; Exact mapped bytes E8 3F 20 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x58851240
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        ; Exact mapped bytes E8 BB 1A 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [edx + 218h]
        push 101h
        ; Exact mapped bytes E8 A7 1A 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 0C 0F 00 00: je 0x5885218d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0a24h], ebx
        mov dword ptr [esp + 24h], ebx
        ; Exact mapped bytes 0F 8E EB 00 00 00: jle 0x5885137c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        add eax, 244h
        mov ecx, ebp
        add ecx, 9a4h
        mov dword ptr [esp + 1ch], 0f8h
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x588512c0
        __asm _emit 0xeb
        __asm _emit 0x0c
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588512C0 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_15() {
    __asm {
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0db4h]
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [ecx + eax]
        mov eax, dword ptr [esp + 20h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 7A: jne 0x58851356
        __asm _emit 0x75
        __asm _emit 0x7a
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 17: jne 0x58851301
        __asm _emit 0x75
        __asm _emit 0x17
        mov esi, 2
        mov edi, 1
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub esi, edi
        ; Exact mapped bytes 75 F3: jne 0x588512f4
        __asm _emit 0x75
        __asm _emit 0xf3
        mov edi, dword ptr [edx + 4]
        mov ebp, dword ptr [edx + 8]
        mov esi, dword ptr [esp + 14h]
        sub edi, 1ah
        sub ebp, 6ch
        mov ebx, 2
        mov ecx, dword ptr [esi]
        push ebp
        push edi
        ; Exact mapped bytes E8 71 1F 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EF: jne 0x58851316
        __asm _emit 0x75
        __asm _emit 0xef
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        ; Exact mapped bytes E8 E9 19 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        push 101h
        ; Exact mapped bytes E8 DC 19 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        inc eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], esi
        cmp eax, 6
        ; Exact mapped bytes 74 26: je 0x5885137c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esp + 24h]
        mov ecx, 4
        add dword ptr [esp + 1ch], ecx
        add dword ptr [esp + 20h], ecx
        mov ecx, dword ptr [esp + 28h]
        inc eax
        cmp eax, dword ptr [ecx + 0a24h]
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8C 44 FF FF FF: jl 0x588512c0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 10h]
        add esi, 21ch
        mov edi, 5
        ; Exact mapped bytes EB 03: jmp 0x58851390
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851390 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_16() {
    __asm {
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x588513b4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588513a1
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x58851390
        __asm _emit 0x75
        __asm _emit 0xd4
        cmp dword ptr [esp + 18h], 6
        ; Exact mapped bytes 0F 8D C6 0D 00 00: jge 0x5885218d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 10h]
        mov edi, 6
        lea esi, [ecx + eax*8 + 244h]
        sub edi, eax
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x58851404
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588513f1
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x588513e0
        __asm _emit 0x75
        __asm _emit 0xd4
        ; Exact mapped bytes E9 7C 0D 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 0d78h]
        test esi, esi
        ; Exact mapped bytes 0F 84 6E 0D 00 00: je 0x5885218d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 214h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov edi, dword ptr [esi + 0cc4h]
        lea ecx, [ebp + 214h]
        test al, 1
        ; Exact mapped bytes 75 17: jne 0x58851450
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, 2
        mov esi, 1
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, esi
        ; Exact mapped bytes 75 F3: jne 0x58851443
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 0b4h]
        mov edx, dword ptr [eax + 8]
        mov esi, dword ptr [esp + 10h]
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [esp + 2ch], edx
        add esi, 214h
        mov ebx, 2
        ; Exact mapped bytes EB 09: jmp 0x58851480
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851480 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_17() {
    __asm {
        ; Exact mapped bytes 0F BF 47 0C: movsx eax, word ptr [edi + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x47
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + 2ch]
        lea edx, [eax + ecx - 62h]
        ; Exact mapped bytes 0F BF 47 0A: movsx eax, word ptr [edi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x47
        __asm _emit 0x0a
        lea ecx, [eax + ebp - 1ah]
        push edx
        push ecx
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 F3 1D 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 DB: jne 0x58851480
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ebp, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 214h]
        push 0fffffeffh
        ; Exact mapped bytes E8 67 18 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 218h]
        push 101h
        ; Exact mapped bytes E8 57 18 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0dbch]
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 75 32: jne 0x58851515
        __asm _emit 0x75
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 21ch]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea ecx, [ebp + 21ch]
        test al, 1
        ; Exact mapped bytes 74 76: je 0x5885156d
        __asm _emit 0x74
        __asm _emit 0x76
        lea edx, [ebx + 2]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov esi, 0fffeh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851500
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes EB 58: jmp 0x5885156d
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 21ch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        lea ebx, [ebp + 21ch]
        test dl, 1
        ; Exact mapped bytes 75 43: jne 0x5885156d
        __asm _emit 0x75
        __asm _emit 0x43
        mov esi, ebx
        mov edi, 2
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [esi]
        push 148h
        push 2c3h
        ; Exact mapped bytes E8 47 1D 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E0: jne 0x58851531
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 C3 17 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 220h]
        push 101h
        ; Exact mapped bytes E8 B3 17 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        lea esi, [ebp + 224h]
        mov edi, 4
        ; Exact mapped bytes EB 06: jmp 0x58851580
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851580 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_18() {
    __asm {
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x588515a5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851592
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851580
        __asm _emit 0x75
        __asm _emit 0xd3
        lea esi, [ebp + 244h]
        mov edi, 6
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 21: je 0x588515e3
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588515d0
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 CD: jne 0x588515b8
        __asm _emit 0x75
        __asm _emit 0xcd
        ; Exact mapped bytes E9 9D 0B 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x58851742
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2f0h]
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx], 3
        ; Exact mapped bytes 0F 85 2C 01 00 00: jne 0x58851742
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes EB 06: jmp 0x58851620
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851620 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_19() {
    __asm {
        mov edx, dword ptr [ebp + ebx*8 + 214h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea esi, [ebp + ebx*8 + 214h]
        test al, 1
        ; Exact mapped bytes 75 36: jne 0x5885166c
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, esi
        mov edx, 2
        mov edi, 1
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x58851642
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 C5 16 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + ebx*8 + 218h]
        push 101h
        ; Exact mapped bytes E8 B4 16 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, 2
        test ebx, ebx
        ; Exact mapped bytes 75 2B: jne 0x588516a0
        __asm _emit 0x75
        __asm _emit 0x2b
        lea esi, [ebp + 214h]
        ; Exact mapped bytes EB 03: jmp 0x58851680
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851680 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_20() {
    __asm {
        mov ecx, dword ptr [esi]
        push 133h
        push 0d8h
        ; Exact mapped bytes E8 FF 1B 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58851680
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 1E: jmp 0x588516b9
        __asm _emit 0xeb
        __asm _emit 0x1e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588516A0 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_21() {
    __asm {
        mov ecx, dword ptr [esi]
        push 181h
        push 202h
        ; Exact mapped bytes E8 DF 1B 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x588516a0
        __asm _emit 0x75
        __asm _emit 0xe7
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 5D FF FF FF: jl 0x58851620
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [ebp + 224h]
        mov edi, 4
        mov edi, edi
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x588516f5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588516e2
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x588516d0
        __asm _emit 0x75
        __asm _emit 0xd3
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes EB 06: jmp 0x58851710
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851710 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_22() {
    __asm {
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58851735
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851722
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851710
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes E9 4B 0A 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi - 30h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea ecx, [esi - 30h]
        test al, 1
        ; Exact mapped bytes 74 18: je 0x58851776
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851763
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 22: je 0x588517a3
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes EB 06: jmp 0x58851790
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851790 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_23() {
    __asm {
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851790
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 A5: jne 0x58851750
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes E9 DD 09 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x58851900
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 2f0h]
        mov edx, dword ptr [ecx + 8]
        cmp byte ptr [edx], al
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x58851900
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov eax, dword ptr [ebp + ebx*8 + 214h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        lea esi, [ebp + ebx*8 + 214h]
        test cl, 1
        ; Exact mapped bytes 75 3E: jne 0x5885182a
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, esi
        mov edx, 2
        mov edi, 1
        ; Exact mapped bytes EB 06: jmp 0x58851800
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851800 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_24() {
    __asm {
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x58851800
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 07 15 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x15
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + ebx*8 + 218h]
        push 101h
        ; Exact mapped bytes E8 F6 14 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, 2
        test ebx, ebx
        ; Exact mapped bytes 75 2D: jne 0x58851860
        __asm _emit 0x75
        __asm _emit 0x2d
        lea esi, [ebp + 214h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 15bh
        push 0d8h
        ; Exact mapped bytes E8 3F 1A 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58851840
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 1E: jmp 0x58851879
        __asm _emit 0xeb
        __asm _emit 0x1e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851860 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_25() {
    __asm {
        mov ecx, dword ptr [esi]
        push 181h
        push 202h
        ; Exact mapped bytes E8 1F 1A 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58851860
        __asm _emit 0x75
        __asm _emit 0xe7
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 52 FF FF FF: jl 0x588517d5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [ebp + 224h]
        mov edi, 4
        mov edi, edi
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x588518b4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588518a1
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x58851890
        __asm _emit 0x75
        __asm _emit 0xd4
        lea esi, [ebp + 244h]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 21: je 0x588518f3
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588518e0
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 CC: jne 0x588518c7
        __asm _emit 0x75
        __asm _emit 0xcc
        ; Exact mapped bytes E9 8D 08 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes EB 03: jmp 0x58851910
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851910 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_26() {
    __asm {
        mov eax, dword ptr [esi - 30h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        lea ecx, [esi - 30h]
        test dl, 1
        ; Exact mapped bytes 74 18: je 0x58851937
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851924
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 21: je 0x58851963
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851950
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 A5: jne 0x58851910
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes E9 1D 08 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x58851ac2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 2f0h]
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx], 5
        ; Exact mapped bytes 0F 85 2C 01 00 00: jne 0x58851ac2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes EB 06: jmp 0x588519a0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588519A0 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_27() {
    __asm {
        mov edx, dword ptr [ebp + ebx*8 + 214h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea esi, [ebp + ebx*8 + 214h]
        test al, 1
        ; Exact mapped bytes 75 36: jne 0x588519ec
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, esi
        mov edx, 2
        mov edi, 1
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x588519c2
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes E8 45 13 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + ebx*8 + 218h]
        push 101h
        ; Exact mapped bytes E8 34 13 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, 2
        test ebx, ebx
        ; Exact mapped bytes 75 2B: jne 0x58851a20
        __asm _emit 0x75
        __asm _emit 0x2b
        lea esi, [ebp + 214h]
        ; Exact mapped bytes EB 03: jmp 0x58851a00
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851A00 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_28() {
    __asm {
        mov ecx, dword ptr [esi]
        push 0fbh
        push 0d8h
        ; Exact mapped bytes E8 7F 18 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58851a00
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 1E: jmp 0x58851a39
        __asm _emit 0xeb
        __asm _emit 0x1e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851A20 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_29() {
    __asm {
        mov ecx, dword ptr [esi]
        push 181h
        push 202h
        ; Exact mapped bytes E8 5F 18 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58851a20
        __asm _emit 0x75
        __asm _emit 0xe7
        inc ebx
        cmp ebx, 2
        ; Exact mapped bytes 0F 8C 5D FF FF FF: jl 0x588519a0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [ebp + 224h]
        mov edi, 4
        mov edi, edi
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58851a75
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851a62
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851a50
        __asm _emit 0x75
        __asm _emit 0xd3
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes EB 06: jmp 0x58851a90
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851A90 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_30() {
    __asm {
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58851ab5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851aa2
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851a90
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes E9 CB 06 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi - 30h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea ecx, [esi - 30h]
        test al, 1
        ; Exact mapped bytes 74 18: je 0x58851af6
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851ae3
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 22: je 0x58851b23
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes EB 06: jmp 0x58851b10
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851B10 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_31() {
    __asm {
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851b10
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 A5: jne 0x58851ad0
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes E9 5D 06 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 214h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        lea ebx, [ebp + 214h]
        test cl, 1
        ; Exact mapped bytes 75 18: jne 0x58851b5d
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, ebx
        mov edx, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x58851b50
        __asm _emit 0x75
        __asm _emit 0xf3
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 112h
        push 227h
        ; Exact mapped bytes E8 1B 17 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58851b64
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 97 11 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x11
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 218h]
        push 101h
        ; Exact mapped bytes E8 87 11 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x0b
        __asm _emit 0x00
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x58851bc8
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851bb5
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x58851ba4
        __asm _emit 0x75
        __asm _emit 0xd4
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes EB 03: jmp 0x58851be0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851BE0 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_32() {
    __asm {
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58851c05
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851bf2
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851be0
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes E9 7B 05 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d78h]
        xor ecx, ecx
        mov dword ptr [esp + 24h], edx
        cmp edx, ecx
        ; Exact mapped bytes 0F 84 67 05 00 00: je 0x5885218d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 0cc0h]
        ; Exact mapped bytes 66 8B 58 0C: mov bx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x0c
        mov edi, dword ptr [edx + 0cc4h]
        mov ebp, 7c00h
        ; Exact mapped bytes 66 23 DD: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xdd
        xor ebp, ebp
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 66 3B EB: cmp bp, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 0F 83 0D 01 00 00: jae 0x58851d5e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        add ebx, 214h
        add edi, 0eh
        mov dword ptr [esp + 18h], edi
        lea edi, [edx + 0b40h]
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esp + 1ch], edi
        mov ebx, ecx
        mov edi, 80000000h
        shr edi, cl
        test dword ptr [eax + 268h], edi
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x58851d35
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x58851d30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        mov ebp, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 8]
        mov esi, dword ptr [esp + 20h]
        mov edi, 2
        ; Exact mapped bytes EB 07: jmp 0x58851cb0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851CB0 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_33() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F BF 48 40: movsx ecx, word ptr [eax + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        lea edx, [ecx + ebx - 53h]
        lea ecx, [eax + ebp - 1ah]
        push edx
        push ecx
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 C4 15 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x15
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 DC: jne 0x58851cb0
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edi, dword ptr [esp + 20h]
        mov edx, dword ptr [edi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ebx, 1
        // VC6 MASM reverses TEST's operands in the emitted ModRM byte; this equivalent order yields the captured 84 C3 encoding.
        test al, bl
        ; Exact mapped bytes 75 16: jne 0x58851cfd
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, edi
        mov edx, 2
        mov edi, edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, ebx
        ; Exact mapped bytes 75 F3: jne 0x58851cf0
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        ; Exact mapped bytes E8 17 10 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        push 101h
        ; Exact mapped bytes E8 0A 10 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x0b
        __asm _emit 0x00
        add dword ptr [esp + 14h], ebx
        mov ecx, dword ptr [esp + 28h]
        mov ebx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes 8B 35 98 45 A2 58: mov esi, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ebx, 6
        ; Exact mapped bytes 74 2B: je 0x58851d60
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [edx + 0cc0h]
        movzx edi, word ptr [eax + 0ch]
        add dword ptr [esp + 1ch], 4
        add dword ptr [esp + 18h], 2
        shr edi, 0ah
        inc ecx
        and edi, 1fh
        cmp ecx, edi
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 0F 8C 16 FF FF FF: jl 0x58851c72
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58851d60
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ebx, ecx
        mov esi, dword ptr [esp + 10h]
        add esi, 244h
        mov edi, 6
        nop
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58851d95
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebp, 0fffeh
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851d82
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851d70
        __asm _emit 0x75
        __asm _emit 0xd3
        cmp ebx, 6
        ; Exact mapped bytes 0F 8D E7 03 00 00: jge 0x5885218d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov edi, 6
        lea esi, [eax + ebx*8 + 214h]
        sub edi, ebx
        ; Exact mapped bytes EB 06: jmp 0x58851dc0
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851DC0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_34() {
    __asm {
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58851de5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851dd2
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851dc0
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes E9 9B 03 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 214h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        lea ebx, [ebp + 214h]
        test cl, 1
        ; Exact mapped bytes 75 16: jne 0x58851e1d
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, ebx
        mov edx, 2
        mov edi, edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x58851e10
        __asm _emit 0x75
        __asm _emit 0xf3
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 180h
        push 225h
        ; Exact mapped bytes E8 5B 14 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x14
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x58851e24
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 D7 0E 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 218h]
        push 101h
        ; Exact mapped bytes E8 C7 0E 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0e
        __asm _emit 0x0b
        __asm _emit 0x00
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x58851e88
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851e75
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x58851e64
        __asm _emit 0x75
        __asm _emit 0xd4
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes EB 03: jmp 0x58851ea0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851EA0 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_35() {
    __asm {
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58851ec5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851eb2
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58851ea0
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes E9 BB 02 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x58852042
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 2f0h]
        mov edx, dword ptr [ecx + 8]
        cmp byte ptr [edx], 0bh
        ; Exact mapped bytes 0F 85 4C 01 00 00: jne 0x58852042
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 214h]
        mov edi, 3
        mov ebx, 1
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        // VC6 MASM reverses TEST's operands in the emitted ModRM byte; this equivalent order yields the captured 84 CB encoding.
        test cl, bl
        ; Exact mapped bytes 75 14: jne 0x58851f24
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, ebx
        ; Exact mapped bytes 75 F3: jne 0x58851f17
        __asm _emit 0x75
        __asm _emit 0xf3
        add esi, 8
        sub edi, ebx
        ; Exact mapped bytes 75 DB: jne 0x58851f06
        __asm _emit 0x75
        __asm _emit 0xdb
        lea esi, [ebp + 21ch]
        mov edi, 2
        ; Exact mapped bytes EB 08: jmp 0x58851f40
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851F40 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_36() {
    __asm {
        mov ecx, dword ptr [esi - 8]
        push 0fbh
        push 0d8h
        ; Exact mapped bytes E8 3E 13 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 87h
        push 26ah
        ; Exact mapped bytes E8 2D 13 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push 181h
        push 202h
        ; Exact mapped bytes E8 1B 13 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, ebx
        ; Exact mapped bytes 75 C4: jne 0x58851f40
        __asm _emit 0x75
        __asm _emit 0xc4
        xor ebp, ebp
        mov edi, edi
        mov edi, dword ptr [esp + 10h]
        lea esi, [edi + 214h]
        lea edi, [edi + ebp*4 + 214h]
        mov ebx, 3
        test ebp, ebp
        ; Exact mapped bytes 75 09: jne 0x58851fa3
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [esi]
        push 0fffffeffh
        ; Exact mapped bytes EB 07: jmp 0x58851faa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 71 0D 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 8
        add edi, 8
        sub ebx, 1
        ; Exact mapped bytes 75 DC: jne 0x58851f96
        __asm _emit 0x75
        __asm _emit 0xdc
        inc ebp
        cmp ebp, 2
        ; Exact mapped bytes 7C C0: jl 0x58851f80
        __asm _emit 0x7c
        __asm _emit 0xc0
        mov esi, dword ptr [esp + 10h]
        add esi, 22ch
        lea edi, [ebx + 3]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 1A: je 0x58851ff4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58851fe1
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D4: jne 0x58851fd0
        __asm _emit 0x75
        __asm _emit 0xd4
        mov esi, dword ptr [esp + 10h]
        add esi, 244h
        mov edi, 6
        ; Exact mapped bytes EB 03: jmp 0x58852010
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58852010 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_37() {
    __asm {
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58852035
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58852022
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58852010
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esi - 30h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        lea ecx, [esi - 30h]
        test dl, 1
        ; Exact mapped bytes 74 18: je 0x58852077
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58852064
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 21: je 0x588520a3
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, esi
        mov edx, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58852090
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 A5: jne 0x58852050
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x5885218d
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 214h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        lea ebx, [ebp + 214h]
        test al, 1
        ; Exact mapped bytes 75 19: jne 0x588520dd
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, ebx
        mov edx, 2
        ; Exact mapped bytes EB 03: jmp 0x588520d0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588520D0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_38() {
    __asm {
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 F3: jne 0x588520d0
        __asm _emit 0x75
        __asm _emit 0xf3
        mov esi, ebx
        mov edi, 2
        mov ecx, dword ptr [esi]
        push 18ch
        push 2dh
        ; Exact mapped bytes E8 9E 11 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x11
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EA: jne 0x588520e4
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 1A 0C 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 218h]
        push 101h
        ; Exact mapped bytes E8 0A 0C 0B 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0c
        __asm _emit 0x0b
        __asm _emit 0x00
        lea esi, [ebp + 21ch]
        mov edi, 5
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58852146
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58852133
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58852121
        __asm _emit 0x75
        __asm _emit 0xd3
        lea esi, [ebp + 244h]
        mov edi, 6
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58852185
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58852172
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58852160
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 66 8B 44 24 38: mov ax, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x5885225d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x5885225d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5885225d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x5885225d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x5885225d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x5885225d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 85 79 00 00 00: jne 0x5885225d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        lea esi, [ebx + 244h]
        mov edi, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 1A: je 0x58852218
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebp, 0fffeh
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58852205
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x588521f3
        __asm _emit 0x75
        __asm _emit 0xd3
        lea esi, [ebx + 214h]
        mov edi, 6
        ; Exact mapped bytes EB 03: jmp 0x58852230
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58852230 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58850a70_segment_39() {
    __asm {
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1A: je 0x58852255
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x58852242
        __asm _emit 0x75
        __asm _emit 0xed
        add esi, 8
        sub edi, 1
        ; Exact mapped bytes 75 D3: jne 0x58852230
        __asm _emit 0x75
        __asm _emit 0xd3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
