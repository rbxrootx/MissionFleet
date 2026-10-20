// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100212C0 .. +0x467 bytes.
extern "C" __declspec(naked) void FUN_100212c0_100212C0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, 1
        push edi
        mov eax, dword ptr [esi + 70h]
        cmp eax, ebx
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 0F 85 79 03 00 00: jne 0x10021651
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 43 04 00 00: je 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 75 1A: jne 0x100212fe
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B1 D2 02 00: call 0x1004e5a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 2
        ; Exact mapped bytes 75 22: jne 0x10021325
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 21714h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1002131c
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 48 DA 04 00: call 0x1006ed60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        ; Exact mapped bytes E8 3F B1 04 00: call 0x1006c460
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 3
        ; Exact mapped bytes 75 32: jne 0x1002135c
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40000h
        mov ecx, dword ptr [eax + 0b0h]
        mov edx, dword ptr [eax + 0ach]
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 93 BE 02 00: call 0x1004d1e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 88 CE 04 00: call 0x1006e1e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 4
        ; Exact mapped bytes 0F 84 BE 03 00 00: je 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 0F 84 B5 03 00 00: je 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 75 33: jne 0x100213a6
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push -1
        mov eax, dword ptr [eax + 0d0ch]
        mov ecx, dword ptr [eax + 0b4ch]
        mov eax, dword ptr [eax + 48h]
        shr eax, 0ah
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push 0
        push 0
        push eax
        ; Exact mapped bytes E8 2E C1 02 00: call 0x1004d4d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 7
        ; Exact mapped bytes 75 14: jne 0x100213bf
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 28ah
        ; Exact mapped bytes E8 C5 B0 04 00: call 0x1006c480
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 8
        ; Exact mapped bytes 0F 84 5B 03 00 00: je 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 9
        ; Exact mapped bytes 75 0F: jne 0x100213dc
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 2C 57 1C 10: mov ecx, dword ptr [0x101c572c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C8 70 0A 00: call 0x100c84a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 64h
        ; Exact mapped bytes 75 21: jne 0x10021402
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 53 B6 02 00: call 0x1004ca40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 1c8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 0c8h
        ; Exact mapped bytes 75 0F: jne 0x10021418
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 90h]
        ; Exact mapped bytes E8 0C F5 FE FF: call 0x10010920
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 12ch
        ; Exact mapped bytes 75 1C: jne 0x1002143b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 F9 B7 02 00: call 0x1004cc30
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 12dh
        ; Exact mapped bytes 75 1A: jne 0x1002145c
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d48h]
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes E8 08 61 08 00: call 0x100a7560
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 12eh
        ; Exact mapped bytes 75 0F: jne 0x10021472
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 D2 F1 05 00: call 0x10080640
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 12fh
        ; Exact mapped bytes 75 1B: jne 0x10021494
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 10 92 06 00: call 0x1008a6a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 130h
        ; Exact mapped bytes 75 1B: jne 0x100214b6
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 0e4h]
        ; Exact mapped bytes E8 EE DD 06 00: call 0x1008f2a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdd
        __asm _emit 0x06
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 131h
        ; Exact mapped bytes 0F 84 62 02 00 00: je 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 132h
        ; Exact mapped bytes 0F 84 57 02 00 00: je 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 190h
        ; Exact mapped bytes 75 79: jne 0x1002154c
        __asm _emit 0x75
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 90h]
        push 0
        push 0eeach
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 38 48 03 00: call 0x10055d30
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10021507
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 89 48 03 00: call 0x10055d90
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        mov edx, dword ptr [edi + 4]
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 94 B3 02 00: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 E8 56 1C 10: mov eax, dword ptr [0x101c56e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [eax + 134h], ebx
        mov eax, dword ptr [esi + 90h]
        test eax, eax
        ; Exact mapped bytes 0F 84 EE 01 00 00: je 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 49 B2 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb2
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 90h], 0
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 1f4h
        ; Exact mapped bytes 75 7A: jne 0x100215cd
        __asm _emit 0x75
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 90h]
        push 0
        push 0eeach
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B8 47 03 00: call 0x10055d30
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10021587
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 09 48 03 00: call 0x10055d90
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 4]
        push 0
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 14 B3 02 00: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 E8 56 1C 10: mov edx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [edx + 134h], ebx
        mov eax, dword ptr [esi + 90h]
        test eax, eax
        ; Exact mapped bytes 0F 84 6D 01 00 00: je 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 C8 B1 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb1
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 90h], 0
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 258h
        ; Exact mapped bytes 75 2E: jne 0x10021602
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        mov ecx, dword ptr [eax + 0d0ch]
        mov edx, dword ptr [ecx + 48h]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 0ah
        push edx
        push 0
        push 8001d002h
        ; Exact mapped bytes E8 52 A9 14 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 2bch
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x10021723
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        mov ecx, dword ptr [eax + 0d68h]
        mov eax, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov edx, dword ptr [eax*4 + 101ace80h]
        push edx
        push 8001f002h
        ; Exact mapped bytes E8 13 A9 14 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d68h]
        ; Exact mapped bytes E8 E3 74 07 00: call 0x10098b30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 2
        ; Exact mapped bytes 75 1A: jne 0x10021670
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3F CF 02 00: call 0x1004e5a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 6C FC FF FF: je 0x100212e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 12h
        ; Exact mapped bytes 75 0F: jne 0x1002168c
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 90h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 14h
        ; Exact mapped bytes 74 5C: je 0x100216ed
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp eax, 28h
        ; Exact mapped bytes 74 57: je 0x100216ed
        __asm _emit 0x74
        __asm _emit 0x57
        cmp eax, 320h
        ; Exact mapped bytes 74 50: je 0x100216ed
        __asm _emit 0x74
        __asm _emit 0x50
        cmp eax, 321h
        ; Exact mapped bytes 74 49: je 0x100216ed
        __asm _emit 0x74
        __asm _emit 0x49
        cmp eax, 322h
        ; Exact mapped bytes 74 42: je 0x100216ed
        __asm _emit 0x74
        __asm _emit 0x42
        cmp eax, 323h
        ; Exact mapped bytes 74 3B: je 0x100216ed
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp eax, 190h
        ; Exact mapped bytes 75 18: jne 0x100216d1
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [eax + 1c8h]
        ; Exact mapped bytes 66 C7 81 9C 01 00 00 00 00: mov word ptr [ecx + 0x19c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ret
        cmp eax, 192h
        ; Exact mapped bytes 75 4B: jne 0x10021723
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 1c8h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        ret
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 9a4h]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x10021723
        __asm _emit 0x74
        __asm _emit 0x26
        xor edx, edx
        mov dl, byte ptr [eax + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 19: jne 0x10021723
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push eax
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 94h], ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}
