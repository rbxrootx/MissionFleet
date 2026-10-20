// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AAC10 .. +0x300 bytes.
extern "C" __declspec(naked) void FUN_587aac10_587AAC10() {
    __asm {
        sub esp, 4ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 48h], eax
        push ebx
        mov ebx, dword ptr [esp + 54h]
        xor al, al
        push ebp
        xor cl, cl
        mov byte ptr [esp + 28h], 0e8h
        xor ebp, ebp
        mov dword ptr [esp + 29h], 0
        push esi
        push edi
        mov byte ptr [esp + 20h], 0e9h
        mov dword ptr [esp + 21h], 0
        ; Exact mapped bytes 66 C7 44 24 28 0F 80: mov word ptr [esp + 0x28], 0x800f
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0f
        __asm _emit 0x80
        mov dword ptr [esp + 2ah], 0
        mov byte ptr [esp + 12h], al
        mov byte ptr [esp + 13h], cl
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [ebx + 0ch], ebp
        mov dword ptr [ebx + 10h], ebp
        mov edi, dword ptr [ebx + 8]
        movzx esi, al
        add esi, dword ptr [ebx]
        movzx eax, cl
        mov dword ptr [esp + 38h], eax
        add edi, eax
        lea eax, [esp + 3ch]
        push eax
        push esi
        ; Exact mapped bytes E8 CD 02 00 00: call 0x587aaf50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, eax
        test dword ptr [esp + 54h], 1000h
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 0F 85 61 02 00 00: jne 0x587aaefb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esp + 12h], 5
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes 72 21: jb 0x587aacc6
        __asm _emit 0x72
        __asm _emit 0x21
        mov eax, esi
        mov dword ptr [esp + 14h], 1
        sub eax, edi
        mov ecx, 5
        sub eax, 5
        mov dword ptr [esp + 21h], eax
        lea eax, [esp + 20h]
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x587aadf2
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [esp + 42h]
        cmp dl, 0e8h
        ; Exact mapped bytes 75 22: jne 0x587aacf1
        __asm _emit 0x75
        __asm _emit 0x22
        movzx eax, byte ptr [esp + 3ch]
        mov ecx, 5
        sub eax, edi
        add eax, -5
        add eax, dword ptr [esp + 4ch]
        add eax, esi
        mov dword ptr [esp + 31h], eax
        lea eax, [esp + 30h]
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x587aadf2
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, dl
        and al, 0fdh
        cmp al, 0e9h
        ; Exact mapped bytes 75 56: jne 0x587aad4f
        __asm _emit 0x75
        __asm _emit 0x56
        movzx ecx, byte ptr [esp + 3ch]
        add ecx, esi
        cmp dl, 0ebh
        ; Exact mapped bytes 75 09: jne 0x587aad0e
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 44 24 4C: movsx eax, byte ptr [esp + 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        add ecx, eax
        ; Exact mapped bytes EB 04: jmp 0x587aad12
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, dword ptr [esp + 4ch]
        mov eax, dword ptr [ebx]
        cmp eax, ecx
        ; Exact mapped bytes 77 17: ja 0x587aad2f
        __asm _emit 0x77
        __asm _emit 0x17
        add eax, 5
        cmp ecx, eax
        ; Exact mapped bytes 73 10: jae 0x587aad2f
        __asm _emit 0x73
        __asm _emit 0x10
        cmp ebp, ecx
        cmovae ecx, ebp
        mov ebp, ecx
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x587aadfa
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, edi
        lea eax, [esp + 20h]
        sub ecx, 5
        cmp esi, ebp
        mov dword ptr [esp + 21h], ecx
        mov ecx, 5
        sbb edx, edx
        inc edx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x587aadf2
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dh, byte ptr [esp + 43h]
        mov ah, dl
        and ah, 0f0h
        cmp ah, 70h
        ; Exact mapped bytes 74 27: je 0x587aad84
        __asm _emit 0x74
        __asm _emit 0x27
        mov al, dl
        and al, 0fch
        cmp al, 0e0h
        ; Exact mapped bytes 74 1F: je 0x587aad84
        __asm _emit 0x74
        __asm _emit 0x1f
        mov al, dh
        and al, 0f0h
        cmp al, 80h
        ; Exact mapped bytes 74 17: je 0x587aad84
        __asm _emit 0x74
        __asm _emit 0x17
        and dl, 0feh
        cmp dl, 0c2h
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x587aadfa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebp
        sbb edx, edx
        inc edx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes EB 76: jmp 0x587aadfa
        __asm _emit 0xeb
        __asm _emit 0x76
        mov al, byte ptr [esp + 3ch]
        movzx ecx, al
        add ecx, esi
        cmp ah, 70h
        ; Exact mapped bytes 74 0E: je 0x587aada0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov al, dl
        and al, 0fch
        cmp al, 0e0h
        ; Exact mapped bytes 74 06: je 0x587aada0
        __asm _emit 0x74
        __asm _emit 0x06
        add ecx, dword ptr [esp + 4ch]
        ; Exact mapped bytes EB 07: jmp 0x587aada7
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 0F BE 44 24 4C: movsx eax, byte ptr [esp + 0x4c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        add ecx, eax
        mov eax, dword ptr [ebx]
        cmp eax, ecx
        ; Exact mapped bytes 77 14: ja 0x587aadc1
        __asm _emit 0x77
        __asm _emit 0x14
        add eax, 5
        cmp ecx, eax
        ; Exact mapped bytes 73 0D: jae 0x587aadc1
        __asm _emit 0x73
        __asm _emit 0x0d
        cmp ebp, ecx
        cmovae ecx, ebp
        mov ebp, ecx
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 39: jmp 0x587aadfa
        __asm _emit 0xeb
        __asm _emit 0x39
        mov al, dl
        and al, 0fch
        cmp al, 0e0h
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x587aaefb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, dl
        cmp dl, 0fh
        ; Exact mapped bytes 75 03: jne 0x587aadd8
        __asm _emit 0x75
        __asm _emit 0x03
        movzx eax, dh
        and al, 0fh
        sub ecx, edi
        or al, 80h
        sub ecx, 6
        mov byte ptr [esp + 29h], al
        lea eax, [esp + 28h]
        mov dword ptr [esp + 2ah], ecx
        mov ecx, 6
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 1ch], eax
        cmp esi, ebp
        ; Exact mapped bytes 73 0D: jae 0x587aae0b
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, byte ptr [esp + 3ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x587aaefb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 38h]
        lea eax, [esi + ecx]
        cmp eax, 20h
        ; Exact mapped bytes 0F 87 E0 00 00 00: ja 0x587aaefb
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 10h]
        cmp eax, 8
        ; Exact mapped bytes 0F 83 D4 00 00 00: jae 0x587aaefb
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [esp + 12h]
        mov byte ptr [eax + ebx + 14h], dl
        mov eax, dword ptr [ebx + 10h]
        mov dl, byte ptr [esp + 13h]
        mov byte ptr [ebx + eax + 1ch], dl
        mov edi, dword ptr [ebx + 8]
        inc dword ptr [ebx + 10h]
        add edi, esi
        mov esi, dword ptr [esp + 1ch]
        mov al, byte ptr [esp + 12h]
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        add al, byte ptr [esp + 3ch]
        mov cl, dl
        add cl, byte ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        mov byte ptr [esp + 13h], cl
        mov byte ptr [esp + 12h], al
        test edx, edx
        ; Exact mapped bytes 0F 84 FD FD FF FF: je 0x587aac67
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp al, 5
        ; Exact mapped bytes 73 75: jae 0x587aaee3
        __asm _emit 0x73
        __asm _emit 0x75
        mov edi, dword ptr [ebx]
        movzx esi, al
        mov eax, 5
        sub eax, esi
        push eax
        lea ebp, [edi + esi]
        push ebp
        ; Exact mapped bytes E8 8C 00 00 00: call 0x587aaf10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x587aaee3
        __asm _emit 0x75
        __asm _emit 0x58
        cmp byte ptr [esp + 12h], 2
        ; Exact mapped bytes 73 15: jae 0x587aaea7
        __asm _emit 0x73
        __asm _emit 0x15
        mov eax, 2
        sub eax, esi
        push eax
        push ebp
        ; Exact mapped bytes E8 70 00 00 00: call 0x587aaf10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x587aaefb
        __asm _emit 0x74
        __asm _emit 0x54
        lea eax, [edi - 5]
        push eax
        ; Exact mapped bytes E8 20 FD FF FF: call 0x587aabd0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x587aaefb
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebx]
        mov cl, byte ptr [edx - 5]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x587aaeca
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 90h
        ; Exact mapped bytes 74 05: je 0x587aaeca
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 0cch
        ; Exact mapped bytes 75 31: jne 0x587aaefb
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, 1
        nop
        cmp byte ptr [edx + eax - 5], cl
        ; Exact mapped bytes 75 25: jne 0x587aaefb
        __asm _emit 0x75
        __asm _emit 0x25
        inc eax
        cmp eax, 5
        ; Exact mapped bytes 72 F4: jb 0x587aaed0
        __asm _emit 0x72
        __asm _emit 0xf4
        mov dword ptr [ebx + 0ch], 1
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        mov ecx, dword ptr [esp + 48h]
        xor ecx, esp
        ; Exact mapped bytes E8 59 61 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4ch
        ret
        mov ecx, dword ptr [esp + 58h]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 44 61 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4ch
        ret
    }
}
