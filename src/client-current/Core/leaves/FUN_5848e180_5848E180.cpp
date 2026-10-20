// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848E180 .. +0x5BC bytes.
extern "C" __declspec(naked) void FUN_5848e180_5848E180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 84 2D 03 00 00: je 0x5848e4c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 1C 88 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 FE DE FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 00 88 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 E2 DE FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 1ch]
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [ebp - 8]
        imul edx, eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp - 0ch]
        imul ecx, eax
        add edx, ecx
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes F2 0F 2A 45 C0: cvtsi2sd xmm0, dword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 1A 2E 3C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2e
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 82 30 3A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0x3a
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 8ch], 0ffffffffh
        mov dword ptr [ebp - 18h], 0c8h
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F 8E 72 02 00 00: jle 0x5848e4a0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 38h], 1
        mov dword ptr [ebp - 60h], 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 CB DA FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 708h
        ; Exact mapped bytes 7D 07: jge 0x5848e263
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 B2 DA FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 384h
        ; Exact mapped bytes 7E 19: jle 0x5848e28e
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 A0 DA FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 0a8ch
        ; Exact mapped bytes 7F 07: jg 0x5848e28e
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0ffffffffh
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 CC: movss dword ptr [ebp - 0x34], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 B0: movss dword ptr [ebp - 0x50], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xb0
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x5848e34c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x5848e34c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes F3 0F 2A C1: cvtsi2ss xmm0, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes F3 0F 2A CA: cvtsi2ss xmm1, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 11 45 CC: movss dword ptr [ebp - 0x34], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 10 4D CC: movss xmm1, dword ptr [ebp - 0x34]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes F3 0F 59 4D CC: mulss xmm1, dword ptr [ebp - 0x34]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes F3 0F 58 0D 50 4D 89 58: addss xmm1, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 58 05 50 4D 89 58: addss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 29 30 00 00: call 0x58491330
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes D9 5D B0: fstp dword ptr [ebp - 0x50]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xb0
        ; Exact mapped bytes F3 0F 2A 45 F8: cvtsi2ss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes F3 0F 2A 4D C8: cvtsi2ss xmm1, dword ptr [ebp - 0x38]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 59 4D B0: mulss xmm1, dword ptr [ebp - 0x50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes F3 0F 2A 45 F4: cvtsi2ss xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F3 0F 10 4D CC: movss xmm1, dword ptr [ebp - 0x34]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes F3 0F 59 4D B0: mulss xmm1, dword ptr [ebp - 0x50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes F3 0F 2A 55 C8: cvtsi2ss xmm2, dword ptr [ebp - 0x38]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 59 CA: mulss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 32: jmp 0x5848e37e
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 15: jne 0x5848e369
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 38h]
        imul ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 15: jmp 0x5848e37e
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 60h]
        imul ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        sub edx, ecx
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 70: jne 0x5848e3f4
        __asm _emit 0x75
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 DF FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 05 D9 FF FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        shl ecx, 1
        xor edx, edx
        div ecx
        sub edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B DF FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 DD D8 FF FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        shl ecx, 1
        xor edx, edx
        div ecx
        sub edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 80h], edx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 18h]
        cdq
        sub eax, edx
        sar eax, 1
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x5848e48d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 1
        mov dword ptr [ebp - 6ch], 1
        mov dword ptr [ebp - 68h], 3
        mov dword ptr [ebp - 70h], 3
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 09: jne 0x5848e432
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 70h], 5
        ; Exact mapped bytes EB 0F: jmp 0x5848e441
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 07: jge 0x5848e441
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0ffffffffh
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 75 09: jne 0x5848e452
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 68h], 5
        ; Exact mapped bytes EB 0F: jmp 0x5848e461
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 07: jge 0x5848e461
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0ffffffffh
        imul eax, dword ptr [ebp - 64h], 64h
        imul eax, dword ptr [ebp - 68h]
        cdq
        mov ecx, 6
        idiv ecx
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        imul eax, dword ptr [ebp - 6ch], 64h
        imul eax, dword ptr [ebp - 70h]
        cdq
        mov ecx, 6
        idiv ecx
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 21: jmp 0x5848e4c1
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 15 85 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 F5 DB FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 70 02 00 00: jmp 0x5848e736
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 F0 00 00 00: movsx eax, word ptr [edx + 0xf0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 5E 02 00 00: jne 0x5848e736
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 38h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 0F 84 3F 02 00 00: je 0x5848e736
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 85 33 02 00 00: jne 0x5848e736
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 28h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 8D 23 02 00 00: jge 0x5848e736
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 38h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        cmp ecx, dword ptr [edx + eax + 6ch]
        ; Exact mapped bytes 0F 87 09 02 00 00: ja 0x5848e736
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 88 84 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 6A DB FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 6F 84 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 54 DB FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 48h], 1
        mov dword ptr [ebp - 78h], 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 9A D7 FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 708h
        ; Exact mapped bytes 7D 07: jge 0x5848e594
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 81 D7 FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 384h
        ; Exact mapped bytes 7E 19: jle 0x5848e5bf
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 6F D7 FF FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 0a8ch
        ; Exact mapped bytes 7F 07: jg 0x5848e5bf
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0ffffffffh
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 BC: movss dword ptr [ebp - 0x44], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 A8: movss dword ptr [ebp - 0x58], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x5848e67a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5848e67a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        sub eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes F3 0F 2A C9: cvtsi2ss xmm1, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc9
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 11 45 BC: movss dword ptr [ebp - 0x44], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes F3 0F 10 45 BC: movss xmm0, dword ptr [ebp - 0x44]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes F3 0F 59 45 BC: mulss xmm0, dword ptr [ebp - 0x44]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes F3 0F 58 05 50 4D 89 58: addss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 10 0D 68 4D 89 58: movss xmm1, dword ptr [0x58894d68]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 58 0D 50 4D 89 58: addss xmm1, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes F3 0F 11 0C 24: movss dword ptr [esp], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes E8 FB 2C 00 00: call 0x58491330
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes D9 5D A8: fstp dword ptr [ebp - 0x58]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 2A 45 D4: cvtsi2ss xmm0, dword ptr [ebp - 0x2c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes F3 0F 2A 4D B8: cvtsi2ss xmm1, dword ptr [ebp - 0x48]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes F3 0F 59 4D A8: mulss xmm1, dword ptr [ebp - 0x58]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes F3 0F 2A 45 D0: cvtsi2ss xmm0, dword ptr [ebp - 0x30]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes F3 0F 10 4D BC: movss xmm1, dword ptr [ebp - 0x44]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes F3 0F 59 4D A8: mulss xmm1, dword ptr [ebp - 0x58]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 2A 55 B8: cvtsi2ss xmm2, dword ptr [ebp - 0x48]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x55
        __asm _emit 0xb8
        ; Exact mapped bytes F3 0F 59 CA: mulss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C C0: cvttss2si eax, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 30: jmp 0x5848e6aa
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 75 15: jne 0x5848e697
        __asm _emit 0x75
        __asm _emit 0x15
        imul edx, dword ptr [ebp - 48h], 190h
        add edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 13: jmp 0x5848e6aa
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 20h], ecx
        imul edx, dword ptr [ebp - 78h], 190h
        add edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 75: jne 0x5848e725
        __asm _emit 0x75
        __asm _emit 0x75
        mov dword ptr [ebp - 4ch], 85h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E DD FF FF: call 0x5848c420
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 E0 D5 FF FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        shl ecx, 1
        xor edx, edx
        div ecx
        sub edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 DD FF FF: call 0x5848c420
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 B5 D5 FF FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        shl ecx, 1
        xor edx, edx
        div ecx
        sub edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 88h], edx
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
