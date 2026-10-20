// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58559030 .. +0x298 bytes.
extern "C" __declspec(naked) void FUN_58559030_58559030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 28 B9 F4 FF: call 0x584a4970
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x585590e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x585590e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1ch
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0E F0 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf0
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 0F: jmp 0x58559088
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F9 E9 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1ch
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F3 F0 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf0
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 2A E9 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x585590cf
        __asm _emit 0x74
        __asm _emit 0x22
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8B E9 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0F: jne 0x585590cd
        __asm _emit 0x75
        __asm _emit 0x0f
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 7A E9 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 02: jmp 0x585590cf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AA: jmp 0x58559079
        __asm _emit 0xeb
        __asm _emit 0xaa
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 12: jne 0x585590e7
        __asm _emit 0x75
        __asm _emit 0x12
        push 588a93dch
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes E9 E7 01 00 00: jmp 0x585592ce
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x585590fe
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x585590f7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x585590fe
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D0 01 00 00: jmp 0x585592ce
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 C4 01 00 00: je 0x585592cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 19: je 0x58559130
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x585591bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x58559246
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x585592c8
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x5855914d
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 10000000h
        ; Exact mapped bytes 74 0A: je 0x5855914d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 81 01 00 00: jmp 0x585592ce
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 48 D8 F2 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5855917f
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58559186
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x585591ac
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1ch
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 05 0E F6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, 1
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x585592ce
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x585592cc
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x585591d8
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 10000000h
        ; Exact mapped bytes 74 0A: je 0x585591d8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x585592ce
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 BD D7 F2 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x5855920a
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58559211
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x58559237
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1ch
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 7A 0D F6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0d
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, 1
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x585592ce
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x585592cc
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x58559260
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 10000000h
        ; Exact mapped bytes 74 07: je 0x58559260
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 6E: jmp 0x585592ce
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 35 D7 F2 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x58559292
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58559299
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x585592bf
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1ch
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F2 0C F6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x585592ce
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 04: jmp 0x585592cc
        __asm _emit 0xeb
        __asm _emit 0x04
    }
}
