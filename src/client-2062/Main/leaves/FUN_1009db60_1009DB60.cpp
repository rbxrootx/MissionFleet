// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009DB60 .. +0x4C0 bytes.
extern "C" __declspec(naked) void FUN_1009db60_1009DB60() {
    __asm {
        sub esp, 64h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes E8 82 F0 FF FF: call 0x1009cbf0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 78h]
        mov dword ptr [edi + 2b0h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 0c1ch]
        mov ecx, dword ptr [eax + 0c08h]
        push edx
        mov edx, dword ptr [eax + 374h]
        xor ecx, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [edi + 0ach]
        push edx
        ; Exact mapped bytes E8 63 0C 02 00: call 0x100be810
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [esi + 0e74h]
        mov eax, dword ptr [esi + 0e7ch]
        ; Exact mapped bytes 66 8B 8A C2 00 00 00: mov cx, word ptr [edx + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 1E: mov dx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1e
        mov eax, edx
        sub eax, ecx
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov edx, dword ptr [esi + 0c08h]
        xor edx, 0aaaaaaaah
        mov ecx, eax
        mov eax, 51eb851fh
        add ecx, 28h
        imul ecx, edx
        mul ecx
        mov ecx, dword ptr [edi + 0ach]
        shr edx, 5
        push edx
        ; Exact mapped bytes E8 29 10 02 00: call 0x100bec30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebx, ebx
        mov dword ptr [esp + 78h], ebx
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 0e74h]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        and edx, 7c00h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 86 E1 00 00 00: jbe 0x1009dd0f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and ebx, 0ffffh
        mov esi, dword ptr [eax + ebx*4 + 0cf4h]
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x1009dc46
        __asm _emit 0x74
        __asm _emit 0x07
        mov cl, byte ptr [esi]
        and ecx, 0fh
        ; Exact mapped bytes EB 02: jmp 0x1009dc48
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        xor edx, edx
        and ecx, 0ffffh
        mov dl, byte ptr [ebx + eax + 1d8h]
        mov ebp, edx
        xor edx, edx
        mov dl, byte ptr [ebx + eax + 1f8h]
        mov eax, edx
        test ecx, ecx
        lea esi, [eax + ebp*2]
        ; Exact mapped bytes 74 6D: je 0x1009dcd8
        __asm _emit 0x74
        __asm _emit 0x6d
        cmp ecx, 0dh
        ; Exact mapped bytes 74 68: je 0x1009dcd8
        __asm _emit 0x74
        __asm _emit 0x68
        sub ecx, 5
        ; Exact mapped bytes 74 1D: je 0x1009dc92
        __asm _emit 0x74
        __asm _emit 0x1d
        dec ecx
        ; Exact mapped bytes 75 2F: jne 0x1009dca7
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [edi + esi*8 + 80h]
        push 6
        push ebp
        push eax
        push esi
        ; Exact mapped bytes E8 07 0F 00 00: call 0x1009eb90
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [edi + esi*8 + 0c4h]
        ; Exact mapped bytes EB 15: jmp 0x1009dca7
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [edi + esi*8 + 7ch]
        push 5
        push ebp
        push eax
        push esi
        ; Exact mapped bytes E8 F0 0E 00 00: call 0x1009eb90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [edi + esi*8 + 0c0h]
        mov eax, esi
        lea esi, [esi + esi*2]
        cdq
        sub eax, edx
        lea ecx, [esi + esi*8]
        sar eax, 1
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*8]
        lea edx, [eax + ecx*2 + 5dh]
        mov ecx, dword ptr [edi + ebx*4 + 0f0h]
        push edx
        ; Exact mapped bytes E8 85 10 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebx, dword ptr [edi + ebx*4 + 0f0h]
        or byte ptr [ebx + 24h], 1
        ; Exact mapped bytes EB 0D: jmp 0x1009dce5
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ebx, dword ptr [edi + ebx*4 + 0f0h]
        ; Exact mapped bytes 66 81 63 24 FE FF: and word ptr [ebx + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 78h]
        inc ebx
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 78h], ebx
        mov ecx, dword ptr [eax + 0e74h]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        shr edx, 0ah
        and edx, 1fh
        ; Exact mapped bytes 66 3B DA: cmp bx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xda
        ; Exact mapped bytes 0F 82 1F FF FF FF: jb 0x1009dc2e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 9ch]
        ; Exact mapped bytes E8 B6 1F 00 00: call 0x1009fcd0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 78h], 8ch
        mov dword ptr [esp + 18h], 1bh
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 0e74h]
        mov dl, byte ptr [eax + 0eh]
        mov eax, dword ptr [eax + 25ch]
        and edx, 0ffh
        mov dword ptr [esp + 1ch], eax
        xor eax, eax
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 78h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + eax + 75ch]
        shr eax, 0ch
        and eax, 0fh
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 0F 82 42 01 00 00: jb 0x1009debf
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        mov eax, dword ptr [esp + 1ch]
        and ebx, 0ffffh
        lea ebp, [ebx + 11h]
        mov ecx, ebp
        shl eax, cl
        test eax, 80000000h
        ; Exact mapped bytes 0F 84 1C 01 00 00: je 0x1009deb7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + ebp*4 + 0cf4h]
        xor esi, esi
        cmp ecx, esi
        ; Exact mapped bytes 0F 84 05 01 00 00: je 0x1009deb1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 78h]
        mov eax, dword ptr [edx + eax + 3dch]
        mov edx, eax
        shr edx, 10h
        and edx, 3fh
        ; Exact mapped bytes 66 3B 51 06: cmp dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x1009deb1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 28h]
        xor eax, 540h
        shr eax, 5
        and eax, 7fh
        cmp eax, edx
        ; Exact mapped bytes 0F 82 D2 00 00 00: jb 0x1009deb1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 8B 84 A9 74 0C 00 00: mov ax, word ptr [ecx + ebp*4 + 0xc74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 34h]
        mov esi, eax
        and eax, 0ffffh
        xor esi, 0aah
        push eax
        mov eax, dword ptr [esp + 14h]
        mov edx, esi
        and edx, 0ffffh
        push edx
        push eax
        push 101abc54h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 14h
        lea edx, [esp + 34h]
        push edx
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 85 F6: test si, si
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 86 8D 00 00 00: jbe 0x1009debf
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebx - 0bh]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 78h]
        mov dword ptr [esp + ecx*4 + 24h], 1
        mov eax, dword ptr [edx + eax + 770h]
        mov esi, eax
        xor eax, 0aa00000h
        xor esi, 2a800h
        shr esi, 0ah
        shr eax, 14h
        and esi, 3ffh
        and eax, 3ffh
        add esi, eax
        mov eax, dword ptr [esp + 20h]
        cmp eax, esi
        ; Exact mapped bytes 7D 02: jge 0x1009de7a
        __asm _emit 0x7d
        __asm _emit 0x02
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 05: jne 0x1009de83
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, 1
        mov edx, dword ptr [edx + ebx*4 + 0d38h]
        mov ebx, dword ptr [esp + 14h]
        push edx
        push ecx
        mov ecx, dword ptr [edi + 9ch]
        push ebp
        push ebx
        ; Exact mapped bytes E8 B3 18 00 00: call 0x1009f750
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 9ch]
        push esi
        push ebx
        ; Exact mapped bytes E8 E6 29 00 00: call 0x100a0890
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes EB 0E: jmp 0x1009debf
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [esp + ebx*4 - 8], esi
        ; Exact mapped bytes EB 08: jmp 0x1009debf
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + ebx*4 - 8], 0
        mov edx, dword ptr [esp + 78h]
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 18h]
        add edx, 1ch
        inc ecx
        dec eax
        mov dword ptr [esp + 78h], edx
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 85 77 FE FF FF: jne 0x1009dd59
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        mov ebx, 4
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 8B 94 B1 E4 0C 00 00: mov dx, word ptr [ecx + esi*4 + 0xce4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 9ch]
        push edx
        push esi
        ; Exact mapped bytes E8 58 22 00 00: call 0x100a0160
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 8B 94 B1 E6 0C 00 00: mov dx, word ptr [ecx + esi*4 + 0xce6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0xb1
        __asm _emit 0xe6
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 9ch]
        push edx
        push esi
        ; Exact mapped bytes E8 69 22 00 00: call 0x100a0190
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        dec ebx
        ; Exact mapped bytes 75 BE: jne 0x1009dee9
        __asm _emit 0x75
        __asm _emit 0xbe
        mov esi, dword ptr [esp + 14h]
        xor ebx, ebx
        cmp esi, ebx
        ; Exact mapped bytes 74 68: je 0x1009df9d
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [edi + 9ch]
        push 1c7h
        ; Exact mapped bytes E8 0B 0E 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0a0h]
        push 500h
        ; Exact mapped bytes E8 FB 0D 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0a0h]
        push 500h
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 E5 0D 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0a4h]
        push 500h
        ; Exact mapped bytes E8 D5 0D 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 9ch]
        push esi
        ; Exact mapped bytes E8 29 22 00 00: call 0x100a01b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 2b4h], ebx
        mov dword ptr [edi + 2b8h], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 64h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 9ch]
        push 500h
        ; Exact mapped bytes E8 A3 0D 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 0e74h]
        ; Exact mapped bytes 66 8B 40 02: mov ax, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 1F 00: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 82 77 FF FF FF: jb 0x1009df45
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 6D FF FF FF: ja 0x1009df45
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0a0h]
        push 1aeh
        ; Exact mapped bytes E8 68 0D 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0a0h]
        push 2e2h
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 52 0D 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0a4h]
        push 1b0h
        ; Exact mapped bytes E8 42 0D 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0a4h]
        mov dword ptr [edx + 50h], 5
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x1009df7b
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
