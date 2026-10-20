// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B2930 .. +0x84E bytes.
extern "C" __declspec(naked) void FUN_586b2930_586B2930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 96 07 00 00: je 0x586b30ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 95 03 00 00: jne 0x586b2d06
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 88h]
        ; Exact mapped bytes E8 48 36 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x36
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 6
        cmp edx, 0ffh
        ; Exact mapped bytes 7D 43: jge 0x586b29d8
        __asm _emit 0x7d
        __asm _emit 0x43
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 10h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 88h]
        ; Exact mapped bytes E8 0F 36 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x36
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 6
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6B 2B 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 23: jmp 0x586b29fb
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 88h]
        mov dword ptr [ebp - 14h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 46 2B 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes E8 BE 35 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x35
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 6
        cmp ecx, 0fah
        ; Exact mapped bytes 0F 8D 7E 01 00 00: jge 0x586b2ba1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 88h]
        ; Exact mapped bytes E8 81 35 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x35
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 6
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DD 2A 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2a
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 24h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes E8 41 35 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x35
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 6
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9D 2A 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2a
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 90h]
        ; Exact mapped bytes E8 01 35 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x35
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 6
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5D 2A 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2a
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 D3 34 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x34
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 6
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2F 2A 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2a
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 A5 34 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x34
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        add edx, 6
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 01 2A 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2a
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 77 34 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x34
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 6
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D3 29 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 98h]
        ; Exact mapped bytes E8 49 34 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x34
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        add eax, 6
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A5 29 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x586b2d01
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 50h], edx
        push 0fah
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 7D 29 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 54h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 5B 29 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 58h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 39 29 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 5ch], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 17 29 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 60h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 FE 28 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 64h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E5 28 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 68h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 CC 28 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 6ch], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 B3 28 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 47h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        add eax, ecx
        mov ecx, 1
        imul edx, ecx, 0
        add eax, edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 AF 9A E3 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes E9 E6 03 00 00: jmp 0x586b30ec
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 9E 03 00 00: jne 0x586b30bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 88h]
        ; Exact mapped bytes E8 98 32 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x32
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        sub edx, 6
        test edx, edx
        ; Exact mapped bytes 7E 43: jle 0x586b2d84
        __asm _emit 0x7e
        __asm _emit 0x43
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 78h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 88h]
        ; Exact mapped bytes E8 63 32 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x32
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        sub edx, 6
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 BF 27 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x27
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x586b2da4
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 88h]
        mov dword ptr [ebp - 7ch], eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 9D 27 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x27
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 88h]
        ; Exact mapped bytes E8 15 32 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x32
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        sub ecx, 6
        test ecx, ecx
        ; Exact mapped bytes 0F 8E CC 01 00 00: jle 0x586b2f94
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 84h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 88h]
        ; Exact mapped bytes E8 D9 31 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x31
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        sub edx, 6
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 32 27 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x27
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 90h]
        ; Exact mapped bytes E8 93 31 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x31
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        sub edx, 6
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E6 26 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 94h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes E8 47 31 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x31
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        sub eax, 6
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 9A 26 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 0D 31 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x31
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        sub edx, 6
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 60 26 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 D3 30 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x30
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        sub ecx, 6
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 26 26 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 0ach], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 99 30 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x30
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        sub eax, 6
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 EC 25 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 5F 30 E1 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        sub edx, 6
        mov dword ptr [ebp - 0b0h], edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 B2 25 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x586b30bd
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 88h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 87 25 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 0bch], edx
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 62 25 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 3D 25 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 0c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 21 25 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 0c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 05 25 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 0cch], edx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 E9 24 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 0d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 CD 24 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
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
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 2D: jmp 0x586b30ec
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 5
        ; Exact mapped bytes 75 16: jne 0x586b30ec
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x586b310d
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x586b310d
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x586b317c
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x586b3130
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x586b3116
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 24 DE FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x586b3154
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586b317c
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x586b317a
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B4 24 DE FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0d4h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 9A: jmp 0x586b3116
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov esp, ebp
    }
}
