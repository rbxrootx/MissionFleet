// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CDAC0 .. +0x48B bytes.
extern "C" __declspec(naked) void FUN_586cdac0_586CDAC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 A4 03 00 00: jne 0x586cde77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 0F 84 BE 02 00 00: je 0x586cdda1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 75 27: jne 0x586cdb18
        __asm _emit 0x75
        __asm _emit 0x27
        push 5
        push 0
        push 0
        push 588b1f54h
        ; Exact mapped bytes E8 EF 44 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588b1f70h
        push 0
        ; Exact mapped bytes FF 15 24 44 89 58: call dword ptr [0x58894424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 89 02 00 00: jmp 0x586cdda1
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x586cdbbd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 28 B7 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb7
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 74 16: je 0x586cdb56
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 12 B7 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb7
        __asm _emit 0xde
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 1C: jne 0x586cdb72
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0d8h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 46: jmp 0x586cdbb8
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 E0 B6 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb6
        __asm _emit 0xde
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 74 16: je 0x586cdb9e
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 CA B6 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb6
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 4
        ; Exact mapped bytes 75 1A: jne 0x586cdbb8
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0d8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 E4 01 00 00: jmp 0x586cdda1
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 75 5D: jne 0x586cdc28
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 93 E0 FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x93
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 74 23: je 0x586cdc01
        __asm _emit 0x74
        __asm _emit 0x23
        push 2
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 B1 E0 FF: call 0x584d8d50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb1
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 22: jmp 0x586cdc23
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x586cdc23
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 48 06 96 58: mov edx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 79 01 00 00: jmp 0x586cdda1
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes 75 5C: jne 0x586cdc92
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 93 E0 FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x93
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 3
        ; Exact mapped bytes 74 22: je 0x586cdc6b
        __asm _emit 0x74
        __asm _emit 0x22
        push 5
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA B0 E0 FF: call 0x584d8d50
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb0
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes A1 4C 06 96 58: mov eax, dword ptr [0x5896064c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 22: jmp 0x586cdc8d
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x586cdc8d
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 58 06 96 58: mov edx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x586cdda1
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes 75 27: jne 0x586cdcc7
        __asm _emit 0x75
        __asm _emit 0x27
        push 5
        push 0
        push 0
        push 588b1f78h
        ; Exact mapped bytes E8 40 43 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x43
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588b1f90h
        push 0
        ; Exact mapped bytes FF 15 24 44 89 58: call dword ptr [0x58894424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x586cdda1
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0ach]
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x586cdd71
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 71: jne 0x586cdd58
        __asm _emit 0x75
        __asm _emit 0x71
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 1F DE FF: call 0x584afcb0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1f
        __asm _emit 0xde
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x586cdd27
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD A6 EE FF: call 0x585b83c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa6
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 B1 EE FF: call 0x585b8e40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb1
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 8], eax
        push 5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C 1B DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x1b
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2F: jmp 0x586cdd56
        __asm _emit 0xeb
        __asm _emit 0x2f
        push 1
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C A6 EE FF: call 0x585b83c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa6
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 B1 EE FF: call 0x585b8e40
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb1
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EB 1A DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586cdd6f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 10h], ecx
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 1A DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1a
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x586cdda1
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0f4h]
        ; Exact mapped bytes 75 22: jne 0x586cdda1
        __asm _emit 0x75
        __asm _emit 0x22
        push 5
        push 0
        push 0
        push 588b1f98h
        ; Exact mapped bytes E8 61 42 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x42
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588b1fb4h
        push 0
        ; Exact mapped bytes FF 15 24 44 89 58: call dword ptr [0x58894424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes 75 22: jne 0x586cddd1
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 23 DE FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x23
        __asm _emit 0xde
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x586cddcc
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 67 EC FF: call 0x58594560
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x586cde72
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0e8h]
        ; Exact mapped bytes 75 1F: jne 0x586cddfe
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 23 DE FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x23
        __asm _emit 0xde
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x586cddfc
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 67 EC FF: call 0x58594560
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 74: jmp 0x586cde72
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0e0h]
        ; Exact mapped bytes 75 1F: jne 0x586cde2b
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 23 DE FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x23
        __asm _emit 0xde
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x586cde29
        __asm _emit 0x75
        __asm _emit 0x0e
        push 2
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 67 EC FF: call 0x58594560
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 47: jmp 0x586cde72
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0e4h]
        ; Exact mapped bytes 75 1F: jne 0x586cde58
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 23 DE FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0xde
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x586cde56
        __asm _emit 0x75
        __asm _emit 0x0e
        push 3
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 67 EC FF: call 0x58594560
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x67
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x586cde72
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0ech]
        ; Exact mapped bytes 75 0C: jne 0x586cde72
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 69 EC FF: call 0x58594800
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x69
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x586cdf43
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 76: jne 0x586cdef3
        __asm _emit 0x75
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 75 2D: jne 0x586cdeb8
        __asm _emit 0x75
        __asm _emit 0x2d
        push 588b1fbch
        ; Exact mapped bytes E8 5B 41 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 71 E0 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x71
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x586cdef1
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 75 2B: jne 0x586cdef1
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b1fd8h
        ; Exact mapped bytes E8 20 41 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 71 E0 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x71
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 50: jmp 0x586cdf43
        __asm _emit 0xeb
        __asm _emit 0x50
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 12: jne 0x586cdf0b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 60 E0 FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x60
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 38: jmp 0x586cdf43
        __asm _emit 0xeb
        __asm _emit 0x38
        cmp dword ptr [ebp + 0ch], 0ef10h
        ; Exact mapped bytes 75 2F: jne 0x586cdf43
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0ef10h
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
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
