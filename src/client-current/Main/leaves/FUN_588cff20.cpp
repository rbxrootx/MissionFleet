// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFF20 .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_588cff20() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        test byte ptr [eax + 3ch], 1
        push edi
        ; Exact mapped bytes 0F 84 96 01 00 00: je 0x588d00c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 30h]
        mov edx, dword ptr [eax + 0a4ch]
        mov eax, dword ptr [eax + 4ch]
        xor edx, 0aaaaaaaah
        xor eax, 0aaaaaaaah
        cmp eax, edx
        ; Exact mapped bytes 74 1E: je 0x588cff72
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 3ach
        ; Exact mapped bytes E8 8C BB E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xbb
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 4D E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x4d
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        ; Exact mapped bytes A0 FD B1 A0 58: mov al, byte ptr [0x58a0b1fd]
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp al, 0ffh
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x588d00c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 5
        ; Exact mapped bytes 0F 83 24 01 00 00: jae 0x588d00ab
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        mov eax, dword ptr [edx*4 + 58a0b1e4h]
        push eax
        ; Exact mapped bytes E8 C9 40 02 00: call 0x588f4060
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x588d008d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 83 B9 84 00 00 00 05: cmp word ptr [ecx + 0x84], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 52: jne 0x588cfffe
        __asm _emit 0x75
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 30h]
        mov edx, dword ptr [ecx + 0cc0h]
        movzx ebp, word ptr [edx + 0ch]
        shr ebp, 0ah
        xor ebx, ebx
        and ebp, 1fh
        ; Exact mapped bytes 7E 35: jle 0x588cfffe
        __asm _emit 0x7e
        __asm _emit 0x35
        lea edi, [eax + 0bc0h]
        nop
        xor edx, edx
        mov esi, edi
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x588cffed
        __asm _emit 0x74
        __asm _emit 0x13
        cmp byte ptr [ecx], 0bh
        ; Exact mapped bytes 75 0E: jne 0x588cffed
        __asm _emit 0x75
        __asm _emit 0x0e
        mov cl, byte ptr [ecx + 9bh]
        and cl, 0fh
        cmp cl, 5
        ; Exact mapped bytes 74 48: je 0x588d0035
        __asm _emit 0x74
        __asm _emit 0x48
        inc edx
        add esi, 4
        cmp edx, 2
        ; Exact mapped bytes 7C DE: jl 0x588cffd4
        __asm _emit 0x7c
        __asm _emit 0xde
        inc ebx
        add edi, 8
        cmp ebx, ebp
        ; Exact mapped bytes 7C D2: jl 0x588cffd0
        __asm _emit 0x7c
        __asm _emit 0xd2
        mov edx, dword ptr [eax + 0a4ch]
        mov ecx, dword ptr [eax + 4ch]
        xor edx, 0aaaaaaaah
        xor ecx, 0aaaaaaaah
        cmp edx, ecx
        ; Exact mapped bytes 74 39: je 0x588d0050
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        push 0
        push 3a7h
        ; Exact mapped bytes E8 C9 BA E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xba
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 02 4D E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4d
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        push 0
        push 0
        push 0
        push 2eh
        ; Exact mapped bytes E8 AE BA E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xba
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 4C E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        mov edx, dword ptr [eax + 0cc0h]
        mov eax, 51eb851fh
        mul dword ptr [edx + 60h]
        ; Exact mapped bytes A1 68 B4 A0 58: mov eax, dword ptr [0x58a0b468]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        shr edx, 5
        xor eax, 0aaaaaaaah
        cmp eax, edx
        ; Exact mapped bytes 73 5A: jae 0x588d00c9
        __asm _emit 0x73
        __asm _emit 0x5a
        push 0
        push 0
        push 0
        push 3aeh
        ; Exact mapped bytes E8 71 BA E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xba
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AA 4C E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        push 0
        push 0
        push 0
        push 3a5h
        ; Exact mapped bytes E8 53 BA E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xba
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8C 4C E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        push 0
        push 0
        push 0
        push 3a6h
        ; Exact mapped bytes E8 35 BA E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xba
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E 4C E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    }
}
