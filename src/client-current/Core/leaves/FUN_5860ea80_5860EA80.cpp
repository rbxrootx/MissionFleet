// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860EA80 .. +0x2501 bytes.
extern "C" __declspec(naked) void FUN_5860ea80_5860EA80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2c4h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 24 00 00: call 0x58610f90
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 5ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 35 73 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 5F 06 14 00: call 0x5874f130
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 90 AF F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 38 03 00 00: je 0x5860ee20
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d8h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 65 AF F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        add eax, 78h
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 83 75 E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x75
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 100h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 99 73 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 6F 73 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0c8h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 45 73 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 74h], edx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 1B 73 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 110h]
        mov dword ptr [ebp - 78h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 FC 72 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x72
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 124h]
        ; Exact mapped bytes E8 94 6C E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5860ec23
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 7ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 BE 72 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x72
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 0C 5E E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5e
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 40h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 80h], eax
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 1E C5 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc5
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 BD 5D E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5d
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 40h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 88h], edx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 C9 C4 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc4
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 68 5D E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5d
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 40h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 66 AD F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 98h]
        imul eax, esi
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 5C C4 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 FB 5C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x5c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 40h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 F9 AC F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 99h]
        imul esi, edx
        mov eax, esi
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 98h], eax
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 ED C3 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 110h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 97 5C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 40h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 05 5C E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 120h]
        imul esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 7D AC F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        imul esi, dword ptr [eax + 24h]
        mov eax, esi
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 76 C3 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x5860ef68
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 0ach], eax
        push 588ae000h
        ; Exact mapped bytes E8 AE 31 F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x31
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 43 72 E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x72
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 53 70 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x70
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 23 70 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x70
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 0b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 F3 6F E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0c8h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 C3 6F E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 0c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 9E 6F E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 0c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 79 6F E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 FA AA F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + edx + 17ch]
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x5860f05b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 10h], edx
        imul eax, dword ptr [ebp - 10h], 12h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 10h]
        add eax, ecx
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 1B 5A E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 120h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 19ch]
        mov eax, dword ptr [ebp - 38h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 62 5A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 40h]
        mov dword ptr [ebp - 10h], ecx
        imul edx, dword ptr [ebp - 10h], 12h
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        imul eax, dword ptr [ebp - 10h]
        add edx, eax
        mov dword ptr [ebp - 38h], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 BA 59 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x59
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 120h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 1ach]
        mov eax, dword ptr [ebp - 38h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov eax, dword ptr [ebp - 8]
        sub eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x5860f253
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 F7 59 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x59
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 40h]
        mov eax, 2
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + ecx + 18ch]
        cmp edx, ecx
        ; Exact mapped bytes 0F 8E CD 00 00 00: jle 0x5860f155
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 14h], edx
        imul eax, dword ptr [ebp - 14h], 12h
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 14h]
        add eax, ecx
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 21 59 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 120h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 1ach]
        mov eax, dword ptr [ebp - 3ch]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 68 59 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 40h]
        mov dword ptr [ebp - 14h], ecx
        imul edx, dword ptr [ebp - 14h], 12h
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        imul eax, dword ptr [ebp - 14h]
        add edx, eax
        mov dword ptr [ebp - 3ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 C0 58 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 120h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 1ach]
        mov eax, dword ptr [ebp - 3ch]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov eax, dword ptr [ebp - 8]
        sub eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x5860f253
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 FD 58 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x58
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 40h]
        mov eax, 2
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + ecx + 18ch]
        cmp edx, ecx
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x5860f24c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 18h], edx
        imul eax, dword ptr [ebp - 18h], 12h
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 18h]
        add eax, ecx
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 27 58 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x58
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 120h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 19ch]
        mov eax, dword ptr [ebp - 40h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 6E 58 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x58
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 40h]
        mov dword ptr [ebp - 18h], ecx
        imul edx, dword ptr [ebp - 18h], 12h
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        imul eax, dword ptr [ebp - 18h]
        add edx, eax
        mov dword ptr [ebp - 40h], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 C6 57 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 120h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 19ch]
        mov eax, dword ptr [ebp - 40h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov eax, dword ptr [ebp - 8]
        sub eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x5860f253
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 0c8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 5F 6C E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 28: jle 0x5860f2b0
        __asm _emit 0x7e
        __asm _emit 0x28
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 0cch], eax
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 93 05 E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 54: jmp 0x5860f304
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 28: jge 0x5860f2de
        __asm _emit 0x7d
        __asm _emit 0x28
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 0d0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 65 05 E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x5860f304
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 DD 6B E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x6b
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 EB 1F E8 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1f
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 50 BE 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbe
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 41 41 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 70 03 00 00: je 0x5860f6c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 13 41 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xff
        add eax, 78h
        mov dword ptr [ebp - 0e0h], eax
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 08 6D E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0e8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 18 6B E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0ech], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 E8 6A E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0c8h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0f0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 B8 6A E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0c8h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 88 6A E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 110h]
        mov dword ptr [ebp - 0f8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 63 6A E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 124h]
        ; Exact mapped bytes E8 FB 63 E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x63
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5860f4c2
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 0fch], eax
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 1F 6A E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 6D 55 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x55
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 42h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 100h], eax
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 79 BC 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbc
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 10ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 18 55 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x55
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 42h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 108h], edx
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 24 BC 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0c8h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 C3 54 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x54
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 42h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 E1 3E F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3e
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 98h]
        imul esi, edx
        mov eax, esi
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 110h], eax
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 B5 BB 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xbb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0c8h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 11ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 54 54 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x54
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 42h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 72 3E F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x3e
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 99h]
        imul esi, ecx
        mov eax, esi
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 118h], eax
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 46 BB 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 110h]
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 F0 53 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x53
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 42h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 5E 53 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x53
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 11eh]
        imul esi, edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 F6 3D F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x3d
        __asm _emit 0xf1
        __asm _emit 0xff
        imul esi, dword ptr [eax + 24h]
        mov eax, esi
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 CF BA 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xba
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x5860f80f
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d8h]
        mov dword ptr [ebp - 12ch], edx
        push 588ae01ch
        ; Exact mapped bytes E8 07 29 F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x29
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 9C 69 E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x69
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 130h], eax
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 AC 67 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 134h], edx
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 7C 67 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0c8h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 138h], edx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 4C 67 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0c8h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 13ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 1C 67 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 140h], ecx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 F7 66 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x66
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 144h], ecx
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 D2 66 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x66
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 73 3C F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3c
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + ecx + 17ch]
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x5860f902
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 1ch], edx
        imul eax, dword ptr [ebp - 1ch], 12h
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        imul ecx, dword ptr [ebp - 1ch]
        add eax, ecx
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 74 51 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 11eh]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + edx + 19ch]
        mov eax, dword ptr [ebp - 44h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 BB 51 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 42h]
        mov dword ptr [ebp - 1ch], edx
        imul eax, dword ptr [ebp - 1ch], 12h
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        imul ecx, dword ptr [ebp - 1ch]
        add eax, ecx
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 13 51 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 11eh]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + edx + 1ach]
        mov eax, dword ptr [ebp - 44h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x5860fafa
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 50 51 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 42h]
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        movzx edx, word ptr [eax + edx + 18ch]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8E CD 00 00 00: jle 0x5860f9fc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 20h], edx
        imul eax, dword ptr [ebp - 20h], 12h
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 20h]
        add eax, ecx
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 7A 50 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x50
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 11eh]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + edx + 1ach]
        mov eax, dword ptr [ebp - 48h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 C1 50 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x50
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 42h]
        mov dword ptr [ebp - 20h], edx
        imul eax, dword ptr [ebp - 20h], 12h
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 20h]
        add eax, ecx
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 19 50 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x50
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 11eh]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + edx + 1ach]
        mov eax, dword ptr [ebp - 48h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x5860fafa
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 56 50 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x50
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 42h]
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        movzx edx, word ptr [eax + edx + 18ch]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x5860faf3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 24h], edx
        imul eax, dword ptr [ebp - 24h], 12h
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 24h]
        add eax, ecx
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 80 4F E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 11eh]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + edx + 19ch]
        mov eax, dword ptr [ebp - 4ch]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 C7 4F E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 42h]
        mov dword ptr [ebp - 24h], edx
        imul eax, dword ptr [ebp - 24h], 12h
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 24h]
        add eax, ecx
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 1F 4F E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 11eh]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + edx + 19ch]
        mov eax, dword ptr [ebp - 4ch]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 07: jmp 0x5860fafa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 148h], eax
        push 1
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 B8 63 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 28: jle 0x5860fb57
        __asm _emit 0x7e
        __asm _emit 0x28
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 14ch], eax
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 EC FC E8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 54: jmp 0x5860fbab
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 28: jge 0x5860fb85
        __asm _emit 0x7d
        __asm _emit 0x28
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 BE FC E8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x5860fbab
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 154h], eax
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 36 63 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x63
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 15ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 44 17 E8 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 A9 B5 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb5
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 BA 2A FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 53 02 00 00: je 0x5860fe51
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 8D 2A FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 78h
        mov dword ptr [ebp - 160h], eax
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 62 64 E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x64
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 168h], ecx
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 86 62 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x62
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 16ch], eax
        push 1
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 6A 62 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x62
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 170h], edx
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 4E 62 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x62
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 110h]
        mov dword ptr [ebp - 174h], edx
        push 1
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 2A 62 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x62
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 124h]
        ; Exact mapped bytes E8 C2 5B E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5b
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 25: je 0x5860fcfa
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 178h], edx
        push 1
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 E7 61 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x61
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 180h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 49 4D E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4d
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 46h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 87 29 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 9bh]
        imul esi, ecx
        mov dword ptr [ebp - 17ch], esi
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 45 B4 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 188h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 78 4C E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 124h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 E3 4C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 46h]
        imul esi, ecx
        mov dword ptr [ebp - 184h], esi
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 F4 B3 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 190h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 A7 4C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x4c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 46h]
        mov dword ptr [ebp - 18ch], eax
        mov ecx, dword ptr [ebp - 18ch]
        push ecx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 BB B3 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 198h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 66 4C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 46h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 D4 4B E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4b
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 124h]
        imul esi, ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 8C 28 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        imul esi, dword ptr [eax + 24h]
        mov eax, esi
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 45 B3 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x5860ff2a
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d8h]
        mov dword ptr [ebp - 1a0h], edx
        push 588ae038h
        ; Exact mapped bytes E8 7E 21 F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 13 62 E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x62
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 1a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 37 60 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x60
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 1a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 1B 60 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x60
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 1ach], eax
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 FF 5F E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 110h]
        mov dword ptr [ebp - 1b0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 DB 5F E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 1b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 B7 5F E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5f
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 78 27 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + edx + 17ch]
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5860ffd7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        movzx esi, word ptr [eax + edx + 18ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 71 4A E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 124h]
        imul esi, edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        imul esi, dword ptr [ecx + eax + 19ch]
        mov dword ptr [ebp - 8], esi
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 C4 4A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 46h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 32 4A E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 124h]
        imul esi, ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        imul esi, dword ptr [eax + edx + 1ach]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, esi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x586100db
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 7B 4A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 46h]
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 18ch]
        cmp eax, ecx
        ; Exact mapped bytes 7E 58: jle 0x58610057
        __asm _emit 0x7e
        __asm _emit 0x58
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        movzx esi, word ptr [eax + edx + 18ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 41 4A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 46h]
        sub esi, edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 AD 49 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x49
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 124h]
        imul esi, ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        imul esi, dword ptr [eax + edx + 1ach]
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x586100db
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 FB 49 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x49
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 46h]
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        movzx eax, word ptr [ecx + eax + 18ch]
        cmp edx, eax
        ; Exact mapped bytes 7D 55: jge 0x586100d4
        __asm _emit 0x7d
        __asm _emit 0x55
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        movzx esi, word ptr [edx + ecx + 18ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 C1 49 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x49
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 46h]
        sub esi, ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 2D 49 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x49
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 124h]
        imul esi, eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        imul esi, dword ptr [edx + ecx + 19ch]
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes EB 07: jmp 0x586100db
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 1b8h], eax
        push 1
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 D8 5D E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5d
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 27: jle 0x58610136
        __asm _emit 0x7e
        __asm _emit 0x27
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 1bch], eax
        push 0
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 0D F7 E8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 52: jmp 0x58610188
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 27: jge 0x58610163
        __asm _emit 0x7d
        __asm _emit 0x27
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 1c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 E0 F6 E8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x58610188
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 1c4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 59 5D E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5d
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 1cch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 68 11 E8 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 CD AF 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xaf
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 FE 24 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x58610357
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d8h]
        mov dword ptr [ebp - 1d4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 D0 24 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 78h
        mov dword ptr [ebp - 1d0h], eax
        mov eax, dword ptr [ebp - 1d0h]
        push eax
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 85 5E E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 1d8h], edx
        push 1
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 A9 5C E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x5c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 110h]
        mov dword ptr [ebp - 1dch], eax
        push 1
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 84 5C E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 124h]
        ; Exact mapped bytes E8 1C 56 E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x56
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x586102a1
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 1e0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 40 5C E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5c
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 1e8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 A2 47 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x47
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 44h]
        mov dword ptr [ebp - 1e4h], edx
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 B6 AE 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xae
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 1f0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 60 47 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 44h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 CE 46 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x46
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 122h]
        imul esi, ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 A6 23 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        imul esi, dword ptr [eax + 24h]
        mov eax, esi
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 1ech], eax
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 3F AE 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xae
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x586103fb
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 1f8h], eax
        push 588ae054h
        ; Exact mapped bytes E8 77 1C F1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1c
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1f4h], eax
        mov ecx, dword ptr [ebp - 1f4h]
        push ecx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 0C 5D E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 1fch], eax
        push 0
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 30 5B E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 200h], ecx
        push 0
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 0B 5B E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 204h], edx
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 E6 5A E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5a
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 C7 22 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x22
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + edx + 17ch]
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x586104ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 28h], edx
        imul eax, dword ptr [ebp - 28h], 12h
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 28h]
        add eax, ecx
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 88 45 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 122h]
        mov edx, 4
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 19ch]
        mov eax, dword ptr [ebp - 50h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 CF 45 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x45
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 44h]
        mov dword ptr [ebp - 28h], ecx
        imul edx, dword ptr [ebp - 28h], 12h
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        imul eax, dword ptr [ebp - 28h]
        add edx, eax
        mov dword ptr [ebp - 50h], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 27 45 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x45
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 122h]
        mov edx, 4
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 1ach]
        mov eax, dword ptr [ebp - 50h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov eax, dword ptr [ebp - 8]
        sub eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x586106e6
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 64 45 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 44h]
        mov eax, 2
        imul ecx, eax, 3
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + ecx + 18ch]
        cmp edx, ecx
        ; Exact mapped bytes 0F 8E CD 00 00 00: jle 0x586105e8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 2ch], edx
        imul eax, dword ptr [ebp - 2ch], 12h
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        imul ecx, dword ptr [ebp - 2ch]
        add eax, ecx
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 8E 44 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 122h]
        mov edx, 4
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 1ach]
        mov eax, dword ptr [ebp - 54h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 D5 44 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x44
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 44h]
        mov dword ptr [ebp - 2ch], ecx
        imul edx, dword ptr [ebp - 2ch], 12h
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        imul eax, dword ptr [ebp - 2ch]
        add edx, eax
        mov dword ptr [ebp - 54h], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 2D 44 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x44
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 122h]
        mov edx, 4
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 1ach]
        mov eax, dword ptr [ebp - 54h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov eax, dword ptr [ebp - 8]
        sub eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x586106e6
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 6A 44 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x44
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 44h]
        mov eax, 2
        imul ecx, eax, 3
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + ecx + 18ch]
        cmp edx, ecx
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x586106df
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 18ch]
        mov dword ptr [ebp - 30h], edx
        imul eax, dword ptr [ebp - 30h], 12h
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        imul ecx, dword ptr [ebp - 30h]
        add eax, ecx
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 94 43 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x43
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 122h]
        mov edx, 4
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 19ch]
        mov eax, dword ptr [ebp - 34h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 DB 43 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x43
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 44h]
        mov dword ptr [ebp - 30h], ecx
        imul edx, dword ptr [ebp - 30h], 12h
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        imul eax, dword ptr [ebp - 30h]
        add edx, eax
        mov dword ptr [ebp - 34h], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 33 43 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x43
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 122h]
        mov edx, 4
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + eax + 19ch]
        mov eax, dword ptr [ebp - 34h]
        cdq
        mov esi, 14h
        idiv esi
        imul ecx, eax
        mov eax, dword ptr [ebp - 8]
        sub eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x586106e6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 208h], edx
        push 1
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 CC 57 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 28: jle 0x58610743
        __asm _emit 0x7e
        __asm _emit 0x28
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 20ch], eax
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 00 F1 E8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 54: jmp 0x58610797
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 28: jge 0x58610771
        __asm _emit 0x7d
        __asm _emit 0x28
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 210h], ecx
        push 1
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 D2 F0 E8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x58610797
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 214h], edx
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 4A 57 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 21ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 58 0B E8 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 218h], eax
        mov edx, dword ptr [ebp - 218h]
        push edx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 BD A9 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 40 31 EB FF: call 0x584c3930
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x31
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 88 A9 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 228h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 61 A9 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 22ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 8C 56 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x56
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 28: jle 0x58610883
        __asm _emit 0x7e
        __asm _emit 0x28
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 230h], ecx
        push 0
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 C0 EF E8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 54: jmp 0x586108d7
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 28: jge 0x586108b1
        __asm _emit 0x7d
        __asm _emit 0x28
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 234h], ecx
        push 1
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 92 EF E8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x586108d7
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 238h], ecx
        push 0
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 0A 56 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x56
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 6F: jge 0x5861094c
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 0ch]
        neg edx
        ; Exact mapped bytes A1 F8 04 96 58: mov eax, dword ptr [0x589604f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, 55555555h
        cmp edx, eax
        ; Exact mapped bytes 7E 5C: jle 0x5861094c
        __asm _emit 0x7e
        __asm _emit 0x5c
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 240h], eax
        push 2dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 41 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x41
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp - 23ch]
        push ecx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 93 EE E8 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 244h], eax
        push 0
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 97 54 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 79: jmp 0x586109c5
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 124h]
        ; Exact mapped bytes E8 2D 4F E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x58610987
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 248h], edx
        push 0
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 5A 54 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x54
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 250h], edx
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 41 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x41
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        mov eax, dword ptr [ebp - 24ch]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 FC ED E8 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 258h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 4E 17 F5 FF: call 0x58562130
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x17
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        mov ecx, dword ptr [ebp - 254h]
        push ecx
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 96 A7 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 260h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 99 1C 00 00: call 0x586126b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 25ch], eax
        mov edx, dword ptr [ebp - 25ch]
        push edx
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 61 A7 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 268h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 5B 46 E9 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x46
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 23 A7 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 270h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 BD EC E9 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xec
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        mov ecx, dword ptr [ebp - 26ch]
        push ecx
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 E5 A6 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa6
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 27ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 88 EC E9 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 D4 45 E9 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        mov eax, dword ptr [ebp - 274h]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        push ecx
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 15 35 EF FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x35
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 284h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 2F 09 F3 FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0xf3
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 280h], eax
        mov edx, dword ptr [ebp - 280h]
        push edx
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 4F A6 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa6
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 28ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 79 3E E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 288h], ecx
        mov edx, dword ptr [ebp - 288h]
        push edx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 0E A6 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa6
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 298h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 41 3E E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x3e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [eax + 78h]
        mov dword ptr [ebp - 290h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 9A 08 F3 FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0xf3
        __asm _emit 0xff
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 294h], eax
        mov edx, dword ptr [ebp - 290h]
        push edx
        mov eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 33 34 EF FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x34
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 64 08 F3 FF: call 0x58541450
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0xf3
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 E4 3D E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3d
        __asm _emit 0xe7
        __asm _emit 0xff
        imul eax, dword ptr [eax + 78h], 3e8h
        cmp esi, eax
        ; Exact mapped bytes 76 5C: jbe 0x58610c63
        __asm _emit 0x76
        __asm _emit 0x5c
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 9ch]
        mov dword ptr [ebp - 2a0h], ecx
        push 2dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 3E E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov edx, dword ptr [ebp - 29ch]
        push edx
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 7C EB E8 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 2a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 80 51 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x58610ca1
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 2ach], edx
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 3E E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        mov eax, dword ptr [ebp - 2a8h]
        push eax
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 20 EB E8 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul esi, ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 B9 8D F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + esi + 17ch], eax
        ; Exact mapped bytes 0F 85 35 01 00 00: jne 0x58610dfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx esi, word ptr [ecx + eax + 18ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 78 3D E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3d
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 40h]
        cmp esi, eax
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x58610dfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 4
        shl esi, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 86 27 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x27
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + esi + 17ch], eax
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x58610dfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx esi, word ptr [ecx + eax + 18ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 25 3D E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3d
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 42h]
        cmp esi, eax
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x58610dfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 4
        shl esi, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 54 19 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + esi + 17ch], eax
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x58610dfc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        movzx esi, word ptr [ecx + eax + 18ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 D4 3C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x3c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 46h]
        cmp esi, eax
        ; Exact mapped bytes 75 68: jne 0x58610dfc
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, 4
        imul esi, ecx, 3
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 26 19 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + esi + 17ch], eax
        ; Exact mapped bytes 75 46: jne 0x58610dfc
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, 2
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        movzx esi, word ptr [ecx + eax + 18ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 89 3C E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3c
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 44h]
        cmp esi, eax
        ; Exact mapped bytes 75 1D: jne 0x58610dfc
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 2b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 E5 4F E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 66 8C F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x58610e6c
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 54 8C F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 06: mov dx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 55 A8: mov word ptr [ebp - 0x58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 3E 8C F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx esi, word ptr [eax + 6]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 9C 3B E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3b
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        cmp esi, edx
        ; Exact mapped bytes 74 1D: je 0x58610e6c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 2b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 75 4F E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 16 26 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x26
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x58610ec6
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 04 26 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x26
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx esi, word ptr [eax + 6]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 42 3B E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3b
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        cmp esi, edx
        ; Exact mapped bytes 74 1D: je 0x58610ec6
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 2b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 1B 4F E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 FC 17 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x58610f20
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 EA 17 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx esi, word ptr [eax + 6]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 E8 3A E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        cmp esi, edx
        ; Exact mapped bytes 74 1D: je 0x58610f20
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 2bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 C1 4E E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4e
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 82 17 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x58610f7a
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 70 17 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx esi, word ptr [eax + 6]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 8E 3A E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        cmp esi, edx
        ; Exact mapped bytes 74 1D: je 0x58610f7a
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 2c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 67 4E E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4e
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
