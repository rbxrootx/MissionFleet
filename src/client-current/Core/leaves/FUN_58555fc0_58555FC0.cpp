// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58555FC0 .. +0x225 bytes.
extern "C" __declspec(naked) void FUN_58555fc0_58555FC0() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 5E F3 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58555ff7
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3C 61 F3 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x61
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 DD 01 00 00: je 0x585561de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 B6 F7 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb6
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 C5 01 00 00: jne 0x585561d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 64 64 F3 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 02: jne 0x58556026
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB C6: jmp 0x58555fec
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ech]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 A1 01 00 00: je 0x585561d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 16ch], 0
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x585561d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 57 DB F8 FF: call 0x584e3bc0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 60 01 00 00: je 0x585561d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 F4: cvtsi2sd xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 95 AF 2F 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xaf
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 FD B1 2D 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb1
        __asm _emit 0x2d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 122h]
        xor eax, 55h
        push eax
        ; Exact mapped bytes E8 29 E3 F8 FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe3
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B 60 F3 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x60
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 144h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 408h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3f0h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB C5 20 00: call 0x587626d0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc5
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 124h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3f0h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 60h], edx
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 68h], ecx
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 61 F3 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x61
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        push 320h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push -1
        push 2
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 0
        push 0ch
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 B5 06 00: call 0x585c17d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0E FE FF FF: jmp 0x58555fec
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
