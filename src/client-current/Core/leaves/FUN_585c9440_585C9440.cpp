// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C9440 .. +0x659 bytes.
extern "C" __declspec(naked) void FUN_585c9440_585C9440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 4], ecx
        push 0
        ; Exact mapped bytes 8B 0D E8 1F 96 58: mov ecx, dword ptr [0x58961fe8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A CA EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D CA EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
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
        mov dword ptr [ecx + 10678h], 20000000h
        push 100h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B C0 1E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x1e
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 C0 1E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc0
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 C5 EB FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc5
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106fch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 106fch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0ah
        ; Exact mapped bytes 75 49: jne 0x585c9559
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 288h], 0
        ; Exact mapped bytes 74 3D: je 0x585c9559
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 288h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x585c9545
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x585c954c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 288h], 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC DB F0 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push -3ch
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BD D8 EE FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd8
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 DB F0 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 2ceh
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 D8 EE FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 51 11 00: call 0x586de780
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x51
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10dd4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 10dd4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20f08h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 20f08h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585c95f0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x585c9613
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20f00h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D0 C8 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585c95e7
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20f0ch]
        ; Exact mapped bytes E8 9F 72 1F 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x72
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20f18h], 0
        push 0
        ; Exact mapped bytes 8B 0D 88 06 96 58: mov ecx, dword ptr [0x58960688]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 C8 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [edx + 5896068ch]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 8A C8 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ecx + 5896068ch]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6F C8 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ecx + 5896068ch]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 04 1B 1F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [eax + 5896068ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E9 1A 1F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1071ch], 0
        ; Exact mapped bytes 74 56: je 0x585c970a
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1071ch], 0
        ; Exact mapped bytes 74 3D: je 0x585c96fd
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1071ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x585c96e9
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x585c96f0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1071ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1071ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10720h], 0
        ; Exact mapped bytes 74 6D: je 0x585c9783
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10720h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 20 79 26 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x79
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10728h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10724h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10724h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10724h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10728h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10728h], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10720h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 51 02 00: call 0x585ee8b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21e14h], -1
        ; Exact mapped bytes 74 1D: je 0x585c97b5
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e14h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e14h], 0ffffffffh
        push 80h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20e78h
        push ecx
        ; Exact mapped bytes E8 45 36 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x36
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 12ch
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 30 16 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x30
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 220cch]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E3 C6 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc6
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 220cch]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C4 C6 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc6
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585c982f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 3E: jge 0x585c9873
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 21ac8h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [edx + ecx*4 + 21ac8h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 21ac8h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 90 C0 14 00: call 0x58715900
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B3: jmp 0x585c9826
        __asm _emit 0xeb
        __asm _emit 0xb3
        push 588abf50h
        ; Exact mapped bytes E8 73 87 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 56 FA FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB 7D F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x7d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        ; Exact mapped bytes E8 3B 73 28 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x73
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x585c98e5
        __asm _emit 0x74
        __asm _emit 0x39
        push 588abf6ch
        ; Exact mapped bytes E8 3A 87 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 56 FA FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 82 7D F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        ; Exact mapped bytes E8 02 73 28 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x73
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x585c98f3
        __asm _emit 0x75
        __asm _emit 0x0e
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 73 FA FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE D6 F0 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd6
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x585c997f
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF D6 F0 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 28 FD F1 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 4
        ; Exact mapped bytes 74 4F: je 0x585c997f
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 D6 F0 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E FD F1 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 74 35: je 0x585c997f
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B D6 F0 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F4 FC F1 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x585c997f
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 D6 F0 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 F9 EE FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x585c99f7
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 F9 EE FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf9
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B0 FC F1 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 4
        ; Exact mapped bytes 74 4F: je 0x585c99f7
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED F8 EE FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 FC F1 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 74 35: je 0x585c99f7
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 F8 EE FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C FC F1 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x585c99f7
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA F8 EE FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21ea0h], 0
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 60 FB FF: call 0x5857fac0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 6
        ; Exact mapped bytes 75 0F: jne 0x585c9a30
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 220e0h]
        ; Exact mapped bytes E8 41 11 F0 FF: call 0x584cab70
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x11
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes C6 05 9D 75 94 58 00: mov byte ptr [0x5894759d], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9d
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 9E 75 94 58 00: mov byte ptr [0x5894759e], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 9F 75 94 58 00: mov byte ptr [0x5894759f], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9f
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21a94h]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 85 C4 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21a98h]
        mov dword ptr [ebp - 6ch], edx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 6F C4 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21f04h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10da0h]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 4C C4 EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
