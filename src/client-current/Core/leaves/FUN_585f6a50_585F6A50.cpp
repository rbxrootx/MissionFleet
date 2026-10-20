// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F6A50 .. +0x259F bytes.
extern "C" __declspec(naked) void FUN_585f6a50_585F6A50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888626fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 420h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 B7 E8 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588ade88h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], 100h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 0
        mov ecx, 3e8h
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        push 84h
        ; Exact mapped bytes E8 1F A5 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa5
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 1B: je 0x585f6b10
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 45 0D EF FF: call 0x584e7850
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x585f6b17
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ecx + 3fch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3fch]
        mov dword ptr [ebp - 18ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 41 F4 E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3fch]
        mov dword ptr [ebp - 190h], eax
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 E5 90 F0 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 91 A4 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 38: je 0x585f6bbb
        __asm _emit 0x74
        __asm _emit 0x38
        push 2
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 DF E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdf
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 6A B7 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585f6bc2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [ecx + 400h], edx
        push 54h
        ; Exact mapped bytes E8 1F A4 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 3B: je 0x585f6c30
        __asm _emit 0x74
        __asm _emit 0x3b
        push 3
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E DF E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xdf
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 F5 B6 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x585f6c37
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 1a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a0h]
        mov dword ptr [eax + 404h], ecx
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585f6c65
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 63: jge 0x585f6cce
        __asm _emit 0x7d
        __asm _emit 0x63
        push 54h
        ; Exact mapped bytes E8 92 A3 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa3
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 23: je 0x585f6ca5
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 80 B6 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585f6cac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [eax + edx*4 + 408h], ecx
        ; Exact mapped bytes EB 8E: jmp 0x585f6c5c
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 404h]
        mov dword ptr [ebp - 1a8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 C3 E8 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 404h]
        mov dword ptr [ebp - 1ach], edx
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 37 F1 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 404h]
        mov dword ptr [ebp - 1b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 7B F0 E8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 400h]
        mov dword ptr [ebp - 1b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 5F F0 E8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 400h]
        mov dword ptr [ebp - 1b8h], edx
        push 0c8h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 E0 E7 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 404h]
        mov dword ptr [ebp - 1bch], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 C1 E7 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 408h]
        mov dword ptr [ebp - 1c0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 09 E8 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 408h]
        mov dword ptr [ebp - 1c4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 E1 E7 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe7
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 2D A2 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa2
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 46: je 0x585f6e2d
        __asm _emit 0x74
        __asm _emit 0x46
        push 32h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C DD E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xdd
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 7d0h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 69h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 238h
        push edx
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F8 B4 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x585f6e34
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 1cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1cch]
        mov dword ptr [eax + 410h], ecx
        push 54h
        ; Exact mapped bytes E8 AD A1 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa1
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 4A: je 0x585f6eb1
        __asm _emit 0x74
        __asm _emit 0x4a
        push 8ah
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 DC E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 7d0h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 69h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 238h
        push ecx
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 74 B4 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585f6eb8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 1d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1d4h]
        mov dword ptr [edx + 414h], eax
        push 54h
        ; Exact mapped bytes E8 29 A1 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa1
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 46: je 0x585f6f31
        __asm _emit 0x74
        __asm _emit 0x46
        push 34h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 DC E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 7d0h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 69h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 238h
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F4 B3 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x585f6f38
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 1dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1dch]
        mov dword ptr [ecx + 418h], edx
        push 54h
        ; Exact mapped bytes E8 A9 A0 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa0
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 46: je 0x585f6fb1
        __asm _emit 0x74
        __asm _emit 0x46
        push 79h
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 DB E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xdb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 7d0h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 69h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 238h
        push edx
        mov eax, dword ptr [ebp - 1e0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 74 B3 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585f6fb8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1e4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1e4h]
        mov dword ptr [eax + 420h], ecx
        push 54h
        ; Exact mapped bytes E8 29 A0 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa0
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 47: je 0x585f7032
        __asm _emit 0x74
        __asm _emit 0x47
        push 7ah
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 DB E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 7d0h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 69h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 238h
        push ecx
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 F3 B2 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x585f7039
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ech]
        mov dword ptr [edx + 424h], eax
        push 54h
        ; Exact mapped bytes E8 A8 9F 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9f
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 49: je 0x585f70b5
        __asm _emit 0x74
        __asm _emit 0x49
        push 0a1h
        ; Exact mapped bytes 8B 0D 6C 07 96 58: mov ecx, dword ptr [0x5896076c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 DA E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 7d0h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 69h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 238h
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 70 B2 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585f70bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 1f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + 41ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 410h]
        mov dword ptr [ebp - 1f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 4C ED E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 410h]
        mov dword ptr [ebp - 1fch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 9D E4 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 410h]
        mov dword ptr [ebp - 200h], edx
        push 0
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 B1 ED E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 414h]
        mov dword ptr [ebp - 204h], ecx
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 95 ED E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 418h]
        mov dword ptr [ebp - 208h], eax
        push 0
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 79 ED E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 420h]
        mov dword ptr [ebp - 20ch], edx
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 5D ED E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 424h]
        mov dword ptr [ebp - 210h], ecx
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 41 ED E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 41ch]
        mov dword ptr [ebp - 214h], eax
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 25 ED E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 41 9E 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9e
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 46: je 0x585f7219
        __asm _emit 0x74
        __asm _emit 0x46
        push 4
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 D8 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 157h
        push eax
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 FF F5 E8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7223
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 21ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 21ch]
        mov dword ptr [ecx + 394h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 394h]
        mov dword ptr [ebp - 220h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 4F E3 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe3
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 394h]
        mov dword ptr [ebp - 224h], eax
        push 0
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 C3 EB E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 394h]
        mov dword ptr [ebp - 228h], edx
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 B7 82 EA FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 394h]
        mov dword ptr [ebp - 22ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 8B 85 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 47 9D 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x9d
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 40: je 0x585f7313
        __asm _emit 0x74
        __asm _emit 0x40
        push 0dh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 D7 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 3e8h
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F5 D5 F3 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f731d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 234h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 234h]
        mov dword ptr [eax + 398h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 398h]
        mov dword ptr [ebp - 23ch], eax
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 D7 E8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 80 DA F3 FF: call 0x58534df0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xda
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 398h]
        mov dword ptr [ebp - 244h], eax
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 D6 E8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 BC D9 F3 FF: call 0x58534d60
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd9
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 58 9C 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9c
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 40: je 0x585f7402
        __asm _emit 0x74
        __asm _emit 0x40
        push 0eh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 D7 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 3e7h
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 248h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 06 D5 F3 FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f740c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 24ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 24ch]
        mov dword ptr [eax + 39ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 39ch]
        mov dword ptr [ebp - 250h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 66 E1 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe1
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 39ch]
        mov dword ptr [ebp - 254h], edx
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 DA E9 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585f7479
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x585f751e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 7A 9B 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9b
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 4C: je 0x585f74ec
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 199h
        push ecx
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B D6 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 5dch
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 258h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 3C AE E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xae
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f74f6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 25ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 25ch]
        mov dword ptr [eax + edx*4 + 3a0h], ecx
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x585f7470
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 3a0h]
        mov dword ptr [ebp - 260h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 6A E0 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe0
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 3a0h]
        mov dword ptr [ebp - 264h], edx
        push 101h
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 42 E0 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe0
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 398h]
        mov dword ptr [ebp - 268h], ecx
        push 0
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 C6 86 F0 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 39ch]
        mov dword ptr [ebp - 26ch], eax
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 AA 86 F0 FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        push 160h
        ; Exact mapped bytes E8 53 9A 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x9a
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 32: je 0x585f75f9
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 7d0h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 EF FA 0A 00: call 0x586a70e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7603
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 270h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 270h]
        mov dword ptr [eax + 3b4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3b4h]
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 2710h
        push ecx
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 39 E8 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 B2 99 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x99
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 71: je 0x585f76d9
        __asm _emit 0x74
        __asm _emit 0x71
        push 11h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B D4 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 27ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1dah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 235h
        push eax
        mov ecx, dword ptr [ebp - 278h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 27ch]
        push eax
        mov ecx, dword ptr [ebp - 280h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 0F 46 ED FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f76e3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 284h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 284h]
        mov dword ptr [eax + 428h], ecx
        push 0ach
        ; Exact mapped bytes E8 F8 98 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 71: je 0x585f7793
        __asm _emit 0x74
        __asm _emit 0x71
        push 12h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 D3 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 147h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2a3h
        push eax
        mov ecx, dword ptr [ebp - 288h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 28ch]
        push eax
        mov ecx, dword ptr [ebp - 290h]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 55 45 ED FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x45
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f779d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 294h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [eax + 42ch], ecx
        push 0ach
        ; Exact mapped bytes E8 3E 98 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 71: je 0x585f784d
        __asm _emit 0x74
        __asm _emit 0x71
        push 13h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 D2 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 29ch], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a0h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1efh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2a3h
        push eax
        mov ecx, dword ptr [ebp - 298h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 29ch]
        push eax
        mov ecx, dword ptr [ebp - 2a0h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 9B 44 ED FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7857
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 2a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [eax + 430h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 428h]
        mov dword ptr [ebp - 2a8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 1B DD 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xdd
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 428h]
        mov dword ptr [ebp - 2ach], edx
        push 0
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 8F E5 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 42ch]
        mov dword ptr [ebp - 2b0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 E0 DC 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdc
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 42ch]
        mov dword ptr [ebp - 2b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 54 E5 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe5
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 430h]
        mov dword ptr [ebp - 2b8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 A5 DC 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xdc
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 430h]
        mov dword ptr [ebp - 2bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 19 E5 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe5
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 D2 96 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x96
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 71: je 0x585f79b9
        __asm _emit 0x74
        __asm _emit 0x71
        push 14h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B D1 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2c4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 41bh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1ebh
        push eax
        mov ecx, dword ptr [ebp - 2c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2c4h]
        push eax
        mov ecx, dword ptr [ebp - 2c8h]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 2F 43 ED FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x43
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f79c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 2cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2cch]
        mov dword ptr [eax + 3ach], ecx
        push 0ach
        ; Exact mapped bytes E8 18 96 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 71: je 0x585f7a73
        __asm _emit 0x74
        __asm _emit 0x71
        push 15h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 D0 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d8h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 41bh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 235h
        push eax
        mov ecx, dword ptr [ebp - 2d0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2d4h]
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 75 42 ED FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7a7d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 2dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2dch]
        mov dword ptr [eax + 3a8h], ecx
        push 0ach
        ; Exact mapped bytes E8 5E 95 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x95
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 71: je 0x585f7b2d
        __asm _emit 0x74
        __asm _emit 0x71
        push 0
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 D0 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2e8h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 41bh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 27fh
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2e4h]
        push eax
        mov ecx, dword ptr [ebp - 2e8h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 BB 41 ED FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7b37
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 2ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ech]
        mov dword ptr [eax + 3b0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3ach]
        mov dword ptr [ebp - 2f0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 3B DA 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xda
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3a8h]
        mov dword ptr [ebp - 2f4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 1C DA 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xda
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3b0h]
        mov dword ptr [ebp - 2f8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 FD D9 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585f7bc6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x585f7c74
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 2A 94 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 41: je 0x585f7c31
        __asm _emit 0x74
        __asm _emit 0x41
        push 7d0h
        mov eax, dword ptr [ebp + 10h]
        add eax, 73h
        push eax
        imul ecx, dword ptr [ebp - 18h], 19h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 1c2h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 B7 40 ED FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7c3b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 2fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2fch]
        mov dword ptr [eax + edx*4 + 374h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 2d4h], 0
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x585f7bbd
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585f7c86
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 80h
        ; Exact mapped bytes 7D 13: jge 0x585f7ca2
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 0d4h], 0
        ; Exact mapped bytes EB DB: jmp 0x585f7c7d
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585f7cb4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x585f7d8f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3a0h
        ; Exact mapped bytes E8 3C 93 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x93
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 36: je 0x585f7d14
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 3e8h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 75h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 6eh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 74 D7 13 00: call 0x58735480
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd7
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7d1e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 300h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 300h]
        mov dword ptr [ecx + eax*4 + 2f4h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 2f4h]
        mov dword ptr [ebp - 304h], edx
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 DF E0 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 2f4h]
        mov dword ptr [ebp - 308h], edx
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 3e8h
        push eax
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 F7 E0 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe0
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x585f7cab
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585f7da1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D 16 01 00 00: jge 0x585f7ec1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 18h]
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x585f7dca
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        mov dword ptr [ebp - 2ch], edx
        imul eax, dword ptr [ebp - 28h], 150h
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 94h]
        mov dword ptr [ebp - 424h], edx
        imul eax, dword ptr [ebp - 2ch], 0eh
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 97h]
        mov dword ptr [ebp - 420h], edx
        push 0fch
        ; Exact mapped bytes E8 02 92 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x92
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 41: je 0x585f7e59
        __asm _emit 0x74
        __asm _emit 0x41
        push 0bh
        ; Exact mapped bytes 8B 0D 88 07 96 58: mov ecx, dword ptr [0x58960788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB CC E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xcc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 424h]
        push ecx
        push 3
        mov edx, dword ptr [ebp - 30ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 1F 2B 1C 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2b
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7e63
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 310h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 28h]
        shl edx, 4
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 3b8h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 310h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp - 28h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 3b8h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 314h], edx
        push 0bb8h
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 C5 DF E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdf
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D7 FE FF FF: jmp 0x585f7d98
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585f7ed3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D 96 01 00 00: jge 0x585f8073
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x585f7efc
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        mov dword ptr [ebp - 24h], ecx
        imul edx, dword ptr [ebp - 20h], 0cfh
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 119h]
        mov dword ptr [ebp - 42ch], ecx
        imul edx, dword ptr [ebp - 24h], 0eh
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 0cbh]
        mov dword ptr [ebp - 428h], ecx
        push 74h
        ; Exact mapped bytes E8 D3 90 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 4D: je 0x585f7f94
        __asm _emit 0x74
        __asm _emit 0x4d
        push 36h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC CB E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        push 0bb8h
        mov edx, dword ptr [ebp - 428h]
        push edx
        mov eax, dword ptr [ebp - 42ch]
        push eax
        mov ecx, dword ptr [ebp - 318h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 80h
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 C4 BA F0 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f7f9e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 31ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 31ch]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 20h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 3d8h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 320h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 BA D5 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd5
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        shl edx, 4
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 3d8h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 324h], eax
        push 0
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 21 DE E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xde
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 328h], edx
        push 0bb8h
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 35 DE E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xde
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1C: je 0x585f806e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 20h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 3d8h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 83 C0 F0 FF: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 57 FE FF FF: jmp 0x585f7eca
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 8A 8F 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8f
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 4A: je 0x585f80da
        __asm _emit 0x74
        __asm _emit 0x4a
        push 37h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 CA E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        push 0bb8h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a5h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 13bh
        push edx
        mov eax, dword ptr [ebp - 32ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 4E A2 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f80e4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov edx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 330h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 330h]
        mov dword ptr [eax + 3f8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3f8h]
        mov dword ptr [ebp - 334h], eax
        push 101h
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 8E D4 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC 5E 00 00: call 0x585fdff0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 52 DE E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xde
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8d8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8dch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8e0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8e4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8e8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ech], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8f0h], 0
        push 70h
        ; Exact mapped bytes E8 3C 8E 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8e
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 4E: je 0x585f822c
        __asm _emit 0x74
        __asm _emit 0x4e
        push 282828h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 8C A1 E8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8236
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 338h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 338h]
        mov dword ptr [edx + 8f4h], eax
        push 70h
        ; Exact mapped bytes E8 A8 8D 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 4E: je 0x585f82c0
        __asm _emit 0x74
        __asm _emit 0x4e
        push 282828h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F8 A0 E8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f82ca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 33ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 33ch]
        mov dword ptr [edx + 8f8h], eax
        push 70h
        ; Exact mapped bytes E8 14 8D 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 51: je 0x585f8357
        __asm _emit 0x74
        __asm _emit 0x51
        push 282828h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 88h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 61 A0 E8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8361
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 340h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 340h]
        mov dword ptr [edx + 8fch], eax
        push 70h
        ; Exact mapped bytes E8 7D 8C 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 53: je 0x585f83f0
        __asm _emit 0x74
        __asm _emit 0x53
        push 282828h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 98h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 88h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 C8 9F E8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f83fa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 344h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 344h]
        mov dword ptr [edx + 900h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f4h]
        mov dword ptr [ebp - 348h], edx
        push 1388h
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 48 DA E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov dword ptr [ebp - 34ch], ecx
        push 1388h
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 29 DA E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8fch]
        mov dword ptr [ebp - 350h], eax
        push 1388h
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 0A DA E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 900h]
        mov dword ptr [ebp - 354h], edx
        push 1388h
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 EB D9 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd9
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f4h]
        mov dword ptr [ebp - 358h], ecx
        push 0
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 2F DA E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov dword ptr [ebp - 35ch], eax
        push 0
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 13 DA E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8fch]
        mov dword ptr [ebp - 360h], edx
        push 0
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 F7 D9 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd9
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 900h]
        mov dword ptr [ebp - 364h], ecx
        push 0
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 DB D9 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd9
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 F7 8A 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8a
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 4C: je 0x585f856f
        __asm _emit 0x74
        __asm _emit 0x4c
        push 282828h
        push 0
        push 30e030h
        mov edx, dword ptr [ebp + 10h]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 210h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1a3h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 49 9E E8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8579
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 368h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 368h]
        mov dword ptr [eax + 904h], ecx
        push 70h
        ; Exact mapped bytes E8 65 8A 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8a
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 52: je 0x585f8607
        __asm _emit 0x74
        __asm _emit 0x52
        push 282828h
        push 0
        push 6effffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 8bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 210h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 80h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1a3h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 B1 9D E8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8611
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 36ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 36ch]
        mov dword ptr [eax + 908h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 904h]
        mov dword ptr [ebp - 370h], eax
        push 1388h
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 31 D8 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 908h]
        mov dword ptr [ebp - 374h], edx
        push 1388h
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 12 D8 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 904h]
        mov dword ptr [ebp - 378h], ecx
        push 0
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 56 D8 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 908h]
        mov dword ptr [ebp - 37ch], eax
        push 0
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 3A D8 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 1f8h
        ; Exact mapped bytes E8 53 89 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x89
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 36: je 0x585f86fd
        __asm _emit 0x74
        __asm _emit 0x36
        push 40h
        push 0
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 2710h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 DB 7F 07 00: call 0x586706d0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8707
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 380h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 380h]
        mov dword ptr [eax + 8ach], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ach]
        mov dword ptr [ebp - 384h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 2710h
        push ecx
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 35 D7 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd7
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 B1 88 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 4D: je 0x585f87b6
        __asm _emit 0x74
        __asm _emit 0x4d
        push 16h
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA C3 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 898h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 4bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0a0h
        push ecx
        mov edx, dword ptr [ebp - 388h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 72 9B E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f87c0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 38ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38ch]
        mov dword ptr [edx + 8b0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8b0h]
        mov dword ptr [ebp - 390h], edx
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 E5 D6 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd6
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 01 88 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 4C: je 0x585f8865
        __asm _emit 0x74
        __asm _emit 0x4c
        push 17h
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA C2 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 7d0h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 55h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 226h
        push edx
        mov eax, dword ptr [ebp - 394h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C3 9A E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f886f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 398h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 398h]
        mov dword ptr [eax + 8b4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8b4h]
        mov dword ptr [ebp - 39ch], eax
        push 0
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 36 D6 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 410h]
        mov dword ptr [ebp - 3a0h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 76h
        push eax
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 65 CE 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 414h]
        mov dword ptr [ebp - 3a4h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 76h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 226h
        push ecx
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 2A CD 1B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 418h]
        mov dword ptr [ebp - 3a8h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 76h
        push ecx
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 19 CE 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xce
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 420h]
        mov dword ptr [ebp - 3ach], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 76h
        push ecx
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 F8 CD 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 424h]
        mov dword ptr [ebp - 3b0h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 76h
        push ecx
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 D7 CD 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 41ch]
        mov dword ptr [ebp - 3b4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 76h
        push ecx
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 B6 CD 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585f898d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 0F 8D A6 00 00 00: jge 0x585f8a3d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 66 86 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x86
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 36: je 0x585f89ea
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 898h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 78h
        push ecx
        imul edx, dword ptr [ebp - 18h], 5ah
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 3E 99 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x99
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f89f4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 3b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3b8h]
        mov dword ptr [edx + ecx*4 + 8b8h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 8b8h]
        mov dword ptr [ebp - 3bch], eax
        push 0
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 A9 D4 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd4
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x585f8984
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 C0 85 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 4A: je 0x585f8aa4
        __asm _emit 0x74
        __asm _emit 0x4a
        push 1eh
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 C0 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3c0h], eax
        ; Exact mapped bytes 0F BF 4D EC: movsx ecx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xec
        add ecx, 898h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 50h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp - 3c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 84 98 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8aae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov eax, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 3c4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3c4h]
        mov dword ptr [ecx + 8c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8c4h]
        mov dword ptr [ebp - 3c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 F7 D3 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd3
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 13 85 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 35: je 0x585f8b3c
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 0F BF 55 EC: movsx edx, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xec
        add edx, 898h
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 50h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c6h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 EC 97 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x97
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8b46
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov eax, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 3cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3cch]
        mov dword ptr [ecx + 8c8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8c8h]
        mov dword ptr [ebp - 3d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 5F D3 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd3
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        push 0a0h
        ; Exact mapped bytes E8 78 84 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 55: je 0x585f8bf7
        __asm _emit 0x74
        __asm _emit 0x55
        push 1
        ; Exact mapped bytes 8B 0D 8C 07 96 58: mov ecx, dword ptr [0x5896078c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 BF E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbf
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3d4h], eax
        push 64h
        push 1
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 4a38h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ebh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 17ch
        push ecx
        mov edx, dword ptr [ebp - 3d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 8
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 E1 CC EE FF: call 0x584e58d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8c01
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov ecx, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 3d8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3d8h]
        mov dword ptr [edx + 8cch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8cch]
        mov dword ptr [ebp - 3dch], edx
        push 0
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 04 D2 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8cch]
        mov dword ptr [ebp - 3e0h], ecx
        push 80h
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 55 C9 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc9
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 0a4h
        ; Exact mapped bytes E8 9E 83 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x83
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 6F: je 0x585f8ceb
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8cch]
        mov dword ptr [ebp - 3e4h], eax
        push 48h
        ; Exact mapped bytes 8B 0D 8C 07 96 58: mov ecx, dword ptr [0x5896078c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 BE E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 3e4h]
        push ecx
        push 64h
        push 64h
        push 1
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 4a9ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 30ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp - 3e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 8
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 5D D5 EE FF: call 0x584e6240
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd5
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8cf5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov ecx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 3ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3ech]
        mov dword ptr [edx + 8d0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8d0h]
        mov dword ptr [ebp - 3f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes E8 10 D1 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8d0h]
        mov dword ptr [ebp - 3f4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3f4h]
        ; Exact mapped bytes E8 61 C8 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 0a4h
        ; Exact mapped bytes E8 AA 82 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x82
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 6F: je 0x585f8ddf
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8cch]
        mov dword ptr [ebp - 3f8h], eax
        push 49h
        ; Exact mapped bytes 8B 0D 8C 07 96 58: mov ecx, dword ptr [0x5896078c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 BD E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xbd
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3fch], eax
        push 0
        mov ecx, dword ptr [ebp - 3f8h]
        push ecx
        push 64h
        push 64h
        push 1
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 4a38h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 30ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp - 3fch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 8
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 69 D4 EE FF: call 0x584e6240
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8de9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 400h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 400h]
        mov dword ptr [edx + 8d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8d4h]
        mov dword ptr [ebp - 404h], edx
        push 0
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 1C D0 E8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8d4h]
        mov dword ptr [ebp - 408h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 6D C7 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc7
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8d4h]
        mov dword ptr [ebp - 40ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 AE BC EC FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 9A 81 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 4E: je 0x585f8ece
        __asm _emit 0x74
        __asm _emit 0x4e
        push 282828h
        push 0
        push 30ffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 39h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3e8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 25h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0efh
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 EA 94 E8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x94
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8ed8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov ecx, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 410h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 410h]
        mov dword ptr [edx + 434h], eax
        push 70h
        ; Exact mapped bytes E8 06 81 23 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 4E: je 0x585f8f62
        __asm _emit 0x74
        __asm _emit 0x4e
        push 282828h
        push 0
        push 30ffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3e8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 39h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0efh
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 56 94 E8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x94
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f8f6c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov ecx, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 414h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 414h]
        mov dword ptr [edx + 438h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 434h]
        mov dword ptr [ebp - 418h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 4b00h
        push eax
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 D1 CE E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xce
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 438h]
        mov dword ptr [ebp - 41ch], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 4b00h
        push eax
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 AD CE E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xce
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
