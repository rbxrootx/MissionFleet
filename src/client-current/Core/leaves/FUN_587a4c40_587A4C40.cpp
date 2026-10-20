// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A4C40 .. +0x292 bytes.
extern "C" __declspec(naked) void FUN_587a4c40_587A4C40() {
    __asm {
        sub esp, 47ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 478h], eax
        mov eax, dword ptr [esp + 494h]
        lea ecx, [esp + 424h]
        push ebx
        mov ebx, dword ptr [esp + 490h]
        push esi
        mov esi, dword ptr [esp + 488h]
        push edi
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 49ch]
        push ecx
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 498h]
        push eax
        push esi
        ; Exact mapped bytes E8 AF BE FF FF: call 0x587a0b40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 0F 84 0D 02 00 00: je 0x587a4eab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 490h]
        inc eax
        cmp eax, 3
        ; Exact mapped bytes 0F 87 F1 01 00 00: ja 0x587a4ea0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 D4 4E 7A 58: jmp dword ptr [eax*4 + 0x587a4ed4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x4e
        __asm _emit 0x7a
        __asm _emit 0x58
        inc edi
        cmp edi, 52h
        ; Exact mapped bytes 0F 83 0D 02 00 00: jae 0x587a4ecd
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 0ch], 0
        xor al, al
        ; Exact mapped bytes EB 0B: jmp 0x587a4cd7
        __asm _emit 0xeb
        __asm _emit 0x0b
        inc edi
        mov dword ptr [esp + 0ch], 1
        mov al, 1
        mov byte ptr [esp + edi + 430h], al
        inc edi
        cmp edi, 52h
        ; Exact mapped bytes 0F 83 E5 01 00 00: jae 0x587a4ecd
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov byte ptr [esp + edi + 434h], 0
        mov ebp, 58895250h
        inc edi
        mov eax, ebp
        test ebx, ebx
        cmovne eax, ebx
        mov ecx, eax
        mov dword ptr [esp + 1ch], eax
        lea edx, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a4d07
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edx
        mov eax, ebp
        lea ebx, [ecx + 1]
        mov ecx, dword ptr [esp + 14h]
        test ecx, ecx
        mov dword ptr [esp + 20h], ebx
        cmovne eax, ecx
        mov ecx, eax
        mov dword ptr [esp + 14h], eax
        lea edx, [ecx + 1]
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a4d30
        __asm _emit 0x75
        __asm _emit 0xf9
        mov eax, dword ptr [esp + 18h]
        sub ecx, edx
        inc ecx
        mov edx, 7fffffffh
        test eax, eax
        mov dword ptr [esp + 24h], ecx
        cmovne ebp, eax
        mov eax, edx
        sub eax, edi
        cmp ebx, eax
        ; Exact mapped bytes 76 04: jbe 0x587a4d58
        __asm _emit 0x76
        __asm _emit 0x04
        mov ebx, edx
        ; Exact mapped bytes EB 02: jmp 0x587a4d5a
        __asm _emit 0xeb
        __asm _emit 0x02
        add ebx, edi
        mov eax, edx
        sub eax, ebx
        cmp ecx, eax
        ; Exact mapped bytes 76 04: jbe 0x587a4d66
        __asm _emit 0x76
        __asm _emit 0x04
        mov ebx, edx
        ; Exact mapped bytes EB 02: jmp 0x587a4d68
        __asm _emit 0xeb
        __asm _emit 0x02
        add ebx, ecx
        mov ecx, ebp
        lea eax, [ecx + 1]
        mov dword ptr [esp + 18h], eax
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a4d71
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, dword ptr [esp + 18h]
        cmp dword ptr [esp + 10h], 0
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [esp + 30h], 0
        ; Exact mapped bytes 74 22: je 0x587a4db5
        __asm _emit 0x74
        __asm _emit 0x22
        push ebx
        lea eax, [esp + 2ch]
        push eax
        push 69545874h
        push esi
        ; Exact mapped bytes E8 1C E3 FF FF: call 0x587a30c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 07 01 00 00: jne 0x587a4eb6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 0E: jmp 0x587a4dc3
        __asm _emit 0xeb
        __asm _emit 0x0e
        sub edx, ebx
        cmp ecx, edx
        ; Exact mapped bytes 0F 87 03 01 00 00: ja 0x587a4ec2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 30h], ecx
        lea eax, [ecx + ebx]
        push eax
        push 69545874h
        push esi
        ; Exact mapped bytes E8 8E EF FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 6B: je 0x587a4e44
        __asm _emit 0x74
        __asm _emit 0x6b
        test edi, edi
        ; Exact mapped bytes 74 21: je 0x587a4dfe
        __asm _emit 0x74
        __asm _emit 0x21
        push edi
        lea eax, [esp + 438h]
        push eax
        push esi
        ; Exact mapped bytes E8 D4 1A 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea eax, [esp + 444h]
        push eax
        push esi
        ; Exact mapped bytes E8 B5 A7 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ebx, dword ptr [esp + 1ch]
        test ebx, ebx
        ; Exact mapped bytes 74 1B: je 0x587a4e21
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edi, dword ptr [esp + 20h]
        test edi, edi
        ; Exact mapped bytes 74 13: je 0x587a4e21
        __asm _emit 0x74
        __asm _emit 0x13
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 AA 1A 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 92 A7 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ebx, dword ptr [esp + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 1B: je 0x587a4e44
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edi, dword ptr [esp + 24h]
        test edi, edi
        ; Exact mapped bytes 74 13: je 0x587a4e44
        __asm _emit 0x74
        __asm _emit 0x13
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 87 1A 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 6F A7 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 10: je 0x587a4e5b
        __asm _emit 0x74
        __asm _emit 0x10
        lea eax, [esp + 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 5A F0 FF FF: call 0x587a3eb0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 23: jmp 0x587a4e7e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edi, dword ptr [esp + 30h]
        test esi, esi
        ; Exact mapped bytes 74 1B: je 0x587a4e7e
        __asm _emit 0x74
        __asm _emit 0x1b
        test ebp, ebp
        ; Exact mapped bytes 74 17: je 0x587a4e7e
        __asm _emit 0x74
        __asm _emit 0x17
        test edi, edi
        ; Exact mapped bytes 74 13: je 0x587a4e7e
        __asm _emit 0x74
        __asm _emit 0x13
        push edi
        push ebp
        push esi
        ; Exact mapped bytes E8 4D 1A 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebp
        push esi
        ; Exact mapped bytes E8 35 A7 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push esi
        ; Exact mapped bytes E8 8C EE FF FF: call 0x587a3d10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 48ch]
        add esp, 4
        pop ebp
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 B7 C1 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 47ch
        ret
        push 588b8f4ch
        push esi
        ; Exact mapped bytes E8 D5 9F FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8f34h
        push esi
        ; Exact mapped bytes E8 CA 9F FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 9ch]
        push esi
        ; Exact mapped bytes E8 BE 9F FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8f68h
        push esi
        ; Exact mapped bytes E8 B3 9F FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D7 C2 08 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
