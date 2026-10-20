// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6030 .. +0x25C bytes.
extern "C" __declspec(naked) void FUN_587a6030_587A6030() {
    __asm {
        sub esp, 4b8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 4b4h], eax
        mov eax, dword ptr [esp + 4c8h]
        mov ecx, dword ptr [esp + 4c0h]
        push ebx
        mov ebx, dword ptr [esp + 4c8h]
        push esi
        mov esi, dword ptr [esp + 4c4h]
        push edi
        cmp eax, -1
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x587a6168
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        lea eax, [esp + 474h]
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 C4 AA FF FF: call 0x587a0b40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 0F 84 CB 01 00 00: je 0x587a6254
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 74 15: je 0x587a60a2
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 74 10: je 0x587a60a2
        __asm _emit 0x74
        __asm _emit 0x10
        mov edi, ebx
        lea ecx, [edi + 1]
        mov al, byte ptr [edi]
        inc edi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a6097
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edi, ecx
        ; Exact mapped bytes EB 02: jmp 0x587a60a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, 7ffffffeh
        sub eax, ebp
        cmp edi, eax
        ; Exact mapped bytes 0F 87 AC 01 00 00: ja 0x587a625f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 1]
        add eax, edi
        push eax
        push 74455874h
        push esi
        ; Exact mapped bytes E8 9C DC FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        inc ebp
        test esi, esi
        ; Exact mapped bytes 0F 84 7F 00 00 00: je 0x587a614f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 74 21: je 0x587a60f5
        __asm _emit 0x74
        __asm _emit 0x21
        push ebp
        lea eax, [esp + 478h]
        push eax
        push esi
        ; Exact mapped bytes E8 DD 07 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        lea eax, [esp + 484h]
        push eax
        push esi
        ; Exact mapped bytes E8 BE 94 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x587a6110
        __asm _emit 0x74
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 74 13: je 0x587a6110
        __asm _emit 0x74
        __asm _emit 0x13
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 BB 07 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 A3 94 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 10h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 11h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 12h], al
        lea eax, [esp + 10h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 1fh], cl
        ; Exact mapped bytes E8 74 07 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 4b4h]
        xor ecx, esp
        ; Exact mapped bytes E8 EF AE 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4b8h
        ret
        test eax, eax
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x587a626a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 41ch]
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 C1 A9 FF FF: call 0x587a0b40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x587a6275
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        cmp edi, 51h
        ; Exact mapped bytes 0F 83 B9 00 00 00: jae 0x587a624f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + edi + 41ch], 0
        inc edi
        test ebx, ebx
        ; Exact mapped bytes 75 04: jne 0x587a61a7
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 12: jmp 0x587a61b9
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, ebx
        lea edx, [ecx + 1]
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a61b0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edx
        push edi
        lea eax, [esp + 14h]
        mov dword ptr [esp + 14h], ebx
        push eax
        push 7a545874h
        push esi
        mov dword ptr [esp + 24h], ecx
        mov dword ptr [esp + 28h], 0
        ; Exact mapped bytes E8 E6 CE FF FF: call 0x587a30c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x587a6280
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        add eax, edi
        push eax
        push 7a545874h
        push esi
        ; Exact mapped bytes E8 69 DB FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 25: je 0x587a6223
        __asm _emit 0x74
        __asm _emit 0x25
        test edi, edi
        ; Exact mapped bytes 74 21: je 0x587a6223
        __asm _emit 0x74
        __asm _emit 0x21
        push edi
        lea eax, [esp + 420h]
        push eax
        push esi
        ; Exact mapped bytes E8 AF 06 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea eax, [esp + 42ch]
        push eax
        push esi
        ; Exact mapped bytes E8 90 93 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        lea eax, [esp + 10h]
        push eax
        push esi
        ; Exact mapped bytes E8 82 DC FF FF: call 0x587a3eb0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 DC DA FF FF: call 0x587a3d10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 4cch]
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 08 AE 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4b8h
        ret
        ; Exact mapped bytes E8 55 AF 08 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x00
        push 588b8ed0h
        push esi
        ; Exact mapped bytes E8 21 8C FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8ee8h
        push esi
        ; Exact mapped bytes E8 16 8C FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8efch
        push esi
        ; Exact mapped bytes E8 0B 8C FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8f1ch
        push esi
        ; Exact mapped bytes E8 00 8C FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 9ch]
        push esi
        ; Exact mapped bytes E8 F4 8B FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
