// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873DC40 .. +0x483 bytes.
extern "C" __declspec(naked) void FUN_5873dc40_5873DC40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5873dc65
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 36: jge 0x5873dca1
        __asm _emit 0x7d
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 264h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, 33h
        sub ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 6E D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 92 82 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BB: jmp 0x5873dc5c
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5873dcb3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0fh
        ; Exact mapped bytes 7D 2D: jge 0x5873dce6
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 26ch], 0
        ; Exact mapped bytes 74 1B: je 0x5873dce4
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 26ch]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AD 82 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x5873dcaa
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 4D: je 0x5873dd3c
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 17ch]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B2 F0 FF FF: call 0x5873cdc0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        push 2
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        nop
        ; Exact mapped bytes E9 81 03 00 00: jmp 0x5873e0bd
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2b4h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 CF 02 00 00: jne 0x5873e01e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, 7
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 0F 87 49 02 00 00: ja 0x5873dfb2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 5873e0d0h]
        ; Exact mapped bytes FF 24 95 C4 E0 73 58: jmp dword ptr [edx*4 + 0x5873e0c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xe0
        __asm _emit 0x73
        __asm _emit 0x58
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        mov dword ptr [ebp - 28h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F7 81 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        push 2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        nop
        ; Exact mapped bytes E9 52 02 00 00: jmp 0x5873e019
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5873ddd9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 36: jge 0x5873de15
        __asm _emit 0x7d
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 264h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, 67h
        sub ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 6D D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1E 81 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BB: jmp 0x5873ddd0
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        mov dword ptr [ebp - 38h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5D 81 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 26ch]
        mov dword ptr [ebp - 3ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3E 81 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 26ch]
        mov dword ptr [ebp - 40h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 1F 81 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 26ch]
        mov dword ptr [ebp - 44h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 00 81 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        mov dword ptr [ebp - 48h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E1 80 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 26ch]
        mov dword ptr [ebp - 4ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C2 80 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 26ch]
        mov dword ptr [ebp - 50h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 A3 80 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 26ch]
        mov dword ptr [ebp - 54h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 84 80 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        mov dword ptr [ebp - 58h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 65 80 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 26ch]
        mov dword ptr [ebp - 5ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 46 80 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 26ch]
        mov dword ptr [ebp - 60h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 27 80 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0eh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        mov dword ptr [ebp - 64h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 08 80 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x80
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 68h], edx
        push 0
        push 2
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        nop
        ; Exact mapped bytes EB 67: jmp 0x5873e019
        __asm _emit 0xeb
        __asm _emit 0x67
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 17ch]
        mov dword ptr [ebp - 6ch], eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 EF ED FF FF: call 0x5873cdc0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 26ch]
        mov dword ptr [ebp - 70h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 A0 7F D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        push 2
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 26ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 8C: call dword ptr [ebp - 0x74]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x8c
        nop
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x5873e0bd
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2b4h]
        cmp ecx, 2
        ; Exact mapped bytes 75 3A: jne 0x5873e067
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, 4
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 17ch]
        mov dword ptr [ebp - 78h], edx
        mov eax, 4
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 17ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 7ch], edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 55 84: call dword ptr [ebp - 0x7c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x84
        nop
        ; Exact mapped bytes EB 4D: jmp 0x5873e0b4
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 2b4h]
        cmp ecx, 3
        ; Exact mapped bytes 75 3E: jne 0x5873e0b4
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, 4
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 17ch]
        mov dword ptr [ebp - 80h], edx
        mov eax, 4
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 17ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 7C FF FF FF: call dword ptr [ebp - 0x84]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 EE FF FF: call 0x5873cec0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
