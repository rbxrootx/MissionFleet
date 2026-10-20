// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484DDD .. +0x6B3 bytes.
extern "C" __declspec(naked) void FUN_00484ddd_00484DDD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a10h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a10h]
        mov ecx, 284h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0a04h], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CF 39 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 0a04h]
        cmp ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes 0F 82 4E 06 00 00: jb 0x48547d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 0a04h]
        add ecx, dword ptr [edx + 14h]
        mov eax, dword ptr [ebp - 0a04h]
        mov dword ptr [eax + 10h], ecx
        mov ecx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ecx + 214h]
        ; Exact mapped bytes E8 E5 B4 FB FF: call 0x440340
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 1A 06 00 00: je 0x48547d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [edx + 214h]
        ; Exact mapped bytes E8 DC 0D 00 00: call 0x485c50
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 01 06 00 00: je 0x48547d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a04h]
        ; Exact mapped bytes E8 A9 14 00 00: call 0x486330
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E7 05 00 00: je 0x485476
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a04h]
        ; Exact mapped bytes E8 66 11 FA FF: call 0x426000
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 1
        mov edx, dword ptr [ebp - 0a04h]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [eax + 214h]
        ; Exact mapped bytes E8 40 11 00 00: call 0x486000
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 259h
        lea edi, [ebp - 968h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 96ch], 0
        mov ecx, dword ptr [ebp - 964h]
        and ecx, 0ffh
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F8 01 00 00: je 0x4850eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 964h]
        mov byte ptr [ebp - 0a08h], dl
        cmp byte ptr [ebp - 0a08h], 88h
        ; Exact mapped bytes 74 05: je 0x484f0d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x4850e6
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 940h]
        push eax
        mov ecx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ecx + 218h]
        ; Exact mapped bytes E8 FB C3 F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 44 16 00 00: call 0x486570
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 96ch], eax
        cmp dword ptr [ebp - 96ch], 0
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x485070
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        lea edx, [ebp - 928h]
        push edx
        lea eax, [ebp - 963h]
        push eax
        mov ecx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 08 FD F7 FF: call 0x404c68
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 96ch]
        mov dword ptr [edx + 13ch], eax
        mov eax, dword ptr [ebp - 96ch]
        cmp dword ptr [eax + 13ch], -1
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x485051
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 5dcbc8h
        mov ecx, dword ptr [ebp - 96ch]
        mov edx, dword ptr [ecx + 13ch]
        push edx
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 4C 02 F8 FF: call 0x4051f2
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 96ch]
        mov dword ptr [ecx + 140h], eax
        push 0
        push 0
        push 5dcbcch
        mov edx, dword ptr [ebp - 96ch]
        mov eax, dword ptr [edx + 13ch]
        push eax
        mov ecx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 19 02 F8 FF: call 0x4051f2
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 96ch]
        mov dword ptr [edx + 144h], eax
        push 0
        push 0
        push 5dcbd0h
        mov eax, dword ptr [ebp - 96ch]
        mov ecx, dword ptr [eax + 13ch]
        push ecx
        mov edx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 E6 01 F8 FF: call 0x4051f2
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 96ch]
        mov dword ptr [ecx + 148h], eax
        mov edx, dword ptr [ebp - 96ch]
        push edx
        mov ecx, dword ptr [ebp - 0a04h]
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x4849d7
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 96ch]
        push eax
        mov ecx, dword ptr [ebp - 96ch]
        add ecx, 150h
        push ecx
        mov edx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [edx + 18f8h]
        ; Exact mapped bytes E8 FF E8 0A 00: call 0x53394e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x48506e
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 8002h
        push 4
        push 80000003h
        mov ecx, dword ptr [ebp - 96ch]
        ; Exact mapped bytes E8 C4 21 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 69: jmp 0x4850d9
        __asm _emit 0xeb
        __asm _emit 0x69
        push 78h
        lea eax, [ebp - 928h]
        push eax
        lea ecx, [ebp - 963h]
        push ecx
        mov edx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 D7 FB F7 FF: call 0x404c68
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 970h], eax
        push 0
        push 0
        push 5dcbd4h
        mov eax, dword ptr [ebp - 970h]
        push eax
        mov ecx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 3A 01 F8 FF: call 0x4051f2
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        push 0
        push 5dcbd8h
        mov edx, dword ptr [ebp - 970h]
        push edx
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 19 01 F8 FF: call 0x4051f2
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0a04h]
        mov dword ptr [ecx + 8], 0
        ; Exact mapped bytes E9 0B 03 00 00: jmp 0x4853f6
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 964h]
        and edx, 0ffh
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 0F 84 AA 02 00 00: je 0x4853ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp - 964h]
        mov byte ptr [ebp - 0a0ch], al
        cmp byte ptr [ebp - 0a0ch], 41h
        ; Exact mapped bytes 0F 84 90 01 00 00: je 0x4852ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 0a0ch], 44h
        ; Exact mapped bytes 74 61: je 0x485185
        __asm _emit 0x74
        __asm _emit 0x61
        cmp byte ptr [ebp - 0a0ch], 48h
        ; Exact mapped bytes 74 05: je 0x485132
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 78 02 00 00: jmp 0x4853aa
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1eh
        lea esi, [ebp - 928h]
        lea edi, [ebp - 9e8h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [ebp - 940h], -1
        ; Exact mapped bytes 74 32: je 0x485180
        __asm _emit 0x74
        __asm _emit 0x32
        push 78h
        lea ecx, [ebp - 9e8h]
        push ecx
        mov edx, dword ptr [ebp - 940h]
        push edx
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 88 FF F7 FF: call 0x4050f7
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x485180
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0a04h]
        mov dword ptr [ecx + 8], 0
        ; Exact mapped bytes E9 25 02 00 00: jmp 0x4853aa
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 963h]
        push edx
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 0F 9F FB FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 96ch], eax
        cmp dword ptr [ebp - 96ch], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x485239
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 9ech], 31h
        mov dword ptr [ebp - 9f0h], 0
        mov ecx, dword ptr [ebp - 948h]
        mov dword ptr [ebp - 9f4h], ecx
        lea edx, [ebp - 9ech]
        push edx
        lea eax, [ebp - 9f0h]
        push eax
        lea ecx, [ebp - 9f4h]
        push ecx
        ; Exact mapped bytes E8 D6 E5 F7 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe5
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x485239
        __asm _emit 0x75
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 0a04h]
        mov dword ptr [edx + 8], 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 96ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 0b0000h
        push 80021004h
        mov ecx, dword ptr [ebp - 96ch]
        ; Exact mapped bytes E8 09 20 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 96ch]
        ; Exact mapped bytes E8 4A 24 FC FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 71 01 00 00: jmp 0x4853aa
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 934h], -1
        ; Exact mapped bytes 74 64: je 0x4852a6
        __asm _emit 0x74
        __asm _emit 0x64
        push 500h
        lea eax, [ebp - 8b0h]
        push eax
        mov ecx, dword ptr [ebp - 934h]
        push ecx
        mov edx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 16 0D F8 FF: call 0x405f7c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x4852a6
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 544h], 1
        ; Exact mapped bytes 75 26: jne 0x485299
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp - 96ch], 0
        ; Exact mapped bytes 74 1D: je 0x485299
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 96ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 948h]
        mov dword ptr [ecx + edx*4 + 16b14h], 0ffffffffh
        mov eax, dword ptr [ebp - 0a04h]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x4853aa
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 963h]
        push ecx
        mov edx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [edx + 218h]
        ; Exact mapped bytes E8 E9 9D FB FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 96ch], eax
        cmp dword ptr [ebp - 96ch], 0
        ; Exact mapped bytes 74 6B: je 0x48533d
        __asm _emit 0x74
        __asm _emit 0x6b
        mov dword ptr [ebp - 9f8h], 63h
        mov dword ptr [ebp - 9fch], 0
        mov eax, dword ptr [ebp - 944h]
        mov dword ptr [ebp - 0a00h], eax
        lea ecx, [ebp - 9f8h]
        push ecx
        lea edx, [ebp - 9fch]
        push edx
        lea eax, [ebp - 0a00h]
        push eax
        ; Exact mapped bytes E8 B4 E4 F7 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe4
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x48533d
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 0a04h]
        mov dword ptr [ecx + 8], 0
        push 0
        push 0
        push 0
        push 0
        push 20002h
        push 80021034h
        mov ecx, dword ptr [ebp - 96ch]
        ; Exact mapped bytes E8 F5 1E 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 930h], -1
        ; Exact mapped bytes 74 64: je 0x4853aa
        __asm _emit 0x74
        __asm _emit 0x64
        push 37ch
        lea edx, [ebp - 3b0h]
        push edx
        mov eax, dword ptr [ebp - 930h]
        push eax
        mov ecx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 12 0C F8 FF: call 0x405f7c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x4853aa
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 2f0h], 1
        ; Exact mapped bytes 75 26: jne 0x48539d
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp - 96ch], 0
        ; Exact mapped bytes 74 1D: je 0x48539d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 96ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 944h]
        mov dword ptr [eax + ecx*4 + 94h], 0ffffffffh
        mov edx, dword ptr [ebp - 0a04h]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes EB 4A: jmp 0x4853f6
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 964h]
        and eax, 0ffh
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x4853f6
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [ebp - 938h], -1
        ; Exact mapped bytes 74 2F: je 0x4853f6
        __asm _emit 0x74
        __asm _emit 0x2f
        push 30h
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 938h]
        push edx
        mov eax, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [eax + 20ch]
        ; Exact mapped bytes E8 96 E6 F8 FF: call 0x413a7b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4853f6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0a04h]
        mov dword ptr [ecx + 8], 0
        mov ecx, dword ptr [ebp - 0a04h]
        ; Exact mapped bytes E8 1F 0C FA FF: call 0x426020
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0a04h]
        cmp dword ptr [edx + 8], 3e8h
        ; Exact mapped bytes 7C 0F: jl 0x48541f
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a04h]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes EB 5E: jmp 0x48547d
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ecx + 214h]
        ; Exact mapped bytes E8 10 AF FB FF: call 0x440340
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 CA 00 0B 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 0a10h], eax
        mov edx, dword ptr [ebp - 0a10h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0a10h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 8A 33 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A3 06 00 00: call 0x485b00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a04h]
        mov ecx, dword ptr [ecx + 214h]
        ; Exact mapped bytes E8 12 08 00 00: call 0x485c80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x485474
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 09: jmp 0x48547d
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes EB 02: jmp 0x485478
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x48547d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 E6 F9 FF FF: jmp 0x484e63
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 0a10h
        cmp ebp, esp
        ; Exact mapped bytes E8 54 33 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
