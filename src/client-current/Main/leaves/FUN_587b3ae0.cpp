// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B3AE0 .. +0x16B bytes.
extern "C" __declspec(naked) void FUN_587b3ae0() {
    __asm {
        push -1
        push 58980f43h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 24h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 68 F5 FF FF: call 0x587b3090
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [esi], 58999f24h
        mov dword ptr [esi + 243f0h], edx
        mov dword ptr [esi + 243f4h], 0
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 5
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes 7E 14: jle 0x587b3b6c
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587b3b6c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587b3b6e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 244fch], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 9
        ; Exact mapped bytes 7E 14: jle 0x587b3b96
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587b3b96
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 24h]
        ; Exact mapped bytes EB 02: jmp 0x587b3b98
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 24500h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 8
        ; Exact mapped bytes 7E 14: jle 0x587b3bc0
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587b3bc0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes EB 02: jmp 0x587b3bc2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, esi
        mov dword ptr [esi + 24504h], eax
        ; Exact mapped bytes E8 D1 1A FF FF: call 0x587a56a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        push 0a8h
        ; Exact mapped bytes E8 75 90 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 14h], 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x587b3bfd
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F5 57 FD FF: call 0x587893f0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587b3bff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 100h
        mov dword ptr [esi + 168h], eax
        lea eax, [esi + 243fch]
        push 0
        push eax
        mov dword ptr [esi + 243f8h], 0
        ; Exact mapped bytes E8 26 90 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 0f4h], 1
        mov dword ptr [esi + 58h], 1
        mov eax, esi
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
