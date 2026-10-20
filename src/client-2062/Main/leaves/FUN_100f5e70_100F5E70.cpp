// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F5E70 .. +0x768 bytes.
extern "C" __declspec(naked) void FUN_100f5e70_100F5E70() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [eax + 0d0ch]
        xor ebx, ebx
        mov esi, ecx
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 C7 05 00 00: je 0x100f6453
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 0b4ch], ebx
        ; Exact mapped bytes 0F 84 BB 05 00 00: je 0x100f6453
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        lea ecx, [edi + 54h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5eb4
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100f5eb4
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi + 0b4ch]
        lea ecx, [eax + 328h]
        mov al, byte ptr [eax + 2]
        and eax, 1fh
        push ecx
        mov ecx, dword ptr [esi + 0b4h]
        lea edx, [eax + eax*2]
        lea eax, [edx*8 + 10199610h]
        mov edx, dword ptr [ecx + 6ch]
        push eax
        push 101abe14h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi + 8e4h]
        mov ecx, dword ptr [esi + 0e0h]
        xor eax, 0aaaaaaaah
        mov ebx, 1
        mov dword ptr [ecx + 64h], eax
        mov eax, dword ptr [esi + 0e0h]
        xor ecx, ecx
        add esp, 10h
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [edi + 8ech]
        mov eax, dword ptr [esi + 0e8h]
        xor edx, 0aaaaaaaah
        mov dword ptr [eax + 64h], edx
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 8B 4F 7A: mov cx, word ptr [edi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x7a
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi + 8e8h]
        mov ecx, dword ptr [esi + 0e4h]
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + 64h], eax
        mov eax, dword ptr [esi + 0e4h]
        xor ecx, ecx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [edi + 8f0h]
        mov eax, dword ptr [esi + 0ech]
        xor edx, 0aaaaaaaah
        mov dword ptr [eax + 64h], edx
        mov eax, dword ptr [esi + 0ech]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 8B 4F 7C: mov cx, word ptr [edi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x7c
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi + 4ch]
        mov ecx, dword ptr [esi + 0bch]
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + 64h], eax
        mov eax, dword ptr [esi + 0bch]
        mov ecx, 0
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [edi + 8e0h]
        mov eax, dword ptr [esi + 0c0h]
        xor edx, 0aaaaaaaah
        mov dword ptr [eax + 64h], edx
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi + 4ch]
        mov ebp, dword ptr [esi + 8ch]
        xor eax, 0aaaaaaaah
        setl cl
        dec ecx
        mov dword ptr [ebp + 60h], 40000000h
        and ecx, eax
        mov dword ptr [ebp + 5ch], ecx
        mov edx, dword ptr [edi + 4ch]
        mov ecx, dword ptr [esi + 80h]
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 E3 42 F3 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [edi + 8e0h]
        mov ecx, dword ptr [esi + 80h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 FC 42 F3 FF: call 0x1002a320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 900h]
        mov eax, 66666667h
        xor ecx, 0aaaaaaaah
        imul ecx
        mov eax, dword ptr [esi + 0d4h]
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [edi + 8fch]
        mov edx, dword ptr [esi + 0d0h]
        xor ecx, 0aaaaaaaah
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 904h]
        xor ecx, 0aaaaaaaah
        mov eax, 10624dd3h
        imul ecx
        mov ecx, dword ptr [esi + 0c8h]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [edi + 0b4ch]
        mov eax, dword ptr [esi + 0cch]
        mov ecx, dword ptr [edx + 64h]
        mov dword ptr [eax + 64h], ecx
        mov ecx, dword ptr [edi + 904h]
        xor ecx, 0aaaaaaaah
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, dword ptr [esi + 84h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 1C 42 F3 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0b4ch]
        mov edx, dword ptr [ecx + 64h]
        mov ecx, dword ptr [esi + 84h]
        push edx
        ; Exact mapped bytes E8 37 42 F3 FF: call 0x1002a320
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [edi + 0b58h]
        mov ebp, 0fffeh
        test eax, eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x100f61de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [eax], 0fh
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x100f61de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 64 57 1C 10: mov edx, dword ptr [0x101c5764]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        add ecx, 2
        cmp dword ptr [edx + 160h], ecx
        ; Exact mapped bytes 7E 15: jle 0x100f6135
        __asm _emit 0x7e
        __asm _emit 0x15
        test ecx, ecx
        ; Exact mapped bytes 7C 11: jl 0x100f6135
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x100f6135
        __asm _emit 0x74
        __asm _emit 0x07
        shl ecx, 6
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x100f6137
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 7ch]
        test ecx, ecx
        mov dword ptr [edx + 54h], ecx
        ; Exact mapped bytes 74 2C: je 0x100f616d
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ecx + 18h]
        add ecx, 20h
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ecx - 4]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ecx]
        add edx, 14h
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [esi + 0f0h]
        lea edx, [eax + 78h]
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100f618d
        __asm _emit 0x74
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x100f618d
        __asm _emit 0x74
        __asm _emit 0x0c
        push edx
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi + 0f0h]
        mov dword ptr [edx + 60h], 0ffffffh
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0f8h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edx + 64h], ecx
        mov ecx, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0fch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 98 00 00 00: mov cx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 49: jmp 0x100f6227
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [eax + 54h], 0
        mov eax, dword ptr [esi + 0f0h]
        mov dword ptr [eax + 60h], 0ddddddh
        mov eax, dword ptr [esi + 0f0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100f6213
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101abe00h
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100f6213
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 0b54h]
        test ecx, ecx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 84 A1 01 00 00: je 0x100f63da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ecx], 0fh
        ; Exact mapped bytes 0F 84 98 01 00 00: je 0x100f63da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 68 57 1C 10: mov edx, dword ptr [0x101c5768]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 04: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        mov ebp, dword ptr [edx + 160h]
        add eax, 2
        cmp ebp, eax
        ; Exact mapped bytes 7E 15: jle 0x100f6270
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100f6270
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x100f6270
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, edx
        ; Exact mapped bytes EB 02: jmp 0x100f6272
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 78h]
        test eax, eax
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100f62a4
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], ebp
        mov ebp, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [esi + 0f4h]
        lea edx, [ecx + 78h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x100f62c4
        __asm _emit 0x74
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x100f62c4
        __asm _emit 0x74
        __asm _emit 0x0c
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esi + 0f4h]
        mov dword ptr [edx + 60h], 0ffffffh
        mov eax, dword ptr [esi + 0f4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 100h]
        mov ecx, dword ptr [ecx + 98h]
        mov dword ptr [eax + 64h], ecx
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [edi + 928h]
        mov eax, dword ptr [esi + 104h]
        xor edx, 0aaaaaaaah
        mov dword ptr [eax + 64h], edx
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 924h]
        mov edx, dword ptr [esi + 108h]
        xor ecx, 0aaaaaaaah
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [esi + 88h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [edi + 8e0h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x100f6443
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 938h]
        mov ecx, 64h
        sub ecx, edx
        imul ecx, eax
        mov eax, 51eb851fh
        mul ecx
        mov eax, dword ptr [edi + 4ch]
        shr edx, 5
        xor eax, 0aaaaaaaah
        cmp eax, edx
        ; Exact mapped bytes 7C 34: jl 0x100f63a7
        __asm _emit 0x7c
        __asm _emit 0x34
        mov ecx, dword ptr [esi + 88h]
        push edx
        ; Exact mapped bytes E8 71 3F F3 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [edi + 8e0h]
        mov ecx, dword ptr [esi + 88h]
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 89 3F F3 FF: call 0x1002a320
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov esi, dword ptr [esi + 114h]
        pop edi
        or byte ptr [esi + 24h], 0fh
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        mov ecx, dword ptr [esi + 88h]
        push eax
        ; Exact mapped bytes E8 3D 3F F3 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [edi + 8e0h]
        mov ecx, dword ptr [esi + 88h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 56 3F F3 FF: call 0x1002a320
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov esi, dword ptr [esi + 114h]
        pop edi
        or byte ptr [esi + 24h], 0fh
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        mov eax, dword ptr [esi + 78h]
        mov dword ptr [eax + 54h], 0
        mov eax, dword ptr [esi + 0f4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0f4h]
        mov dword ptr [ecx + 60h], 0ddddddh
        mov eax, dword ptr [esi + 0f4h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100f6419
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 101abe00h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100f6419
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov esi, dword ptr [esi + 114h]
        pop edi
        or byte ptr [esi + 24h], 0fh
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 8B 2D B0 50 17 10: mov ebp, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0D: je 0x100f6473
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101a858ch
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100f6473
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 0b4h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0D: je 0x100f648d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ac870h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100f648d
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 0f4h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0D: je 0x100f64a7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ac860h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100f64a7
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 0f4h]
        mov edi, 0ffh
        mov dword ptr [edx + 60h], edi
        mov eax, dword ptr [esi + 0f0h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0D: je 0x100f64cf
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ac860h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100f64cf
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 0f0h]
        mov ebp, 0fffeh
        push ebx
        mov dword ptr [edx + 60h], edi
        mov eax, dword ptr [esi + 0f8h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8ch]
        mov dword ptr [eax + 5ch], ebx
        mov dword ptr [eax + 60h], 40000000h
        mov eax, dword ptr [esi + 8ch]
        mov dword ptr [eax + 58h], ebx
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 4E 3D F3 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 84h]
        push ebx
        ; Exact mapped bytes E8 42 3D F3 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 88h]
        push ebx
        ; Exact mapped bytes E8 36 3D F3 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 78h]
        pop edi
        mov dword ptr [eax + 54h], ebx
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [eax + 54h], ebx
        mov esi, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
