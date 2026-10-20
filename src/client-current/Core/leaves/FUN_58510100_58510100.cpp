// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58510100 .. +0x8EB bytes.
extern "C" __declspec(naked) void FUN_58510100_58510100() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880cfdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0e4h
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
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 84 A3 08 00 00: je 0x585109d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58510148
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 874h]
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 0F 8D 7E 08 00 00: jge 0x585109d9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 81 6F FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 37 CE F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 53 08 00 00: je 0x585109d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*8 + 878h]
        sub edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + eax*8 + 878h]
        sub eax, dword ptr [ebp + 10h]
        imul edx, eax
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + ecx*8 + 87ch]
        sub ecx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 10h]
        mov eax, dword ptr [esi + eax*8 + 87ch]
        sub eax, dword ptr [ebp + 14h]
        imul ecx, eax
        add edx, ecx
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 74 C5 FE FF: call 0x584fc760
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5851020d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 5C C5 FE FF: call 0x584fc760
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 0F 85 D4 03 00 00: jne 0x585105e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 18h], 0dah
        cmp dword ptr [ebp - 18h], 258h
        ; Exact mapped bytes 0F 8D B4 01 00 00: jge 0x585103d5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 A2 0B 00: call 0x585ca500
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 D9 6A 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 11ch
        ; Exact mapped bytes E8 92 0D 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x0d
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x58510315
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 13 BE F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbe
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes E8 C7 09 34 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x34
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov esi, edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 FD 66 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, esi
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8fch]
        mov dword ptr [ebp - 54h], eax
        push 0ceh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 47 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x47
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 5ch], edx
        push 40h
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 70 5A FB FF: call 0x584c5d80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851031c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 60h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 AA 6D FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 60 CC F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcc
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 11: je 0x58510365
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FC F2 FF FF: call 0x5850f660
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 43 CC F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 6D 6D FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 49: je 0x585103d0
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 66 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 CC F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xcc
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 41 6D FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 1D: jne 0x585103d0
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 61 10 00 00: call 0x58511430
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 02 00 00: jmp 0x585105dc
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        imul ecx, dword ptr [ebp + 18h]
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F 8D F7 01 00 00: jge 0x585105dc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 E8: cvtsi2sd xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 29 0C 34 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0c
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 91 0E 32 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        ; Exact mapped bytes E8 BF 3F FD FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 24h], eax
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 A0 0B 00: call 0x585ca500
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 DF 68 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 11ch
        ; Exact mapped bytes E8 98 0B 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x58510515
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 19 BC F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbc
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes E8 CD 07 34 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0x34
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov esi, edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 03 65 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, esi
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8fch]
        mov dword ptr [ebp - 7ch], eax
        push 0ceh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 45 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x45
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 84h], edx
        push 40h
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 70 58 FB FF: call 0x584c5d80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5851051c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 88h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 A4 6B FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5A CA F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 11: je 0x5851056b
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F6 F0 FF FF: call 0x5850f660
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3D CA F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 67 6B FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 4F: je 0x585105dc
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 64 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 11 CA F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 3B 6B FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 23: jne 0x585105dc
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8ch], eax
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 55 0E 00 00: call 0x58511430
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BD 03 00 00: jmp 0x5851099e
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 18h], 64h
        cmp dword ptr [ebp - 18h], 258h
        ; Exact mapped bytes 0F 8D AB 01 00 00: jge 0x585107a0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 9E 0B 00: call 0x585ca500
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 05 67 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 11ch
        ; Exact mapped bytes E8 BE 09 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x58510707
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 3F BA F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xba
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes E8 F0 05 34 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov esi, edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 26 63 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x63
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, esi
        mov dword ptr [ebp - 98h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8fch]
        mov dword ptr [ebp - 9ch], eax
        push 0ceh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 44 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0a4h], edx
        push 40h
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7E 56 FB FF: call 0x584c5d80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x56
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851070e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0a8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7E C8 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 A8 69 FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 4F: je 0x5851079b
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 62 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 52 C8 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 7C 69 FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 23: jne 0x5851079b
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 96 0C 00 00: call 0x58511430
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x5851099e
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        imul edx, dword ptr [ebp + 18h]
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 0F 8D EE 01 00 00: jge 0x5851099e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 E8: cvtsi2sd xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 5E 08 34 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x08
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 C6 0A 32 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        mov eax, dword ptr [ebp + 1ch]
        mov eax, dword ptr [eax + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes E8 E8 3B FD FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 9C 0B 00: call 0x585ca500
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 02 65 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 11ch
        ; Exact mapped bytes E8 BB 07 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x07
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x5851090a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 3C B8 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes E8 ED 03 34 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x34
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov esi, edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 23 61 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x61
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, esi
        mov dword ptr [ebp - 0c0h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8fch]
        mov dword ptr [ebp - 0c4h], eax
        push 0ceh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 42 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x42
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0cch], edx
        push 40h
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 7B 54 FB FF: call 0x584c5d80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58510911
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0d0h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7B C6 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 A5 67 FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 4F: je 0x5851099e
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 60 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F C6 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes E8 79 67 FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 23: jne 0x5851099e
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0e0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 93 0A 00 00: call 0x58511430
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0dch], edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F5 C5 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 AD 5B 00 00: call 0x58516580
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 66 F7 FF FF: jmp 0x5851013f
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
