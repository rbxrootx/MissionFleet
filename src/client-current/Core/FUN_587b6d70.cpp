// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6D70 .. +0x3ABD bytes.
extern "C" __declspec(naked) void FUN_587b6d70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892346h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 548h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3c4h], ecx
        ; Exact mapped bytes 83 3D 98 5F 90 58 00: cmp dword ptr [0x58905f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2D 3A 00 00: je 0x587ba7dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 FF 39 00 00: jne 0x587ba7b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 440h], 1e8480h
        mov dword ptr [ebp - 40ch], 1e8480h
        mov eax, dword ptr [ebp - 440h]
        push eax
        ; Exact mapped bytes E8 37 28 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3cch], eax
        mov ecx, dword ptr [ebp - 40ch]
        push ecx
        ; Exact mapped bytes E8 22 28 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3d0h], eax
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 EE C4 FF FF: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3c4h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 3c4h]
        cmp dword ptr [edx + 4], -1
        ; Exact mapped bytes 0F 84 45 39 00 00: je 0x587ba770
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 84h
        mov ecx, dword ptr [ebp - 3c4h]
        add ecx, 108h
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 0F 85 C5 38 00 00: jne 0x587ba724
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587b6e7a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3c8h]
        add ecx, 1
        mov dword ptr [ebp - 3c8h], ecx
        cmp dword ptr [ebp - 3c8h], 28h
        ; Exact mapped bytes 7D 48: jge 0x587b6ecb
        __asm _emit 0x7d
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 3c4h]
        add edx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes 0F BE 82 08 01 00 00: movsx eax, byte ptr [edx + 0x108]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes 0F BE 91 88 DC 8B 58: movsx edx, byte ptr [ecx + 0x588bdc88]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x8b
        __asm _emit 0x58
        cmp eax, edx
        ; Exact mapped bytes 74 22: je 0x587b6ec9
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588bdcb4h
        push 100h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 2F 9F CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9f
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 26 39 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A0: jmp 0x587b6e6b
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5C 01 00 00: movsx eax, byte ptr [edx + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 7E 27: jle 0x587b6f04
        __asm _emit 0x7e
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bdcd8h
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 F9 9E CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9e
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 F0 38 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FF 01 00 00: jmp 0x587b7103
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 88 5C 01 00 00: movsx ecx, byte ptr [eax + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 74 16: je 0x587b6f2c
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5C 01 00 00: movsx eax, byte ptr [edx + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 7A 01 00 00: jne 0x587b70a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 84h
        lea ecx, [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 4
        lea edx, [ebp - 438h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 02: jne 0x587b6f91
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x587b6fb3
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdce4h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 45 9E CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9e
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 3C 38 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        push 28h
        lea ecx, [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        add edx, 108h
        push edx
        ; Exact mapped bytes E8 C2 58 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [ebp - 290h]
        mov dword ptr [eax + 130h], ecx
        push 28h
        lea edx, [ebp - 28ch]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        add eax, 134h
        push eax
        ; Exact mapped bytes E8 93 58 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 3c4h]
        mov dl, byte ptr [ebp - 264h]
        mov byte ptr [ecx + 15ch], dl
        mov eax, dword ptr [ebp - 3c4h]
        mov cl, byte ptr [ebp - 263h]
        mov byte ptr [eax + 15dh], cl
        mov edx, dword ptr [ebp - 3c4h]
        mov al, byte ptr [ebp - 262h]
        mov byte ptr [edx + 15eh], al
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ebp - 260h]
        mov dword ptr [ecx + 160h], edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [ebp - 25ch]
        mov dword ptr [eax + 164h], ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [ebp - 258h]
        mov dword ptr [edx + 168h], eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov dword ptr [ecx + 16ch], 0
        mov edx, dword ptr [ebp - 3c4h]
        mov dword ptr [edx + 170h], 0
        push 17h
        push 0
        mov eax, dword ptr [ebp - 3c4h]
        add eax, 174h
        push eax
        ; Exact mapped bytes E8 6F 5D 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 5D: jmp 0x587b7103
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 91 5C 01 00 00: movsx edx, byte ptr [ecx + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 3
        ; Exact mapped bytes 75 4B: jne 0x587b7103
        __asm _emit 0x75
        __asm _emit 0x4b
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 4
        lea ecx, [ebp - 438h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 02: jne 0x587b70e1
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x587b7103
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bdce4h
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 F5 9C CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9c
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 EC 36 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 88 5C 01 00 00: movsx ecx, byte ptr [eax + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 74 16: je 0x587b712b
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5C 01 00 00: movsx eax, byte ptr [edx + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 3D 05 00 00: jne 0x587b7668
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [ecx + 170h]
        mov edx, 4
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 F6 9E 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4e8h], eax
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [ebp - 4e8h]
        mov dword ptr [edx + 194h], eax
        cmp dword ptr [ebp - 4e8h], 0
        ; Exact mapped bytes 75 22: jne 0x587b7192
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bdd14h
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 66 9C CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x9c
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 5D 36 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587b71ad
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 3c8h]
        add eax, 1
        mov dword ptr [ebp - 3c8h], eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ebp - 3c8h]
        cmp edx, dword ptr [ecx + 170h]
        ; Exact mapped bytes 0F 8D A3 04 00 00: jge 0x587b7668
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 64h
        lea ecx, [ebp - 234h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b720d
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bdd14h
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 EB 9B CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9b
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 E2 35 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 4
        lea ecx, [ebp - 438h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 230h], 0
        ; Exact mapped bytes 0F 85 80 03 00 00: jne 0x587b75bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1e8h], 100000h
        ; Exact mapped bytes 0F 83 22 02 00 00: jae 0x587b746e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 B1 9D 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ech], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4ech], 0
        ; Exact mapped bytes 74 17: je 0x587b7283
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4ech]
        ; Exact mapped bytes E8 95 41 00 00: call 0x587bb410
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b728d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4f0h], 0
        mov ecx, dword ptr [ebp - 4f0h]
        mov dword ptr [ebp - 4f4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [ebp - 4f4h]
        mov dword ptr [eax + ecx*4], edx
        cmp dword ptr [ebp - 4f4h], 0
        ; Exact mapped bytes 0F 84 A1 01 00 00: je 0x587b7469
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 BE 42 00 00: call 0x587bb5b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x587b744d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 43ch], 0
        push 0
        push 0
        push 0
        lea eax, [ebp - 52ch]
        push eax
        lea ecx, [ebp - 43ch]
        push ecx
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 194h]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [eax + edx*4]
        mov edx, dword ptr [eax + 18h]
        mov eax, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 0F 8C B6 00 00 00: jl 0x587b742f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 43ch]
        mov dword ptr [edx + 10h], eax
        push 0
        lea ecx, [ebp - 52ch]
        push ecx
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        mov eax, dword ptr [ebp - 43ch]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 1F: jne 0x587b73e2
        __asm _emit 0x75
        __asm _emit 0x1f
        push 0
        push 0
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 194h]
        mov edx, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 5F 35 00 00: call 0x587ba940
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0
        push 0
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        mov ecx, dword ptr [ebp - 43ch]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [edx + 18h]
        mov edx, dword ptr [eax]
        push ecx
        mov eax, dword ptr [edx + 4ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 1C: jmp 0x587b744b
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 1
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 1C: jmp 0x587b7469
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 1
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 49 01 00 00: jmp 0x587b75b7
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 8F 9B 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4f8h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 4f8h], 0
        ; Exact mapped bytes 74 13: je 0x587b74a1
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4f8h]
        ; Exact mapped bytes E8 A7 17 01 00: call 0x587c8c40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b74ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4fch], 0
        mov ecx, dword ptr [ebp - 4fch]
        mov dword ptr [ebp - 500h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [ebp - 500h]
        mov dword ptr [eax + ecx*4], edx
        cmp dword ptr [ebp - 500h], 0
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x587b759b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 CF F4 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [edx + 3ch], eax
        push 1
        push 0
        push 0
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [edx + 194h]
        mov edx, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ecx + edx*4]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 30h]
        add eax, dword ptr [ebp - 1e8h]
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [edx + 34h], eax
        push 0c0h
        push 8000h
        push 0ah
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 46 18 01 00: call 0x587c8de0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        push 1
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x587b7663
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 230h], 1
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x587b7663
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes E8 34 9A 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 504h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 504h], 0
        ; Exact mapped bytes 74 17: je 0x587b7600
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        mov ecx, dword ptr [ebp - 504h]
        ; Exact mapped bytes E8 C8 15 01 00: call 0x587c8bc0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 508h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b760a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 508h], 0
        mov ecx, dword ptr [ebp - 508h]
        mov dword ptr [ebp - 478h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [ebp - 478h]
        mov dword ptr [eax + ecx*4], edx
        cmp dword ptr [ebp - 478h], 0
        ; Exact mapped bytes 75 22: jne 0x587b7663
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588bdd3ch
        push 100h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 95 97 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x97
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 8C 31 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 36 FB FF FF: jmp 0x587b719e
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 164h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 B9 99 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 47ch], eax
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [ebp - 47ch]
        mov dword ptr [eax + 18ch], ecx
        cmp dword ptr [ebp - 47ch], 0
        ; Exact mapped bytes 75 22: jne 0x587b76cf
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdd7ch
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 29 97 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x97
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 20 31 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 550h], 0
        mov dword ptr [ebp - 3c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587b76f4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3c8h]
        add ecx, 1
        mov dword ptr [ebp - 3c8h], ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [ebp - 3c8h]
        cmp eax, dword ptr [edx + 164h]
        ; Exact mapped bytes 0F 8D D5 20 00 00: jge 0x587b97e1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        push 0
        lea ecx, [ebp - 328h]
        push ecx
        ; Exact mapped bytes E8 F4 56 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5C 01 00 00: movsx eax, byte ptr [edx + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 16: je 0x587b7747
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 91 5C 01 00 00: movsx edx, byte ptr [ecx + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 0F 85 43 01 00 00: jne 0x587b788a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 48h
        lea ecx, [ebp - 178h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b778f
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bdda4h
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 69 96 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 60 30 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 328h], eax
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [ebp + edx - 324h], 0
        mov al, byte ptr [ebp - 14ch]
        mov byte ptr [ebp - 2fch], al
        mov cl, byte ptr [ebp - 14bh]
        mov byte ptr [ebp - 2fbh], cl
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 2f8h], edx
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 2f4h], eax
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 2f0h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 2c4h], edx
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 2c0h], eax
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 2bch], ecx
        mov dword ptr [ebp - 2ech], 0
        mov dword ptr [ebp - 2e8h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 2e4h], edx
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 2e0h], eax
        mov dword ptr [ebp - 2dch], 100h
        mov dword ptr [ebp - 2d8h], 0
        mov dword ptr [ebp - 2d4h], 0
        mov dword ptr [ebp - 2d0h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 2cch], 0
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 2cch], 0
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x587b7a53
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 91 5C 01 00 00: movsx edx, byte ptr [ecx + 0x15c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 3
        ; Exact mapped bytes 0F 85 B3 01 00 00: jne 0x587b7a53
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 88 5D 01 00 00: movsx ecx, byte ptr [eax + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 74 12: je 0x587b78c4
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5D 01 00 00: movsx eax, byte ptr [edx + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 4D: jne 0x587b7911
        __asm _emit 0x75
        __asm _emit 0x4d
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 70h
        lea edx, [ebp - 328h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b790c
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdda4h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 EC 94 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x94
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 E3 2E 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x587b7a53
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 58h
        lea edx, [ebp - 1d0h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b7959
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bddd0h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 9F 94 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x94
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 96 2E 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 328h], ecx
        mov edx, 1
        imul eax, edx, 0
        mov byte ptr [ebp + eax - 324h], 0
        mov cl, byte ptr [ebp - 1a4h]
        mov byte ptr [ebp - 2fch], cl
        mov dl, byte ptr [ebp - 1a3h]
        mov byte ptr [ebp - 2fbh], dl
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 2f8h], eax
        mov ecx, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 2f4h], ecx
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 2f0h], edx
        mov eax, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 2ech], eax
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 2e8h], ecx
        mov edx, dword ptr [ebp - 18ch]
        mov dword ptr [ebp - 2e4h], edx
        mov eax, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 2e0h], eax
        mov dword ptr [ebp - 2dch], 100h
        mov dword ptr [ebp - 2d8h], 0
        mov dword ptr [ebp - 2d4h], 0
        mov dword ptr [ebp - 2d0h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 2cch], 0
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 2cch], 0
        mov ecx, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 2c4h], ecx
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 2c0h], edx
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 2bch], eax
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 4
        lea edx, [ebp - 438h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 02: jne 0x587b7a7c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x587b7a9e
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bde08h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 5A 93 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x93
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 51 2D 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 5F 90 58: mov ecx, dword ptr [0x58905f8c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        and ecx, 800000h
        ; Exact mapped bytes 0F 84 8B 06 00 00: je 0x587b813b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 5F 90 58 02: cmp dword ptr [0x58905f98], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 38 03 00 00: jne 0x587b7df5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 3C 5F 96 58: mov edx, dword ptr [0x58965f3c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        and edx, 8000h
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x587b7c62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp - 2fch]
        mov byte ptr [ebp - 470h], al
        cmp byte ptr [ebp - 470h], 0
        ; Exact mapped bytes 74 1F: je 0x587b7b03
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp byte ptr [ebp - 470h], 1
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x587b7b79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 470h], 2
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x587b7bec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x587b7c5d
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 FA 94 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 480h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 480h], 0
        ; Exact mapped bytes 74 19: je 0x587b7b3c
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 BC 79 01 00: call 0x587cf4f0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 484h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7b46
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 484h], 0
        mov ecx, dword ptr [ebp - 484h]
        mov dword ptr [ebp - 520h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [ebp - 520h]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x587b7c5d
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 84 94 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 488h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 488h], 0
        ; Exact mapped bytes 74 19: je 0x587b7bb2
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 96 F3 02 00: call 0x587e6f40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 48ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7bbc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 48ch], 0
        mov eax, dword ptr [ebp - 48ch]
        mov dword ptr [ebp - 530h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ebp - 530h]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes EB 71: jmp 0x587b7c5d
        __asm _emit 0xeb
        __asm _emit 0x71
        push 38h
        ; Exact mapped bytes E8 11 94 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 490h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 490h], 0
        ; Exact mapped bytes 74 19: je 0x587b7c25
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 53 57 05 00: call 0x5880d370
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 494h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7c2f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 494h], 0
        mov edx, dword ptr [ebp - 494h]
        mov dword ptr [ebp - 534h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [ebp - 534h]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes E9 8E 01 00 00: jmp 0x587b7df0
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp - 2fch]
        mov byte ptr [ebp - 454h], cl
        cmp byte ptr [ebp - 454h], 0
        ; Exact mapped bytes 74 1F: je 0x587b7c96
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp byte ptr [ebp - 454h], 1
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x587b7d0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 454h], 2
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x587b7d7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x587b7df0
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 67 93 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 498h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 498h], 0
        ; Exact mapped bytes 74 19: je 0x587b7ccf
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 79 1B 01 00: call 0x587c9840
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 49ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7cd9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 49ch], 0
        mov edx, dword ptr [ebp - 49ch]
        mov dword ptr [ebp - 538h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [ebp - 538h]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x587b7df0
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 F1 92 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4a0h], eax
        mov dword ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4a0h], 0
        ; Exact mapped bytes 74 19: je 0x587b7d45
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 23 2A 02 00: call 0x587da760
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7d4f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4a4h], 0
        mov ecx, dword ptr [ebp - 4a4h]
        mov dword ptr [ebp - 53ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [ebp - 53ch]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes EB 71: jmp 0x587b7df0
        __asm _emit 0xeb
        __asm _emit 0x71
        push 38h
        ; Exact mapped bytes E8 7E 92 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4a8h], eax
        mov dword ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4a8h], 0
        ; Exact mapped bytes 74 19: je 0x587b7db8
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 10 8C 04 00: call 0x588009c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7dc2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4ach], 0
        mov eax, dword ptr [ebp - 4ach]
        mov dword ptr [ebp - 540h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ebp - 540h]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes E9 44 03 00 00: jmp 0x587b8139
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 5F 90 58 03: cmp dword ptr [0x58905f98], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 93 01 00 00: jne 0x587b7f95
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 2fch]
        mov byte ptr [ebp - 458h], dl
        cmp byte ptr [ebp - 458h], 0
        ; Exact mapped bytes 74 1F: je 0x587b7e36
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp byte ptr [ebp - 458h], 1
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x587b7eac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 458h], 2
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x587b7f1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x587b7f90
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 C7 91 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4b0h], eax
        mov dword ptr [ebp - 4], 9
        cmp dword ptr [ebp - 4b0h], 0
        ; Exact mapped bytes 74 19: je 0x587b7e6f
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes E8 39 D4 01 00: call 0x587d52a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7e79
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4b4h], 0
        mov eax, dword ptr [ebp - 4b4h]
        mov dword ptr [ebp - 544h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ebp - 544h]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x587b7f90
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 51 91 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4b8h], eax
        mov dword ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 4b8h], 0
        ; Exact mapped bytes 74 19: je 0x587b7ee5
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4b8h]
        ; Exact mapped bytes E8 53 BA 03 00: call 0x587f3930
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7eef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4bch], 0
        mov edx, dword ptr [ebp - 4bch]
        mov dword ptr [ebp - 548h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [ebp - 548h]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes EB 71: jmp 0x587b7f90
        __asm _emit 0xeb
        __asm _emit 0x71
        push 38h
        ; Exact mapped bytes E8 DE 90 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4c0h], eax
        mov dword ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 4c0h], 0
        ; Exact mapped bytes 74 19: je 0x587b7f58
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4c0h]
        ; Exact mapped bytes E8 D0 1F 06 00: call 0x58819f20
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b7f62
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4c4h], 0
        mov ecx, dword ptr [ebp - 4c4h]
        mov dword ptr [ebp - 50ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [ebp - 50ch]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes E9 A4 01 00 00: jmp 0x587b8139
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 5F 90 58 04: cmp dword ptr [0x58905f98], 4
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 7E 01 00 00: jne 0x587b8120
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp - 2fch]
        mov byte ptr [ebp - 45ch], al
        cmp byte ptr [ebp - 45ch], 0
        ; Exact mapped bytes 74 1F: je 0x587b7fd6
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp byte ptr [ebp - 45ch], 1
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x587b8046
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 45ch], 2
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x587b80b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x587b811e
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 27 90 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4c8h], eax
        mov dword ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 4c8h], 0
        ; Exact mapped bytes 74 13: je 0x587b8009
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4c8h]
        ; Exact mapped bytes E8 0F 01 02 00: call 0x587d8110
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b8013
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4cch], 0
        mov ecx, dword ptr [ebp - 4cch]
        mov dword ptr [ebp - 510h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [ebp - 510h]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x587b811e
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        ; Exact mapped bytes E8 B7 8F 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4d0h], eax
        mov dword ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 4d0h], 0
        ; Exact mapped bytes 74 13: je 0x587b8079
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4d0h]
        ; Exact mapped bytes E8 DF 29 04 00: call 0x587faa50
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b8083
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4d4h], 0
        mov eax, dword ptr [ebp - 4d4h]
        mov dword ptr [ebp - 514h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ebp - 514h]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes EB 6B: jmp 0x587b811e
        __asm _emit 0xeb
        __asm _emit 0x6b
        push 38h
        ; Exact mapped bytes E8 4A 8F 07 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4d8h], eax
        mov dword ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 4d8h], 0
        ; Exact mapped bytes 74 13: je 0x587b80e6
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes E8 72 91 06 00: call 0x58821250
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b80f0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4dch], 0
        mov edx, dword ptr [ebp - 4dch]
        mov dword ptr [ebp - 518h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [ebp - 518h]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes EB 19: jmp 0x587b8139
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes EB 07: jmp 0x587b8142
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [ebp - 2fch], 0
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 2f4h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 2f0h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        add edx, 18h
        mov eax, dword ptr [ebp - 2ech]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 2e8h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 2e4h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 2e0h]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 2d4h]
        mov ecx, dword ptr [ebp - 2d0h]
        mov dword ptr [edx + 10h], eax
        mov dword ptr [edx + 14h], ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 2dch]
        mov dword ptr [edx + 28h], eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 2d8h]
        mov dword ptr [ecx + 2ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [eax + edx*4]
        mov edx, 4
        imul edx, edx, 0
        mov ecx, dword ptr [ebp + ecx - 2cch]
        mov dword ptr [eax + edx + 30h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ecx + eax*4]
        mov eax, 4
        imul eax, eax, 0
        mov edx, dword ptr [ebp + edx - 2cch]
        mov dword ptr [ecx + eax + 30h], edx
        ; Exact mapped bytes 83 3D 98 5F 90 58 02: cmp dword ptr [0x58905f98], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 61 0F 00 00: jne 0x587b91ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 2fbh]
        cmp eax, 3
        ; Exact mapped bytes 0F 85 77 0C 00 00: jne 0x587b8f10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2f8h]
        cmp ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes 7E 5B: jle 0x587b8302
        __asm _emit 0x7e
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 2f8h]
        mov dword ptr [ebp - 440h], edx
        mov eax, dword ptr [ebp - 3cch]
        push eax
        ; Exact mapped bytes E8 41 13 0A 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 440h]
        push ecx
        ; Exact mapped bytes E8 42 13 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3cch], eax
        cmp dword ptr [ebp - 3cch], 0
        ; Exact mapped bytes 75 22: jne 0x587b8302
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bde3ch
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 F6 8A CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8a
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 ED 24 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        mov edx, dword ptr [ebp - 2f8h]
        push edx
        mov eax, dword ptr [ebp - 3cch]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b834f
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588bde64h
        push 100h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 A9 8A CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8a
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 A0 24 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp - 2fch]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 CF 04 00 00: jne 0x587b882e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3d8h], 0
        mov dword ptr [ebp - 3e0h], 0
        imul eax, dword ptr [ebp - 2f4h], 6
        imul eax, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp - 2fbh]
        cdq
        idiv ecx
        cmp eax, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 7E 74: jle 0x587b840e
        __asm _emit 0x7e
        __asm _emit 0x74
        imul eax, dword ptr [ebp - 2f4h], 6
        imul eax, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp - 2fbh]
        cdq
        idiv ecx
        mov dword ptr [ebp - 40ch], eax
        mov edx, dword ptr [ebp - 3d0h]
        push edx
        ; Exact mapped bytes E8 35 12 0A 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 40ch]
        push eax
        ; Exact mapped bytes E8 36 12 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3d0h], eax
        cmp dword ptr [ebp - 3d0h], 0
        ; Exact mapped bytes 75 22: jne 0x587b840e
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bde3ch
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 EA 89 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x89
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 E1 23 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 5F 96 58: mov eax, dword ptr [0x58965f3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        and eax, 8000h
        ; Exact mapped bytes 0F 84 BF 01 00 00: je 0x587b85dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 8C 4C 01 00 00: jl 0x587b8581
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 3d8h]
        add eax, 3
        mov dword ptr [ebp - 3d8h], eax
        mov ecx, dword ptr [ebp - 3e0h]
        add ecx, 3
        mov dword ptr [ebp - 3e0h], ecx
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 85 0C FC FF FF: mov word ptr [ebp - 0x3f4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 8D 0C FC FF FF: movsx ecx, word ptr [ebp - 0x3f4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 3d8h]
        add eax, 2
        mov dword ptr [ebp - 3d8h], eax
        mov ecx, dword ptr [ebp - 3e0h]
        add ecx, 2
        mov dword ptr [ebp - 3e0h], ecx
        ; Exact mapped bytes 0F BF 95 0C FC FF FF: movsx edx, word ptr [ebp - 0x3f4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587b857c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 0F BE 48 02: movsx cx, byte ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x02
        movzx edx, cx
        and edx, 0f8h
        shl edx, 8
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 0F BE 48 01: movsx cx, byte ptr [eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        movzx eax, cx
        and eax, 0fch
        shl eax, 3
        or edx, eax
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 0F BE 01: movsx ax, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        movzx ecx, ax
        and ecx, 0f8h
        sar ecx, 3
        or edx, ecx
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        movzx ecx, byte ptr [ebp - 2fbh]
        add ecx, dword ptr [ebp - 3d8h]
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 03 15 98 5F 90 58: add edx, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 3e0h], edx
        ; Exact mapped bytes 66 8B 85 0C FC FF FF: mov ax, word ptr [ebp - 0x3f4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 85 0C FC FF FF: mov word ptr [ebp - 0x3f4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x587b84c9
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D FE FF FF: jmp 0x587b841e
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        cmp edx, -2
        ; Exact mapped bytes 75 02: jne 0x587b8597
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x587b85d8
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e0h]
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 3d8h]
        add eax, 2
        mov dword ptr [ebp - 3d8h], eax
        mov ecx, dword ptr [ebp - 3e0h]
        add ecx, 2
        mov dword ptr [ebp - 3e0h], ecx
        ; Exact mapped bytes E9 46 FE FF FF: jmp 0x587b841e
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BA 01 00 00: jmp 0x587b8797
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 8C 4C 01 00 00: jl 0x587b8740
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        ; Exact mapped bytes 0F AF 15 98 5F 90 58: imul edx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 3d8h]
        add ecx, 3
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp - 3e0h]
        add edx, 3
        mov dword ptr [ebp - 3e0h], edx
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D 0C FC FF FF: mov word ptr [ebp - 0x3f4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 95 0C FC FF FF: movsx edx, word ptr [ebp - 0x3f4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 15 98 5F 90 58: imul edx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 3d8h]
        add ecx, 2
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp - 3e0h]
        add edx, 2
        mov dword ptr [ebp - 3e0h], edx
        ; Exact mapped bytes 0F BF 85 0C FC FF FF: movsx eax, word ptr [ebp - 0x3f4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587b873b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 0F BE 51 02: movsx dx, byte ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x02
        movzx eax, dx
        and eax, 0f8h
        shl eax, 7
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 0F BE 51 01: movsx dx, byte ptr [ecx + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        movzx ecx, dx
        and ecx, 0f8h
        shl ecx, 2
        or eax, ecx
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 0F BE 0A: movsx cx, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0a
        movzx edx, cx
        and edx, 0f8h
        sar edx, 3
        or eax, edx
        mov ecx, dword ptr [ebp - 3d0h]
        add ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        movzx edx, byte ptr [ebp - 2fbh]
        add edx, dword ptr [ebp - 3d8h]
        mov dword ptr [ebp - 3d8h], edx
        mov eax, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes 03 05 98 5F 90 58: add eax, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 3e0h], eax
        ; Exact mapped bytes 66 8B 8D 0C FC FF FF: mov cx, word ptr [ebp - 0x3f4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8D 0C FC FF FF: mov word ptr [ebp - 0x3f4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x587b8688
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D FE FF FF: jmp 0x587b85dd
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        cmp eax, -2
        ; Exact mapped bytes 75 02: jne 0x587b8756
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x587b8797
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 3d0h]
        add ecx, dword ptr [ebp - 3e0h]
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 3d8h]
        add ecx, 2
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp - 3e0h]
        add edx, 2
        mov dword ptr [ebp - 3e0h], edx
        ; Exact mapped bytes E9 46 FE FF FF: jmp 0x587b85dd
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e0h]
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 3d8h]
        add eax, 2
        mov dword ptr [ebp - 3d8h], eax
        mov ecx, dword ptr [ebp - 3e0h]
        add ecx, 2
        mov dword ptr [ebp - 3e0h], ecx
        mov edx, dword ptr [ebp - 3e0h]
        push edx
        ; Exact mapped bytes E8 31 0E 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp - 3e0h]
        push eax
        mov ecx, dword ptr [ebp - 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 6A 40 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 DD 06 00 00: jmp 0x587b8f0b
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 2fch]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 AD 04 00 00: jne 0x587b8ceb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3dch], 0
        mov dword ptr [ebp - 3e4h], 0
        imul eax, dword ptr [ebp - 2f4h], 6
        imul eax, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp - 2fbh]
        cdq
        idiv ecx
        cmp eax, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 7C 74: jl 0x587b88ed
        __asm _emit 0x7c
        __asm _emit 0x74
        imul eax, dword ptr [ebp - 2f4h], 6
        imul eax, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp - 2fbh]
        cdq
        idiv ecx
        mov dword ptr [ebp - 40ch], eax
        mov edx, dword ptr [ebp - 3d0h]
        push edx
        ; Exact mapped bytes E8 56 0D 0A 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 40ch]
        push eax
        ; Exact mapped bytes E8 57 0D 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3d0h], eax
        cmp dword ptr [ebp - 3d0h], 0
        ; Exact mapped bytes 75 22: jne 0x587b88ed
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bde3ch
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 0B 85 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 02 1F 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 5F 96 58: mov eax, dword ptr [0x58965f3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        and eax, 8000h
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x587b8ab0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 8C 4C 01 00 00: jl 0x587b8a60
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 3dch]
        add eax, 3
        mov dword ptr [ebp - 3dch], eax
        mov ecx, dword ptr [ebp - 3e4h]
        add ecx, 3
        mov dword ptr [ebp - 3e4h], ecx
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 85 10 FC FF FF: mov word ptr [ebp - 0x3f0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 8D 10 FC FF FF: movsx ecx, word ptr [ebp - 0x3f0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 3dch]
        add eax, 2
        mov dword ptr [ebp - 3dch], eax
        mov ecx, dword ptr [ebp - 3e4h]
        add ecx, 2
        mov dword ptr [ebp - 3e4h], ecx
        ; Exact mapped bytes 0F BF 95 10 FC FF FF: movsx edx, word ptr [ebp - 0x3f0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587b8a5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 66 0F BE 48 02: movsx cx, byte ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x02
        movzx edx, cx
        and edx, 0f8h
        shl edx, 8
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 66 0F BE 48 01: movsx cx, byte ptr [eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        movzx eax, cx
        and eax, 0fch
        shl eax, 3
        or edx, eax
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 66 0F BE 01: movsx ax, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        movzx ecx, ax
        and ecx, 0f8h
        sar ecx, 3
        or edx, ecx
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        movzx ecx, byte ptr [ebp - 2fbh]
        add ecx, dword ptr [ebp - 3dch]
        mov dword ptr [ebp - 3dch], ecx
        mov edx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 03 15 98 5F 90 58: add edx, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 3e4h], edx
        ; Exact mapped bytes 66 8B 85 10 FC FF FF: mov ax, word ptr [ebp - 0x3f0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 85 10 FC FF FF: mov word ptr [ebp - 0x3f0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x587b89a8
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D FE FF FF: jmp 0x587b88fd
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        cmp edx, -2
        ; Exact mapped bytes 75 02: jne 0x587b8a76
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 35: jmp 0x587b8aab
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e4h]
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 3dch]
        add edx, 2
        mov dword ptr [ebp - 3dch], edx
        mov eax, dword ptr [ebp - 3e4h]
        add eax, 2
        mov dword ptr [ebp - 3e4h], eax
        ; Exact mapped bytes E9 52 FE FF FF: jmp 0x587b88fd
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AE 01 00 00: jmp 0x587b8c5e
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 8C 4C 01 00 00: jl 0x587b8c13
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 3dch]
        add eax, 3
        mov dword ptr [ebp - 3dch], eax
        mov ecx, dword ptr [ebp - 3e4h]
        add ecx, 3
        mov dword ptr [ebp - 3e4h], ecx
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 85 10 FC FF FF: mov word ptr [ebp - 0x3f0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 8D 10 FC FF FF: movsx ecx, word ptr [ebp - 0x3f0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 3dch]
        add eax, 2
        mov dword ptr [ebp - 3dch], eax
        mov ecx, dword ptr [ebp - 3e4h]
        add ecx, 2
        mov dword ptr [ebp - 3e4h], ecx
        ; Exact mapped bytes 0F BF 95 10 FC FF FF: movsx edx, word ptr [ebp - 0x3f0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587b8c0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 66 0F BE 48 02: movsx cx, byte ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x02
        movzx edx, cx
        and edx, 0f8h
        shl edx, 7
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 66 0F BE 48 01: movsx cx, byte ptr [eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        movzx eax, cx
        and eax, 0f8h
        shl eax, 2
        or edx, eax
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 66 0F BE 01: movsx ax, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        movzx ecx, ax
        and ecx, 0f8h
        sar ecx, 3
        or edx, ecx
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        movzx ecx, byte ptr [ebp - 2fbh]
        add ecx, dword ptr [ebp - 3dch]
        mov dword ptr [ebp - 3dch], ecx
        mov edx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes 03 15 98 5F 90 58: add edx, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 3e4h], edx
        ; Exact mapped bytes 66 8B 85 10 FC FF FF: mov ax, word ptr [ebp - 0x3f0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 85 10 FC FF FF: mov word ptr [ebp - 0x3f0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x587b8b5b
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9D FE FF FF: jmp 0x587b8ab0
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        cmp edx, -2
        ; Exact mapped bytes 75 02: jne 0x587b8c29
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 35: jmp 0x587b8c5e
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3e4h]
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 3dch]
        add edx, 2
        mov dword ptr [ebp - 3dch], edx
        mov eax, dword ptr [ebp - 3e4h]
        add eax, 2
        mov dword ptr [ebp - 3e4h], eax
        ; Exact mapped bytes E9 52 FE FF FF: jmp 0x587b8ab0
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3d0h]
        add ecx, dword ptr [ebp - 3e4h]
        mov edx, 0fffffffeh
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 3dch]
        add eax, 2
        mov dword ptr [ebp - 3dch], eax
        mov ecx, dword ptr [ebp - 3e4h]
        add ecx, 2
        mov dword ptr [ebp - 3e4h], ecx
        mov edx, dword ptr [ebp - 3e4h]
        push edx
        ; Exact mapped bytes E8 74 09 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp - 3e4h]
        push eax
        mov ecx, dword ptr [ebp - 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 AD 3B 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 20 02 00 00: jmp 0x587b8f0b
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 2fch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 11 02 00 00: jne 0x587b8f0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 410h], 0
        mov dword ptr [ebp - 408h], 0
        mov edx, dword ptr [ebp - 2f4h]
        imul edx, dword ptr [ebp - 2f0h]
        mov dword ptr [ebp - 428h], edx
        ; Exact mapped bytes A1 3C 5F 96 58: mov eax, dword ptr [0x58965f3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        and eax, 8000h
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x587b8de4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 428h], 0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x587b8ddf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes 66 0F BE 51 02: movsx dx, byte ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x02
        movzx eax, dx
        and eax, 0f8h
        shl eax, 8
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes 66 0F BE 51 01: movsx dx, byte ptr [ecx + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        movzx ecx, dx
        and ecx, 0fch
        shl ecx, 3
        or eax, ecx
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 410h]
        ; Exact mapped bytes 66 0F BE 0A: movsx cx, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0a
        movzx edx, cx
        and edx, 0f8h
        sar edx, 3
        or eax, edx
        mov ecx, dword ptr [ebp - 3d0h]
        add ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        movzx edx, byte ptr [ebp - 2fbh]
        add edx, dword ptr [ebp - 410h]
        mov dword ptr [ebp - 410h], edx
        mov eax, dword ptr [ebp - 408h]
        ; Exact mapped bytes 03 05 98 5F 90 58: add eax, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 408h], eax
        mov ecx, dword ptr [ebp - 428h]
        sub ecx, 1
        mov dword ptr [ebp - 428h], ecx
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x587b8d31
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x587b8e92
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 428h], 0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x587b8e92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 410h]
        ; Exact mapped bytes 66 0F BE 42 02: movsx ax, byte ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x02
        movzx ecx, ax
        and ecx, 0f8h
        shl ecx, 7
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 410h]
        ; Exact mapped bytes 66 0F BE 42 01: movsx ax, byte ptr [edx + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        movzx edx, ax
        and edx, 0f8h
        shl edx, 2
        or ecx, edx
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 410h]
        ; Exact mapped bytes 66 0F BE 10: movsx dx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        movzx eax, dx
        and eax, 0f8h
        sar eax, 3
        or ecx, eax
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 408h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        movzx eax, byte ptr [ebp - 2fbh]
        add eax, dword ptr [ebp - 410h]
        mov dword ptr [ebp - 410h], eax
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes 03 0D 98 5F 90 58: add ecx, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 408h], ecx
        mov edx, dword ptr [ebp - 428h]
        sub edx, 1
        mov dword ptr [ebp - 428h], edx
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x587b8de4
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 408h]
        mov ecx, 0fffffffeh
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 408h]
        add edx, 2
        mov dword ptr [ebp - 408h], edx
        mov eax, dword ptr [ebp - 408h]
        push eax
        ; Exact mapped bytes E8 4F 07 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp - 408h]
        push eax
        mov ecx, dword ptr [ebp - 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 88 39 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 D5 02 00 00: jmp 0x587b91e5
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 2fbh]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 C5 02 00 00: jne 0x587b91e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2f8h]
        push edx
        ; Exact mapped bytes E8 E4 06 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3e8h], eax
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 3e8h]
        mov dword ptr [eax + 0ch], ecx
        push 0
        lea edx, [ebp - 3ech]
        push edx
        mov eax, dword ptr [ebp - 2f8h]
        push eax
        mov ecx, dword ptr [ebp - 3e8h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b8fa0
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bde64h
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 58 7E CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 4F 18 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 5F 96 58: mov eax, dword ptr [0x58965f3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        and eax, 8000h
        ; Exact mapped bytes 74 05: je 0x587b8fb1
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 34 02 00 00: jmp 0x587b91e5
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 2fch]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x587b908f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 8C 94 00 00 00: jl 0x587b9066
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3e8h]
        add ecx, 3
        mov dword ptr [ebp - 3e8h], ecx
        mov edx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 85 E0 FB FF FF: mov word ptr [ebp - 0x420], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3e8h]
        add ecx, 2
        mov dword ptr [ebp - 3e8h], ecx
        ; Exact mapped bytes 0F BF 95 E0 FB FF FF: movsx edx, word ptr [ebp - 0x420]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 74 56: je 0x587b9061
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D CC FB FF FF: mov word ptr [ebp - 0x434], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 434h]
        sar edx, 1
        and edx, 7fe0h
        movzx eax, word ptr [ebp - 434h]
        and eax, 1fh
        or edx, eax
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 3e8h]
        add edx, 2
        mov dword ptr [ebp - 3e8h], edx
        ; Exact mapped bytes 0F BF 85 E0 FB FF FF: movsx eax, word ptr [ebp - 0x420]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 2
        ; Exact mapped bytes 66 89 85 E0 FB FF FF: mov word ptr [ebp - 0x420], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 9F: jmp 0x587b9000
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x587b8fc1
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        cmp edx, -2
        ; Exact mapped bytes 75 02: jne 0x587b9076
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 14: jmp 0x587b908a
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 3e8h]
        add eax, 2
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes E9 37 FF FF FF: jmp 0x587b8fc1
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x587b91e5
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 2fch]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x587b916a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 8C 94 00 00 00: jl 0x587b9144
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3e8h]
        add ecx, 3
        mov dword ptr [ebp - 3e8h], ecx
        mov edx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 85 DC FB FF FF: mov word ptr [ebp - 0x424], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3e8h]
        add ecx, 2
        mov dword ptr [ebp - 3e8h], ecx
        ; Exact mapped bytes 0F BF 95 DC FB FF FF: movsx edx, word ptr [ebp - 0x424]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 74 56: je 0x587b913f
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D D4 FB FF FF: mov word ptr [ebp - 0x42c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 42ch]
        sar edx, 1
        and edx, 7fe0h
        movzx eax, word ptr [ebp - 42ch]
        and eax, 1fh
        or edx, eax
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 3e8h]
        add edx, 2
        mov dword ptr [ebp - 3e8h], edx
        ; Exact mapped bytes 0F BF 85 DC FB FF FF: movsx eax, word ptr [ebp - 0x424]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 2
        ; Exact mapped bytes 66 89 85 DC FB FF FF: mov word ptr [ebp - 0x424], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 9F: jmp 0x587b90de
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x587b909f
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        cmp edx, -2
        ; Exact mapped bytes 75 02: jne 0x587b9154
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 14: jmp 0x587b9168
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 3e8h]
        add eax, 2
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes E9 37 FF FF FF: jmp 0x587b909f
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7B: jmp 0x587b91e5
        __asm _emit 0xeb
        __asm _emit 0x7b
        movzx ecx, byte ptr [ebp - 2fch]
        test ecx, ecx
        ; Exact mapped bytes 75 70: jne 0x587b91e5
        __asm _emit 0x75
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 2f4h]
        imul edx, dword ptr [ebp - 2f0h]
        mov dword ptr [ebp - 460h], edx
        cmp dword ptr [ebp - 460h], 0
        ; Exact mapped bytes 74 54: je 0x587b91e5
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D D0 FB FF FF: mov word ptr [ebp - 0x430], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 430h]
        sar edx, 1
        and edx, 7fe0h
        movzx eax, word ptr [ebp - 430h]
        and eax, 1fh
        or edx, eax
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 3e8h]
        add edx, 2
        mov dword ptr [ebp - 3e8h], edx
        mov eax, dword ptr [ebp - 460h]
        sub eax, 1
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes EB A3: jmp 0x587b9188
        __asm _emit 0xeb
        __asm _emit 0xa3
        ; Exact mapped bytes E9 F2 05 00 00: jmp 0x587b97dc
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 5F 90 58 03: cmp dword ptr [0x58905f98], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x03
        ; Exact mapped bytes 0F 8C E5 05 00 00: jl 0x587b97dc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 2fch]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 12 02 00 00: jne 0x587b9419
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 400h], 0
        mov dword ptr [ebp - 3fch], 0
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 400h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 8C F9 00 00 00: jl 0x587b932b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        ; Exact mapped bytes 0F AF 15 98 5F 90 58: imul edx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3fch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 400h]
        add ecx, 3
        mov dword ptr [ebp - 400h], ecx
        mov edx, dword ptr [ebp - 3fch]
        add edx, 3
        mov dword ptr [ebp - 3fch], edx
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 400h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D EC FB FF FF: mov word ptr [ebp - 0x414], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 95 EC FB FF FF: movsx edx, word ptr [ebp - 0x414]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 15 98 5F 90 58: imul edx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3fch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 400h]
        add ecx, 2
        mov dword ptr [ebp - 400h], ecx
        mov edx, dword ptr [ebp - 3fch]
        add edx, 2
        mov dword ptr [ebp - 3fch], edx
        ; Exact mapped bytes 0F BF 85 EC FB FF FF: movsx eax, word ptr [ebp - 0x414]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x587b9326
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 3d0h]
        add ecx, dword ptr [ebp - 3fch]
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 400h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        movzx ecx, byte ptr [ebp - 2fbh]
        add ecx, dword ptr [ebp - 400h]
        mov dword ptr [ebp - 400h], ecx
        mov edx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes 03 15 98 5F 90 58: add edx, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 3fch], edx
        ; Exact mapped bytes 66 8B 85 EC FB FF FF: mov ax, word ptr [ebp - 0x414]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 85 EC FB FF FF: mov word ptr [ebp - 0x414], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A0: jmp 0x587b92c6
        __asm _emit 0xeb
        __asm _emit 0xa0
        ; Exact mapped bytes E9 F0 FE FF FF: jmp 0x587b921b
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        cmp edx, -2
        ; Exact mapped bytes 75 02: jne 0x587b9341
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x587b9382
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3fch]
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 400h]
        add eax, 2
        mov dword ptr [ebp - 400h], eax
        mov ecx, dword ptr [ebp - 3fch]
        add ecx, 2
        mov dword ptr [ebp - 3fch], ecx
        ; Exact mapped bytes E9 99 FE FF FF: jmp 0x587b921b
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3fch]
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 400h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 400h]
        add edx, 2
        mov dword ptr [ebp - 400h], edx
        mov eax, dword ptr [ebp - 3fch]
        add eax, 2
        mov dword ptr [ebp - 3fch], eax
        mov ecx, dword ptr [ebp - 3fch]
        push ecx
        ; Exact mapped bytes E8 46 02 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [edx + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ecx + edx*4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 3fch]
        push edx
        mov eax, dword ptr [ebp - 3d0h]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 7F 34 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 C3 03 00 00: jmp 0x587b97dc
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 2fch]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A9 02 00 00: jne 0x587b96d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 404h], 0
        mov dword ptr [ebp - 3f8h], 0
        imul eax, dword ptr [ebp - 2f4h], 6
        imul eax, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp - 2fbh]
        cdq
        idiv ecx
        cmp eax, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 7C 74: jl 0x587b94d8
        __asm _emit 0x7c
        __asm _emit 0x74
        imul eax, dword ptr [ebp - 2f4h], 6
        imul eax, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp - 2fbh]
        cdq
        idiv ecx
        mov dword ptr [ebp - 40ch], eax
        mov edx, dword ptr [ebp - 3d0h]
        push edx
        ; Exact mapped bytes E8 6B 01 0A 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 40ch]
        push eax
        ; Exact mapped bytes E8 6C 01 0A 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3d0h], eax
        cmp dword ptr [ebp - 3d0h], 0
        ; Exact mapped bytes 75 22: jne 0x587b94d8
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bde3ch
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 20 79 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x79
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 17 13 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 404h]
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x587b95fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 8C F9 00 00 00: jl 0x587b95fa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 404h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 404h]
        add eax, 3
        mov dword ptr [ebp - 404h], eax
        mov ecx, dword ptr [ebp - 3f8h]
        add ecx, 3
        mov dword ptr [ebp - 3f8h], ecx
        mov edx, dword ptr [ebp - 3cch]
        add edx, dword ptr [ebp - 404h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 85 E8 FB FF FF: mov word ptr [ebp - 0x418], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 8D E8 FB FF FF: movsx ecx, word ptr [ebp - 0x418]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 404h]
        add eax, 2
        mov dword ptr [ebp - 404h], eax
        mov ecx, dword ptr [ebp - 3f8h]
        add ecx, 2
        mov dword ptr [ebp - 3f8h], ecx
        ; Exact mapped bytes 0F BF 95 E8 FB FF FF: movsx edx, word ptr [ebp - 0x418]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 74 55: je 0x587b95f5
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3f8h]
        mov ecx, dword ptr [ebp - 3cch]
        add ecx, dword ptr [ebp - 404h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        movzx eax, byte ptr [ebp - 2fbh]
        add eax, dword ptr [ebp - 404h]
        mov dword ptr [ebp - 404h], eax
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes 03 0D 98 5F 90 58: add ecx, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 3f8h], ecx
        ; Exact mapped bytes 66 8B 95 E8 FB FF FF: mov dx, word ptr [ebp - 0x418]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 95 E8 FB FF FF: mov word ptr [ebp - 0x418], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A0: jmp 0x587b9595
        __asm _emit 0xeb
        __asm _emit 0xa0
        ; Exact mapped bytes E9 DE FE FF FF: jmp 0x587b94d8
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 404h]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        cmp ecx, -2
        ; Exact mapped bytes 75 02: jne 0x587b9610
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 35: jmp 0x587b9645
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 3f8h]
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 404h]
        add ecx, 2
        mov dword ptr [ebp - 404h], ecx
        mov edx, dword ptr [ebp - 3f8h]
        add edx, 2
        mov dword ptr [ebp - 3f8h], edx
        ; Exact mapped bytes E9 93 FE FF FF: jmp 0x587b94d8
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3d0h]
        add eax, dword ptr [ebp - 3f8h]
        mov ecx, 0fffffffeh
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 404h]
        add edx, 2
        mov dword ptr [ebp - 404h], edx
        mov eax, dword ptr [ebp - 3f8h]
        add eax, 2
        mov dword ptr [ebp - 3f8h], eax
        mov ecx, dword ptr [ebp - 3f8h]
        push ecx
        ; Exact mapped bytes E8 8D FF 09 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [edx + 18ch]
        mov edx, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [ecx + edx*4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 3f8h]
        push edx
        mov eax, dword ptr [ebp - 3d0h]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3c8h]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 C6 31 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 0A 01 00 00: jmp 0x587b97dc
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 2fch]
        test eax, eax
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x587b97dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 464h], 0
        mov dword ptr [ebp - 41ch], 0
        mov ecx, dword ptr [ebp - 2f4h]
        imul ecx, dword ptr [ebp - 2f0h]
        mov dword ptr [ebp - 468h], ecx
        cmp dword ptr [ebp - 468h], 0
        ; Exact mapped bytes 74 52: je 0x587b9763
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [ebp - 3cch]
        add eax, dword ptr [ebp - 464h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        movzx edx, byte ptr [ebp - 2fbh]
        add edx, dword ptr [ebp - 464h]
        mov dword ptr [ebp - 464h], edx
        mov eax, dword ptr [ebp - 41ch]
        ; Exact mapped bytes 03 05 98 5F 90 58: add eax, dword ptr [0x58905f98]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 41ch], eax
        mov ecx, dword ptr [ebp - 468h]
        sub ecx, 1
        mov dword ptr [ebp - 468h], ecx
        ; Exact mapped bytes EB A5: jmp 0x587b9708
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 3d0h]
        add edx, dword ptr [ebp - 41ch]
        mov eax, 0fffffffeh
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 41ch]
        add ecx, 2
        mov dword ptr [ebp - 41ch], ecx
        mov edx, dword ptr [ebp - 41ch]
        push edx
        ; Exact mapped bytes E8 7E FE 09 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [edx + ecx*4]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp - 41ch]
        push eax
        mov ecx, dword ptr [ebp - 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3c8h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 B7 30 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 04 DF FF FF: jmp 0x587b76e5
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3c4h]
        cmp dword ptr [ecx + 160h], 0
        ; Exact mapped bytes 0F 8E 20 0F 00 00: jle 0x587ba714
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 160h]
        mov dword ptr [ebp - 46ch], eax
        mov eax, dword ptr [ebp - 46ch]
        mov ecx, 40h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        add eax, 4
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 16 78 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 444h], eax
        mov dword ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 444h], 0
        ; Exact mapped bytes 74 41: je 0x587b9886
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 444h]
        mov eax, dword ptr [ebp - 46ch]
        mov dword ptr [edx], eax
        push 587b6870h
        push 587b6700h
        mov ecx, dword ptr [ebp - 46ch]
        push ecx
        push 40h
        mov edx, dword ptr [ebp - 444h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 10 84 07 00: call 0x58831c85
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 444h]
        add eax, 4
        mov dword ptr [ebp - 4e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b9890
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4e0h], 0
        mov ecx, dword ptr [ebp - 4e0h]
        mov dword ptr [ebp - 4e4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [ebp - 4e4h]
        mov dword ptr [edx + 190h], eax
        cmp dword ptr [ebp - 4e4h], 0
        ; Exact mapped bytes 75 22: jne 0x587b98e0
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bde8ch
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 18 75 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 0F 0F 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 88 5D 01 00 00: movsx ecx, byte ptr [eax + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x587b9907
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5D 01 00 00: movsx eax, byte ptr [edx + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 87 07 00 00: jne 0x587ba08e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587b9922
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3c8h]
        add ecx, 1
        mov dword ptr [ebp - 3c8h], ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [ebp - 3c8h]
        cmp eax, dword ptr [edx + 160h]
        ; Exact mapped bytes 0F 8D 4F 07 00 00: jge 0x587ba089
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 3ch
        lea edx, [ebp - 3c0h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b9982
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdeb4h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 76 74 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x74
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 6D 0E 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 4
        lea edx, [ebp - 438h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 02: jne 0x587b99ab
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x587b99cd
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdee4h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 2B 74 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x74
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 22 0E 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 38ah]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 59 76 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 51ch], eax
        mov eax, dword ptr [ebp - 51ch]
        mov dword ptr [ebp - 448h], eax
        movzx eax, word ptr [ebp - 38ah]
        mov ecx, 24h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 28 76 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54ch], eax
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov ecx, dword ptr [ebp - 54ch]
        mov dword ptr [edx + eax + 10h], ecx
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5D 01 00 00: movsx eax, byte ptr [edx + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 2A 02 00 00: jne 0x587b9c81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3d4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587b9a72
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3d4h]
        add ecx, 1
        mov dword ptr [ebp - 3d4h], ecx
        movzx edx, word ptr [ebp - 38ah]
        cmp dword ptr [ebp - 3d4h], edx
        ; Exact mapped bytes 0F 8D F7 01 00 00: jge 0x587b9c7c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 4
        lea ecx, [ebp - 474h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b9acd
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bdf20h
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 2B 73 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x73
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 22 0D 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        mov edx, dword ptr [edx + eax + 10h]
        mov dword ptr [edx + ecx], 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        mov edx, dword ptr [edx + eax + 10h]
        mov dword ptr [edx + ecx + 4], 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        mov edx, dword ptr [edx + eax + 10h]
        mov dword ptr [edx + ecx + 8], 100h
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        mov edx, dword ptr [edx + eax + 10h]
        mov dword ptr [edx + ecx + 0ch], 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        mov edx, dword ptr [edx + eax + 10h]
        mov dword ptr [edx + ecx + 10h], 0ffffffffh
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        add ecx, dword ptr [edx + eax + 10h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax + 14h], 0
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        imul edx, dword ptr [ebp - 3d4h], 24h
        add edx, dword ptr [eax + ecx + 10h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax + 14h], 0
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        imul edx, dword ptr [ebp - 3d4h], 24h
        add edx, dword ptr [eax + ecx + 10h]
        mov eax, 4
        shl eax, 1
        mov dword ptr [edx + eax + 14h], 0
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        imul edx, dword ptr [ebp - 3d4h], 24h
        add edx, dword ptr [eax + ecx + 10h]
        mov eax, 4
        imul ecx, eax, 3
        mov dword ptr [edx + ecx + 14h], 0
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3d4h]
        mov edx, dword ptr [ebp - 448h]
        mov esi, dword ptr [ebp - 474h]
        mov eax, dword ptr [eax + esi*4]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes E9 E7 FD FF FF: jmp 0x587b9a63
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 50 02 00 00: jmp 0x587b9ed1
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 91 5D 01 00 00: movsx edx, byte ptr [ecx + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 0F 85 3A 02 00 00: jne 0x587b9ed1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3d4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587b9cb2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 3d4h]
        add eax, 1
        mov dword ptr [ebp - 3d4h], eax
        movzx ecx, word ptr [ebp - 38ah]
        cmp dword ptr [ebp - 3d4h], ecx
        ; Exact mapped bytes 0F 8D 0C 02 00 00: jge 0x587b9ed1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 3ech]
        push edx
        push 4
        lea eax, [ebp - 474h]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b9d0d
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588bdf20h
        push 100h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 EB 70 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x70
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 E2 0A 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 3ech]
        push edx
        push 8
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        mov edx, dword ptr [edx + eax + 10h]
        add edx, ecx
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587b9d71
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdf20h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 87 70 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 7E 0A 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        imul edx, dword ptr [ebp - 3d4h], 24h
        mov eax, dword ptr [eax + ecx + 10h]
        mov dword ptr [eax + edx + 8], 100h
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        imul edx, dword ptr [ebp - 3d4h], 24h
        mov eax, dword ptr [eax + ecx + 10h]
        mov dword ptr [eax + edx + 0ch], 0
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        imul edx, dword ptr [ebp - 3d4h], 24h
        mov eax, dword ptr [eax + ecx + 10h]
        mov dword ptr [eax + edx + 10h], 0ffffffffh
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        imul edx, dword ptr [ebp - 3d4h], 24h
        add edx, dword ptr [eax + ecx + 10h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx + 14h], 0
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        imul eax, dword ptr [ebp - 3d4h], 24h
        add eax, dword ptr [ecx + edx + 10h]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx + 14h], 0
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        imul eax, dword ptr [ebp - 3d4h], 24h
        add eax, dword ptr [ecx + edx + 10h]
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [eax + ecx + 14h], 0
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        imul eax, dword ptr [ebp - 3d4h], 24h
        add eax, dword ptr [ecx + edx + 10h]
        mov ecx, 4
        imul edx, ecx, 3
        mov dword ptr [eax + edx + 14h], 0
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 18ch]
        mov edx, dword ptr [ebp - 3d4h]
        mov eax, dword ptr [ebp - 448h]
        mov esi, dword ptr [ebp - 474h]
        mov ecx, dword ptr [ecx + esi*4]
        mov dword ptr [eax + edx*4], ecx
        ; Exact mapped bytes E9 D2 FD FF FF: jmp 0x587b9ca3
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ecx + edx + 4], 0
        ; Exact mapped bytes 0F BF 95 74 FC FF FF: movsx edx, word ptr [ebp - 0x38c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [ecx + 190h]
        mov dword ptr [ecx + eax + 8], edx
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        ; Exact mapped bytes 66 8B 85 76 FC FF FF: mov ax, word ptr [ebp - 0x38a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 44 11 0C: mov word ptr [ecx + edx + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        mov edx, dword ptr [ebp - 448h]
        mov dword ptr [eax + ecx + 14h], edx
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [edx + eax + 18h], 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [edx + eax + 1ch], 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [edx + eax + 20h], 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [edx + eax + 24h], 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov ecx, dword ptr [ebp - 394h]
        mov dword ptr [edx + eax + 28h], ecx
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        mov eax, dword ptr [ebp - 390h]
        mov dword ptr [ecx + edx + 2ch], eax
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [eax + ecx + 30h], 100h
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [eax + ecx + 34h], 0
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        add ecx, dword ptr [edx + 190h]
        mov eax, 4
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 38h], 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        add eax, dword ptr [ecx + 190h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [eax + edx + 38h], 0
        ; Exact mapped bytes E9 8A F8 FF FF: jmp 0x587b9913
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 84 06 00 00: jmp 0x587ba712
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 88 5D 01 00 00: movsx ecx, byte ptr [eax + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 74 16: je 0x587ba0b6
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5D 01 00 00: movsx eax, byte ptr [edx + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 5C 06 00 00: jne 0x587ba712
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587ba0d1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3c8h]
        add ecx, 1
        mov dword ptr [ebp - 3c8h], ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [ebp - 3c8h]
        cmp eax, dword ptr [edx + 160h]
        ; Exact mapped bytes 0F 8D 29 06 00 00: jge 0x587ba712
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 5ch
        lea edx, [ebp - 384h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587ba131
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdeb4h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 C7 6C CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6c
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 BE 06 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 4
        lea edx, [ebp - 438h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 02: jne 0x587ba15a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x587ba17c
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdee4h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 7C 6C CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6c
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 73 06 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 346h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 AA 6E 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 524h], eax
        mov eax, dword ptr [ebp - 524h]
        mov dword ptr [ebp - 450h], eax
        movzx eax, word ptr [ebp - 346h]
        mov ecx, 24h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 79 6E 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 528h], eax
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov ecx, dword ptr [ebp - 528h]
        mov dword ptr [edx + eax + 10h], ecx
        mov edx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 82 5D 01 00 00: movsx eax, byte ptr [edx + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 85 02 00 00: jne 0x587ba48c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3d4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587ba222
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 3d4h]
        add ecx, 1
        mov dword ptr [ebp - 3d4h], ecx
        movzx edx, word ptr [ebp - 346h]
        cmp dword ptr [ebp - 3d4h], edx
        ; Exact mapped bytes 0F 8D 52 02 00 00: jge 0x587ba487
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 4
        lea ecx, [ebp - 44ch]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587ba27d
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bdf20h
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 7B 6B CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6b
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 72 05 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 3ech]
        push eax
        push 20h
        lea ecx, [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587ba2c5
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588bdf4ch
        push 100h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 33 6B CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6b
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 2A 05 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        mov edx, dword ptr [edx + eax + 10h]
        mov eax, dword ptr [ebp - 130h]
        mov esi, dword ptr [ebp - 12ch]
        mov dword ptr [edx + ecx], eax
        mov dword ptr [edx + ecx + 4], esi
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        imul edx, dword ptr [ebp - 3d4h], 24h
        mov eax, dword ptr [eax + ecx + 10h]
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [eax + edx + 8], ecx
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        imul eax, dword ptr [ebp - 3d4h], 24h
        mov ecx, dword ptr [ecx + edx + 10h]
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + eax + 0ch], edx
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        imul ecx, dword ptr [ebp - 3d4h], 24h
        mov edx, dword ptr [edx + eax + 10h]
        mov dword ptr [edx + ecx + 10h], 0ffffffffh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [eax + 190h]
        imul esi, dword ptr [ebp - 3d4h], 24h
        add esi, dword ptr [eax + edx + 10h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp + ecx - 120h]
        mov dword ptr [esi + eax + 14h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [ecx + 190h]
        imul esi, dword ptr [ebp - 3d4h], 24h
        add esi, dword ptr [ecx + eax + 10h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp + edx - 120h]
        mov dword ptr [esi + eax + 14h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [ecx + 190h]
        imul esi, dword ptr [ebp - 3d4h], 24h
        add esi, dword ptr [ecx + eax + 10h]
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp + edx - 120h]
        mov dword ptr [esi + eax + 14h], ecx
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [edx + 190h]
        imul esi, dword ptr [ebp - 3d4h], 24h
        add esi, dword ptr [edx + ecx + 10h]
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp + eax - 120h]
        mov dword ptr [esi + edx + 14h], eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 3d4h]
        mov ecx, dword ptr [ebp - 450h]
        mov esi, dword ptr [ebp - 44ch]
        mov edx, dword ptr [edx + esi*4]
        mov dword ptr [ecx + eax*4], edx
        ; Exact mapped bytes E9 8C FD FF FF: jmp 0x587ba213
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 17 01 00 00: jmp 0x587ba5a3
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes 0F BE 88 5D 01 00 00: movsx ecx, byte ptr [eax + 0x15d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 01 01 00 00: jne 0x587ba5a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3d4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x587ba4bd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 3d4h]
        add edx, 1
        mov dword ptr [ebp - 3d4h], edx
        movzx eax, word ptr [ebp - 346h]
        cmp dword ptr [ebp - 3d4h], eax
        ; Exact mapped bytes 0F 8D D3 00 00 00: jge 0x587ba5a3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 4
        lea edx, [ebp - 44ch]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587ba518
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588bdf20h
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 E0 68 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 D7 02 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ech]
        push ecx
        push 24h
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        imul eax, dword ptr [ebp - 3d4h], 24h
        add eax, dword ptr [ecx + edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x587ba57a
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588bdf4ch
        push 100h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 7E 68 CF FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 75 02 00 00: jmp 0x587ba7ef
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 3d4h]
        mov edx, dword ptr [ebp - 450h]
        mov esi, dword ptr [ebp - 44ch]
        mov eax, dword ptr [eax + esi*4]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x587ba4ae
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [eax + ecx + 4], 0
        ; Exact mapped bytes 0F BF 8D B8 FC FF FF: movsx ecx, word ptr [ebp - 0x348]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [eax + 190h]
        mov dword ptr [eax + edx + 8], ecx
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        ; Exact mapped bytes 66 8B 95 BA FC FF FF: mov dx, word ptr [ebp - 0x346]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 54 08 0C: mov word ptr [eax + ecx + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov ecx, dword ptr [ebp - 450h]
        mov dword ptr [edx + eax + 14h], ecx
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        lea edx, [ecx + edx + 20h]
        mov eax, dword ptr [ebp - 358h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 354h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 350h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 34ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        mov ecx, dword ptr [eax + 190h]
        mov eax, dword ptr [ebp - 344h]
        mov dword ptr [ecx + edx + 30h], eax
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 190h]
        mov edx, dword ptr [ebp - 340h]
        mov dword ptr [eax + ecx + 34h], edx
        mov eax, dword ptr [ebp - 3c8h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 3c4h]
        mov edx, dword ptr [ecx + 190h]
        mov ecx, dword ptr [ebp - 33ch]
        mov esi, dword ptr [ebp - 338h]
        mov dword ptr [edx + eax + 18h], ecx
        mov dword ptr [edx + eax + 1ch], esi
        mov edx, dword ptr [ebp - 3c8h]
        shl edx, 6
        mov eax, dword ptr [ebp - 3c4h]
        add edx, dword ptr [eax + 190h]
        mov ecx, 4
        imul eax, ecx, 0
        mov dword ptr [edx + eax + 38h], 0
        mov ecx, dword ptr [ebp - 3c8h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 3c4h]
        add ecx, dword ptr [edx + 190h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [ecx + eax + 38h], 0
        ; Exact mapped bytes E9 B0 F9 FF FF: jmp 0x587ba0c2
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x587ba724
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 3c4h]
        mov dword ptr [ecx + 190h], 0
        mov edx, dword ptr [ebp - 3cch]
        push edx
        ; Exact mapped bytes E8 D0 EE 09 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 3d0h]
        push eax
        ; Exact mapped bytes E8 C1 EE 09 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 3c4h]
        cmp dword ptr [ecx + 170h], 0
        ; Exact mapped bytes 75 1D: jne 0x587ba76e
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 3c4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 3c4h]
        mov dword ptr [ecx + 4], 0ffffffffh
        ; Exact mapped bytes EB 48: jmp 0x587ba7b8
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp dword ptr [ebp - 3cch], 0
        ; Exact mapped bytes 74 19: je 0x587ba792
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 3cch]
        push edx
        ; Exact mapped bytes E8 7B EE 09 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3cch], 0
        cmp dword ptr [ebp - 3d0h], 0
        ; Exact mapped bytes 74 19: je 0x587ba7b4
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 3d0h]
        push eax
        ; Exact mapped bytes E8 59 EE 09 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3d0h], 0
        xor eax, eax
        ; Exact mapped bytes EB 59: jmp 0x587ba811
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 100h
        mov edx, dword ptr [ebp - 3c4h]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 B0 99 FF FF: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes EB 37: jmp 0x587ba811
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes EB 04: jmp 0x587ba7e0
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 31: jmp 0x587ba811
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 554h]
        push eax
        ; Exact mapped bytes E8 14 EE 09 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 3c4h]
        mov dword ptr [ecx + 18ch], 0
        mov edx, dword ptr [ebp - 3c4h]
        mov dword ptr [edx + 190h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 29 68 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 8
    }
}
