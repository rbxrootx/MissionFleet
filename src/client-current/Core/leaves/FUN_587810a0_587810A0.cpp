// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587810A0 .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_587810a0_587810A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 0C 59 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x59
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x587810c4
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EF AF D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xaf
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x5878120e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A AE D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 38 D0 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 23 01 00 00: jne 0x58781209
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 AD D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xad
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 FB FF FF: call 0x58780cd0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 22 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x22
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 75 51: jne 0x58781160
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 A6 58 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x58
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x5878112a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 89 AF D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xaf
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2E: je 0x5878115e
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A8 AD D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xad
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 38 D0 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 18: jne 0x5878115c
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 77 B1 D7 FF: call 0x584fc2d0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb1
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x5878115e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C1: jmp 0x5878111f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes EB 67: jmp 0x587811c7
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 22 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 68h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8C 01 00 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 4A: je 0x587811c7
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 21 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x21
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 73 E9 D2 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 25: jne 0x587811c7
        __asm _emit 0x75
        __asm _emit 0x25
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 21 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x21
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 0B: shr ax, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A D8 D7 FF: call 0x584fe9f0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd8
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F4 B0 D7 FF: call 0x584fc2d0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb0
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x58781200
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58781207
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 05: jmp 0x5878120e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 AB FE FF FF: jmp 0x587810b9
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
