// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D96E0 .. +0x5D9 bytes.
extern "C" __declspec(naked) void FUN_585d96e0_585D96E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 106e4h]
        cdq
        mov ecx, 19h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 B1 05 00 00: jne 0x585d9cb4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21a84h], 0
        ; Exact mapped bytes 0F 85 BF 03 00 00: jne 0x585d9ad2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20fb8h], 0
        ; Exact mapped bytes 74 18: je 0x585d9737
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 20fb0h]
        cmp eax, dword ptr [edx + 20fb8h]
        ; Exact mapped bytes 0F 8D FE 02 00 00: jge 0x585d9a35
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20fb0h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20fb0h], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20fa8h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20fb0h]
        cdq
        mov ecx, 3ch
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 15 1A 1E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1a
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20fa8h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20fb0h]
        cdq
        mov ecx, 3ch
        idiv ecx
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E6 19 1E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x19
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 20fb0h]
        cmp ecx, dword ptr [edx + eax + 20f40h]
        ; Exact mapped bytes 0F 8D D2 00 00 00: jge 0x585d989e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20f40h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, 4
        imul eax, eax, 0
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 4]
        cmp ecx, dword ptr [esi + eax + 20f60h]
        ; Exact mapped bytes 7F 09: jg 0x585d980e
        __asm _emit 0x7f
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 20f40h]
        mov ecx, 4
        shl ecx, 0
        mov edx, 4
        shl edx, 0
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + ecx + 4]
        cmp eax, dword ptr [esi + edx + 20f60h]
        ; Exact mapped bytes 7F 09: jg 0x585d9849
        __asm _emit 0x7f
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20f40h]
        mov eax, 4
        shl eax, 1
        mov ecx, 4
        shl ecx, 1
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + eax + 4]
        cmp edx, dword ptr [esi + ecx + 20f60h]
        ; Exact mapped bytes 7F 09: jg 0x585d9882
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 75 16: jne 0x585d989e
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 20fa0h], 1
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 20fb0h]
        cmp edx, dword ptr [eax + ecx + 20f40h]
        ; Exact mapped bytes 0F 8D D2 00 00 00: jge 0x585d9991
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20f40h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, 4
        imul eax, eax, 0
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 4]
        cmp ecx, dword ptr [esi + eax + 20f60h]
        ; Exact mapped bytes 7F 09: jg 0x585d9901
        __asm _emit 0x7f
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 20f40h]
        mov eax, 4
        shl eax, 0
        mov ecx, 4
        shl ecx, 0
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + eax + 4]
        cmp edx, dword ptr [esi + ecx + 20f60h]
        ; Exact mapped bytes 7F 09: jg 0x585d993c
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 20f40h]
        mov ecx, 4
        shl ecx, 1
        mov edx, 4
        shl edx, 1
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + ecx + 4]
        cmp eax, dword ptr [esi + edx + 20f60h]
        ; Exact mapped bytes 7F 09: jg 0x585d9975
        __asm _emit 0x7f
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 75 16: jne 0x585d9991
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 20fa0h], 1
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 20fa0h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x585d9a30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 20fa0h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 20fa0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20fbch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20fbch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D DB 00 00: call 0x585e7520
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 D7 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 63h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 65 F3 EF FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf3
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes E8 E0 D7 EF FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 48h
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 B1 EA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb1
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 21 F0 EF FF: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf0
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x585d9acd
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20fb4h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 20fb0h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20fb4h], ecx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 20fa0h], 0
        ; Exact mapped bytes 74 35: je 0x585d9a9a
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C CF EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcf
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 FC 00 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0ffffff00h
        or edx, 10h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10678h], edx
        ; Exact mapped bytes EB 33: jmp 0x585d9acd
        __asm _emit 0xeb
        __asm _emit 0x33
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 CF EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xcf
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E FC 00 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0ffffff00h
        or edx, 20h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10678h], edx
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x585d9cb4
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21a84h], 1
        ; Exact mapped bytes 74 10: je 0x585d9aee
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21a84h], 2
        ; Exact mapped bytes 0F 85 C6 01 00 00: jne 0x585d9cb4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [ebp - 34h], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20fb8h], 0
        ; Exact mapped bytes 74 18: je 0x585d9b20
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 20fb0h]
        cmp eax, dword ptr [edx + 20fb8h]
        ; Exact mapped bytes 0F 8D F2 00 00 00: jge 0x585d9c12
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20fb0h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20fb0h], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20fa8h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20fb0h]
        cdq
        mov ecx, 3ch
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2C 16 1E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x16
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20fa8h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20fb0h]
        cdq
        mov ecx, 3ch
        idiv ecx
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FD 15 1E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x15
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585d9ba6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 27: jge 0x585d9bd3
        __asm _emit 0x7d
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 20f60h]
        cmp eax, dword ptr [esi + edx*4 + 21468h]
        ; Exact mapped bytes 7F 09: jg 0x585d9bd1
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 02: jmp 0x585d9bd3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CA: jmp 0x585d9b9d
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes EB 09: jmp 0x585d9bde
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 10h
        ; Exact mapped bytes 7D 2E: jge 0x585d9c12
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*4 + 20f60h]
        cmp edx, dword ptr [esi + ecx*4 + 21468h]
        ; Exact mapped bytes 7E 10: jle 0x585d9c10
        __asm _emit 0x7e
        __asm _emit 0x10
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 02: jmp 0x585d9c12
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C3: jmp 0x585d9bd5
        __asm _emit 0xeb
        __asm _emit 0xc3
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x585d9cb4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20fb4h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 20fb0h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20fb4h], ecx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 20fa0h], 0
        ; Exact mapped bytes 74 35: je 0x585d9c81
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 CD EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C FA 00 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0ffffff00h
        or edx, 10h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10678h], edx
        ; Exact mapped bytes EB 33: jmp 0x585d9cb4
        __asm _emit 0xeb
        __asm _emit 0x33
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 CD EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xcd
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 FA 00 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0ffffff00h
        or edx, 20h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10678h], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
