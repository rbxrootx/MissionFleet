// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048AC59 .. +0x379 bytes.
extern "C" __declspec(naked) void FUN_0048ac59_0048AC59() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 03 17 00 00: call 0x48c380
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 10h
        mov esi, esp
        push 0
        push 0
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 58h]
        push eax
        ; Exact mapped bytes FF 15 20 29 5E 00: call dword ptr [0x5e2920]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3A DB 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 0F 03 00 00: je 0x48afc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ecx + 0bb4h]
        cmp eax, dword ptr [edx + 64h]
        ; Exact mapped bytes 76 2D: jbe 0x48acf1
        __asm _emit 0x76
        __asm _emit 0x2d
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 07 DB 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 DA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 D1 02 00 00: jmp 0x48afc2
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 23h
        push 464h
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 34 29 5E 00: call dword ptr [0x5e2934]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CE DA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 2D: jne 0x48ad44
        __asm _emit 0x75
        __asm _emit 0x2d
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B4 DA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A1 DA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 7E 02 00 00: jmp 0x48afc2
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 10000h
        mov esi, esp
        push 4
        lea edx, [ebp - 1ch]
        push edx
        push 1001h
        push 0ffffh
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 0C 29 5E 00: call dword ptr [0x5e290c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 72 DA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 2D: jne 0x48ada0
        __asm _emit 0x75
        __asm _emit 0x2d
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 58 DA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 45 DA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 22 02 00 00: jmp 0x48afc2
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 8000h
        mov esi, esp
        push 4
        lea eax, [ebp - 20h]
        push eax
        push 1002h
        push 0ffffh
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 0C 29 5E 00: call dword ptr [0x5e290c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 16 DA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 2D: jne 0x48adfc
        __asm _emit 0x75
        __asm _emit 0x2d
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FC D9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E9 D9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 C6 01 00 00: jmp 0x48afc2
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push -1
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CB D9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x48af9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 DC CB 5D 00: mov eax, dword ptr [0x5dcbdc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 DC CB 5D 00: mov dword ptr [0x5dcbdc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 92 E3 FF FF: call 0x4891e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x48af61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 0c28h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0c28h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 61 D9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x48af28
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 0bb4h]
        add ecx, 1
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0bb4h], ecx
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80010109h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7B C3 FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        push eax
        push 0
        push 468h
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 40h]
        ; Exact mapped bytes E8 0C 0D 0B 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 0ach], 1
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 F2 D8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EA 13 00 00: call 0x48c2e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x48af26
        __asm _emit 0x74
        __asm _emit 0x2c
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D7 D8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0bb4h]
        imul edx, eax
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A2 13 00 00: call 0x48c2c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1B E1 FF FF: call 0x489041
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 37: jmp 0x48af5f
        __asm _emit 0xeb
        __asm _emit 0x37
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F0 C2 FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 89 D8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F6 BE FF FF: call 0x486e55
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 61: jmp 0x48afc2
        __asm _emit 0xeb
        __asm _emit 0x61
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B7 C2 FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 D8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BD BE FF FF: call 0x486e55
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x48afc2
        __asm _emit 0xeb
        __asm _emit 0x28
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 54 29 5E 00: call dword ptr [0x5e2954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 D8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1E D8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 12 D8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
