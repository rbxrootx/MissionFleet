// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F8100 .. +0x195E bytes.
extern "C" __declspec(naked) void FUN_584f8100_584F8100() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fe1bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 344h
        push esi
        push edi
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
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8F A1 F8 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a3390h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 DC F8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB DC F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xff
        push 3e8h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E DD F8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 10h]
        add edi, 50h
        mov ecx, 60h
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 2B 00 00: call 0x584facc0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + edx + 58h]
        xor ecx, 55h
        mov edx, 2
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4C 02 58: mov word ptr [edx + eax + 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x58
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + eax + 58h]
        xor edx, 55h
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 54 01 58: mov word ptr [ecx + eax + 0x58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x58
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + edx + 58h]
        xor ecx, 55h
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4C 10 58: mov word ptr [eax + edx + 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584f8203
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0ch
        ; Exact mapped bytes 7D 31: jge 0x584f823a
        __asm _emit 0x7d
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + edx*2 + 64h]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4C 50 64: mov word ptr [eax + edx*2 + 0x64], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 7C: movsx edx, byte ptr [ecx + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x7c
        xor edx, 55h
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 14h]
        mov byte ptr [eax + 7ch], dl
        ; Exact mapped bytes EB C0: jmp 0x584f81fa
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        xor eax, 55h
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        ; Exact mapped bytes 66 C1 E0 04: shl ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        mov ecx, 0f80fh
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 23 4A 5E: and cx, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x4a
        __asm _emit 0x5e
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 48 5E: mov word ptr [eax + 0x5e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 0a0h]
        xor edx, 55h
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 A0 00 00 00: mov word ptr [eax + 0xa0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a8h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 240h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 244h], 0
        push 0ach
        ; Exact mapped bytes E8 2C 8D 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x584f8375
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 64h
        ; Exact mapped bytes 66 89 4D EA: mov word ptr [ebp - 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xea
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 120h], edx
        push 5
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 C7 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 12ch], ecx
        movzx edx, word ptr [ebp - 16h]
        push edx
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 70 39 FD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x584f837c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ecx + 1dch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1dch]
        mov dword ptr [ebp - 134h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 F9 D1 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1dch]
        mov dword ptr [ebp - 138h], eax
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 0D DA F8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 26 8C 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x8c
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x584f8482
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 64h
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 55h
        mov dword ptr [ebp - 13ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 2ch
        mov dword ptr [ebp - 140h], eax
        push 3
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 C6 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 148h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14ch], edx
        movzx eax, word ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov eax, dword ptr [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 63 38 FD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584f8489
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 150h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 150h]
        mov dword ptr [edx + 210h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 154h], edx
        push 101h
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 EC D0 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd0
        __asm _emit 0x2b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 158h], ecx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 60 D9 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 15ch], eax
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 94 DA F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 160h], edx
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 88 D8 F8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 E1 8A 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8a
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x584f85c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 64h
        ; Exact mapped bytes 66 89 4D E6: mov word ptr [ebp - 0x1a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 55h
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 18h
        mov dword ptr [ebp - 168h], edx
        push 4
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 C5 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 174h], ecx
        movzx edx, word ptr [ebp - 1ah]
        push edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        mov edx, dword ptr [ebp - 174h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 1F 37 FD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x584f85cd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 178h]
        mov dword ptr [ecx + 214h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 17ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 A8 CF 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcf
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 214h]
        mov dword ptr [ebp - 180h], eax
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 1C D8 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 184h], edx
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 50 D9 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 188h], ecx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 44 D7 F8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 9D 89 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x89
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x584f870a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 64h
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 55h
        mov dword ptr [ebp - 18ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 4
        mov dword ptr [ebp - 190h], ecx
        push 2bh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C C4 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 198h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 19ch], eax
        movzx ecx, word ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18ch]
        push edx
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 DB 35 FD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584f8711
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a0h]
        mov dword ptr [eax + 20ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 1a4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 64 CE 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xce
        __asm _emit 0x2b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 1a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 D8 D6 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20ch]
        mov dword ptr [ebp - 1ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 0C D8 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 1b0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 00 D6 F8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd6
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 5C 88 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x88
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 5C: je 0x584f8814
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 9
        mov dword ptr [ebp - 1b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 7
        mov dword ptr [ebp - 1b8h], ecx
        push 9ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A C3 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        push 40h
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 11 9B F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x584f881b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 1c0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1c0h]
        mov dword ptr [ecx + 1fch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1fch]
        mov dword ptr [ebp - 1c4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 5A CD 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1fch]
        mov dword ptr [ebp - 1c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 CE D5 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 8A 87 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x87
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 59: je 0x584f88e3
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 9
        mov dword ptr [ebp - 1cch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 7
        mov dword ptr [ebp - 1d0h], ecx
        push 0
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B C2 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        push 40h
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov eax, dword ptr [ebp - 1d0h]
        push eax
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 32 DF F8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584f88ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1d8h]
        mov dword ptr [ecx + 1e8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1e8h]
        mov dword ptr [ebp - 1dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 2E 6C FA FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 DA 86 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x86
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 26: je 0x584f8960
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 C5 99 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x584f8967
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 1e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e0h]
        mov dword ptr [edx + 1f0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1f0h]
        mov dword ptr [ebp - 1e4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 0E CC 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xcc
        __asm _emit 0x2b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1f0h]
        mov dword ptr [ebp - 1e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 82 D4 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3E 86 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x86
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 26: je 0x584f89fc
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 29 99 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584f8a03
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ech]
        mov dword ptr [edx + 1ech], eax
        push 58h
        ; Exact mapped bytes E8 DE 85 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 29: je 0x584f8a5f
        __asm _emit 0x74
        __asm _emit 0x29
        push 40h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 B6 DD F8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x584f8a66
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 1f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f0h]
        mov dword ptr [ecx + 1e4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1e4h]
        mov dword ptr [ebp - 1f4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 0F CB 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcb
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1e4h]
        mov dword ptr [ebp - 1f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 83 D3 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1e4h]
        mov dword ptr [ebp - 1fch], edx
        push 0
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 77 6A FA FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 23 85 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 29: je 0x584f8b1a
        __asm _emit 0x74
        __asm _emit 0x29
        push 40h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 2
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 FB DC F8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584f8b21
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 200h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 200h]
        mov dword ptr [eax + 1e0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1e0h]
        mov dword ptr [ebp - 204h], eax
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 F7 69 FA FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 A3 84 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 29: je 0x584f8b9a
        __asm _emit 0x74
        __asm _emit 0x29
        push 40h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 8E 97 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f8ba4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 208h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 1f8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1f8h]
        mov dword ptr [ebp - 20ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 CE C9 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc9
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1f8h]
        mov dword ptr [ebp - 210h], eax
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 42 D2 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 FE 83 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x83
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 2C: je 0x584f8c48
        __asm _emit 0x74
        __asm _emit 0x2c
        push 40h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E0 96 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f8c52
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 214h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 214h]
        mov dword ptr [ecx + 1f4h], edx
        push 54h
        ; Exact mapped bytes E8 8C 83 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x83
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 5F: je 0x584f8ced
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 2
        mov dword ptr [ebp - 218h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 2dh
        mov dword ptr [ebp - 21ch], eax
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 BE F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        push 40h
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        mov edx, dword ptr [ebp - 21ch]
        push edx
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 3B 96 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f8cf7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 224h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 224h]
        mov dword ptr [eax + 26ch], ecx
        push 54h
        ; Exact mapped bytes E8 E7 82 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x82
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 5F: je 0x584f8d92
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 2
        mov dword ptr [ebp - 228h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 2dh
        mov dword ptr [ebp - 22ch], edx
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 BD F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        push 40h
        mov eax, dword ptr [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        push ecx
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 96 95 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f8d9c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 234h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 234h]
        mov dword ptr [edx + 270h], eax
        push 54h
        ; Exact mapped bytes E8 42 82 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x82
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 5F: je 0x584f8e37
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 2
        mov dword ptr [ebp - 238h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 23h
        mov dword ptr [ebp - 23ch], ecx
        push 3fh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D BD F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        push 40h
        mov edx, dword ptr [ebp - 238h]
        push edx
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 F1 94 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f8e41
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 244h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 244h]
        mov dword ptr [ecx + 274h], edx
        push 54h
        ; Exact mapped bytes E8 9D 81 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x81
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 5F: je 0x584f8edc
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 2
        mov dword ptr [ebp - 248h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 23h
        mov dword ptr [ebp - 24ch], eax
        push 3eh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 BC F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        push 40h
        mov ecx, dword ptr [ebp - 248h]
        push ecx
        mov edx, dword ptr [ebp - 24ch]
        push edx
        mov eax, dword ptr [ebp - 250h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 4C 94 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f8ee6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 254h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 254h]
        mov dword ptr [eax + 278h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 270h]
        mov dword ptr [ebp - 258h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 8C C6 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x2b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 278h]
        mov dword ptr [ebp - 25ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 6D C6 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc6
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 B9 80 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 59: je 0x584f8fba
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 260h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 264h], eax
        push 1ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A BB F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        push 40h
        mov ecx, dword ptr [ebp - 260h]
        push ecx
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov eax, dword ptr [ebp - 268h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 6E 93 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f8fc4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 26ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 26ch]
        mov dword ptr [eax + 208h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 208h]
        mov dword ptr [ebp - 270h], eax
        push 0
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 41 CE F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 208h]
        mov dword ptr [ebp - 274h], edx
        push 0
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 75 CF F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 208h]
        mov dword ptr [ebp - 278h], ecx
        lea edx, [ebp - 350h]
        push edx
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 63 37 00 00: call 0x584fc7a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8A 65 00 00: call 0x584ff5d0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 B6 7F 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7f
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 73: je 0x584f90d7
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        ; Exact mapped bytes 66 89 4D E2: mov word ptr [ebp - 0x1e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 34h
        mov dword ptr [ebp - 27ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 7
        mov dword ptr [ebp - 280h], edx
        push 38ah
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 BA F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        movzx eax, word ptr [ebp - 1eh]
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        push ecx
        mov edx, dword ptr [ebp - 280h]
        push edx
        mov eax, dword ptr [ebp - 284h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 51 92 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f90e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 288h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [eax + 204h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 204h]
        mov dword ptr [ebp - 28ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 91 C4 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc4
        __asm _emit 0x2b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 204h]
        mov dword ptr [ebp - 290h], edx
        push 0
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 05 CD F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcd
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 C1 7E 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7e
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 73: je 0x584f91cc
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        ; Exact mapped bytes 66 89 4D E0: mov word ptr [ebp - 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 34h
        mov dword ptr [ebp - 294h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 7
        mov dword ptr [ebp - 298h], edx
        push 389h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B B9 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        movzx eax, word ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 294h]
        push ecx
        mov edx, dword ptr [ebp - 298h]
        push edx
        mov eax, dword ptr [ebp - 29ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 5C 91 F8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f91d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 2a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [eax + 200h], ecx
        push 74h
        ; Exact mapped bytes E8 08 7E 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x7e
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 7C: je 0x584f928e
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 32h
        ; Exact mapped bytes 66 89 45 DE: mov word ptr [ebp - 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 36h
        mov dword ptr [ebp - 2a4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0ah
        mov dword ptr [ebp - 2a8h], ecx
        push 38bh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 B8 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        movzx edx, word ptr [ebp - 22h]
        push edx
        mov eax, dword ptr [ebp - 2a4h]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        push ecx
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        push 0ffh
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 CA A7 00 00: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f9298
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 2b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b0h]
        mov dword ptr [eax + edx + 228h], ecx
        push 74h
        ; Exact mapped bytes E8 3E 7D 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7d
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 7C: je 0x584f9358
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 33h
        ; Exact mapped bytes 66 89 45 DC: mov word ptr [ebp - 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 36h
        mov dword ptr [ebp - 2b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0ah
        mov dword ptr [ebp - 2b8h], ecx
        push 38dh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 B8 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        movzx edx, word ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 2b4h]
        push eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 2bch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        push 0ffh
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 00 A7 00 00: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f9362
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 2c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2c0h]
        mov dword ptr [eax + edx + 228h], ecx
        push 74h
        ; Exact mapped bytes E8 73 7C 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7c
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 7C: je 0x584f9423
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 34h
        ; Exact mapped bytes 66 89 45 DA: mov word ptr [ebp - 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        add edx, 36h
        mov dword ptr [ebp - 2c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0ah
        mov dword ptr [ebp - 2c8h], ecx
        push 38ch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D B7 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        movzx edx, word ptr [ebp - 26h]
        push edx
        mov eax, dword ptr [ebp - 2c4h]
        push eax
        mov ecx, dword ptr [ebp - 2c8h]
        push ecx
        mov edx, dword ptr [ebp - 2cch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        push 0ffh
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 35 A6 00 00: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f942d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 2d0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2d0h]
        mov dword ptr [ecx + eax + 228h], edx
        push 0fch
        ; Exact mapped bytes E8 A5 7B 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 62: je 0x584f94d7
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 3ch
        mov dword ptr [ebp - 2d4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 20h
        mov dword ptr [ebp - 2d8h], eax
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D B6 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov ecx, dword ptr [ebp - 2d4h]
        push ecx
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 A1 14 2C 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f94e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 2e0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2e0h]
        mov dword ptr [eax + 220h], ecx
        push 70h
        ; Exact mapped bytes E8 FD 7A 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7a
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 4B: je 0x584f9568
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 46h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 0dh
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 50 8E F8 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f9572
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 2e4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e4h]
        mov dword ptr [ecx + 23ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 2e8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 63 C9 F8 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 2ech], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 AE C8 F8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc8
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 27 7A 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7a
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x584f968c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 64h
        ; Exact mapped bytes 66 89 4D D8: mov word ptr [ebp - 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        sub eax, 10h
        mov dword ptr [ebp - 2f0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 2
        mov dword ptr [ebp - 2f4h], edx
        push 2eh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 B4 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2fch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 300h], ecx
        movzx edx, word ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2f0h]
        push eax
        mov ecx, dword ptr [ebp - 2f4h]
        push ecx
        mov edx, dword ptr [ebp - 2f8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2fch]
        push ecx
        mov edx, dword ptr [ebp - 300h]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 5C 26 FD FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f9696
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 304h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 304h]
        mov dword ptr [ecx + 248h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 308h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 DC BE 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xbe
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 30ch], eax
        push 0
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 50 BE 2B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbe
        __asm _emit 0x2b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 310h], edx
        push 0
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 34 C7 F8 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 314h], ecx
        push 0
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 78 C6 F8 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 318h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0b8h], -1
        ; Exact mapped bytes 75 0C: jne 0x584f974f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0f8h], 0fh
        ; Exact mapped bytes EB 0A: jmp 0x584f9759
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        movzx edx, byte ptr [ebp - 0f8h]
        push edx
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 24 C8 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 74h
        ; Exact mapped bytes E8 90 78 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 79: je 0x584f9803
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 32h
        ; Exact mapped bytes 66 89 4D D6: mov word ptr [ebp - 0x2a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, 4ch
        mov dword ptr [ebp - 31ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 18h
        mov dword ptr [ebp - 320h], edx
        push 2bh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D B3 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 324h], eax
        movzx eax, word ptr [ebp - 2ah]
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        push ecx
        mov edx, dword ptr [ebp - 320h]
        push edx
        mov eax, dword ptr [ebp - 324h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 0ffh
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 55 A2 00 00: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f980d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 328h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 328h]
        mov dword ptr [eax + 238h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1d0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1d4h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 80 53 00 00: call 0x584febd0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 20h
        ; Exact mapped bytes E8 AC 77 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x77
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 2D: je 0x584f989b
        __asm _emit 0x74
        __asm _emit 0x2d
        push 2
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 B2 F8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        mov ecx, dword ptr [ebp - 32ch]
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 8D 41 07 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f98a5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 330h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 330h]
        mov dword ptr [eax + 1d8h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 3D 00 00: call 0x584fd600
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 24ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 254h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 250h], 0
        push 88h
        ; Exact mapped bytes E8 07 77 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x77
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 47: je 0x584f995a
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 93 F8 FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 334h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 15 AE FC FF: call 0x584c4740
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 338h], eax
        mov ecx, dword ptr [ebp - 334h]
        push ecx
        mov edx, dword ptr [ebp - 338h]
        push edx
        push 0ah
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 3E D6 FB FF: call 0x584b6f90
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f9964
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 33ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 33ch]
        mov dword ptr [edx + 260h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 260h]
        mov dword ptr [ebp - 340h], edx
        push 48h
        push 32h
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 4F B1 FC FF: call 0x584c4af0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 260h]
        mov dword ptr [ebp - 344h], ecx
        push 1
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 53 B1 FC FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 25ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 258h], 0
        push 1ch
        ; Exact mapped bytes E8 26 76 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x76
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 18: je 0x584f9a0c
        __asm _emit 0x74
        __asm _emit 0x18
        push 80h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 4C E6 FF FF: call 0x584f8050
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f9a16
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 348h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 348h]
        mov dword ptr [edx + 264h], eax
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 68 02 00 00: mov word ptr [edx + 0x268], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
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
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
