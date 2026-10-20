// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BCE10 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_588bce10() {
    __asm {
        sub esp, 104h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 100h], eax
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 30h]
        mov byte ptr [edi + 0ach], 0
        mov byte ptr [edi + 0adh], 0
        mov byte ptr [edi + 0aeh], 0
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 170h]
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edi + 3dch], edx
        lea ebp, [edi + 3d4h]
        mov ebx, 2
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 87 B9 04 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        add ebp, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F0: jne 0x588bce61
        __asm _emit 0x75
        __asm _emit 0xf0
        test esi, esi
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x588bcf73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D C4 C3 98 58: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D 40 C0 98 58: mov ebp, dword ptr [0x5898c040]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 09: jmp 0x588bce90
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edi
        movzx eax, word ptr [esi + 90h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        shr eax, 10h
        push eax
        ; Exact mapped bytes E8 E9 C9 EB FF: call 0x58779890
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x588bceb8
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [eax + 554h], 1
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x588bcf73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp esi, dword ptr [eax + 30h]
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x588bcf4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 23 96 02 00: call 0x588e64f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7C: jne 0x588bcf4d
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [esi + 0cc0h]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, 3e0h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 FA 60: cmp dx, 0x60
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x60
        ; Exact mapped bytes 74 64: je 0x588bcf4d
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [esi + 6ch]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 BC EB FF: call 0x58778b20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbc
        __asm _emit 0xeb
        __asm _emit 0xff
        lea edx, [eax + 33ch]
        movzx eax, word ptr [eax + 4]
        push edx
        and eax, 1fh
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        lea ecx, [esp + 18h]
        push 58998394h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [edi + 3d4h]
        add esp, 10h
        push 0ffffffh
        push esi
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 9E B9 04 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 48h]
        push 0ffffffh
        shr eax, 0ah
        push eax
        lea ecx, [esi + 54h]
        push ecx
        mov ecx, dword ptr [edi + 3d8h]
        ; Exact mapped bytes E8 83 B9 04 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        inc byte ptr [edi + 0ach]
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov al, byte ptr [edi + 0ach]
        cmp esi, dword ptr [edx + 8]
        ; Exact mapped bytes 74 0F: je 0x588bcf73
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp al, 64h
        ; Exact mapped bytes 74 0B: je 0x588bcf73
        __asm _emit 0x74
        __asm _emit 0x0b
        mov esi, dword ptr [esi + 0ce4h]
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x588bce90
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [edi + 0b0h]
        mov ecx, 64h
        xor edx, edx
        mov dword ptr [eax + 190h], edx
        mov dword ptr [eax], edx
        add eax, 4
        sub ecx, 1
        ; Exact mapped bytes 75 F0: jne 0x588bcf80
        __asm _emit 0x75
        __asm _emit 0xf0
        lea ecx, [edi + 78h]
        mov edx, 7
        ; Exact mapped bytes EB 06: jmp 0x588bcfa0
        __asm _emit 0xeb
        __asm _emit 0x06
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
        ; Exact mapped bytes 75 ED: jne 0x588bcfa0
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [esp + 110h]
        pop edi
        pop esi
        pop ebp
    }
}
