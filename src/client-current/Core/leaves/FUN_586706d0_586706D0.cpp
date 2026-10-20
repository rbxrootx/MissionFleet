// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586706D0 .. +0x6A7 bytes.
extern "C" __declspec(naked) void FUN_586706d0_586706D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888990ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ach
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
        ; Exact mapped bytes E8 52 1B E1 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588afe48h
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 60h], 0
        push 198h
        ; Exact mapped bytes E8 C5 08 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 16: je 0x58670765
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588afe20h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 50 FC 10 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5867076c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 64h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [eax + 64h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58670791
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0ah
        ; Exact mapped bytes 7D 27: jge 0x586707be
        __asm _emit 0x7d
        __asm _emit 0x27
        imul esi, dword ptr [ebp - 14h], 114h
        add esi, 588f4408h
        sub esp, 114h
        mov ecx, 45h
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E5 0C 00 00: call 0x586714a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CA: jmp 0x58670788
        __asm _emit 0xeb
        __asm _emit 0xca
        push 54h
        ; Exact mapped bytes E8 3F 08 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 23: je 0x586707f8
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2D 1B E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x586707ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 68h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [edx + 6ch], eax
        push 54h
        ; Exact mapped bytes E8 EB 07 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 23: je 0x5867084c
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D9 1A E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58670853
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 6ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + 70h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58670878
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D 5F 03 00 00: jge 0x58670be1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58670894
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D CC 01 00 00: jge 0x58670a6a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 5F 07 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x07
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 4E: je 0x58670903
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        push 0c8c8c8h
        imul ecx, dword ptr [ebp - 18h], 14h
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 72h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a4h
        push ecx
        imul edx, dword ptr [ebp - 18h], 14h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 46h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a4h
        push edx
        ; Exact mapped bytes A1 44 20 96 58: mov eax, dword ptr [0x58962044]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B2 1A E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5867090a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 70h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 0a4h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [edx + eax*4], ecx
        push 70h
        ; Exact mapped bytes E8 D0 06 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 4E: je 0x58670992
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        push 141414h
        imul edx, dword ptr [ebp - 18h], 14h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 73h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1a5h
        push edx
        imul eax, dword ptr [ebp - 18h], 14h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 47h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0a5h
        push eax
        ; Exact mapped bytes 8B 0D 44 20 96 58: mov ecx, dword ptr [0x58962044]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 23 1A E1 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58670999
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 124h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 14h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 0a4h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 78h], ecx
        push 588afe33h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 BE 56 E1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        shl edx, 5
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 124h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 7ch], eax
        push 588afe34h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 98 56 E1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0a4h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 80h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 190h
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 4D 54 E1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 124h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 18fh
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 1C 54 E1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 21 FE FF FF: jmp 0x5867088b
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 93 05 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 26: je 0x58670aa7
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 12ch
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 7E 18 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x18
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58670aae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 88h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + eax*4 + 74h], edx
        push 54h
        ; Exact mapped bytes E8 32 05 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 25: je 0x58670b07
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 1E 18 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x18
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58670b0e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 8ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + edx*4 + 84h], ecx
        push 54h
        ; Exact mapped bytes E8 CF 04 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 2C: je 0x58670b71
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 6dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 35h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B4 17 E1 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x17
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58670b78
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [edx + ecx*4 + 94h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 74h]
        mov dword ptr [ebp - 94h], eax
        push 101h
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 F8 49 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 84h]
        mov dword ptr [ebp - 98h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 D5 49 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8E FC FF FF: jmp 0x5867086f
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 20h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0a4h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 FD 3D E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1bch], ecx
        mov dword ptr [eax + 1c0h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 70 51 E1 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x51
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0a0h], ecx
        push 0f0h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 F4 48 14 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0a4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 48 49 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 91 03 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 77: je 0x58670cfa
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 34 3E E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x3e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0f6h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 EB AF E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xaf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58670d01
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ecx + 1c4h], edx
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
        mov eax, 500h
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
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B 52 E1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x52
        __asm _emit 0xe1
        __asm _emit 0xff
        push 18h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 1a4h
        push eax
        ; Exact mapped bytes E8 B9 C0 1D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
