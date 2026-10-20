// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58615830 .. +0x3C5 bytes.
extern "C" __declspec(naked) void FUN_58615830_58615830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 0F 85 9A 03 00 00: jne 0x58615bf1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 1
        ; Exact mapped bytes 75 10: jne 0x58615870
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 06 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 81 03 00 00: jmp 0x58615bf1
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 04: or dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 24h], 1
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 3D ED FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x586158e2
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D1 67 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4C: je 0x58615934
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F0 65 E7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x65
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 DA EA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        xor edx, 55h
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 24: jle 0x58615932
        __asm _emit 0x7e
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CA 65 E7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x65
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 DA EA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xda
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB A3: jmp 0x586158d7
        __asm _emit 0xeb
        __asm _emit 0xa3
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 7F 24: jg 0x5861595e
        __asm _emit 0x7f
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 1
        ; Exact mapped bytes 74 24: je 0x58615967
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0ah
        ; Exact mapped bytes 74 1B: je 0x58615967
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 66h
        ; Exact mapped bytes 74 12: je 0x58615967
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 2
        ; Exact mapped bytes 74 09: je 0x58615967
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 28: jmp 0x5861598f
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7F 1B: jg 0x58615988
        __asm _emit 0x7f
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 1
        ; Exact mapped bytes 74 19: je 0x5861598f
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0ah
        ; Exact mapped bytes 74 10: je 0x5861598f
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 66h
        ; Exact mapped bytes 74 07: je 0x5861598f
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 4D 02 00 00: je 0x58615be6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 05 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x58615b12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 74 0E: je 0x586159cb
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 1ch], 0ah
        ; Exact mapped bytes 74 11: je 0x586159d4
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 1ch], 66h
        ; Exact mapped bytes 74 14: je 0x586159dd
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes EB 1B: jmp 0x586159e6
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 19: jmp 0x586159ed
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 14h], 6
        ; Exact mapped bytes EB 10: jmp 0x586159ed
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 14h], 4
        ; Exact mapped bytes EB 07: jmp 0x586159ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586159ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 4E: jge 0x58615a53
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F6 F0 E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 04 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 34h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 40 05 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A3: jmp 0x586159f6
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 38h], ecx
        push 0ah
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B1 F0 E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B2 04 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 36 F0 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B7 11 E7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x11
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 74h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0c2h
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4F FB 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfb
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 74h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0c2h
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 27 FB 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfb
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 58h], eax
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D4 03 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x58615be4
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58615b24
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 1A: jge 0x58615b44
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4F 04 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x58615b1b
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 60h], edx
        push 18h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 C0 EF E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xef
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C1 03 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 6ch], ecx
        push 2
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 45 EF E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 C6 10 E7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 78h], ecx
        push 235h
        push 15ch
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 6B FA 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 7ch], eax
        push 235h
        push 15ch
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 50 FA 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 80h], edx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 FD 02 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x58615bf1
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 02 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
