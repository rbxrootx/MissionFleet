// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873FC20 .. +0x2EC bytes.
extern "C" __declspec(naked) void FUN_5873fc20_5873FC20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 8F 02 00 00: je 0x5873fec3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0c4h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        ; Exact mapped bytes E8 C9 D1 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        push 50h
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes E8 B6 D1 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 0ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 1ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 30h], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 34h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 38h], 80h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 3ch], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 40h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 44h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 48h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 4ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, 7
        ; Exact mapped bytes 66 89 91 84 00 00 00: mov word ptr [ecx + 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, 7
        ; Exact mapped bytes 66 89 51 36: mov word ptr [ecx + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dl, byte ptr [ecx + 32h]
        and dl, 0f0h
        or dl, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 32h], dl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 80h
        or cl, 18h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 31h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 47h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 0fffffffdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 3ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 3ch]
        and eax, 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        or edx, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ecx + 3ch], edx
        push 588b4948h
        ; Exact mapped bytes E8 63 22 DE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x22
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 30h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 D5 43 07 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 588b4968h
        ; Exact mapped bytes E8 38 22 DE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x22
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        add ecx, 0a6h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 14h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 A4 43 07 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E8 88 0E 11 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0e
        __asm _emit 0x11
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5873fdf0
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        add eax, 1388h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 80h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 87h], 0ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 86h], 3
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5873fe33
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 1A: jge 0x5873fe53
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 7ch]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F0 F9 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x5873fe2a
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 24h], edx
        push 5
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D1 F9 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 28h], eax
        push 5
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B5 F9 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 99 F9 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7E F9 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 4C D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA 6A D4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6a
        __asm _emit 0xd4
        __asm _emit 0xff
        lea ecx, [esi + eax + 2ch]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 97 EE D7 FF: call 0x584bed90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 CC C6 DA FF: call 0x584ec5d0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc6
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
