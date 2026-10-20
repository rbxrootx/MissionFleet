// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58615420 .. +0x338 bytes.
extern "C" __declspec(naked) void FUN_58615420_58615420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 1D 03 00 00: jne 0x58615750
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes 0F 85 EB 02 00 00: jne 0x5861572d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 A8 E9 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8C F5 E6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 9
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x58615577
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5861547a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 1ch
        ; Exact mapped bytes 0F 8D F3 00 00 00: jge 0x58615577
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA A7 E9 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9B 7B E7 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x58615572
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + ecx + 20h]
        cmp eax, 2
        ; Exact mapped bytes 75 15: jne 0x586154dc
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + ecx + 20h]
        cmp eax, 1
        ; Exact mapped bytes 74 2A: je 0x58615506
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 4
        ; Exact mapped bytes 75 1A: jne 0x5861550b
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 75 05: jne 0x5861550b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x58615471
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A A7 E9 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E9 7A E7 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        ; Exact mapped bytes 75 43: jne 0x58615572
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 A7 E9 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C5 7A E7 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x7a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 75 1F: jne 0x58615572
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 98 1C EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 2ch
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 05 38 EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 E0 01 00 00: jmp 0x58615752
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA FE FF FF: jmp 0x58615471
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 18 5D 96 58 00: cmp dword ptr [0x58965d18], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x58615647
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0c4h
        ; Exact mapped bytes E8 76 BA 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xba
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes A3 18 5D 96 58: mov dword ptr [0x58965d18], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        push 0c4h
        push 0
        ; Exact mapped bytes 8B 0D 18 5D 96 58: mov ecx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes E8 61 78 23 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 0ch
        push 588ae138h
        push 30h
        ; Exact mapped bytes 8B 15 18 5D 96 58: mov edx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 BB EB 19 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xeb
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 3
        ; Exact mapped bytes 8B 0D 18 5D 96 58: mov ecx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 81 84 00 00 00: mov word ptr [ecx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 18 5D 96 58: mov edx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov al, byte ptr [edx + 31h]
        and al, 80h
        ; Exact mapped bytes 8B 0D 18 5D 96 58: mov ecx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov byte ptr [ecx + 31h], al
        ; Exact mapped bytes 8B 15 18 5D 96 58: mov edx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov byte ptr [edx + 47h], 64h
        ; Exact mapped bytes A1 18 5D 96 58: mov eax, dword ptr [0x58965d18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov cl, byte ptr [eax + 32h]
        and cl, 0f0h
        or cl, 1
        ; Exact mapped bytes 8B 15 18 5D 96 58: mov edx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov byte ptr [edx + 32h], cl
        ; Exact mapped bytes A1 18 5D 96 58: mov eax, dword ptr [0x58965d18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov byte ptr [eax + 46h], 1
        ; Exact mapped bytes 8B 0D 18 5D 96 58: mov ecx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 40h], 1
        mov edx, 3
        ; Exact mapped bytes A1 18 5D 96 58: mov eax, dword ptr [0x58965d18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 50 36: mov word ptr [eax + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 18 5D 96 58: mov ecx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov dl, byte ptr [ecx + 32h]
        or dl, 20h
        ; Exact mapped bytes A1 18 5D 96 58: mov eax, dword ptr [0x58965d18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov byte ptr [eax + 32h], dl
        ; Exact mapped bytes 8B 0D 18 5D 96 58: mov ecx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ecx + 40h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 2
        ; Exact mapped bytes 75 19: jne 0x58615678
        __asm _emit 0x75
        __asm _emit 0x19
        push 1
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 FE F7 FF: call 0x585954f0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 07: je 0x58615678
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x58615752
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D A6 E9 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 F3 E6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf3
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 7
        ; Exact mapped bytes 75 4E: jne 0x586156e8
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB A5 E9 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 34 F3 E6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf3
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 8
        ; Exact mapped bytes 75 28: jne 0x586156e8
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0ah
        ; Exact mapped bytes 74 1F: je 0x586156e8
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes E8 22 1B EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 516h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8C 36 EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0xec
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 6A: jmp 0x58615752
        __asm _emit 0xeb
        __asm _emit 0x6a
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0eeach
        push 0
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        push 0
        push 0c4h
        ; Exact mapped bytes 8B 0D 18 5D 96 58: mov ecx, dword ptr [0x58965d18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        push 0
        push 80010118h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 72 21 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x72
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 23: jmp 0x58615750
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 78h]
        ; Exact mapped bytes 75 18: jne 0x58615750
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
