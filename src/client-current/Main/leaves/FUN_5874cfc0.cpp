// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874CFC0 .. +0x3B1 bytes.
extern "C" __declspec(naked) void FUN_5874cfc0() {
    __asm {
        sub esp, 14h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 10h], eax
        push ebp
        mov ebp, ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, dword ptr [ecx + 30h]
        mov edx, dword ptr [esi + 0cc0h]
        movzx eax, word ptr [edx + 4]
        and eax, 1fh
        mov dword ptr [esp + 10h], ebp
        cmp eax, 3
        ; Exact mapped bytes 74 32: je 0x5874d023
        __asm _emit 0x74
        __asm _emit 0x32
        add eax, -6
        cmp eax, 3
        ; Exact mapped bytes 77 79: ja 0x5874d072
        __asm _emit 0x77
        __asm _emit 0x79
        push 0
        push 0
        push 0
        push 43ah
        ; Exact mapped bytes E8 E7 EA 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 20 7D 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        xor al, al
        pop ebp
        mov ecx, dword ptr [esp + 10h]
        xor ecx, esp
        ; Exact mapped bytes E8 BB FB 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 14h
        ret
        movzx eax, word ptr [edx + 35eh]
        cmp eax, 139fh
        ; Exact mapped bytes 7F 2C: jg 0x5874d05d
        __asm _emit 0x7f
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x5874d0de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0bd2h
        ; Exact mapped bytes 7F 18: jg 0x5874d056
        __asm _emit 0x7f
        __asm _emit 0x18
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5874d0de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 403h
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x5874d0de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7d8h
        ; Exact mapped bytes EB 1A: jmp 0x5874d070
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp eax, 0fb1h
        ; Exact mapped bytes EB 13: jmp 0x5874d070
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp eax, 1787h
        ; Exact mapped bytes 74 7A: je 0x5874d0de
        __asm _emit 0x74
        __asm _emit 0x7a
        cmp eax, 1b71h
        ; Exact mapped bytes 74 73: je 0x5874d0de
        __asm _emit 0x74
        __asm _emit 0x73
        cmp eax, 1f58h
        ; Exact mapped bytes 74 6C: je 0x5874d0de
        __asm _emit 0x74
        __asm _emit 0x6c
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x5874d095
        __asm _emit 0x74
        __asm _emit 0x1f
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x5874d095
        __asm _emit 0x74
        __asm _emit 0x1b
        movzx eax, word ptr [edx + 2]
        cmp eax, 1ebh
        ; Exact mapped bytes 7F 52: jg 0x5874d0d7
        __asm _emit 0x7f
        __asm _emit 0x52
        ; Exact mapped bytes 74 57: je 0x5874d0de
        __asm _emit 0x74
        __asm _emit 0x57
        cmp eax, 0c8h
        ; Exact mapped bytes 74 50: je 0x5874d0de
        __asm _emit 0x74
        __asm _emit 0x50
        cmp eax, 1c4h
        ; Exact mapped bytes 74 49: je 0x5874d0de
        __asm _emit 0x74
        __asm _emit 0x49
        mov dword ptr [esp + 0ch], esi
        test esi, esi
        ; Exact mapped bytes 75 6D: jne 0x5874d10a
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0d78h]
        mov dword ptr [esp + 0ch], eax
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x5874d108
        __asm _emit 0x75
        __asm _emit 0x58
        push eax
        push eax
        push eax
        push 389h
        ; Exact mapped bytes E8 33 EA 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6C 7C 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        xor al, al
        pop ebp
        mov ecx, dword ptr [esp + 10h]
        xor ecx, esp
        ; Exact mapped bytes E8 07 FB 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 14h
        ret
        cmp eax, 22eh
        ; Exact mapped bytes 75 B7: jne 0x5874d095
        __asm _emit 0x75
        __asm _emit 0xb7
        push 0
        push 0
        push 0
        push 2719h
        ; Exact mapped bytes E8 02 EA 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3B 7C 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        xor al, al
        pop ebp
        mov ecx, dword ptr [esp + 10h]
        xor ecx, esp
        ; Exact mapped bytes E8 D6 FA 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 14h
        ret
        mov esi, eax
        mov edx, dword ptr [esi + 0cc0h]
        movzx edx, word ptr [edx + 4]
        mov eax, edx
        shr eax, 5
        and eax, 1fh
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 2A: jne 0x5874d14c
        __asm _emit 0x75
        __asm _emit 0x2a
        push 0
        push 0
        push 0
        push 392h
        ; Exact mapped bytes E8 BE E9 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F7 7B 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        xor al, al
        pop ebp
        mov ecx, dword ptr [esp + 10h]
        xor ecx, esp
        ; Exact mapped bytes E8 92 FA 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 14h
        ret
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 3B: jne 0x5874d18d
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, edx
        and eax, 1fh
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 74 06: je 0x5874d163
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 2A: jne 0x5874d18d
        __asm _emit 0x75
        __asm _emit 0x2a
        push 0
        push 0
        push 0
        push 394h
        ; Exact mapped bytes E8 7D E9 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B6 7B 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        xor al, al
        pop ebp
        mov ecx, dword ptr [esp + 10h]
        xor ecx, esp
        ; Exact mapped bytes E8 51 FA 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfa
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 14h
        ret
        ; Exact mapped bytes A0 FD B1 A0 58: mov al, byte ptr [0x58a0b1fd]
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        push ebx
        push edi
        cmp al, 0ffh
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5874d271
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 11h], 0
        cmp al, 5
        ; Exact mapped bytes 0F 83 C8 00 00 00: jae 0x5874d271
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        mov edx, dword ptr [eax*4 + 58a0b1e4h]
        push edx
        ; Exact mapped bytes E8 A7 6E 1A 00: call 0x588f4060
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x5874d271
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
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
        ; Exact mapped bytes 7E 3E: jle 0x5874d21e
        __asm _emit 0x7e
        __asm _emit 0x3e
        lea ebp, [ebx + 0bc0h]
        xor edx, edx
        mov esi, ebp
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x5874d209
        __asm _emit 0x74
        __asm _emit 0x13
        cmp byte ptr [ecx], 0bh
        ; Exact mapped bytes 75 0E: jne 0x5874d209
        __asm _emit 0x75
        __asm _emit 0x0e
        mov cl, byte ptr [ecx + 9bh]
        and cl, 0fh
        cmp cl, 5
        ; Exact mapped bytes 74 5A: je 0x5874d263
        __asm _emit 0x74
        __asm _emit 0x5a
        inc edx
        add esi, 4
        cmp edx, 2
        ; Exact mapped bytes 7C DE: jl 0x5874d1f0
        __asm _emit 0x7c
        __asm _emit 0xde
        inc eax
        add ebp, 8
        cmp eax, edi
        ; Exact mapped bytes 7C CC: jl 0x5874d1e6
        __asm _emit 0x7c
        __asm _emit 0xcc
        mov ebp, dword ptr [esp + 18h]
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
        ; Exact mapped bytes 74 14: je 0x5874d24a
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
        cmp al, byte ptr [esp + 11h]
        ; Exact mapped bytes 76 04: jbe 0x5874d24a
        __asm _emit 0x76
        __asm _emit 0x04
        mov byte ptr [esp + 11h], al
        add ecx, 4
        sub esi, 1
        ; Exact mapped bytes 75 DE: jne 0x5874d230
        __asm _emit 0x75
        __asm _emit 0xde
        cmp byte ptr [esp + 11h], 4fh
        ; Exact mapped bytes 76 14: jbe 0x5874d26d
        __asm _emit 0x76
        __asm _emit 0x14
        push esi
        push esi
        push esi
        push 3b0h
        ; Exact mapped bytes EB 7D: jmp 0x5874d2e0
        __asm _emit 0xeb
        __asm _emit 0x7d
        push 0
        push 0
        push 0
        push 2fh
        ; Exact mapped bytes EB 73: jmp 0x5874d2e0
        __asm _emit 0xeb
        __asm _emit 0x73
        mov esi, dword ptr [esp + 14h]
        mov ecx, ebp
        ; Exact mapped bytes E8 A8 E6 FF FF: call 0x5874b920
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 70: je 0x5874d2ec
        __asm _emit 0x74
        __asm _emit 0x70
        lea edx, [esp + 13h]
        push edx
        lea eax, [esp + 16h]
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 20h], 1
        mov byte ptr [esp + 21h], 2
        mov byte ptr [esp + 22h], 3
        mov byte ptr [esp + 23h], 4
        mov byte ptr [esp + 24h], 5
        mov byte ptr [esp + 25h], 8
        mov byte ptr [esp + 26h], 6
        mov byte ptr [esp + 27h], 7
        ; Exact mapped bytes E8 FB D6 FF FF: call 0x5874a9b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0cc0h]
        movzx edx, word ptr [ecx + 4]
        mov ecx, edx
        xor eax, eax
        and ecx, 1fh
        ; Exact mapped bytes 0F BE 74 04 18: movsx esi, byte ptr [esp + eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x18
        cmp ecx, esi
        ; Exact mapped bytes 74 32: je 0x5874d301
        __asm _emit 0x74
        __asm _emit 0x32
        inc eax
        cmp eax, 8
        ; Exact mapped bytes 7C F1: jl 0x5874d2c6
        __asm _emit 0x7c
        __asm _emit 0xf1
        push 0
        push 0
        push 0
        push 38ah
        ; Exact mapped bytes E8 0B E8 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 44 7A 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop ebx
        pop esi
        xor al, al
        pop ebp
        mov ecx, dword ptr [esp + 10h]
        xor ecx, esp
        ; Exact mapped bytes E8 DD F8 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 14h
        ret
        cmp byte ptr [esp + 12h], 4fh
        ; Exact mapped bytes 76 0D: jbe 0x5874d315
        __asm _emit 0x76
        __asm _emit 0x0d
        push 0
        push 0
        push 0
        push 38bh
        ; Exact mapped bytes EB CB: jmp 0x5874d2e0
        __asm _emit 0xeb
        __asm _emit 0xcb
        and edx, 1fh
        ; Exact mapped bytes 66 83 FA 08: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x08
        ; Exact mapped bytes 75 13: jne 0x5874d331
        __asm _emit 0x75
        __asm _emit 0x13
        cmp byte ptr [ebp + 1a0h], 2
        ; Exact mapped bytes 72 0A: jb 0x5874d331
        __asm _emit 0x72
        __asm _emit 0x0a
        push 0
        push 0
        push 0
        push 3eh
        ; Exact mapped bytes EB AF: jmp 0x5874d2e0
        __asm _emit 0xeb
        __asm _emit 0xaf
        ; Exact mapped bytes 66 83 FA 07: cmp dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x07
        ; Exact mapped bytes 74 06: je 0x5874d33d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 FA 06: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 75 1F: jne 0x5874d35c
        __asm _emit 0x75
        __asm _emit 0x1f
        movzx edx, byte ptr [ebp + 19fh]
        movzx eax, byte ptr [ebp + 19eh]
        add edx, eax
        cmp edx, 4
        ; Exact mapped bytes 7C 0A: jl 0x5874d35c
        __asm _emit 0x7c
        __asm _emit 0x0a
        push 0
        push 0
        push 0
        push 3dh
        ; Exact mapped bytes EB 84: jmp 0x5874d2e0
        __asm _emit 0xeb
        __asm _emit 0x84
        mov ecx, dword ptr [esp + 20h]
        pop edi
        pop ebx
        pop esi
        pop ebp
        xor ecx, esp
        mov al, 1
        ; Exact mapped bytes E8 6D F8 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
