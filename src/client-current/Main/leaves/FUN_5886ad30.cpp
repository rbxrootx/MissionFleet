// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886AD30 .. +0x2F7 bytes.
extern "C" __declspec(naked) void FUN_5886ad30() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ecx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 5B 01 00 00: jne 0x5886ae9c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        cmp eax, dword ptr [edi + 6ch]
        ; Exact mapped bytes 75 2B: jne 0x5886ad75
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes E8 B1 F5 FF FF: call 0x5886a300
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C9 02 00 00: je 0x5886b020
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D8 45 A2 58: mov ecx, dword ptr [0x58a245d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1eh
        push 0
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 72 16 FB FF: call 0x5881c3e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [edi + 70h]
        ; Exact mapped bytes 75 0E: jne 0x5886ad88
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [edi + 74h]
        ; Exact mapped bytes 0F 85 8F 02 00 00: jne 0x5886b020
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80011034h
        ; Exact mapped bytes E8 C5 5E 10 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes E8 86 1E 11 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0x00
        cdq
        mov ecx, 3e8h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 6C: je 0x5886ae28
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 28h
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 17: jle 0x5886ade5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x5886ade5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 194h]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x5886ade7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 9E CB 09 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x5886ae8b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 7F: je 0x5886ae8b
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0a0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 6
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 14: jle 0x5886ae4e
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5886ae4e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes EB 02: jmp 0x5886ae50
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 34 CB 09 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 22: jle 0x5886ae8b
        __asm _emit 0x7e
        __asm _emit 0x22
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 19: je 0x5886ae8b
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 5B: jne 0x5886aefc
        __asm _emit 0x75
        __asm _emit 0x5b
        mov esi, dword ptr [esp + 0ch]
        cmp esi, dword ptr [edi + 6ch]
        ; Exact mapped bytes 75 14: jne 0x5886aebe
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [edi + 28ch], 0
        ; Exact mapped bytes 0F 85 69 01 00 00: jne 0x5886b020
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899ed88h
        ; Exact mapped bytes EB 1A: jmp 0x5886aed8
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp esi, dword ptr [edi + 70h]
        ; Exact mapped bytes 75 07: jne 0x5886aeca
        __asm _emit 0x75
        __asm _emit 0x07
        push 5899ed60h
        ; Exact mapped bytes EB 0E: jmp 0x5886aed8
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp esi, dword ptr [edi + 74h]
        ; Exact mapped bytes 0F 85 4D 01 00 00: jne 0x5886b020
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899ed40h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        push 32h
        push 0c8h
        push esi
        ; Exact mapped bytes E8 CB 77 EF FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x77
        __asm _emit 0xef
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 17: jne 0x5886af18
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 76 EF FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0xef
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 63h
        ; Exact mapped bytes 75 0C: jne 0x5886af29
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 7E F4 FF FF: call 0x5886a3a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 64h
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x5886b020
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80011034h
        ; Exact mapped bytes E8 24 5D 10 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x5d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 1C 11 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1c
        __asm _emit 0x11
        __asm _emit 0x00
        cdq
        mov ecx, 3e8h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 5A: je 0x5886afb7
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 28h
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 17: jle 0x5886af86
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x5886af86
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 194h]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x5886af88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 FD C9 09 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 6C: jle 0x5886b00c
        __asm _emit 0x7e
        __asm _emit 0x6c
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 63: je 0x5886b00c
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes EB 57: jmp 0x5886b00e
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 6
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 14: jle 0x5886afdd
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5886afdd
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes EB 02: jmp 0x5886afdf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 A5 C9 09 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 14: jle 0x5886b00c
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5886b00c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes EB 02: jmp 0x5886b00e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
