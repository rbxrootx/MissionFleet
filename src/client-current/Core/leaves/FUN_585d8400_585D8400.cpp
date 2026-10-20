// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D8400 .. +0x61F bytes.
extern "C" __declspec(naked) void FUN_585d8400_585D8400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D B7 F8 FF: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F E5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x585d848c
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 E5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 09 40 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 D3 EB FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 20h]
        cmp eax, 2
        ; Exact mapped bytes 75 3C: jne 0x585d848c
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 E5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 3F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x3f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 D3 EB FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [eax + ecx + 20h]
        cmp edx, 0dh
        ; Exact mapped bytes 75 11: jne 0x585d848c
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D A8 FF FF: call 0x585d2cf0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 220c8h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 E5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A2 3F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B C5 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc5
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [eax + edx*4 + 168h]
        mov ecx, 2
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BF 04 10: movsx eax, word ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x10
        imul esi, eax, 0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A 3F EB FF: call 0x5848c460
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x3f
        __asm _emit 0xeb
        __asm _emit 0xff
        lea ecx, [esi + eax + 384h]
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 E4 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5D 3F EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 C4 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [eax + edx*4 + 168h]
        mov ecx, 2
        shl ecx, 0
        ; Exact mapped bytes 0F BF 14 08: movsx edx, word ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x08
        imul esi, edx, 0ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 3F EB FF: call 0x5848c460
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3f
        __asm _emit 0xeb
        __asm _emit 0xff
        lea eax, [esi + eax + 384h]
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        cdq
        mov ecx, 0e10h
        idiv ecx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 45 F8: movsx eax, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf8
        cdq
        mov ecx, 0e10h
        idiv ecx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 75 ED FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x75
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [eax + 30h], 1
        ; Exact mapped bytes 75 18: jne 0x585d855c
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 66 8B 45 F8: mov ax, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 4D F4: mov cx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 220c8h]
        sub eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 34h], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 85 49 01 00 00: jne 0x585d86c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 55 F8: movsx edx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf8
        sub ecx, edx
        test ecx, ecx
        ; Exact mapped bytes 7E 30: jle 0x585d85c1
        __asm _emit 0x7e
        __asm _emit 0x30
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 220c8h], eax
        ; Exact mapped bytes 7D 18: jge 0x585d85b8
        __asm _emit 0x7d
        __asm _emit 0x18
        ; Exact mapped bytes 0F BF 55 F8: movsx edx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 220c8h], edx
        ; Exact mapped bytes 7E 09: jle 0x585d85b8
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 07: jmp 0x585d85bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 2E: jmp 0x585d85ef
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 220c8h], ecx
        ; Exact mapped bytes 7E 18: jle 0x585d85e8
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 0F BF 45 F8: movsx eax, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 220c8h], eax
        ; Exact mapped bytes 7D 09: jge 0x585d85e8
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 07: jmp 0x585d85ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 75 63: jne 0x585d8658
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        sub edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 79 0B: jns 0x585d860c
        __asm _emit 0x79
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 28h]
        add eax, 0e10h
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [edx + 220c8h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 79 0B: jns 0x585d8629
        __asm _emit 0x79
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 24h]
        add eax, 0e10h
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 14: jge 0x585d8645
        __asm _emit 0x7d
        __asm _emit 0x14
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 0C: jge 0x585d8643
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        add edx, 0e10h
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 11: jmp 0x585d8656
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 0B: jle 0x585d8656
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        sub eax, 0e10h
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 6B: jmp 0x585d86c3
        __asm _emit 0xeb
        __asm _emit 0x6b
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 220c8h]
        sub eax, ecx
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 79 0C: jns 0x585d8678
        __asm _emit 0x79
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0e10h
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 0F BF 55 F8: movsx edx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 14h]
        sub edx, dword ptr [eax + 220c8h]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes 79 0C: jns 0x585d8696
        __asm _emit 0x79
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 0e10h
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7D 13: jge 0x585d86b1
        __asm _emit 0x7d
        __asm _emit 0x13
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 0B: jge 0x585d86af
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        add eax, 0e10h
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 12: jmp 0x585d86c3
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 0C: jle 0x585d86c3
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0e10h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 3B: jmp 0x585d8700
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 220c8h]
        sub eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 708h
        ; Exact mapped bytes 7E 0E: jle 0x585d86eb
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0e10h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 15: jmp 0x585d8700
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp - 10h], 0fffff8f8h
        ; Exact mapped bytes 7D 0C: jge 0x585d8700
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        add edx, 0e10h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 07 8C EB FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8c
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        cmp eax, 2
        ; Exact mapped bytes 0F 8E EE 00 00 00: jle 0x585d8803
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 73 ED FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 34h]
        add ecx, 2
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 E1 8B EB FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8b
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7E 0D: jle 0x585d8744
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8F 3D F4 FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x585d8752
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 40000000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 3D F4 FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 73 ED FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 7D: jne 0x585d87dd
        __asm _emit 0x75
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 73 ED FF: call 0x584afaf0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x73
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [eax + 18h], 0e10h
        ; Exact mapped bytes 75 6C: jne 0x585d87dd
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 220c8h]
        sub ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 8D 8B EB FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        cmp eax, 708h
        ; Exact mapped bytes 7D 28: jge 0x585d87b5
        __asm _emit 0x7d
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 220c8h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7E 0D: jle 0x585d87a8
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 7B EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7b
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x585d87b3
        __asm _emit 0xeb
        __asm _emit 0x0b
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 7B EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7b
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x585d87db
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 220c8h]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7E 0D: jle 0x585d87d0
        __asm _emit 0x7e
        __asm _emit 0x0d
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 7A EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x585d87db
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 7A EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 24: jmp 0x585d8801
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 0D: jle 0x585d87f0
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 7A EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x585d8801
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 0B: jge 0x585d8801
        __asm _emit 0x7d
        __asm _emit 0x0b
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 7A EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 13: jmp 0x585d8816
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 3C F4 FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x3c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB 8A EB FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x8a
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 3ch], eax
        imul ecx, dword ptr [ebp + 10h], 38h
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BF 84 0A 58 20 02 00: movsx eax, word ptr [edx + ecx + 0x22058]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x585d8908
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 E1 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe1
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 14h]
        sub esi, dword ptr [ecx + 21e48h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 E1 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe1
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        sub eax, dword ptr [edx + 21e48h]
        imul esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 38 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x38
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edi, eax
        mov eax, dword ptr [ebp - 14h]
        sub edi, dword ptr [eax + 21e4ch]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 38 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x38
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        sub eax, dword ptr [ecx + 21e4ch]
        imul edi, eax
        add esi, edi
        ; Exact mapped bytes F2 0F 2A C6: cvtsi2sd xmm0, esi
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc6
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 7D 87 27 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 E5 89 25 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        imul eax, dword ptr [ebp - 38h], -0ah
        cdq
        mov ecx, 6
        idiv ecx
        add eax, 384h
        mov dword ptr [ebp - 1ch], eax
        imul edx, dword ptr [ebp + 10h], 38h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [eax + edx + 22060h]
        ; Exact mapped bytes 7E 11: jle 0x585d88e6
        __asm _emit 0x7e
        __asm _emit 0x11
        imul edx, dword ptr [ebp + 10h], 38h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx + 22060h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 64h
        ; Exact mapped bytes 7D 07: jge 0x585d88f3
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 B2 F8 FF: call 0x58563bb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        sub edx, eax
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x585d899a
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 220c8h], 1c2h
        ; Exact mapped bytes 7C 0F: jl 0x585d8926
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 220c8h], 546h
        ; Exact mapped bytes 7E 1E: jle 0x585d8944
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 220c8h], 8cah
        ; Exact mapped bytes 7C 49: jl 0x585d897e
        __asm _emit 0x7c
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 220c8h], 0c4eh
        ; Exact mapped bytes 7F 3A: jg 0x585d897e
        __asm _emit 0x7f
        __asm _emit 0x3a
        imul ecx, dword ptr [ebp + 10h], 38h
        mov edx, dword ptr [ebp - 14h]
        movzx esi, word ptr [edx + ecx + 2208ch]
        imul eax, dword ptr [ebp + 10h], 38h
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + eax + 2208ch]
        imul eax, edx, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        add esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 B2 F8 FF: call 0x58563bb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes EB 1C: jmp 0x585d899a
        __asm _emit 0xeb
        __asm _emit 0x1c
        imul edx, dword ptr [ebp + 10h], 38h
        mov eax, dword ptr [ebp - 14h]
        movzx esi, word ptr [eax + edx + 2208ch]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B B2 F8 FF: call 0x58563bb0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 10h], esi
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 6A 86 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x86
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        cmp eax, 10h
        ; Exact mapped bytes 7D 21: jge 0x585d89cc
        __asm _emit 0x7d
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 59 86 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x86
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        cmp eax, 2
        ; Exact mapped bytes 7E 10: jle 0x585d89cc
        __asm _emit 0x7e
        __asm _emit 0x10
        push 40000000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 E7 F8 FF: call 0x585670f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x585d89d7
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A E7 F8 FF: call 0x585670f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 2D 86 27 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x86
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        cmp eax, 2
        ; Exact mapped bytes 7E 26: jle 0x585d8a0e
        __asm _emit 0x7e
        __asm _emit 0x26
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 0D: jle 0x585d89fb
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 78 EC FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x585d8a0c
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 0B: jge 0x585d8a0c
        __asm _emit 0x7d
        __asm _emit 0x0b
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 78 EC FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x585d8a17
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 88 EB FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x88
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
