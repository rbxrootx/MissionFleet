// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585545D0 .. +0x60B bytes.
extern "C" __declspec(naked) void FUN_585545d0_585545D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888325dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 6ch
        push esi
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
        movzx eax, word ptr [ebp + 3ch]
        push eax
        mov ecx, dword ptr [ebp + 38h]
        push ecx
        mov edx, dword ptr [ebp + 34h]
        push edx
        mov eax, dword ptr [ebp + 30h]
        push eax
        mov ecx, dword ptr [ebp + 2ch]
        push ecx
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 22 41 F7 FF: call 0x584c8740
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x41
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588a9390h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 134h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 13ch], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 55 14: mov dx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 91 14 04 00 00: mov word ptr [ecx + 0x414], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax + 140h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 144h], 0ffffffffh
        mov eax, dword ptr [ebp + 20h]
        sub eax, 384h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 130h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 130h], 0
        ; Exact mapped bytes 7D 14: jge 0x585546a0
        __asm _emit 0x7d
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 130h]
        add ecx, 0e10h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 14: jmp 0x585546b4
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 130h], eax
        mov dword ptr [ebp - 1ch], 28h
        mov eax, dword ptr [ebp - 1ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 130h]
        cdq
        idiv dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5ah
        ; Exact mapped bytes 7C 0B: jl 0x585546f0
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 14h]
        sub edx, 5ah
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x585546f6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        imul edx, dword ptr [ebp - 14h], 7
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 154h], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 154h]
        add ecx, 7
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 154h], ecx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 148h], 0
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 414h]
        test eax, eax
        ; Exact mapped bytes 75 2E: jne 0x58554782
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 14ch], 7
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 14ch], 46h
        ; Exact mapped bytes EB 2C: jmp 0x585547ae
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 14ch], 7
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 14ch], 32h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 180h], eax
        mov dword ptr [edx + 184h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 180h]
        mov ecx, dword ptr [edx + 184h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 164h], eax
        mov dword ptr [edx + 168h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 138h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx + 164h]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        mov ecx, 4
        shl ecx, 0
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx + 14ch]
        sub ecx, dword ptr [esi + eax + 14ch]
        ; Exact mapped bytes F2 0F 2A C9: cvtsi2sd xmm1, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 5E C1: divsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes F2 0F 11 82 D0 03 00 00: movsd qword ptr [edx + 0x3d0], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        mov eax, 4
        shl eax, 0
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + eax + 14ch]
        sub eax, dword ptr [esi + edx + 14ch]
        ; Exact mapped bytes F2 0F 2A C8: cvtsi2sd xmm1, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 5E C1: divsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes F2 0F 11 81 D8 03 00 00: movsd qword ptr [ecx + 0x3d8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3e0h], 0
        mov eax, 64h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 74: mov word ptr [ecx + 0x74], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x74
        push 58h
        ; Exact mapped bytes E8 62 C7 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc7
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 44: je 0x585548f6
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 40h], edx
        push 2eh
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 01 F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0fa0h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1F 1F F3 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x1f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x585548fd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 48h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [edx + 3e8h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 414h]
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x5855493c
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1b7h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 01 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3e4h], eax
        ; Exact mapped bytes EB 16: jmp 0x58554952
        __asm _emit 0xeb
        __asm _emit 0x16
        push 0
        ; Exact mapped bytes 8B 0D 54 07 96 58: mov ecx, dword ptr [0x58960754]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 01 F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3e4h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3e4h]
        ; Exact mapped bytes E8 30 10 F3 FF: call 0x58485990
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x10
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 3e8h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x585549fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3e8h]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 0C 14 F3 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3e8h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 96 14 F3 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3e8h]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 90 AB F4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xab
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3e8h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 0A 15 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x15
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3e8h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 154h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 43 AE F4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xae
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 FC C5 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc5
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 47: je 0x58554a5f
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 14h
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1ch
        mov dword ptr [ebp - 64h], ecx
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 00 F3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 16 5F 26 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5f
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58554a66
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ecx + 3f4h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 3f4h], 0
        ; Exact mapped bytes 74 17: je 0x58554a9f
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3f4h]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 42 14 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 16ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 174h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 170h], 0
        push 240h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 188h
        push ecx
        ; Exact mapped bytes E8 27 83 2F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x83
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ech], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3cch], 48h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3f8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3fch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 404h], 0
        push 20h
        ; Exact mapped bytes E8 D0 C4 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 21: je 0x58554b65
        __asm _emit 0x74
        __asm _emit 0x21
        push 10h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F FF F2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C0 8E 01 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58554b6c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 78h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 410h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 180h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 184h], 0
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
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 38 00: ret 0x38
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
