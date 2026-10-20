// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D7600 .. +0x8A5 bytes.
extern "C" __declspec(naked) void FUN_585d7600_585D7600() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885d23h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes A3 EC 90 94 58: mov dword ptr [0x589490ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 21a9ch], 0
        ; Exact mapped bytes 75 18: jne 0x585d7657
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 21aa0h], 0
        ; Exact mapped bytes 75 0C: jne 0x585d7657
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 21a88h], 0
        ; Exact mapped bytes 74 2F: je 0x585d7686
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10d24h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D3 E7 EA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10d24h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1D E7 EA FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x585d76b3
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10d24h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A4 E7 EA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10d24h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 EE E6 EA FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 FA EF FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfa
        __asm _emit 0xef
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x585d7791
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 48 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585d76e9
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4A 4A EB FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x4a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x585d7791
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D5 5A EB FF: call 0x5848d1d0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x585d778c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 A0 F9 FF: call 0x585717f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa0
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 384h
        ; Exact mapped bytes 75 33: jne 0x585d7749
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 21e24h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 4D EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF 47 EB FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x47
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 4]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        push 5
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 EA 28 01 00: call 0x585ea030
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 43: jmp 0x585d778c
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9F A0 F9 FF: call 0x585717f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa0
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 0a8ch
        ; Exact mapped bytes 75 31: jne 0x585d778c
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 21e24h]
        mov dword ptr [ebp - 48h], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D1 4C EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8A 47 EB FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x47
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 4]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A5 28 01 00: call 0x585ea030
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x585d76de
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A5 DD 1D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xdd
        __asm _emit 0x1d
        __asm _emit 0x00
        push 0ffffff00h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 08 DE 1D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xde
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 0D F0 FF: call 0x584d8580
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20f08h]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 1A E6 EA FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 20f18h], 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 DD FB FF: call 0x58595570
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585d77f1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 1D: jge 0x585d7814
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 20f00h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 CF E6 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585d77e8
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x585d791a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 D6 97 25 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x97
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 37: je 0x585d7878
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        ; Exact mapped bytes 8B 0D B4 06 96 58: mov ecx, dword ptr [0x589606b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 D2 EA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 58h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9D EF EA FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xef
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x585d787f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 288h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 288h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 9E DE EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0xeb
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        sub eax, 2bch
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 A3 DE EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xde
        __asm _emit 0xeb
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        sub eax, 200h
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 36 DD 1D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdd
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 288h]
        mov dword ptr [ebp - 6ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 AD DC 1D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 288h]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 27 E5 EA FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D DC 35 90 58 01: cmp dword ptr [0x589035dc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 75 55: jne 0x585d7978
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0ah
        ; Exact mapped bytes 75 23: jne 0x585d7955
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 284h]
        mov dword ptr [ebp - 74h], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 98 E5 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE FF 00 00: call 0x585e7920
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x585d7976
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 284h]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 75 E5 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB FF 00 00: call 0x585e7920
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x585d7999
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 284h]
        mov dword ptr [ebp - 7ch], edx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 52 E5 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 88 FF 00 00: call 0x585e7920
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
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
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 83 3D BC 35 90 58 00: cmp dword ptr [0x589035bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 7E: je 0x585d7a62
        __asm _emit 0x74
        __asm _emit 0x7e
        push 54h
        ; Exact mapped bytes E8 19 96 25 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x96
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 3C: je 0x585d7a3a
        __asm _emit 0x74
        __asm _emit 0x3c
        push 0
        ; Exact mapped bytes 8B 0D E8 06 96 58: mov ecx, dword ptr [0x589606e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 D0 EA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd0
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 84h], ecx
        push 7d0h
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9B D9 1B 00: call 0x587953d0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd9
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x585d7a41
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + 1071ch], eax
        ; Exact mapped bytes EB 0D: jmp 0x585d7a6f
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1071ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10724h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10724h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10728h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10728h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 C5 DC EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10724h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 86 DC EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0xff
        cdq
        mov ecx, 56h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10728h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 10724h]
        imul edx, dword ptr [ecx + 10728h]
        push edx
        ; Exact mapped bytes E8 4E 95 25 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x95
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 10720h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 10724h]
        imul ecx, dword ptr [eax + 10728h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10720h]
        push eax
        ; Exact mapped bytes E8 DF 52 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x52
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10724h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10724h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10728h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10728h], edx
        push 300h
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA F2 ED FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF E0 0F 00: call 0x586d5c50
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 10da4h]
        mov dword ptr [ebp - 90h], ecx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 EA E3 EA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10d24h]
        mov dword ptr [ebp - 94h], eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 CE E3 EA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe3
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 1E FF FF: call 0x585c9aa0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 28 89 EF FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x89
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10d6ch]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10d6ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 9ch], ecx
        ; Exact mapped bytes 8B 15 64 20 96 58: mov edx, dword ptr [0x58962064]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 64 FF FF FF: call dword ptr [ebp - 0x9c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10d70h]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10d70h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 0a4h], edx
        ; Exact mapped bytes A1 64 20 96 58: mov eax, dword ptr [0x58962064]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10d74h]
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10d74h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes 8B 0D 64 20 96 58: mov ecx, dword ptr [0x58962064]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 54 FF FF FF: call dword ptr [ebp - 0xac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10d6ch]
        mov dword ptr [edx + 10d68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10d78h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10d7ch], 0bh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10d80h], 14h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10d84h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10d88h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10d8ch], 1
        push 80h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 20e78h
        push edx
        ; Exact mapped bytes E8 21 51 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 21e48h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 21e4ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC 95 FE FF: call 0x585c12d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 220c8h], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10680h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 220cch]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 8D E1 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 220cch]
        mov dword ptr [ebp - 0b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 68 E1 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe1
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 220d8h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 21a88h], 0
        ; Exact mapped bytes 74 50: je 0x585d7dde
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 21e20h]
        ; Exact mapped bytes E8 24 CC EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D CC EA FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [eax + 104h], 3
        ; Exact mapped bytes 76 19: jbe 0x585d7dc5
        __asm _emit 0x76
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 220d4h], 1
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 220d8h], 0
        ; Exact mapped bytes EB 17: jmp 0x585d7ddc
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 220d4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 220d8h], 0
        ; Exact mapped bytes EB 17: jmp 0x585d7df5
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 220d4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 220d8h], 0
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 1077ah]
        cmp eax, 7
        ; Exact mapped bytes 75 0E: jne 0x585d7e12
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 83 FB FF: call 0x58590130
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 21ebch], 2
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 8E F9 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 70 F9 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x70
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        push 588abf34h
        ; Exact mapped bytes E8 A9 A1 F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 1E 49 F1 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x49
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 21ec0h], 1
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 70 0A 00: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10ae4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 21f04h], 0
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
        mov esp, ebp
        pop ebp
        ret
    }
}
