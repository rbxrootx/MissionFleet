// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F45E0 .. +0x131 bytes.
extern "C" __declspec(naked) void FUN_585f45e0_585F45E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ff0000h
        shr eax, 10h
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ff000000h
        shr ecx, 10h
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        cmp edx, 800h
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x585f46f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 8]
        cmp eax, 1
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x585f46f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 4]
        cmp ecx, 2000h
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x585f46f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffff0000h
        shr edx, 10h
        cmp edx, 1
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x585f46f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 30h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 F9 F2 FF: call 0x58524010
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 7E: je 0x585f46f0
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D6 CF ED FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xcf
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x585f46f0
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 23 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x23
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 23 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x23
        __asm _emit 0xe9
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 26 23 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x23
        __asm _emit 0xe9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 23 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x23
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF 79 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x79
        __asm _emit 0xe9
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F5 79 E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x79
        __asm _emit 0xe9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 14h], esi
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [ebp - 14h]
        shl eax, 2
        cdq
        mov esi, 9
        idiv esi
        add ecx, eax
        cmp ecx, 9c400h
        ; Exact mapped bytes 7D 0D: jge 0x585f46f0
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E1 95 16 00: call 0x5875dcd0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 AD 0E 00: call 0x586df4c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
