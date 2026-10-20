// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EA8E0 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_588ea8e0() {
    __asm {
        push -1
        push 589898d7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 118h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 114h], eax
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 12ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 13ch]
        push 58a284a0h
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [esp + 24h], 58a284a0h
        ; Exact mapped bytes FF 15 CC C0 98 58: call dword ptr [0x5898c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        xor edi, edi
        mov dword ptr [esp + 134h], edi
        cmp esi, edi
        ; Exact mapped bytes 75 12: jne 0x588ea958
        __asm _emit 0x75
        __asm _emit 0x12
        push 58a284a0h
        ; Exact mapped bytes FF 15 C8 C0 98 58: call dword ptr [0x5898c0c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes E9 9F 01 00 00: jmp 0x588eaaf7
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffh
        lea eax, [esp + 2dh]
        push edi
        push eax
        mov byte ptr [esp + 34h], 0
        ; Exact mapped bytes E8 DB 22 09 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 482ch]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea edx, [eax + eax*4]
        add edx, edx
        mov ebp, ecx
        sub ebp, edx
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        mov eax, esi
        imul eax, eax, 64h
        ; Exact mapped bytes 8B 1D C4 C3 98 58: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        sub ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov dword ptr [esp + 28h], edi
        mov edi, edx
        push ebp
        shr edi, 1fh
        add edi, edx
        push edi
        push esi
        lea ecx, [esp + 40h]
        push 589a148ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 20h
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF 15 78 C1 98 58: call dword ptr [0x5898c178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 67 22 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 134h], 1
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x588eaa10
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        lea ecx, [esp + 30h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 66 93 00 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 0C: jmp 0x588eaa1c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esp + 14h], 0
        mov eax, dword ptr [esp + 14h]
        mov byte ptr [esp + 134h], 0
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588eaa4e
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 0F: jle 0x588eaa40
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588eaa40
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 0E: jne 0x588eaa4e
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 75 08: jne 0x588eaa4e
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 1ch], 1
        push ebp
        push edi
        push esi
        lea edx, [esp + 34h]
        push 589a146ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 14h
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes FF 15 78 C1 98 58: call dword ptr [0x5898c178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 D9 21 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        mov byte ptr [esp + 134h], 2
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588eaa9a
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        lea ecx, [esp + 30h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D8 92 00 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588eaa9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 134h], 0
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x588eaac6
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 0F: jle 0x588eaac0
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588eaac0
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 06: jne 0x588eaac6
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 74 07: je 0x588eaacd
        __asm _emit 0x74
        __asm _emit 0x07
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 74 0B: je 0x588eaad8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes E8 7A FD FF FF: call 0x588ea850
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x588eaae7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        push eax
        push edx
        ; Exact mapped bytes E8 A9 F8 FF FF: call 0x588ea390
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 58a284a0h
        ; Exact mapped bytes FF 15 C8 C0 98 58: call dword ptr [0x5898c0c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, 1
        mov ecx, dword ptr [esp + 12ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 114h]
        xor ecx, esp
        ; Exact mapped bytes E8 C2 20 09 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 124h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
