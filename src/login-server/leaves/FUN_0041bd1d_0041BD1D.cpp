// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041BD1D .. +0x77C bytes.
extern "C" __declspec(naked) void FUN_0041bd1d_0041BD1D() {
    __asm {
        mov eax, 43aff0h
        ; Exact mapped bytes E8 E1 38 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 134h
        and dword ptr [ebp - 3ch], 0
        push ebx
        push esi
        lea eax, [ebp - 1ch]
        push edi
        mov esi, ecx
        push eax
        ; Exact mapped bytes E8 CB BC FF FF: call 0x417a0a
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 54h]
        and dword ptr [ebp - 4], 0
        lea eax, [ebp - 3ch]
        push eax
        push edi
        ; Exact mapped bytes E8 46 07 00 00: call 0x41c499
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 3
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x41be09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, ebx
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 0D FD FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x41be09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebx + 10h]
        ; Exact mapped bytes 8B 1D 48 C3 43 00: mov ebx, dword ptr [0x43c348]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [eax + eax*2]
        shl eax, 4
        ; Exact mapped bytes 66 8B 44 01 14: mov ax, word ptr [ecx + eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x14
        mov ecx, 81h
        movzx eax, ax
        cmp eax, ecx
        ; Exact mapped bytes 0F 8F 20 04 00 00: jg 0x41c1bd
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 AD 03 00 00: je 0x41c152
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8
        ; Exact mapped bytes 0F 8F B6 01 00 00: jg 0x41bf64
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 54 06 00 00: je 0x41c408
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x41bfed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 D3 01 00 00: je 0x41bf96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x41bf11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x41beb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x41be59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 94 06 00 00: jne 0x41c473
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 8B FC FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 30: je 0x41be24
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 1D: jmp 0x41be26
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 9D BA FF FF: call 0x4178b2
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 61 06 00 00: jmp 0x41c485
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 3C FF FF FF 07 00: mov word ptr [ebp - 0xc4], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes DD 9D 44 FF FF FF: fstp qword ptr [ebp - 0xbc]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 0c4h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 0ch
        ; Exact mapped bytes E8 A6 BB FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 0c4h]
        ; Exact mapped bytes E9 1C 04 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 11 FC FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41be83
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [ecx + eax + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41be85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 66 C7 45 AC 06 00: mov word ptr [ebp - 0x54], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 48h], eax
        lea eax, [ebp - 54h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 0dh
        ; Exact mapped bytes E8 4A BB FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 54h]
        ; Exact mapped bytes E9 C3 03 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 B8 FB FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41bedc
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41bede
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 6C FF FF FF 05 00: mov word ptr [ebp - 0x94], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes DD 9D 74 FF FF FF: fstp qword ptr [ebp - 0x8c]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 94h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 0ah
        ; Exact mapped bytes E8 EE BA FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 94h]
        ; Exact mapped bytes E9 64 03 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 59 FB FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41bf3b
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41bf3d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes D9 00: fld dword ptr [eax]
        __asm _emit 0xd9
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 9C 04 00: mov word ptr [ebp - 0x64], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes D9 5D A4: fstp dword ptr [ebp - 0x5c]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xa4
        lea eax, [ebp - 64h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 9
        ; Exact mapped bytes E8 98 BA FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 64h]
        ; Exact mapped bytes E9 11 03 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0bh
        ; Exact mapped bytes 0F 84 8C 01 00 00: je 0x41c0f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ch
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x41c0a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fh
        ; Exact mapped bytes 0F 8E F4 04 00 00: jle 0x41c473
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 11h
        ; Exact mapped bytes 0F 8E BE 00 00 00: jle 0x41c046
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 12h
        ; Exact mapped bytes 74 60: je 0x41bfed
        __asm _emit 0x74
        __asm _emit 0x60
        cmp eax, 13h
        ; Exact mapped bytes 0F 85 DD 04 00 00: jne 0x41c473
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 D4 FA FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41bfc0
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41bfc2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 3
        lea ecx, [ebp - 0f0h]
        push dword ptr [eax]
        ; Exact mapped bytes E8 B2 B9 FF FF: call 0x417983
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        mov byte ptr [ebp - 4], 8
        ; Exact mapped bytes E8 12 BA FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 0f0h]
        ; Exact mapped bytes E9 88 02 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 7D FA FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41c017
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c019
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        push 2
        push eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 23 B9 FF FF: call 0x41794d
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        mov byte ptr [ebp - 4], 7
        ; Exact mapped bytes E8 B9 B9 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 110h]
        ; Exact mapped bytes E9 2F 02 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 24 FA FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41c070
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c072
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov al, byte ptr [eax]
        ; Exact mapped bytes 66 C7 85 4C FF FF FF 11 00: mov word ptr [ebp - 0xb4], 0x11
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x11
        __asm _emit 0x00
        mov byte ptr [ebp - 0ach], al
        lea eax, [ebp - 0b4h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 6
        ; Exact mapped bytes E8 5A B9 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 0b4h]
        ; Exact mapped bytes E9 D0 01 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 C5 F9 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41c0cf
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c0d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 D5 B7 FF FF: call 0x4178b2
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 06 B9 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 130h]
        ; Exact mapped bytes E9 7C 01 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 71 F9 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41c123
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c125
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        push 0bh
        push eax
        lea ecx, [ebp - 100h]
        ; Exact mapped bytes E8 17 B8 FF FF: call 0x41794d
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        mov byte ptr [ebp - 4], 0bh
        ; Exact mapped bytes E8 AD B8 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 100h]
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 18 F9 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41c17c
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c17e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 92 1A 01 00: call 0x42dc19
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        push 8
        push eax
        lea ecx, [ebp - 120h]
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 37 B7 FF FF: call 0x4178d2
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes E8 48 B8 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E9 B1 02 00 00: jmp 0x41c46e
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 82h
        ; Exact mapped bytes 0F 84 40 02 00 00: je 0x41c408
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 B6 01 00 00: je 0x41c385
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x41c30e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x41c27d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 8E 02 00 00: jne 0x41c473
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 85 F8 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 75 02 00 00: je 0x41c473
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea edi, [ebp - 38h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        mov esi, eax
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        movzx eax, word ptr [ebp - 2eh]
        movzx ecx, word ptr [ebp - 30h]
        movzx edx, word ptr [ebp - 32h]
        movzx esi, word ptr [ebp - 34h]
        ; Exact mapped bytes 0F BF 7D C8: movsx edi, word ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x7d
        __asm _emit 0xc8
        push eax
        push ecx
        movzx eax, word ptr [ebp - 36h]
        push edx
        push esi
        push eax
        push edi
        lea ecx, [ebp - 0e0h]
        ; Exact mapped bytes E8 17 B9 FF FF: call 0x417b5a
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 85 20 FF FF FF: fld qword ptr [ebp - 0xe0]
        __asm _emit 0xdd
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 85 2C FF FF FF 07 00: mov word ptr [ebp - 0xd4], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes DD 9D 34 FF FF FF: fstp qword ptr [ebp - 0xcc]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 0d4h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 11h
        ; Exact mapped bytes E8 85 B7 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 0d4h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes E9 F6 01 00 00: jmp 0x41c473
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 ED F7 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 DD 01 00 00: je 0x41c473
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea edi, [ebp - 24h]
        and dword ptr [ebp - 2ch], 0
        lea eax, [eax + eax*2]
        shl eax, 4
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes DD 5D CC: fstp qword ptr [ebp - 0x34]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xcc
        mov esi, eax
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        movzx eax, word ptr [ebp - 20h]
        movzx ecx, word ptr [ebp - 22h]
        movzx edx, word ptr [ebp - 24h]
        push eax
        push ecx
        push edx
        push 1eh
        push 0ch
        push 76bh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 80 B8 FF FF: call 0x417b5a
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 45 CC: fld qword ptr [ebp - 0x34]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 66 C7 85 5C FF FF FF 07 00: mov word ptr [ebp - 0xa4], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes DD 9D 64 FF FF FF: fstp qword ptr [ebp - 0x9c]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 0a4h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 10h
        ; Exact mapped bytes E8 F1 B6 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 0a4h]
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 5C F7 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 4C 01 00 00: je 0x41c473
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 AC 01 00 00: call 0x41c4dd
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        lea edi, [ebp - 24h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        ; Exact mapped bytes DD 5D CC: fstp qword ptr [ebp - 0x34]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xcc
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        movzx eax, word ptr [ebp - 20h]
        movzx ecx, word ptr [ebp - 22h]
        ; Exact mapped bytes 0F BF 55 DC: movsx edx, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xdc
        xor esi, esi
        push esi
        push esi
        push esi
        push eax
        push ecx
        push edx
        lea ecx, [ebp - 34h]
        mov dword ptr [ebp - 2ch], esi
        ; Exact mapped bytes E8 FD B7 FF FF: call 0x417b5a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 45 CC: fld qword ptr [ebp - 0x34]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 66 C7 45 8C 07 00: mov word ptr [ebp - 0x74], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D 94: fstp qword ptr [ebp - 0x6c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0x94
        lea eax, [ebp - 74h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 0fh
        ; Exact mapped bytes E8 77 B6 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 74h]
        ; Exact mapped bytes E9 F0 FE FF FF: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 E5 F6 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x41c473
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 35 01 00 00: call 0x41c4dd
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        lea edi, [ebp - 38h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        ; Exact mapped bytes A4: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xa4
        ; Exact mapped bytes DF 6D CB: fild qword ptr [ebp - 0x35]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xcb
        mov al, byte ptr [ebp - 37h]
        mov cl, al
        dec al
        test cl, cl
        ; Exact mapped bytes 76 0C: jbe 0x41c3ce
        __asm _emit 0x76
        __asm _emit 0x0c
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DC 0D 90 EF 43 00: fmul qword ptr [0x43ef90]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xef
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes EB EC: jmp 0x41c3ba
        __asm _emit 0xeb
        __asm _emit 0xec
        cmp byte ptr [ebp - 36h], 0
        ; Exact mapped bytes 75 06: jne 0x41c3da
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes DD 5D 84: fstp qword ptr [ebp - 0x7c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0x84
        ; Exact mapped bytes 66 C7 85 7C FF FF FF 05 00: mov word ptr [ebp - 0x84], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 84h]
        lea ecx, [ebp - 1ch]
        push eax
        mov byte ptr [ebp - 4], 0eh
        ; Exact mapped bytes E8 F7 B5 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea eax, [ebp - 84h]
        ; Exact mapped bytes E9 6D FE FF FF: jmp 0x41c275
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 54h]
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E8 62 F6 FF FF: call 0x41ba7b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 15: je 0x41c432
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [eax + eax*2]
        shl eax, 4
        mov eax, dword ptr [eax + ecx + 4]
        add eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41c434
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 2E 18 01 00: call 0x42dc6b
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        push 8
        push eax
        lea ecx, [ebp - 140h]
        mov byte ptr [ebp - 4], 4
        ; Exact mapped bytes E8 81 B4 FF FF: call 0x4178d2
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        mov byte ptr [ebp - 4], 5
        ; Exact mapped bytes E8 92 B5 FF FF: call 0x4179f0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 140h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 38 17 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 33 B4 FF FF: call 0x4178b2
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
