// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005737CF .. +0x460 bytes.
extern "C" __declspec(naked) void FUN_005737cf_005737CF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        push 2e7h
        push 67cd14h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 72 6A F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E8 7D E2 FB FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x5739ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 34: je 0x573840
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 90 10 01 00 00: call dword ptr [eax + 0x110]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 14: je 0x57383a
        __asm _emit 0x74
        __asm _emit 0x14
        push 2f0h
        push 67cd14h
        ; Exact mapped bytes E8 0B 55 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57383a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x57381a
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 85 C8 FD FF: call 0x5500cd
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x57393e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EE 88 FB FF: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x573885
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 74 18: je 0x573885
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0ach]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        push 2fch
        push 67cd14h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C8 69 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x69
        __asm _emit 0xf6
        __asm _emit 0xff
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 D4 00 00 00: call dword ptr [eax + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 F1 F5 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 54: je 0x57390d
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        push 304h
        push 67cd14h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 8E 69 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x69
        __asm _emit 0xf6
        __asm _emit 0xff
        push 636f38h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B1 68 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5738f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 305h
        push 67cd14h
        ; Exact mapped bytes E8 4E 54 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5738f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5738d2
        __asm _emit 0x75
        __asm _emit 0xd5
        push -1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 90 FB FF: call 0x52c9f6
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C 95 FB FF: call 0x52ce98
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x95
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5B: jmp 0x573999
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 52: je 0x573999
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes E8 24 E2 FB FF: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F4 87 FB FF: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x57397f
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 18: je 0x57397f
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0ach]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0ach]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 2E F6 FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 53 8B FB FF: call 0x52c4e4
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FF 94 FB FF: call 0x52ce98
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 07: jne 0x5739a9
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 C6 71 FA FF: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x71
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x573bcc
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 0c0h], 0
        ; Exact mapped bytes 74 4F: je 0x573a09
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0c0h]
        cmp dword ptr [edx + 0bch], 0
        ; Exact mapped bytes 74 10: je 0x5739dc
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 92 14 01 00 00: call dword ptr [edx + 0x114]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 0c0h], 0
        ; Exact mapped bytes 74 1C: je 0x573a04
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov ecx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ecx + 0c0h]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0c0h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x573c26
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x573b7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A4 C6 FD FF: call 0x5500cd
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 20h], 0
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 24h], eax
        push 336h
        push 67cd14h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 01 68 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0B F0 F5 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 33fh
        push 67cd14h
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 E3 67 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x67
        __asm _emit 0xf6
        __asm _emit 0xff
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 11: je 0x573aa6
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D5 EF F5 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 74 02: je 0x573aa4
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x573aa6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D7: jmp 0x573a7d
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C4 EF F5 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xef
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1B: je 0x573ad2
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 75 08: jne 0x573ad2
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 37: jmp 0x573b09
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 90 9C 00 00 00: call dword ptr [eax + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 75 12: jne 0x573afe
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 D4 00 00 00: call dword ptr [eax + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x573b09
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 85 4C FF FF FF: jne 0x573a5f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 62: je 0x573b7b
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 75 12: jne 0x573b45
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x573b50
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        push 364h
        push 67cd14h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 FD 66 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x66
        __asm _emit 0xf6
        __asm _emit 0xff
        push 365h
        push 67cd14h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 58 C5 FD FF: call 0x5500cd
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E5 66 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x66
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes E8 4A 70 FA FF: call 0x51abd3
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x573bcc
        __asm _emit 0x75
        __asm _emit 0x3f
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 39: je 0x573bcc
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 2C F6 FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x573bcc
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x573bcc
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 08: jne 0x573bcc
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 32 F8 FF: call 0x4f6e70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 74 3C: je 0x573c14
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0E: jne 0x573bec
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0b4h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 28: je 0x573c14
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0ach]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0b4h], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0C: je 0x573c26
        __asm _emit 0x74
        __asm _emit 0x0c
        push 0
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2E 89 FF FF: call 0x56c554
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
