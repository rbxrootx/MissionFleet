// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A5230 .. +0xFDA bytes.
extern "C" __declspec(naked) void FUN_585a5230_585A5230() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 170h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0db0h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        movzx eax, word ptr [ebx + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 C0 1D 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        movzx ecx, byte ptr [ebx + 14h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0dh
        ; Exact mapped bytes 0F 87 45 0F 00 00: ja 0x585a61da
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 85 0C 62 5A 58: jmp dword ptr [eax*4 + 0x585a620c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x62
        __asm _emit 0x5a
        __asm _emit 0x58
        movzx ecx, word ptr [ebx + 8]
        cmp ecx, 0ffffh
        ; Exact mapped bytes 0F 84 D2 04 00 00: je 0x585a5781
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebx + 1ch], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x585a5367
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 53 18: movsx edx, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x53
        __asm _emit 0x18
        test edx, edx
        ; Exact mapped bytes 0F 8C 94 00 00 00: jl 0x585a5367
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 1ch]
        mov dword ptr [ebp - 10h], eax
        movzx ecx, byte ptr [ebx + 0ch]
        shl ecx, 8
        movzx edx, byte ptr [ebx + 10h]
        or ecx, edx
        ; Exact mapped bytes 74 24: je 0x585a530c
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 1ch]
        add eax, 0b8h
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 B0 00 00: call 0x585b03d0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 D5 FA 16 00: call 0x58714de0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfa
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 18 F5 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 7
        ; Exact mapped bytes 75 33: jne 0x585a5367
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 8
        ; Exact mapped bytes 75 1C: jne 0x585a5367
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 A0 1E F3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x1e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 0
        push 0
        push 514h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 0A 3A F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 43 18: movsx eax, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 0F 8E 06 01 00 00: jle 0x585a5479
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 1ch], 0
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x585a5474
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 6B EE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x585a53aa
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 C1 1D 00: call 0x58781560
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 37 01 00: call 0x585b8b80
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 61: jmp 0x585a540b
        __asm _emit 0xeb
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 C1 1D 00: call 0x58781560
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 61 01 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 42 01 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 1A 01 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0db4h]
        ; Exact mapped bytes E8 47 3E F1 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x3e
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 74 16: je 0x585a5437
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 31 3E F1 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3e
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 4
        ; Exact mapped bytes 75 3D: jne 0x585a5474
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dach]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0dach]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0db4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0db4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 7B 00 00: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D6 02 00 00: jmp 0x585a574f
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4B 18: movsx ecx, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4b
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x585a550d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebx + 8]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B BE 1D 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbe
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 6A: je 0x585a5508
        __asm _emit 0x74
        __asm _emit 0x6a
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 AB 00 00: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x585a54bb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 34 01 00: call 0x585b89b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x585a54e5
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 AC 00 00: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x585a54d8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B 37 01 00: call 0x585b8c20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0D: jmp 0x585a54e5
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e10h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F3 ED 1A 00: call 0x587542e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xed
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 19 01 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        movzx eax, word ptr [ebx + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 C4 1D 00: call 0x58781950
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc4
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x585a574f
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 1ch], 0
        ; Exact mapped bytes 0F 84 38 02 00 00: je 0x585a574f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebx + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 BD 1D 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xbd
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 1B 02 00 00: je 0x585a574f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 354h]
        mov dword ptr [ebp - 80h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 A0 F4 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 C1 9E EF FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9e
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 92 01 EF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 AA 16 EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x16
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 354h]
        mov dword ptr [ebp - 8ch], eax
        push 100h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 62 FF 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 90h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 8D 09 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 CE F3 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf3
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 E6 9D EF FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x9d
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        ; Exact mapped bytes E8 B7 00 EF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 CF 15 EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 0a4h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 87 FE 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 354h]
        mov dword ptr [ebp - 0a8h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 B2 08 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0xee
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F0 FA 1A 00: call 0x587551e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfa
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E8 EB 1A 00: call 0x587542e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 17 01 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 0ach], edx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 17 FE 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 0b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 F2 FD 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        mov dword ptr [ebp - 0b8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 1A 00 00: call 0x585a71c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 D0 87 1D 00: call 0x5877df50
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x87
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 FD 00 00: call 0x585b54b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4B 0A 00 00: jmp 0x585a61da
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 43 18: movsx eax, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x585a5828
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebx + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 EF 1A 00: call 0x587546f0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xef
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3F 00 EF FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 6C: je 0x585a5826
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 50h]
        movzx eax, word ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 38 07 96 58: mov ecx, dword ptr [0x58960738]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 F3 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf3
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d84h]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 588h]
        ; Exact mapped bytes E8 10 F2 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf2
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 160h], ecx
        mov dword ptr [ebp - 15ch], edx
        push 0
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov edx, dword ptr [ebp - 160h]
        push edx
        push -1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 7B F5 F3 FF: call 0x584e4da0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf5
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5E: jmp 0x585a5886
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d84h]
        ; Exact mapped bytes E8 2A 3A F1 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3a
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 74 0F: je 0x585a584d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0d84h]
        ; Exact mapped bytes E8 84 F4 F3 FF: call 0x584e4cd0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 2ch], 0
        mov byte ptr [ebp - 2bh], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 D6: mov word ptr [ebp - 0x2a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd6
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 87 EE 1A 00: call 0x587546f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 344h]
        mov dword ptr [ebp - 0c4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 DB 13 EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x13
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4F 09 00 00: jmp 0x585a61da
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4B 18: movsx ecx, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4b
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 27 01 00 00: jle 0x585a59be
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebx + 14h]
        push edx
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F6 02 1B 00: call 0x58755ba0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dbch]
        mov dword ptr [ebp - 0c8h], edx
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 37 82 1D 00: call 0x5877db00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x82
        __asm _emit 0x1d
        __asm _emit 0x00
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6A 77 EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x77
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x585a59b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F5 F0 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf0
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, byte ptr [ebx + 10h]
        mov ecx, 1fh
        sub ecx, edx
        mov eax, dword ptr [eax + 26ch]
        shr eax, cl
        and eax, 1
        ; Exact mapped bytes 74 09: je 0x585a590c
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 1
        ; Exact mapped bytes EB 07: jmp 0x585a5913
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 30h]
        movzx eax, word ptr [edx + 4]
        mov ecx, dword ptr [ebp - 58h]
        lea edx, [eax + ecx + 3]
        push edx
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D F1 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        mov eax, dword ptr [ebp - 30h]
        movzx ecx, word ptr [eax + 4]
        mov edx, dword ptr [ebp - 58h]
        lea eax, [ecx + edx + 5]
        push eax
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D F1 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf1
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d84h]
        mov dword ptr [ebp - 0d4h], edx
        movzx eax, byte ptr [ebx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 508h]
        ; Exact mapped bytes E8 85 F0 ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 168h], edx
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 E8 F3 F3 FF: call 0x584e4da0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x585a5a47
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d84h]
        ; Exact mapped bytes E8 94 38 F1 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 74 0F: je 0x585a59e3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0d84h]
        ; Exact mapped bytes E8 EE F2 F3 FF: call 0x584e4cd0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 34h], 0
        mov byte ptr [ebp - 33h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 CE: mov word ptr [ebp - 0x32], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xce
        push 1
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9C 01 1B 00: call 0x58755ba0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x1b
        __asm _emit 0x00
        movzx eax, byte ptr [ebx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 244h]
        mov dword ptr [ebp - 0d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 3B 12 EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, byte ptr [ebx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2c4h]
        mov dword ptr [ebp - 0dch], edx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 1A 12 EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x12
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        mov dword ptr [ebp - 0e0h], ecx
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 9A 80 1D 00: call 0x5877db00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x80
        __asm _emit 0x1d
        __asm _emit 0x00
        mov byte ptr [ebp - 24h], 0
        mov byte ptr [ebp - 23h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 DE: mov word ptr [ebp - 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xde
        push 1
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 37 F2 1A 00: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf2
        __asm _emit 0x1a
        __asm _emit 0x00
        push 1
        push 55h
        push 0
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 74 EA 1A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        push 1
        push 1
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F F2 1A 00: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf2
        __asm _emit 0x1a
        __asm _emit 0x00
        push 1
        push 55h
        push 1
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4C EA 1A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dbch]
        mov dword ptr [ebp - 0e8h], edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 16 00 00: call 0x585a71c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 5B 84 1D 00: call 0x5877df50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DF 06 00 00: jmp 0x585a61da
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4B 18: movsx ecx, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4b
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 0F 8E E9 00 00 00: jle 0x585a5bf0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebx + 14h]
        push edx
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 00 1B 00: call 0x58755ba0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dbch]
        mov dword ptr [ebp - 0ech], edx
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 C7 7F 1D 00: call 0x5877db00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7f
        __asm _emit 0x1d
        __asm _emit 0x00
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FA 74 EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x74
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x585a5beb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        movzx eax, word ptr [edx + 4]
        add eax, 3
        push eax
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 EF ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        mov ecx, dword ptr [ebp - 38h]
        movzx edx, word ptr [ecx + 4]
        add edx, 4
        push edx
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B EF ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d84h]
        mov dword ptr [ebp - 0f8h], ecx
        movzx edx, byte ptr [ebx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        ; Exact mapped bytes E8 53 EE ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 170h], ecx
        mov dword ptr [ebp - 16ch], edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 B6 F1 F3 FF: call 0x584e4da0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf1
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x585a5c79
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0d84h]
        ; Exact mapped bytes E8 62 36 F1 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x36
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 74 0F: je 0x585a5c15
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0d84h]
        ; Exact mapped bytes E8 BC F0 F3 FF: call 0x584e4cd0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 3ch], 0
        mov byte ptr [ebp - 3bh], 0
        xor edx, edx
        ; Exact mapped bytes 66 89 55 C6: mov word ptr [ebp - 0x3a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc6
        push 1
        mov eax, dword ptr [ebp - 3ch]
        push eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6A FF 1A 00: call 0x58755ba0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0x00
        movzx edx, byte ptr [ebx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        mov dword ptr [ebp - 0fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 09 10 EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, byte ptr [ebx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2c4h]
        mov dword ptr [ebp - 100h], ecx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 E8 0F EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 28h], 0
        mov byte ptr [ebp - 27h], 0
        xor edx, edx
        ; Exact mapped bytes 66 89 55 DA: mov word ptr [ebp - 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xda
        push 1
        push 0
        mov eax, dword ptr [ebp - 28h]
        push eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 24 F0 1A 00: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x1a
        __asm _emit 0x00
        push 1
        push 55h
        push 0
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 E8 1A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        push 1
        push 1
        mov eax, dword ptr [ebp - 28h]
        push eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC EF 1A 00: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xef
        __asm _emit 0x1a
        __asm _emit 0x00
        push 1
        push 55h
        push 1
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 39 E8 1A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        mov dword ptr [ebp - 104h], ecx
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 0A 7E 1D 00: call 0x5877db00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7e
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        mov dword ptr [ebp - 10ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 14 00 00: call 0x585a71c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 29 82 1D 00: call 0x5877df50
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x82
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AD 04 00 00: jmp 0x585a61da
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 43 18: movsx eax, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7E 5C: jle 0x585a5d91
        __asm _emit 0x7e
        __asm _emit 0x5c
        push 1
        mov ecx, dword ptr [ebx + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD E8 1A 00: call 0x58754620
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 85 FA EE FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 3B: je 0x585a5d8f
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 348h]
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 5ch]
        movzx edx, word ptr [ecx + 4]
        push edx
        ; Exact mapped bytes 8B 0D 3C 07 96 58: mov ecx, dword ptr [0x5896073c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A ED ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xed
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 D2 0E EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0e
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x585a5dca
        __asm _emit 0xeb
        __asm _emit 0x39
        mov byte ptr [ebp - 40h], 0
        mov byte ptr [ebp - 3fh], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D C2: mov word ptr [ebp - 0x3e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc2
        push 1
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 73 E8 1A 00: call 0x58754620
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 348h]
        mov dword ptr [ebp - 118h], ecx
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 97 0E EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0B 04 00 00: jmp 0x585a61da
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebx + 0ch]
        push edx
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F 9F F0 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 0F: je 0x585a5df9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 2]
        movzx eax, word ptr [ebx + 16h]
        cmp edx, eax
        ; Exact mapped bytes 74 2F: je 0x585a5e28
        __asm _emit 0x74
        __asm _emit 0x2f
        push 1
        movzx ecx, byte ptr [ebx + 0ch]
        push ecx
        mov edx, dword ptr [ebx + 14h]
        push edx
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF EE 1A 00: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        push 1
        push 55h
        movzx ecx, byte ptr [ebx + 0ch]
        push ecx
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 E6 1A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 1
        movzx eax, byte ptr [ebx + 0ch]
        push eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 71 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x71
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 0F BF 43 18: movsx eax, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x18
        add edx, eax
        xor edx, 55h
        push edx
        movzx ecx, byte ptr [ebx + 0ch]
        push ecx
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 E6 1A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe6
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        movzx eax, byte ptr [ebx + 0ch]
        push eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 71 EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x71
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 55h
        ; Exact mapped bytes 75 27: jne 0x585a5ea0
        __asm _emit 0x75
        __asm _emit 0x27
        mov byte ptr [ebp - 44h], 0
        mov byte ptr [ebp - 43h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 BE: mov word ptr [ebp - 0x42], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xbe
        push 1
        movzx ecx, byte ptr [ebx + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 21 EE 1A 00: call 0x58754cc0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        movzx ecx, byte ptr [ebx + 14h]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 14: jne 0x585a5ec4
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebx + 14h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 0F F5 FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 24: jmp 0x585a5ee8
        __asm _emit 0xeb
        __asm _emit 0x24
        movzx eax, byte ptr [ebx + 14h]
        cmp eax, 0ch
        ; Exact mapped bytes 75 14: jne 0x585a5ee1
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebx + 14h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 10 F5 FF: call 0x584f6ef0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585a5ee8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 43: je 0x585a5f31
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 20h]
        cmp edx, 2
        ; Exact mapped bytes 75 2E: jne 0x585a5f31
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + eax + 20h]
        cmp edx, 1
        ; Exact mapped bytes 75 19: jne 0x585a5f31
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 0F BF 43 18: movsx eax, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x43
        __asm _emit 0x18
        neg eax
        push eax
        push 1
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 AB 11 00: call 0x586c0a40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xab
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 47: jmp 0x585a5f78
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 41: je 0x585a5f78
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 75 2C: jne 0x585a5f78
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 8
        ; Exact mapped bytes 75 17: jne 0x585a5f78
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 0F BF 53 18: movsx edx, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x53
        __asm _emit 0x18
        neg edx
        push edx
        push 8
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 AA 11 00: call 0x586c0a40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xaa
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        mov dword ptr [ebp - 120h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 12 00 00: call 0x585a71c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 A7 7F 1D 00: call 0x5877df50
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x7f
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dbch]
        ; Exact mapped bytes E8 99 6A 1D 00: call 0x5877ca50
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6a
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x585a61da
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 70 EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x70
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 0F: je 0x585a5fe2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 64h]
        movzx eax, word ptr [edx + 2]
        movzx ecx, word ptr [ebx + 16h]
        cmp eax, ecx
        ; Exact mapped bytes 74 27: je 0x585a6009
        __asm _emit 0x74
        __asm _emit 0x27
        push 1
        mov edx, dword ptr [ebx + 14h]
        push edx
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AB FB 1A 00: call 0x58755ba0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0x1a
        __asm _emit 0x00
        push 1
        push 55h
        push 0
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 08 E5 1A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe5
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 1
        push 0
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F6 6F EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x6f
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        ; Exact mapped bytes 0F BF 4B 18: movsx ecx, word ptr [ebx + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4b
        __asm _emit 0x18
        add eax, ecx
        xor eax, 55h
        push eax
        push 0
        movzx edx, byte ptr [ebx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D7 E4 1A 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe4
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 0
        movzx eax, byte ptr [ebx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C7 6F EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6f
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 55h
        ; Exact mapped bytes 75 69: jne 0x585a60ba
        __asm _emit 0x75
        __asm _emit 0x69
        movzx edx, byte ptr [ebx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 EE 0B EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0b
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, byte ptr [ebx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2c4h]
        mov dword ptr [ebp - 128h], ecx
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 CD 0B EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0xee
        __asm _emit 0xff
        mov byte ptr [ebp - 48h], 0
        mov byte ptr [ebp - 47h], 0
        xor edx, edx
        ; Exact mapped bytes 66 89 55 BA: mov word ptr [ebp - 0x46], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xba
        push 1
        mov eax, dword ptr [ebp - 48h]
        push eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC FA 1A 00: call 0x58755ba0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x585a6189
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        mov dword ptr [ebp - 138h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 12ch], eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 56 6F EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6f
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 4]
        add edx, 3
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 E9 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 3F 0B EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0b
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, byte ptr [ebx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2c4h]
        mov dword ptr [ebp - 148h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 13ch], eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 EF 6E EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 4]
        add edx, 4
        mov dword ptr [ebp - 140h], edx
        mov eax, dword ptr [ebp - 140h]
        push eax
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 E9 ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 D8 0A EE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dbch]
        mov dword ptr [ebp - 14ch], eax
        movzx ecx, byte ptr [ebx + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 58 79 1D 00: call 0x5877db00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x79
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dbch]
        mov dword ptr [ebp - 154h], eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 0F 00 00: call 0x585a71c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 150h]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 77 7D 1D 00: call 0x5877df50
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7d
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dach]
        ; Exact mapped bytes E8 68 F9 1C 00: call 0x58775b50
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 E9 00 00: call 0x585b4b10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 A4 00 00: call 0x585b0600
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 2D 01 00: call 0x585b8f80
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
