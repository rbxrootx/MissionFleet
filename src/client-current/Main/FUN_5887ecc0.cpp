// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 851 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887ECC0 .. +0x25D bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_00() {
    __asm {
        sub esp, 914h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 910h], eax
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0a4h]
        cmp edi, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 76 05: jbe 0x5887eced
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 85 DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 928h]
        movzx ecx, word ptr [eax + 6]
        mov ebp, dword ptr [esi + 98h]
        movzx eax, cx
        dec eax
        mov dword ptr [esp + 1ch], edi
        cmp eax, 29h
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x5887ee17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2ah
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x5887ee17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0a8h]
        add edi, 22h
        cmp dword ptr [esi + 0a4h], ebx
        ; Exact mapped bytes 76 05: jbe 0x5887ed2e
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 44 DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        test ebp, ebp
        ; Exact mapped bytes 74 04: je 0x5887ed3c
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ebp, eax
        ; Exact mapped bytes 74 05: je 0x5887ed41
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 31 DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x5887ee21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 75 3F: jne 0x5887ed8e
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes E8 1E DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [esp + 1ch]
        cmp ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887ed64
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 0E DF 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 57 E0: mov dx, word ptr [edi - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xe0
        mov eax, dword ptr [esp + 928h]
        ; Exact mapped bytes 66 3B 50 02: cmp dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 74 39: je 0x5887edae
        __asm _emit 0x74
        __asm _emit 0x39
        test ebp, ebp
        ; Exact mapped bytes 75 1A: jne 0x5887ed93
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 F4 DE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 1A: ja 0x5887ed9f
        __asm _emit 0x77
        __asm _emit 0x1a
        test ebp, ebp
        ; Exact mapped bytes 74 0F: je 0x5887ed98
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB 0C: jmp 0x5887ed9a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB C3: jmp 0x5887ed56
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB E8: jmp 0x5887ed80
        __asm _emit 0xeb
        __asm _emit 0xe8
        xor eax, eax
        cmp edi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 05: jae 0x5887eda4
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 CE DE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        add dword ptr [esp + 1ch], 22h
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x5887ed18
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 06: mov ax, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        movzx ecx, ax
        mov dword ptr [esp + 10h], ecx
        lea eax, [esi + 244h]
        mov edx, 5
        mov edi, 2
        mov ebx, 4
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        add eax, ebx
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5887edd0
        __asm _emit 0x75
        __asm _emit 0xed
        push edx
        push 1
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 C2 BA FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 928h]
        movzx eax, word ptr [eax + 8]
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 76: jne 0x5887ee7b
        __asm _emit 0x75
        __asm _emit 0x76
        push 5899f3b0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea ecx, [esp + 28h]
        push ecx
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x5887ee9c
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec ecx
        movzx edx, cx
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes EB 9A: jmp 0x5887edbb
        __asm _emit 0xeb
        __asm _emit 0x9a
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5899f868h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 1c8h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A3 2E EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        push 5899f844h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 1d0h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 8D 2E EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        push 5899f820h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 1d4h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 77 2E EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        push 0
        push 0
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 3A BA FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CB 15 00 00: jmp 0x58880446
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 0F: jne 0x5887ee8f
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5899f274h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes EB 0D: jmp 0x5887ee9c
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5899f550h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esp + 1ch]
        add esp, 0ch
        ; Exact mapped bytes 66 83 F8 29: cmp ax, 0x29
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x29
        ; Exact mapped bytes 74 29: je 0x5887eed8
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 83 F8 2A: cmp ax, 0x2a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x2a
        ; Exact mapped bytes 74 23: je 0x5887eed8
        __asm _emit 0x74
        __asm _emit 0x23
        test ebp, ebp
        ; Exact mapped bytes 75 1A: jne 0x5887eed3
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 B4 DD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        cmp edi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 72 05: jb 0x5887eecc
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A6 DD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx ecx, word ptr [edi + 8]
        push ecx
        ; Exact mapped bytes EB 07: jmp 0x5887eeda
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ebp, dword ptr [ebp]
        ; Exact mapped bytes EB E6: jmp 0x5887eebe
        __asm _emit 0xeb
        __asm _emit 0xe6
        push 0
        mov ecx, dword ptr [esi + 264h]
        ; Exact mapped bytes E8 7B 84 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 264h]
        add edx, 1c9h
        push edx
        ; Exact mapped bytes E8 66 44 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 264h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [esi + 1f0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5887ef43
        __asm _emit 0x74
        __asm _emit 0x31
        lea edx, [esp + 20h]
        mov edi, 80h
        ; Exact mapped bytes EB 03: jmp 0x5887ef20
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EF20 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_01() {
    __asm {
        lea ecx, [edi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887ef3b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887ef3b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x5887ef20
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887ef3f
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x5887ef40
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 238h]
        add edx, 2b2h
        push edx
        ; Exact mapped bytes E8 88 43 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 238h]
        add eax, 1c2h
        push eax
        ; Exact mapped bytes E8 F4 43 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        lea edi, [esi + 1f4h]
        mov ebp, 3
        ; Exact mapped bytes EB 07: jmp 0x5887ef80
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EF80 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_02() {
    __asm {
        mov ecx, dword ptr [esi + 8]
        add ecx, 1c5h
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 CF 43 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E0: jne 0x5887ef80
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 FF 29: cmp di, 0x29
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x29
        ; Exact mapped bytes 74 06: je 0x5887efb0
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 FF 2A: cmp di, 0x2a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x2a
        ; Exact mapped bytes 75 3B: jne 0x5887efeb
        __asm _emit 0x75
        __asm _emit 0x3b
        lea ecx, [esi + 1f4h]
        mov edx, 3
        ; Exact mapped bytes EB 03: jmp 0x5887efc0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EFC0 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_03() {
    __asm {
        mov eax, dword ptr [ecx]
        mov ebp, 0fffeh
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5887efc0
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi + 264h]
        mov edx, ebp
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1f0h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 0F BF EF: movsx ebp, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xef
        cmp ebp, 2eh
        ; Exact mapped bytes 0F 87 4F 14 00 00: ja 0x58880446
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4f
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp + 588804b4h]
        ; Exact mapped bytes FF 24 95 64 04 88 58: jmp dword ptr [edx*4 + 0x58880464]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x88
        __asm _emit 0x58
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880446 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5887ecc0_segment_04() {
    __asm {
        mov ecx, dword ptr [esp + 920h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 82 C7 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc7
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 914h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
