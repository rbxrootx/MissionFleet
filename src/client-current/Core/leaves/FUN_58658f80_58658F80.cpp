// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58658F80 .. +0x822 bytes.
extern "C" __declspec(naked) void FUN_58658f80_58658F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 37ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 314h], ecx
        mov dword ptr [ebp - 324h], 0
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 7A A9 EC FF: call 0x58523930
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 318h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58658fd2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 318h]
        add ecx, 1
        mov dword ptr [ebp - 318h], ecx
        cmp dword ptr [ebp - 318h], 3
        ; Exact mapped bytes 7D 1B: jge 0x58658ff6
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 318h]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        ; Exact mapped bytes E8 CD 78 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x58658fc3
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov dword ptr [ebp - 318h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58659011
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 318h]
        add ecx, 1
        mov dword ptr [ebp - 318h], ecx
        cmp dword ptr [ebp - 318h], 3
        ; Exact mapped bytes 7D 1B: jge 0x58659035
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 318h]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        ; Exact mapped bytes E8 8E 78 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x58659002
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov dword ptr [ebp - 318h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58659050
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 318h]
        add ecx, 1
        mov dword ptr [ebp - 318h], ecx
        mov edx, dword ptr [ebp - 318h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D 7E 02 00 00: jge 0x586592dd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 30ch
        imul eax, dword ptr [ebp - 318h], 30ch
        add eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 310h]
        push ecx
        ; Exact mapped bytes E8 12 38 1F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x38
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 1
        imul eax, edx, 13h
        mov byte ptr [ebp + eax - 5eh], 0
        lea ecx, [ebp - 30ch]
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 70 CC FF FF: call 0x58655d10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 32ch], eax
        sub esp, 30ch
        mov ecx, 0c3h
        lea esi, [ebp - 310h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 FE A6 EC FF: call 0x585237d0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa6
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        push 589604e0h
        lea ecx, [ebp - 76h]
        push ecx
        ; Exact mapped bytes E8 DF 89 20 00: call 0x58861ac0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x58659187
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 330h], edx
        push 999999h
        push 0
        lea eax, [ebp - 3eh]
        push eax
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 03 74 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 334h], eax
        push 999999h
        push 0
        lea ecx, [ebp - 30ch]
        push ecx
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 CF 73 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 338h], ecx
        push 999999h
        push 0
        lea edx, [ebp - 5eh]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 9F 73 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x586592d8
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 33ch], eax
        push 999999h
        push 0
        lea ecx, [ebp - 76h]
        push ecx
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 68 73 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 340h], ecx
        push 999999h
        push 0
        lea edx, [ebp - 30ch]
        push edx
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 34 73 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 344h], edx
        push 999999h
        push 0
        lea eax, [ebp - 5eh]
        push eax
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 04 73 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, 1
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BE 44 15 FA: movsx eax, byte ptr [ebp + edx - 6]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0xfa
        cmp eax, 4eh
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x586592c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 348h], ecx
        push 0ffffh
        mov edx, dword ptr [ebp - 324h]
        push edx
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 AB 84 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 34ch], edx
        push 0ffffh
        mov eax, dword ptr [ebp - 324h]
        push eax
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 79 84 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 350h], eax
        push 0ffffh
        mov ecx, dword ptr [ebp - 324h]
        push ecx
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 48 84 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 324h]
        add edx, 1
        mov dword ptr [ebp - 324h], edx
        ; Exact mapped bytes E9 64 FD FF FF: jmp 0x58659041
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + ecx + 0ach]
        ; Exact mapped bytes E8 99 C5 E3 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc5
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 0F 85 8D 04 00 00: jne 0x58659790
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5865931e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 31ch]
        add ecx, 1
        mov dword ptr [ebp - 31ch], ecx
        cmp dword ptr [ebp - 31ch], 3
        ; Exact mapped bytes 7D 1B: jge 0x58659342
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 31ch]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        ; Exact mapped bytes E8 81 75 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x75
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x5865930f
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes E8 6D 75 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x75
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 32 04 00 00: je 0x58659790
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 0f0h], 1
        ; Exact mapped bytes 0F 85 81 02 00 00: jne 0x586595f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + ecx + 0a0h]
        ; Exact mapped bytes E8 65 03 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 1
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 114h], eax
        ; Exact mapped bytes 7E 29: jle 0x586593c5
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + eax + 0a0h]
        ; Exact mapped bytes E8 3A 03 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 114h], eax
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 114h]
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 D3 F0 FF FF: call 0x586584b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 354h], edx
        push 999999h
        push 0
        mov eax, dword ptr [ebp - 320h]
        add eax, 29ah
        push eax
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 04 71 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x71
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 358h], eax
        push 999999h
        push 0
        mov ecx, dword ptr [ebp - 320h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 CD 70 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 35ch], ecx
        push 999999h
        push 0
        mov edx, dword ptr [ebp - 320h]
        add edx, 2b2h
        push edx
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 94 70 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 320h]
        add eax, 9ah
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 0D 04 00 00: call 0x586598b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 320h]
        ; Exact mapped bytes 0F BE 8C 10 0A 03 00 00: movsx ecx, byte ptr [eax + edx + 0x30a]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4eh
        ; Exact mapped bytes 0F 85 D2 00 00 00: jne 0x58659595
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 320h]
        mov byte ptr [ecx + eax + 30ah], 59h
        mov edx, dword ptr [ebp - 320h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 59 F2 FF: call 0x5857ee10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x59
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 360h], ecx
        push 999999h
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 114h]
        push eax
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 EB 81 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 364h], eax
        push 999999h
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 114h]
        push edx
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 B3 81 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 368h], edx
        push 999999h
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 114h]
        push ecx
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 7C 81 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586595b0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 31ch]
        add edx, 1
        mov dword ptr [ebp - 31ch], edx
        cmp dword ptr [ebp - 31ch], 3
        ; Exact mapped bytes 7D 34: jge 0x586595ed
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 31ch]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + eax*4 + 0a0h]
        mov dword ptr [ebp - 36ch], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 114h]
        push ecx
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 A6 7F 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7f
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B4: jmp 0x586595a1
        __asm _emit 0xeb
        __asm _emit 0xb4
        ; Exact mapped bytes E9 9E 01 00 00: jmp 0x58659790
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 0f0h], 2
        ; Exact mapped bytes 0F 85 8B 01 00 00: jne 0x58659790
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 D1 00 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 1
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 114h], eax
        ; Exact mapped bytes 7E 29: jle 0x58659659
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 A6 00 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 114h], eax
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 114h]
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 3F EE FF FF: call 0x586584b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 370h], edx
        push 999999h
        push 0
        mov eax, dword ptr [ebp - 328h]
        add eax, 2d2h
        push eax
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 70 6E 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x6e
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 374h], eax
        push 999999h
        push 0
        mov ecx, dword ptr [ebp - 328h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 374h]
        ; Exact mapped bytes E8 39 6E 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6e
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 378h], ecx
        push 999999h
        push 0
        mov edx, dword ptr [ebp - 328h]
        add edx, 2b2h
        push edx
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 00 6E 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6e
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 328h]
        add eax, 9ah
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 79 01 00 00: call 0x586598b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58659753
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 31ch]
        add ecx, 1
        mov dword ptr [ebp - 31ch], ecx
        cmp dword ptr [ebp - 31ch], 3
        ; Exact mapped bytes 7D 34: jge 0x58659790
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 31ch]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 37ch], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 114h]
        push eax
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 03 7E 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7e
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B4: jmp 0x58659744
        __asm _emit 0xeb
        __asm _emit 0xb4
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B4 78 1D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
