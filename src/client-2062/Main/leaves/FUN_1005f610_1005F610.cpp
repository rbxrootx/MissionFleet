// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005F610 .. +0x9F1 bytes.
extern "C" __declspec(naked) void FUN_1005f610_1005F610() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0d44h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebp, ebx
        and ebp, 0ffffh
        push ebp
        ; Exact mapped bytes E8 97 B6 09 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esp + 20h]
        mov ecx, eax
        and ecx, 0fh
        dec ecx
        cmp ecx, 0dh
        ; Exact mapped bytes 0F 87 9A 09 00 00: ja 0x1005ffe8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D 04 00 06 10: jmp dword ptr [ecx*4 + 0x10060004]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 FB FF FF: cmp bx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 88 09 00 00: je 0x1005ffe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 24h]
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x1005f679
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8C 13 01 00 00: jl 0x1005f78a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8E 02 01 00 00: jle 0x1005f784
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 49 09 00 00: je 0x1005ffd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push ebx
        mov eax, dword ptr [ecx + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x1005f71e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9D B9 09 00: call 0x100fb040
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        push 0ffh
        mov ecx, esi
        mov dword ptr [esi + 0d78h], 2000h
        ; Exact mapped bytes E8 97 13 00 00: call 0x10060a50
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x1005f6fb
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0ffh
        mov ecx, esi
        mov dword ptr [esi + 0d80h], 0ffffh
        ; Exact mapped bytes E8 7D 13 00 00: call 0x10060a50
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d5ch]
        mov dword ptr [esi + 0d7ch], eax
        mov dl, byte ptr [ecx + 24h]
        shr dl, 1
        test dl, 1
        ; Exact mapped bytes 74 12: je 0x1005f6fb
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0d5ch]
        mov dword ptr [ecx + 58h], 0
        mov eax, dword ptr [esi + 464h]
        mov ecx, 0fffeh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x1005f70e
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 468h]
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x1005f747
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 29: jmp 0x1005f747
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes E8 1D B9 09 00: call 0x100fb040
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 0
        mov edi, eax
        ; Exact mapped bytes E8 EE F9 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 0
        ; Exact mapped bytes E8 E1 F9 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0x09
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 D9 EC FF FF: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0d48h]
        xor eax, eax
        mov al, byte ptr [edx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 74 08: je 0x1005f760
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 4
        ; Exact mapped bytes 0F 85 73 08 00 00: jne 0x1005ffd3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d40h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0d48h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 01 D8 FF FF: call 0x1005cf80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4F 08 00 00: jmp 0x1005ffd3
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D EB 00 00 00: jge 0x1005f875
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        ; Exact mapped bytes E8 3A B5 09 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 33 08 00 00: je 0x1005ffd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 05 51 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        mov eax, dword ptr [edi + 0b70h]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x1005f7e7
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 92 48 03 00 00: mov dx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 0A: jne 0x1005f7dd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [eax + 0a0h]
        test edx, edx
        ; Exact mapped bytes 74 53: je 0x1005f830
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [eax + 0b70h]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x1005f7bd
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BE 50 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        mov eax, dword ptr [edi + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x1005f84a
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 92 48 03 00 00: mov dx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 0A: jne 0x1005f824
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [eax + 0a0h]
        test edx, edx
        ; Exact mapped bytes 74 19: je 0x1005f83d
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [eax + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x1005f804
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 1A: jmp 0x1005f84a
        __asm _emit 0xeb
        __asm _emit 0x1a
        test eax, eax
        ; Exact mapped bytes 74 B3: je 0x1005f7e7
        __asm _emit 0x74
        __asm _emit 0xb3
        mov ecx, esi
        ; Exact mapped bytes E8 C5 FB FF FF: call 0x1005f400
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x1005f854
        __asm _emit 0xeb
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1005f84a
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, esi
        ; Exact mapped bytes E8 A8 F9 FF FF: call 0x1005f1f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x1005f854
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 0d7ch], 0
        mov ecx, edi
        ; Exact mapped bytes E8 85 25 09 00: call 0x100f1de0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 BC EB FF FF: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        ; Exact mapped bytes E8 C0 B8 09 00: call 0x100fb130
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 5E 07 00 00: jmp 0x1005ffd3
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 56 07 00 00: je 0x1005ffd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        ; Exact mapped bytes E8 47 B4 09 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 40 07 00 00: je 0x1005ffd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 338h]
        push edx
        ; Exact mapped bytes E8 22 F4 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov ecx, dword ptr [esi + 338h]
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005f8ec
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 338h]
        push 100h
        ; Exact mapped bytes E8 24 F8 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 338h]
        mov ebp, 0fh
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 33ch]
        push edx
        ; Exact mapped bytes E8 AA F3 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, dword ptr [esi + 33ch]
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005f964
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 33ch]
        push 100h
        ; Exact mapped bytes E8 AC F7 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 33ch]
        push 1
        push 0
        push ebx
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, edi
        ; Exact mapped bytes E8 96 1B 09 00: call 0x100f1520
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 4F 24 09 00: call 0x100f1de0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 87 EA FF FF: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 9ch]
        push 0
        ; Exact mapped bytes E8 7A F7 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 0
        ; Exact mapped bytes E8 6D F7 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 1B 06 00 00: jmp 0x1005ffd3
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes 66 39 5C 24 24: cmp word ptr [esp + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 7E 6C: jle 0x1005fa2d
        __asm _emit 0x7e
        __asm _emit 0x6c
        push 1
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 95 21 09 00: call 0x100f1b60
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0b58h]
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x1005fa61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 64 57 1C 10: mov ecx, dword ptr [0x101c5764]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1005fa02
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebx
        ; Exact mapped bytes 7C 11: jl 0x1005fa02
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x1005fa02
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005fa04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 53ch]
        push ebx
        push eax
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 0d18h]
        push eax
        push -1
        ; Exact mapped bytes E8 1F 2F FC FF: call 0x10022940
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 78 08 00 00: call 0x100602a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BB 05 00 00: jmp 0x1005ffe8
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d18h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 05: je 0x1005fa45
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 BB 31 FC FF: call 0x10022c00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 5C 24 24: mov word ptr [esp + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        mov eax, dword ptr [esp + 24h]
        push 1
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 08 21 09 00: call 0x100f1b60
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 328h]
        mov dword ptr [eax + 54h], ebx
        mov ecx, esi
        ; Exact mapped bytes E8 38 08 00 00: call 0x100602a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7B 05 00 00: jmp 0x1005ffe8
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes 66 39 6C 24 24: cmp word ptr [esp + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F 8E BD 00 00 00: jle 0x1005fb37
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 1ch]
        push 1
        and ebx, 0ffh
        push eax
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 81 1F 09 00: call 0x100f1a10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d50h]
        push ebx
        ; Exact mapped bytes E8 55 9F 09 00: call 0x100f99f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [edi + ebx*4 + 9cch]
        cmp edx, ebp
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x1005fb7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0b4ch]
        mov ecx, 1fh
        sub ecx, ebx
        ; Exact mapped bytes 8B 2D 5C 57 1C 10: mov ebp, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 258h]
        shr eax, cl
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4A 04: mov cx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        mov edx, dword ptr [ebp + 160h]
        and eax, 1
        add ecx, eax
        lea eax, [ecx + 3]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1005faf2
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1005faf2
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ebp, dword ptr [ebp + 190h]
        test ebp, ebp
        ; Exact mapped bytes 74 07: je 0x1005faf2
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ebp
        ; Exact mapped bytes EB 02: jmp 0x1005faf4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add ecx, 5
        cmp edx, ecx
        ; Exact mapped bytes 7E 1B: jle 0x1005fb16
        __asm _emit 0x7e
        __asm _emit 0x1b
        test ecx, ecx
        ; Exact mapped bytes 7C 17: jl 0x1005fb16
        __asm _emit 0x7c
        __asm _emit 0x17
        ; Exact mapped bytes 8B 15 5C 57 1C 10: mov edx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x1005fb16
        __asm _emit 0x74
        __asm _emit 0x07
        shl ecx, 6
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x1005fb18
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ecx
        push eax
        mov eax, dword ptr [esi + ebx*4 + 4bch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [esi + 0d18h]
        mov edx, dword ptr [eax + 4]
        push edx
        push ebx
        ; Exact mapped bytes E8 0B 2E FC FF: call 0x10022940
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 48: jmp 0x1005fb7f
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 0d18h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 74 05: je 0x1005fb4d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 B3 30 FC FF: call 0x10022c00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 6C 24 24: mov word ptr [esp + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 24h]
        and ebx, 0ffh
        push 1
        push ecx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 A5 1E 09 00: call 0x100f1a10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + ebx*4 + 228h]
        mov dword ptr [eax + 54h], ebp
        mov eax, dword ptr [esi + ebx*4 + 2a8h]
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 0d50h]
        push ebx
        ; Exact mapped bytes E8 65 9E 09 00: call 0x100f99f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 44 24 24 00 00: mov word ptr [esp + 0x24], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 24h]
        push 1
        push 0
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 0D 1F 09 00: call 0x100f1ab0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 0aah
        push 0
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 2C 1E 09 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 1
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 EF 1E 09 00: call 0x100f1ab0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 0aah
        push 1
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 0E 1E 09 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 F5 03 00 00: jmp 0x1005ffcc
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes 66 39 6C 24 24: cmp word ptr [esp + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F 8E A3 00 00 00: jle 0x1005fc87
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 1ch]
        push 1
        and ebx, 0ffh
        push eax
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 17 1E 09 00: call 0x100f1a10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d50h]
        push ebx
        ; Exact mapped bytes E8 EB 9D 09 00: call 0x100f99f0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + ebx*4 + 9cch]
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x1005fccf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 57 1C 10: mov edx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov ebp, dword ptr [edx + 160h]
        lea eax, [ecx + 3]
        cmp ebp, eax
        ; Exact mapped bytes 7E 15: jle 0x1005fc42
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1005fc42
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x1005fc42
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, edx
        ; Exact mapped bytes EB 02: jmp 0x1005fc44
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add ecx, 4
        cmp ebp, ecx
        ; Exact mapped bytes 7E 1B: jle 0x1005fc66
        __asm _emit 0x7e
        __asm _emit 0x1b
        test ecx, ecx
        ; Exact mapped bytes 7C 17: jl 0x1005fc66
        __asm _emit 0x7c
        __asm _emit 0x17
        ; Exact mapped bytes 8B 15 60 57 1C 10: mov edx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x1005fc66
        __asm _emit 0x74
        __asm _emit 0x07
        shl ecx, 6
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x1005fc68
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ecx
        push eax
        mov eax, dword ptr [esi + ebx*4 + 4bch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [esi + 0d18h]
        mov edx, dword ptr [eax + 4]
        push edx
        push ebx
        ; Exact mapped bytes E8 BB 2C FC FF: call 0x10022940
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 48: jmp 0x1005fccf
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 0d18h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 74 05: je 0x1005fc9d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 63 2F FC FF: call 0x10022c00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 6C 24 24: mov word ptr [esp + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 24h]
        and ebx, 0ffh
        push 1
        push ecx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 55 1D 09 00: call 0x100f1a10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + ebx*4 + 228h]
        mov dword ptr [eax + 54h], ebp
        mov eax, dword ptr [esi + ebx*4 + 2a8h]
        mov dword ptr [eax + 54h], ebp
        ; Exact mapped bytes 66 C7 44 24 24 00 00: mov word ptr [esp + 0x24], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 24h]
        push 1
        push 0
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 C9 1D 09 00: call 0x100f1ab0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 0aah
        push 0
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 E8 1C 09 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 1
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 AB 1D 09 00: call 0x100f1ab0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 0aah
        push 1
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 CA 1C 09 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 02 00 00: jmp 0x1005ffc0
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes 66 39 5C 24 24: cmp word ptr [esp + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F 8E 81 00 00 00: jle 0x1005fda9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 FE 1D 09 00: call 0x100f1b30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, dword ptr [edi + 0b54h]
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 A8 02 00 00: je 0x1005ffe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 68 57 1C 10: mov ecx, dword ptr [0x101c5768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1005fd69
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebx
        ; Exact mapped bytes 7C 11: jl 0x1005fd69
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x1005fd69
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005fd6b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 32ch]
        cmp eax, ebx
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 0F 84 6C 02 00 00: je 0x1005ffe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E9 3F 02 00 00: jmp 0x1005ffe8
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 5C 24 24: mov word ptr [esp + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 24h]
        push 1
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 74 1D 09 00: call 0x100f1b30
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 32ch]
        mov dword ptr [eax + 54h], ebx
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x1005ffe8
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 1ch]
        mov ebp, dword ptr [esp + 18h]
        and ebx, 0ffh
        and ebp, 0ffh
        lea edx, [ebp + ebx*2]
        mov ecx, dword ptr [edi + edx*4 + 0a4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x1005fdf2
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 39 01: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        ; Exact mapped bytes 74 1C: je 0x1005fe0e
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push ebp
        push eax
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 B2 1C 09 00: call 0x100f1ab0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 0aah
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 D2 1B 09 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        lea eax, [ebp + ebx*2 + 4a6h]
        push 1
        ; Exact mapped bytes 66 8B 0C 47: mov cx, word ptr [edi + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x47
        ; Exact mapped bytes 66 81 F1 AA 00: xor cx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        add ecx, edx
        xor ecx, 0aah
        push ecx
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 AA 1B 09 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 91 0C 00 00: call 0x10060ad0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d50h]
        push eax
        ; Exact mapped bytes E8 C5 A3 09 00: call 0x100fa210
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d50h]
        ; Exact mapped bytes E8 FA 8A 09 00: call 0x100f8950
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 01 00 00: jmp 0x1005ffe8
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 1ch]
        xor ebp, ebp
        and ebx, 0ffh
        mov ecx, dword ptr [edi + ebx*4 + 9cch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x1005fe77
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 39 01: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        ; Exact mapped bytes 74 1B: je 0x1005fe92
        __asm _emit 0x74
        __asm _emit 0x1b
        push 1
        push eax
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 8E 1B 09 00: call 0x100f1a10
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        push 0aah
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 4E 1B 09 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 94 9F 4C 09 00 00: mov dx, word ptr [edi + ebx*4 + 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x9f
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        push 1
        add edx, eax
        mov ecx, edi
        xor edx, 0aah
        push edx
        push ebp
        push ebx
        ; Exact mapped bytes E8 29 1B 09 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 BC 9F 4C 09 00 00 AA 00: cmp word ptr [edi + ebx*4 + 0x94c], 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x9f
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x1005fedc
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [esi + ebx*4 + 228h]
        mov dword ptr [eax + 54h], ebp
        mov eax, dword ptr [esi + ebx*4 + 2a8h]
        mov dword ptr [eax + 54h], ebp
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x1005ffc0
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0ch]
        mov ecx, dword ptr [eax + ebx*4 + 9cch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 04: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 3
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1005ff15
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebp
        ; Exact mapped bytes 7C 11: jl 0x1005ff15
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x1005ff15
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005ff17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 228h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005ff4d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0d0ch]
        xor eax, eax
        mov edx, dword ptr [ecx + ebx*4 + 9cch]
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 4
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1005ff88
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, ebp
        ; Exact mapped bytes 7C 11: jl 0x1005ff88
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 07: je 0x1005ff88
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005ff8a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + ebx*4 + 2a8h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005ffc0
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0d50h]
        push ebx
        ; Exact mapped bytes E8 24 9A 09 00: call 0x100f99f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 CD 02 00 00: call 0x100602a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 F4 0A 00 00: call 0x10060ad0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d50h]
        push eax
        ; Exact mapped bytes E8 28 A2 09 00: call 0x100fa210
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa2
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d40h]
        ; Exact mapped bytes E8 7D 5E 09 00: call 0x100f5e70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x5e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 96 DE FF FF: call 0x1005de90
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
