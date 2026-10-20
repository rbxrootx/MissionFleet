// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58702BE0 .. +0x4ED bytes.
extern "C" __declspec(naked) void FUN_58702be0_58702BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x58702c9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 47: jne 0x58702c49
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 45 DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x45
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx edx, word ptr [eax + 38h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 124h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes EB 4F: jmp 0x58702c98
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 124h]
        ; Exact mapped bytes E8 3D 2E DE FF: call 0x584e5aa0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2e
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE CB D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xcb
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 124h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes E9 2A 04 00 00: jmp 0x587030c7
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 208h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], 1
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x58702d5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 4
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58702d5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0ah
        ; Exact mapped bytes 74 71: je 0x58702d5d
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 5
        ; Exact mapped bytes 74 62: je 0x58702d5d
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 53: je 0x58702d5d
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 44: je 0x58702d5d
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 35: je 0x58702d5d
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 13: jne 0x58702d4a
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 44 DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x58702d5d
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 10h
        ; Exact mapped bytes 0F 85 31 02 00 00: jne 0x58702f8e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 75 41: jne 0x58702daa
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 124h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 124h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 124h]
        ; Exact mapped bytes E8 F0 2D DB FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2d
        __asm _emit 0xdb
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 B8 E7 FF: call 0x5857e630
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 3C D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 90 E3 EE FF: call 0x585f1150
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe3
        __asm _emit 0xee
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 6F 01 00 00: jne 0x58702f3a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x58702eb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9eh]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 BB E7 FF: call 0x5857e940
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xbb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 194h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 194h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 1b4h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], 1
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 4
        ; Exact mapped bytes 74 63: je 0x58702ead
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 6
        ; Exact mapped bytes 74 54: je 0x58702ead
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 45: je 0x58702ead
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 5
        ; Exact mapped bytes 74 36: je 0x58702ead
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0bh
        ; Exact mapped bytes 74 27: je 0x58702ead
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 18: je 0x58702ead
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0fh
        ; Exact mapped bytes 74 09: je 0x58702ead
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 50 D8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x58702f38
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9eh]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D BA E7 FF: call 0x5857e940
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xba
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 190h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b0h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 1b0h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a0h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 1a0h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 4F: jmp 0x58702f89
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E E2 EE FF: call 0x585f1150
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x58702f89
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 19ch]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 34 30 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x30
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1E 30 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x30
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1b0h]
        mov dword ptr [ebp - 1ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 08 30 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x58703066
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0ch
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x58703025
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 124h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 1b4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 39 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x39
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5A E1 EE FF: call 0x585f1150
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe1
        __asm _emit 0xee
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 26: jne 0x58703023
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 1A: je 0x58703023
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1b4h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1b4h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 41: jmp 0x58703066
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 124h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 124h]
        ; Exact mapped bytes E8 34 2B DB FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2b
        __asm _emit 0xdb
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 B5 E7 FF: call 0x5857e630
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 8
        ; Exact mapped bytes 74 0F: je 0x58703084
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 9
        ; Exact mapped bytes 75 43: jne 0x587030c7
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        ; Exact mapped bytes E8 02 2A DE FF: call 0x584e5aa0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x2a
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 93 C7 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc7
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 124h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 124h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
