// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793B30 .. +0xE90 bytes.
extern "C" __declspec(naked) void FUN_58793b30_58793B30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889138dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 264h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], ecx
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
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 EB E6 CE FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe6
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax], 588b6c08h
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 60h], 0ah
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 78h], 0
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 0a0h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 0a4h], 0
        push 54h
        ; Exact mapped bytes E8 AD D3 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 44: je 0x58793cb1
        __asm _emit 0x74
        __asm _emit 0x44
        push 3fh
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 0E CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 218h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 77 E6 CE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe6
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58793cbb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 198h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 19ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 B7 18 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 1a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 2B 21 CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x21
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 E7 D2 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 44: je 0x58793d77
        __asm _emit 0x74
        __asm _emit 0x44
        push 3eh
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 0D CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 B1 E5 CE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe5
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58793d81
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 1a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 1a8h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 1ach], edx
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 E4 1F CF FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 1b0h], ecx
        push 0f0h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 65 17 02 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 21 D2 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 47: je 0x58793e40
        __asm _emit 0x74
        __asm _emit 0x47
        push 41h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 0D CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 E8 E4 CE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58793e4a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 1b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 1bch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 28 17 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 1c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 9C 1F CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1f
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 58 D1 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 47: je 0x58793f09
        __asm _emit 0x74
        __asm _emit 0x47
        push 40h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 0C CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 1F E4 CE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58793f13
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 1c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 1c8h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 1cch], edx
        push 101h
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 5F 16 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 1d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 D3 1E CF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1e
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 8C D0 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 46: je 0x58793fd4
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 4ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 15bh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 38h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d2h
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C4 23 FF FF: call 0x58786390
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58793fde
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 1d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 1d4h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 1d8h], eax
        push 4
        push 3eh
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 25 2D FF FF: call 0x58786d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 1dch], edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 24 CF DB FF: call 0x58550f60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xcf
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 BD CF 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 46: je 0x587940a3
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 60h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15bh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d2h
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 F5 22 FF FF: call 0x58786390
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587940ad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 1e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 1e0h]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 1e4h], edx
        push 4
        push 3eh
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 56 2C FF FF: call 0x58786d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 1e8h], ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 55 CE DB FF: call 0x58550f60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xce
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        push 10ch
        ; Exact mapped bytes E8 EE CE 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 50: je 0x5879417c
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0f9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 17ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a7h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1ah
        push eax
        ; Exact mapped bytes 8B 0D 30 20 96 58: mov ecx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 1C BC D3 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xbc
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58794186
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov eax, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 1ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 1ech]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 1f0h], ecx
        push 9
        push 16h
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 AD D9 FF FF: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 12ch
        push ecx
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 98 1C CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1c
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 1f8h], eax
        push 0c8h
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 E9 7E D1 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 1fch], edx
        push 32h
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 3D 85 D5 FF: call 0x584ec760
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 D6 CD 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 74: je 0x587942b8
        __asm _emit 0x74
        __asm _emit 0x74
        push 0ah
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 08 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 208h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 13ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp - 208h]
        push edx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 30 7A D3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7a
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587942c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 20ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 20ch]
        mov dword ptr [ecx + 98h], edx
        push 54h
        ; Exact mapped bytes E8 19 CD 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 4F: je 0x58794350
        __asm _emit 0x74
        __asm _emit 0x4f
        push 45h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 08 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 13ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 D8 DF CE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdf
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5879435a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov edx, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 214h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 214h]
        mov dword ptr [eax + 9ch], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 244h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 12 12 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 5B CC 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 78: je 0x58794437
        __asm _emit 0x74
        __asm _emit 0x78
        push 0bh
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 07 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 220h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 224h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 13ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c3h
        push edx
        mov eax, dword ptr [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 B1 78 D3 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x78
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58794441
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 228h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 228h]
        mov dword ptr [edx + 0a0h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 22ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 2B 11 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 77 CB 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 52: je 0x587944f5
        __asm _emit 0x74
        __asm _emit 0x52
        push 49h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 06 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 13ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c3h
        push edx
        mov eax, dword ptr [ebp - 230h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 33 DE CE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xde
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587944ff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov edx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 234h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 234h]
        mov dword ptr [eax + 0a4h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 238h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 6D 10 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], 0e9feh
        push 70h
        ; Exact mapped bytes E8 B0 CA 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 42: je 0x587945ac
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0a0affh
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 4ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1ah
        push ecx
        ; Exact mapped bytes 8B 15 30 20 96 58: mov edx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 0C DE CE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xde
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587945b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 23ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 23ch]
        mov dword ptr [edx + 80h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 240h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 81 18 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 270h], edx
        push 588b6b68h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 7F 1A CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1a
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 DB C9 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 44: je 0x58794683
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes 8B 15 30 20 96 58: mov edx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 35 DD CE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdd
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5879468d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 248h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 248h]
        mov dword ptr [ecx + eax + 84h], edx
        push 70h
        ; Exact mapped bytes E8 45 C9 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 44: je 0x58794719
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes 8B 15 30 20 96 58: mov edx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 9F DC CE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdc
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58794723
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov ecx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 24ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 24ch]
        mov dword ptr [eax + edx + 84h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 250h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 02 17 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x17
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 D1 16 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x16
        __asm _emit 0xcf
        __asm _emit 0xff
        push 100h
        push 0
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 4E 86 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        push 5
        push 588b6b7ch
        push 100h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 13 C6 D1 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc6
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 10h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 258h], eax
        lea ecx, [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 93 18 CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58794829
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 118h]
        add edx, 1
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 3
        ; Exact mapped bytes 0F 8D D4 00 00 00: jge 0x5879490a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 C7 C7 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 4F: je 0x587948a2
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0
        push 0
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        imul eax, dword ptr [ebp - 118h], 12h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 105h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 20h
        push eax
        ; Exact mapped bytes 8B 0D 30 20 96 58: mov ecx, dword ptr [0x58962030]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 16 DB CE FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xdb
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587948ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 25ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ebp - 25ch]
        mov dword ptr [edx + ecx*4 + 8ch], eax
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 7C 15 CF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x15
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 FF FF FF: jmp 0x5879481a
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 264h], edx
        push 588b6b9ch
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 6B 17 CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 268h], edx
        push 588b6bbch
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 40 17 CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x17
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 26ch], edx
        push 588b6be4h
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 16 17 CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0xcf
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 F9 15 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x15
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 114h]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 96 C6 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
