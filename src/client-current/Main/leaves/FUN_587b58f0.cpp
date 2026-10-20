// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B58F0 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_587b58f0() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        sub esp, 0ch
        push esi
        push edi
        push eax
        mov eax, dword ptr [esp + 20h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 20h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 49 E7 FF FF: call 0x587b4060
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        mov dword ptr [esi], 5899a044h
        mov dword ptr [esi + 3914h], edi
        mov dword ptr [esi + 3918h], edi
        mov dword ptr [esi + 391ch], 0c8h
        mov dword ptr [esi + 3920h], 64h
        mov dword ptr [esi + 3924h], 1
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 13: jle 0x587b596a
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x587b596a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587b596c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3a54h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 8
        ; Exact mapped bytes 7E 13: jle 0x587b5993
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x587b5993
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 20h]
        ; Exact mapped bytes EB 02: jmp 0x587b5995
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 3a58h], eax
        mov eax, dword ptr [esi + 0f4h]
        neg eax
        sbb eax, eax
        mov dword ptr [esi + 3910h], 2
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 7
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 17: jle 0x587b59d7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, edi
        ; Exact mapped bytes 7C 13: jl 0x587b59d7
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 18ch], edi
        ; Exact mapped bytes 74 0B: je 0x587b59d7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x587b59d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edx, [esp + 8]
        push edx
        mov dword ptr [esi + 3a54h], eax
        mov dword ptr [esp + 0ch], 1
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes FF 15 80 C0 98 58: call dword ptr [0x5898c080]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 100h
        mov dword ptr [esi + 392ch], eax
        lea eax, [esi + 3954h]
        push edi
        push eax
        mov dword ptr [esi + 3930h], 0ffffffceh
        mov dword ptr [esi + 3938h], 32h
        mov dword ptr [esi + 3934h], 0ffffffe7h
        mov dword ptr [esi + 393ch], 19h
        mov dword ptr [esi + 3950h], edi
        ; Exact mapped bytes E8 08 72 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x72
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        mov dword ptr [esi + 58h], 1
        mov eax, esi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
