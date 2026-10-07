// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 664 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880890 .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_58880890_segment_00() {
    __asm {
        sub esp, 110h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 10ch], eax
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 0a4h]
        push edi
        cmp esi, dword ptr [ebx + 0a8h]
        ; Exact mapped bytes 76 05: jbe 0x588808bd
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 B5 C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebp, dword ptr [ebx + 98h]
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esp + 18h], 0
        lea edi, [esi + 22h]
        mov esi, dword ptr [ebx + 0a8h]
        cmp dword ptr [ebx + 0a4h], esi
        ; Exact mapped bytes 76 05: jbe 0x588808e5
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 8D C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 98h]
        test ebp, ebp
        ; Exact mapped bytes 74 04: je 0x588808f3
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ebp, eax
        ; Exact mapped bytes 74 05: je 0x588808f8
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 7A C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], esi
        ; Exact mapped bytes 74 6E: je 0x5888096c
        __asm _emit 0x74
        __asm _emit 0x6e
        test ebp, ebp
        ; Exact mapped bytes 75 3F: jne 0x58880941
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes E8 6B C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        cmp ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58880917
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 5B C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 57 E0: mov dx, word ptr [edi - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xe0
        mov eax, dword ptr [esp + 124h]
        ; Exact mapped bytes 66 3B 50 02: cmp dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 74 3C: je 0x58880964
        __asm _emit 0x74
        __asm _emit 0x3c
        test ebp, ebp
        ; Exact mapped bytes 75 1A: jne 0x58880946
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 41 C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 1A: ja 0x58880952
        __asm _emit 0x77
        __asm _emit 0x1a
        test ebp, ebp
        ; Exact mapped bytes 74 0F: je 0x5888094b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB 0C: jmp 0x5888094d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB C3: jmp 0x58880909
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB E8: jmp 0x58880933
        __asm _emit 0xeb
        __asm _emit 0xe8
        xor eax, eax
        cmp edi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 05: jae 0x58880957
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 1B C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        add dword ptr [esp + 14h], 22h
        add edi, 22h
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x588808d2
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 18h], 1
        ; Exact mapped bytes 0F BF 44 24 18: movsx eax, word ptr [esp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        sub eax, 0
        ; Exact mapped bytes 0F 84 73 01 00 00: je 0x58880aed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 85 91 01 00 00: jne 0x58880b14
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 124h]
        movzx eax, word ptr [ecx + 8]
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 0F: jne 0x588809a9
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5899f3b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        lea edx, [esp + 24h]
        push edx
        ; Exact mapped bytes EB 22: jmp 0x588809cb
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x588809be
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5899f274h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes EB 0D: jmp 0x588809cb
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5899f550h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x58880a60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 91 C2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        mov esi, dword ptr [esp + 14h]
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588809f1
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 81 C2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx edx, word ptr [esi + 8]
        mov ecx, dword ptr [ebx + 264h]
        push edx
        ; Exact mapped bytes E8 5F 69 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 264h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        lea ecx, [ebx + 1f4h]
        mov edx, 3
        ; Exact mapped bytes EB 07: jmp 0x58880a20
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880A20 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_58880890_segment_01() {
    __asm {
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x58880a20
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [ebx + 1c8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x58880a74
        __asm _emit 0x74
        __asm _emit 0x38
        lea edx, [esp + 1ch]
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x58880a68
        __asm _emit 0x74
        __asm _emit 0x19
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 13: je 0x58880a68
        __asm _emit 0x74
        __asm _emit 0x13
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x58880a45
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 0C: jmp 0x58880a6c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x588809e3
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x58880a6d
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 14h]
        mov byte ptr [eax], 0
        push 5899f8b4h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, eax
        mov eax, dword ptr [ebx + 1d0h]
        mov eax, dword ptr [eax + 6ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x58880abd
        __asm _emit 0x74
        __asm _emit 0x30
        test edx, edx
        ; Exact mapped bytes 74 2C: je 0x58880abd
        __asm _emit 0x74
        __asm _emit 0x2c
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x58880ab1
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x58880ab1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x58880a96
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58880ab5
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x58880ab6
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov esi, dword ptr [esp + 14h]
        mov byte ptr [eax], 0
        test ebp, ebp
        ; Exact mapped bytes 75 27: jne 0x58880ae8
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes E8 AC C1 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc1
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58880ad2
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A0 C1 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx edx, word ptr [esi + 8]
        mov ecx, dword ptr [ebx + 264h]
        push edx
        ; Exact mapped bytes E8 7E 68 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 1
        ; Exact mapped bytes EB 23: jmp 0x58880b0b
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes EB DB: jmp 0x58880ac8
        __asm _emit 0xeb
        __asm _emit 0xdb
        push 5899f88ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 1c8h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 D9 11 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0xeb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, ebx
        ; Exact mapped bytes E8 9C 9D FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 11ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 B4 C0 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 110h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
