// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CC000 .. +0x2F8 bytes.
extern "C" __declspec(naked) void FUN_588cc000() {
    __asm {
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, dword ptr [ecx + 30h]
        test esi, esi
        ; Exact mapped bytes 75 29: jne 0x588cc037
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 0d78h]
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x588cc037
        __asm _emit 0x75
        __asm _emit 0x1a
        push esi
        push esi
        push esi
        push 386h
        ; Exact mapped bytes E8 C6 FA E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF 8C E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0cc0h]
        push ebx
        movzx ebx, word ptr [edx + 4]
        mov eax, ebx
        and eax, 1fh
        cmp eax, 3
        ; Exact mapped bytes 74 26: je 0x588cc072
        __asm _emit 0x74
        __asm _emit 0x26
        add eax, -6
        cmp eax, 3
        ; Exact mapped bytes 77 79: ja 0x588cc0cd
        __asm _emit 0x77
        __asm _emit 0x79
        push 0
        push 0
        push 0
        push 439h
        ; Exact mapped bytes E8 8C FA E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 8C E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xff
        pop ebx
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        movzx eax, word ptr [edx + 35eh]
        cmp eax, 139fh
        ; Exact mapped bytes 7F 2C: jg 0x588cc0ac
        __asm _emit 0x7f
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 84 54 02 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0bd2h
        ; Exact mapped bytes 7F 18: jg 0x588cc0a5
        __asm _emit 0x7f
        __asm _emit 0x18
        ; Exact mapped bytes 0F 84 47 02 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 403h
        ; Exact mapped bytes 0F 84 3C 02 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7d8h
        ; Exact mapped bytes EB 22: jmp 0x588cc0c7
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp eax, 0fb1h
        ; Exact mapped bytes EB 1B: jmp 0x588cc0c7
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp eax, 1787h
        ; Exact mapped bytes 0F 84 23 02 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1b71h
        ; Exact mapped bytes 0F 84 18 02 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1f58h
        ; Exact mapped bytes 0F 84 0D 02 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x588cc0ff
        __asm _emit 0x74
        __asm _emit 0x2e
        movzx eax, word ptr [edx + 2]
        cmp eax, 1ebh
        ; Exact mapped bytes 7F 18: jg 0x588cc0f4
        __asm _emit 0x7f
        __asm _emit 0x18
        ; Exact mapped bytes 0F 84 F8 01 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0c8h
        ; Exact mapped bytes 0F 84 ED 01 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1c4h
        ; Exact mapped bytes EB 05: jmp 0x588cc0f9
        __asm _emit 0xeb
        __asm _emit 0x05
        cmp eax, 22eh
        ; Exact mapped bytes 0F 84 DB 01 00 00: je 0x588cc2da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        shr eax, 5
        and eax, 1fh
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 1E: jne 0x588cc12b
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 391h
        ; Exact mapped bytes E8 D3 F9 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 8C E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xff
        pop ebx
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 2F: jne 0x588cc160
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, ebx
        and eax, 1fh
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 74 06: je 0x588cc142
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 1E: jne 0x588cc160
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 393h
        ; Exact mapped bytes E8 9E F9 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 8B E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8b
        __asm _emit 0xe9
        __asm _emit 0xff
        pop ebx
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        and bl, 1fh
        cmp bl, 9
        ; Exact mapped bytes 75 1E: jne 0x588cc186
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 387h
        ; Exact mapped bytes E8 78 F9 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B1 8B E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8b
        __asm _emit 0xe9
        __asm _emit 0xff
        pop ebx
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        add esi, 9a4h
        mov edi, edi
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588cc1a8
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, 4fh
        ; Exact mapped bytes 0F 87 FE 00 00 00: ja 0x588cc2a6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc edx
        add esi, 4
        cmp edx, 20h
        ; Exact mapped bytes 75 DF: jne 0x588cc190
        __asm _emit 0x75
        __asm _emit 0xdf
        cmp dword ptr [esp + 0ch], 0
        push ebp
        push edi
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x588cc2ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A0 FD B1 A0 58: mov al, byte ptr [0x58a0b1fd]
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp al, 0ffh
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x588cc2ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 14h], 0
        cmp al, 5
        ; Exact mapped bytes 0F 83 F6 00 00 00: jae 0x588cc2ce
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        mov eax, dword ptr [edx*4 + 58a0b1e4h]
        push eax
        ; Exact mapped bytes E8 78 7E 02 00: call 0x588f4060
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x588cc2ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 30h]
        mov ecx, dword ptr [edx + 0cc0h]
        movzx edi, word ptr [ecx + 0ch]
        shr edi, 0ah
        xor eax, eax
        and edi, 1fh
        ; Exact mapped bytes 7E 3F: jle 0x588cc24e
        __asm _emit 0x7e
        __asm _emit 0x3f
        lea ebp, [ebx + 0bc0h]
        xor edx, edx
        mov esi, ebp
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x588cc23d
        __asm _emit 0x74
        __asm _emit 0x17
        cmp byte ptr [ecx], 0bh
        ; Exact mapped bytes 75 12: jne 0x588cc23d
        __asm _emit 0x75
        __asm _emit 0x12
        mov cl, byte ptr [ecx + 9bh]
        and cl, 0fh
        cmp cl, 5
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x588cc2c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc edx
        add esi, 4
        cmp edx, 2
        ; Exact mapped bytes 7C DA: jl 0x588cc220
        __asm _emit 0x7c
        __asm _emit 0xda
        inc eax
        add ebp, 8
        cmp eax, edi
        ; Exact mapped bytes 7C C7: jl 0x588cc215
        __asm _emit 0x7c
        __asm _emit 0xc7
        lea ecx, [ebx + 9a4h]
        mov esi, 20h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x588cc27a
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, byte ptr [esp + 14h]
        ; Exact mapped bytes 76 04: jbe 0x588cc27a
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 14h], al
        add ecx, 4
        sub esi, 1
        ; Exact mapped bytes 75 DE: jne 0x588cc260
        __asm _emit 0x75
        __asm _emit 0xde
        cmp byte ptr [esp + 14h], 4fh
        ; Exact mapped bytes 76 45: jbe 0x588cc2ce
        __asm _emit 0x76
        __asm _emit 0x45
        push esi
        push esi
        push esi
        push 3afh
        ; Exact mapped bytes E8 5A F8 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 8A E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8a
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 388h
        ; Exact mapped bytes E8 3A F8 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 8A E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8a
        __asm _emit 0xe9
        __asm _emit 0xff
        pop ebx
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 2eh
        ; Exact mapped bytes EB C3: jmp 0x588cc291
        __asm _emit 0xeb
        __asm _emit 0xc3
        pop edi
        pop ebp
        pop ebx
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 271ah
        ; Exact mapped bytes E8 06 F8 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3F 8A E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8a
        __asm _emit 0xe9
        __asm _emit 0xff
        pop ebx
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
