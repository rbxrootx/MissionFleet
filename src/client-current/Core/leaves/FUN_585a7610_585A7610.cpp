// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A7610 .. +0x2E4 bytes.
extern "C" __declspec(naked) void FUN_585a7610_585A7610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 BC D3 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd3
        __asm _emit 0xed
        __asm _emit 0xff
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
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 9F D3 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd3
        __asm _emit 0xed
        __asm _emit 0xff
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
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 86 D3 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd3
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        mov dword ptr [ebp - 20h], ecx
        mov byte ptr [ebp - 1], 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 15ch
        ; Exact mapped bytes 77 2C: ja 0x585a76a0
        __asm _emit 0x77
        __asm _emit 0x2c
        cmp dword ptr [ebp - 14h], 15ch
        ; Exact mapped bytes 74 48: je 0x585a76c5
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 14h]
        sub eax, 57h
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0e3h
        ; Exact mapped bytes 77 3A: ja 0x585a76c9
        __asm _emit 0x77
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 585a7900h]
        ; Exact mapped bytes FF 24 95 F8 78 5A 58: jmp dword ptr [edx*4 + 0x585a78f8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0x78
        __asm _emit 0x5a
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 14h]
        sub eax, 15dh
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0c8h
        ; Exact mapped bytes 77 15: ja 0x585a76c9
        __asm _emit 0x77
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 585a79ech]
        ; Exact mapped bytes FF 24 95 E4 79 5A 58: jmp dword ptr [edx*4 + 0x585a79e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0x79
        __asm _emit 0x5a
        __asm _emit 0x58
        mov byte ptr [ebp - 1], 0
        movzx eax, byte ptr [ebp - 1]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x585a76db
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 17 02 00 00: jmp 0x585a78f2
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 F3 D2 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        add eax, 5
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 2], 1
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a7714
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8D 6A 01 00 00: jge 0x585a788a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DB 83 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x585a773b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D0: jmp 0x585a770b
        __asm _emit 0xeb
        __asm _emit 0xd0
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 0F 8C 40 01 00 00: jl 0x585a7885
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 90 D2 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 88 5C 03 00 00: movzx cx, byte ptr [eax + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9F 83 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F8 BB F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xbb
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 77 83 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D0 BB F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbb
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [eax + 54h]
        shr eax, 1
        and eax, 7fffffffh
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 34h], edx
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 3D A8 1A 00: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x585a784f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 27 83 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A8 A9 1A 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x585a784f
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F6 82 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 77 A9 1A 00: call 0x587521a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 1B: je 0x585a7849
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 50h], edx
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 BC A7 1A 00: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 04: jne 0x585a784d
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ebp - 2], 0
        ; Exact mapped bytes EB 36: jmp 0x585a7885
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 AC 82 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 BB F1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xbb
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        and edx, 80203c00h
        ; Exact mapped bytes 74 09: je 0x585a7885
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 81 FE FF FF: jmp 0x585a770b
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 4
        ; Exact mapped bytes 7D 29: jge 0x585a78b9
        __asm _emit 0x7d
        __asm _emit 0x29
        movzx ecx, byte ptr [ebp - 2]
        test ecx, ecx
        ; Exact mapped bytes 75 21: jne 0x585a78b9
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 53 F9 F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        push 0
        push 271bh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 BD 14 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x14
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 3B: jmp 0x585a78f2
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes EB 34: jmp 0x585a78ed
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 1ch], 4
        ; Exact mapped bytes 7D 2E: jge 0x585a78ed
        __asm _emit 0x7d
        __asm _emit 0x2e
        ; Exact mapped bytes E8 2C F9 F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 588ab1c8h
        ; Exact mapped bytes E8 1F A7 F7 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 60h]
        push edx
        push 28h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 87 14 F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x585a78f2
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
    }
}
