// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AC6A0 .. +0x1921 bytes.
extern "C" __declspec(naked) void FUN_100ac6a0_100AC6A0() {
    __asm {
        sub esp, 18h
        push ebx
        push ebp
        ; Exact mapped bytes 8B 2D B0 50 17 10: mov ebp, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        mov esi, ecx
        push edi
        mov ebx, 8
        lea edi, [esi + 0b4h]
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100ac6d0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100ac6d0
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 E4: jne 0x100ac6ba
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, dword ptr [esi + 178h]
        mov ebx, 0fffeh
        lea ecx, [esi + 1fch]
        mov edx, 20h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 17ch]
        mov dword ptr [esp + 24h], ecx
        mov edi, 0fff0h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100ac703
        __asm _emit 0x75
        __asm _emit 0xf4
        mov edi, dword ptr [esi + 84h]
        test edi, edi
        ; Exact mapped bytes 0F 84 25 18 00 00: je 0x100adf42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 47 7A: mov ax, word ptr [edi + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x7a
        add edi, 50h
        mov edx, eax
        mov dword ptr [esp + 1ch], edi
        xor edx, 0aah
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 60: je 0x100ac795
        __asm _emit 0x74
        __asm _emit 0x60
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 4F 0C: mov cx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 57 0A: mov dx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0a
        xor ecx, 0aah
        and eax, 0ffffh
        mov ebx, eax
        xor edx, 0aah
        lea eax, [ecx + ecx*4]
        xor ebx, 0aah
        lea ebp, [edx + edx*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + ebp*2]
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 6F 08: mov bp, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6f
        __asm _emit 0x08
        xor ebp, 0aah
        add ebp, edx
        add ebp, ecx
        imul eax, ebp
        cdq
        idiv ebx
        ; Exact mapped bytes 8B 2D B0 50 17 10: mov ebp, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        idiv ebx
        mov ebx, 0fffeh
        lea eax, [eax + eax*4]
        shl eax, 1
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x100ac79d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 1
        mov edx, dword ptr [esi + 0ach]
        lea ecx, [edi + 0ach]
        push ecx
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [edi + 10h]
        mov ecx, dword ptr [edi + 54h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea ecx, [ecx + edx*2]
        lea eax, [ecx + ecx*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        cmp eax, 4bh
        ; Exact mapped bytes 7D 37: jge 0x100ac812
        __asm _emit 0x7d
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 20fh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100ac801
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100ac801
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100ac801
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100ac803
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 5D: je 0x100ac86d
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 33: jmp 0x100ac845
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, -4bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100ac836
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100ac836
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100ac836
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100ac838
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ac86d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 68 B0 F7 FF: call 0x100278e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 174h]
        push edx
        ; Exact mapped bytes E8 89 2E 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 94h]
        mov dword ptr [esp + 10h], 0bh
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 DF 08 00 00: je 0x100ad18f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 10h], 1
        cmp dword ptr [eax + 164h], 146h
        ; Exact mapped bytes 7E 12: jle 0x100ac8db
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ac8db
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 518h]
        ; Exact mapped bytes EB 02: jmp 0x100ac8dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 98h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ac912
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 147h
        ; Exact mapped bytes 7E 12: jle 0x100ac935
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ac935
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 51ch]
        ; Exact mapped bytes EB 02: jmp 0x100ac937
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ac96c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [edi + 98h]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x100aca1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
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
        push eax
        ; Exact mapped bytes E8 49 E3 04 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b4ch]
        mov eax, dword ptr [esi + 17ch]
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [eax + 24h], 1
        xor eax, eax
        mov cl, byte ptr [edi + eax + 0cch]
        test cl, cl
        ; Exact mapped bytes 74 11: je 0x100ac9be
        __asm _emit 0x74
        __asm _emit 0x11
        mov ebx, edx
        shr ebx, 5
        cmp cl, bl
        ; Exact mapped bytes 74 08: je 0x100ac9be
        __asm _emit 0x74
        __asm _emit 0x08
        inc eax
        cmp eax, 20h
        ; Exact mapped bytes 7C E6: jl 0x100ac9a2
        __asm _emit 0x7c
        __asm _emit 0xe6
        ; Exact mapped bytes EB 02: jmp 0x100ac9c0
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ebp, eax
        mov eax, dword ptr [esi + 17ch]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 178h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x100ac9f6
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [edi + ebp*4 + 0ech]
        mov ecx, dword ptr [esi + 178h]
        push edx
        ; Exact mapped bytes E8 2C 2D 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x100aca06
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [esi + 178h]
        mov ecx, dword ptr [edi + ebp*4 + 0ech]
        mov dword ptr [eax + 64h], ecx
        mov ecx, dword ptr [esi + 17ch]
        push 3e8h
        push 0
        ; Exact mapped bytes E8 38 D9 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 2D B0 50 17 10: mov ebp, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 148h]
        add edx, 66h
        push edx
        ; Exact mapped bytes E8 90 23 05 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 63h
        add ecx, 54h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes E8 87 22 05 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0f4h]
        add edx, 63h
        add eax, 15h
        push edx
        push eax
        ; Exact mapped bytes E8 6E 22 05 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        add ecx, 68h
        push ecx
        mov ecx, dword ptr [esi + 190h]
        ; Exact mapped bytes E8 4C 23 05 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 1bch]
        add edx, 68h
        push edx
        ; Exact mapped bytes E8 3A 23 05 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 10h]
        mov ecx, eax
        shr eax, 1dh
        shr ecx, 15h
        and al, 7
        push ecx
        push eax
        ; Exact mapped bytes E8 96 52 F7 FF: call 0x10021d30
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b0h]
        add esp, 8
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100acab2
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100acab2
        __asm _emit 0x74
        __asm _emit 0x04
        push eax
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ebx, [esi + 0b4h]
        lea ebp, [edi + 9ch]
        mov dword ptr [esp + 20h], 8
        ; Exact mapped bytes 66 8B 45 00: mov ax, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        test al, 1
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x100acb55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 32 83 F7 FF: call 0x10024e10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x100acb41
        __asm _emit 0x74
        __asm _emit 0x5f
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        mov eax, dword ptr [edi + 10h]
        xor eax, 0fffffaafh
        shr edx, 4
        shr eax, 4
        and edx, 0ffh
        and eax, 0ffh
        cmp edx, eax
        ; Exact mapped bytes 77 2A: ja 0x100acb2d
        __asm _emit 0x77
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 45 00: mov ax, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes 66 C1 E8 0D: shr ax, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0d
        shr ecx, 5
        and al, 0fh
        push ecx
        push eax
        ; Exact mapped bytes E8 17 52 F7 FF: call 0x10021d30
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebx]
        add esp, 8
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 4E: je 0x100acb73
        __asm _emit 0x74
        __asm _emit 0x4e
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x100acb73
        __asm _emit 0x74
        __asm _emit 0x4a
        push eax
        push ecx
        ; Exact mapped bytes EB 40: jmp 0x100acb6d
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x100acb73
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 34: je 0x100acb73
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes EB 26: jmp 0x100acb67
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x100acb73
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x100acb73
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes EB 12: jmp 0x100acb67
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x100acb73
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x100acb73
        __asm _emit 0x74
        __asm _emit 0x0c
        push 101ace48h
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 20h]
        add ebp, 2
        add ebx, 4
        dec eax
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 85 3E FF FF FF: jne 0x100acac6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 274h]
        mov ecx, dword ptr [esi + 2bch]
        push eax
        ; Exact mapped bytes E8 6D 2B 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi + 278h]
        xor eax, eax
        xor ebp, ebp
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1B: jl 0x100acbdf
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x100acbce
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp edx, 0d4a51000h
        ; Exact mapped bytes 72 11: jb 0x100acbdf
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 431bde83h
        mov ebx, 2
        mul edx
        shr edx, 12h
        ; Exact mapped bytes EB 1B: jmp 0x100acbfa
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp edx, 3b9aca00h
        ; Exact mapped bytes 72 11: jb 0x100acbf8
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 10624dd3h
        mov ebx, 1
        mul edx
        shr edx, 6
        ; Exact mapped bytes EB 02: jmp 0x100acbfa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esi + 2c0h]
        push edx
        ; Exact mapped bytes E8 1A 2B 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        sub eax, ebp
        ; Exact mapped bytes 74 24: je 0x100acc31
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 12: je 0x100acc22
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 75 27: jne 0x100acc3a
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 290h]
        mov dword ptr [ecx + 50h], 2
        ; Exact mapped bytes EB 18: jmp 0x100acc3a
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [esi + 290h]
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes EB 09: jmp 0x100acc3a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 290h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [edi + 27ch]
        push ecx
        mov ecx, dword ptr [esi + 2c4h]
        ; Exact mapped bytes E8 D4 2A 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi + 280h]
        xor eax, eax
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1B: jl 0x100acc76
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x100acc65
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp edx, 0d4a51000h
        ; Exact mapped bytes 72 11: jb 0x100acc76
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 431bde83h
        mov ebx, 2
        mul edx
        shr edx, 12h
        ; Exact mapped bytes EB 1B: jmp 0x100acc91
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp edx, 3b9aca00h
        ; Exact mapped bytes 72 11: jb 0x100acc8f
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 10624dd3h
        mov ebx, 1
        mul edx
        shr edx, 6
        ; Exact mapped bytes EB 02: jmp 0x100acc91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esi + 2c8h]
        push edx
        ; Exact mapped bytes E8 83 2A 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        sub eax, ebp
        ; Exact mapped bytes 74 24: je 0x100accc8
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 12: je 0x100accb9
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 75 27: jne 0x100accd1
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [esi + 294h]
        mov dword ptr [edx + 50h], 2
        ; Exact mapped bytes EB 18: jmp 0x100accd1
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [esi + 294h]
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes EB 09: jmp 0x100accd1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 294h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [edi + 284h]
        mov ecx, dword ptr [esi + 2cch]
        push edx
        ; Exact mapped bytes E8 3D 2A 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi + 288h]
        xor eax, eax
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1B: jl 0x100acd0d
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x100accfc
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp edx, 0d4a51000h
        ; Exact mapped bytes 72 11: jb 0x100acd0d
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 431bde83h
        mov ebx, 2
        mul edx
        shr edx, 12h
        ; Exact mapped bytes EB 1B: jmp 0x100acd28
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp edx, 3b9aca00h
        ; Exact mapped bytes 72 11: jb 0x100acd26
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 10624dd3h
        mov ebx, 1
        mul edx
        shr edx, 6
        ; Exact mapped bytes EB 02: jmp 0x100acd28
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esi + 2d0h]
        push edx
        ; Exact mapped bytes E8 EC 29 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        sub eax, ebp
        ; Exact mapped bytes 74 24: je 0x100acd5f
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 12: je 0x100acd50
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 75 27: jne 0x100acd68
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [esi + 298h]
        mov dword ptr [eax + 50h], 2
        ; Exact mapped bytes EB 18: jmp 0x100acd68
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 298h]
        mov dword ptr [ecx + 50h], 1
        ; Exact mapped bytes EB 09: jmp 0x100acd68
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [esi + 298h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [edi + 294h]
        mov edx, dword ptr [edi + 28ch]
        mov ecx, dword ptr [esi + 2d4h]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 9E 29 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi + 298h]
        mov ebx, dword ptr [edi + 290h]
        xor eax, eax
        add edx, ebx
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1B: jl 0x100acdb4
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x100acda3
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp edx, 0d4a51000h
        ; Exact mapped bytes 72 11: jb 0x100acdb4
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 431bde83h
        mov ebx, 2
        mul edx
        shr edx, 12h
        ; Exact mapped bytes EB 1B: jmp 0x100acdcf
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp edx, 3b9aca00h
        ; Exact mapped bytes 72 11: jb 0x100acdcd
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 10624dd3h
        mov ebx, 1
        mul edx
        shr edx, 6
        ; Exact mapped bytes EB 02: jmp 0x100acdcf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esi + 2d8h]
        push edx
        ; Exact mapped bytes E8 45 29 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        sub eax, ebp
        ; Exact mapped bytes 74 24: je 0x100ace06
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 12: je 0x100acdf7
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 75 27: jne 0x100ace0f
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 29ch]
        mov dword ptr [ecx + 50h], 2
        ; Exact mapped bytes EB 18: jmp 0x100ace0f
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [esi + 29ch]
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes EB 09: jmp 0x100ace0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 29ch]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [edi + 2a4h]
        mov edx, dword ptr [edi + 29ch]
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 2dch]
        ; Exact mapped bytes E8 F7 28 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi + 2a8h]
        mov ebx, dword ptr [edi + 2a0h]
        xor eax, eax
        add edx, ebx
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1B: jl 0x100ace5b
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x100ace4a
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp edx, 0d4a51000h
        ; Exact mapped bytes 72 11: jb 0x100ace5b
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 431bde83h
        mov ebx, 2
        mul edx
        shr edx, 12h
        ; Exact mapped bytes EB 1B: jmp 0x100ace76
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp edx, 3b9aca00h
        ; Exact mapped bytes 72 11: jb 0x100ace74
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 10624dd3h
        mov ebx, 1
        mul edx
        shr edx, 6
        ; Exact mapped bytes EB 02: jmp 0x100ace76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esi + 2e0h]
        push edx
        ; Exact mapped bytes E8 9E 28 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        sub eax, ebp
        ; Exact mapped bytes 74 24: je 0x100acead
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 12: je 0x100ace9e
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 75 27: jne 0x100aceb6
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [esi + 2a0h]
        mov dword ptr [edx + 50h], 2
        ; Exact mapped bytes EB 18: jmp 0x100aceb6
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [esi + 2a0h]
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes EB 09: jmp 0x100aceb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 2a0h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [edi + 2ach]
        mov ecx, dword ptr [esi + 2e4h]
        push edx
        ; Exact mapped bytes E8 58 28 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi + 2b0h]
        xor eax, eax
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1B: jl 0x100acef2
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x100acee1
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp edx, 0d4a51000h
        ; Exact mapped bytes 72 11: jb 0x100acef2
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 431bde83h
        mov ebx, 2
        mul edx
        shr edx, 12h
        ; Exact mapped bytes EB 1B: jmp 0x100acf0d
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp edx, 3b9aca00h
        ; Exact mapped bytes 72 11: jb 0x100acf0b
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 10624dd3h
        mov ebx, 1
        mul edx
        shr edx, 6
        ; Exact mapped bytes EB 02: jmp 0x100acf0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esi + 2e8h]
        push edx
        ; Exact mapped bytes E8 07 28 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        sub eax, ebp
        ; Exact mapped bytes 74 24: je 0x100acf44
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 12: je 0x100acf35
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 75 27: jne 0x100acf4d
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [esi + 2a4h]
        mov dword ptr [eax + 50h], 2
        ; Exact mapped bytes EB 18: jmp 0x100acf4d
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 2a4h]
        mov dword ptr [ecx + 50h], 1
        ; Exact mapped bytes EB 09: jmp 0x100acf4d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [esi + 2a4h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [edi + 2b4h]
        mov ecx, dword ptr [esi + 2ech]
        push eax
        ; Exact mapped bytes E8 C1 27 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi + 2b8h]
        xor eax, eax
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1B: jl 0x100acf89
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x100acf78
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp edx, 0d4a51000h
        ; Exact mapped bytes 72 11: jb 0x100acf89
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 431bde83h
        mov ebx, 2
        mul edx
        shr edx, 12h
        ; Exact mapped bytes EB 1B: jmp 0x100acfa4
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp edx, 3b9aca00h
        ; Exact mapped bytes 72 11: jb 0x100acfa2
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 10624dd3h
        mov ebx, 1
        mul edx
        shr edx, 6
        ; Exact mapped bytes EB 02: jmp 0x100acfa4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, dword ptr [esi + 2f0h]
        push edx
        ; Exact mapped bytes E8 70 27 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        sub eax, ebp
        ; Exact mapped bytes 74 24: je 0x100acfdb
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 12: je 0x100acfcc
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 75 27: jne 0x100acfe4
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 2a8h]
        mov dword ptr [ecx + 50h], 2
        ; Exact mapped bytes EB 18: jmp 0x100acfe4
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [esi + 2a8h]
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes EB 09: jmp 0x100acfe4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 2a8h]
        mov dword ptr [eax + 50h], ebp
        xor ebp, ebp
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        lea eax, [edi + 278h]
        mov ecx, 9
        mov edx, dword ptr [eax - 4]
        add eax, 8
        add ebp, edx
        mov edx, dword ptr [eax - 8]
        add ebx, edx
        dec ecx
        ; Exact mapped bytes 75 F0: jne 0x100acff7
        __asm _emit 0x75
        __asm _emit 0xf0
        test ebp, ebp
        ; Exact mapped bytes 74 0A: je 0x100ad015
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, ebx
        xor edx, edx
        div ebp
        mov dword ptr [esp + 20h], eax
        mov ecx, dword ptr [esi + 2f8h]
        push ebp
        ; Exact mapped bytes E8 FF 26 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1E: jl 0x100ad048
        __asm _emit 0x7c
        __asm _emit 0x1e
        ; Exact mapped bytes 7F 08: jg 0x100ad034
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp ebx, 0d4a51000h
        ; Exact mapped bytes 72 14: jb 0x100ad048
        __asm _emit 0x72
        __asm _emit 0x14
        mov eax, 431bde83h
        mov dword ptr [esp + 18h], 2
        mul ebx
        shr edx, 12h
        ; Exact mapped bytes EB 26: jmp 0x100ad06e
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp ebx, 3b9aca00h
        ; Exact mapped bytes 72 14: jb 0x100ad064
        __asm _emit 0x72
        __asm _emit 0x14
        mov eax, 10624dd3h
        mov dword ptr [esp + 18h], 1
        mul ebx
        shr edx, 6
        ; Exact mapped bytes EB 0A: jmp 0x100ad06e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, ebx
        mov dword ptr [esp + 18h], 0
        mov ecx, dword ptr [esi + 2f4h]
        push edx
        ; Exact mapped bytes E8 A6 26 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 44 24 18: movsx eax, word ptr [esp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        sub eax, 0
        ; Exact mapped bytes 74 24: je 0x100ad0a8
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 74 12: je 0x100ad099
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact mapped bytes 75 2B: jne 0x100ad0b5
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [esi + 2ach]
        mov dword ptr [ecx + 50h], 2
        ; Exact mapped bytes EB 1C: jmp 0x100ad0b5
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [esi + 2ach]
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes EB 0D: jmp 0x100ad0b5
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 2ach]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [esi + 2b8h]
        push ebp
        ; Exact mapped bytes E8 5F 26 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        cmp eax, 0e8h
        ; Exact mapped bytes 7C 1B: jl 0x100ad0e5
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x100ad0d4
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp ebx, 0d4a51000h
        ; Exact mapped bytes 72 11: jb 0x100ad0e5
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, 431bde83h
        mov ebp, 2
        mul ebx
        shr edx, 12h
        ; Exact mapped bytes EB 1F: jmp 0x100ad104
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp ebx, 3b9aca00h
        ; Exact mapped bytes 72 13: jb 0x100ad100
        __asm _emit 0x72
        __asm _emit 0x13
        mov eax, 10624dd3h
        mul ebx
        mov ebx, 1
        shr edx, 6
        mov ebp, ebx
        ; Exact mapped bytes EB 09: jmp 0x100ad109
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, ebx
        xor ebp, ebp
        mov ebx, 1
        mov ecx, dword ptr [esi + 2b4h]
        push edx
        ; Exact mapped bytes E8 0B 26 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C5: movsx eax, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc5
        sub eax, 0
        ; Exact mapped bytes 74 38: je 0x100ad155
        __asm _emit 0x74
        __asm _emit 0x38
        dec eax
        ; Exact mapped bytes 74 1E: je 0x100ad13e
        __asm _emit 0x74
        __asm _emit 0x1e
        dec eax
        ; Exact mapped bytes 75 57: jne 0x100ad17a
        __asm _emit 0x75
        __asm _emit 0x57
        mov ecx, dword ptr [esi + 288h]
        mov dword ptr [ecx + 50h], 2
        mov edx, dword ptr [esi + 288h]
        mov eax, dword ptr [edx + 4]
        sub eax, 49h
        ; Exact mapped bytes EB 30: jmp 0x100ad16e
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [esi + 288h]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 288h]
        mov eax, dword ptr [edx + 4]
        sub eax, 49h
        ; Exact mapped bytes EB 19: jmp 0x100ad16e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 288h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [esi + 288h]
        mov eax, dword ptr [edx + 4]
        sub eax, 41h
        mov ecx, dword ptr [esi + 2b4h]
        push eax
        ; Exact mapped bytes E8 D6 1B 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [esi + 2b0h]
        ; Exact mapped bytes E8 96 25 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 F0 06 00 00: jmp 0x100ad87f
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 88h]
        mov eax, dword ptr [esi + 27ch]
        cmp edx, eax
        ; Exact mapped bytes 75 07: jne 0x100ad1a6
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 6A 0E 00 00: call 0x100ae010
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 17ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100ad1ca
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100ad1ca
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 149h
        ; Exact mapped bytes 7E 12: jle 0x100ad1ed
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad1ed
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 524h]
        ; Exact mapped bytes EB 02: jmp 0x100ad1ef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 98h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad224
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 148h
        ; Exact mapped bytes 7E 12: jle 0x100ad247
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad247
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 520h]
        ; Exact mapped bytes EB 02: jmp 0x100ad249
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 9ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad27e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov edi, 46h
        lea ebx, [esi + 190h]
        lea ebp, [esi + 0f4h]
        mov eax, dword ptr [esi + 8]
        mov ecx, edi
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebx - 48h]
        ; Exact mapped bytes E8 21 1B 05 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov edx, edi
        add eax, 54h
        add edx, ecx
        mov ecx, dword ptr [ebp - 4]
        push edx
        push eax
        ; Exact mapped bytes E8 1A 1A 05 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        mov ecx, edi
        add edx, 15h
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp]
        push edx
        ; Exact mapped bytes E8 03 1A 05 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        lea ecx, [edi + eax + 4]
        push ecx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 E4 1A 05 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [ebx + 2ch]
        lea eax, [edi + edx + 4]
        push eax
        ; Exact mapped bytes E8 D4 1A 05 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        add edi, 0eh
        add ebx, 4
        add ebp, 8
        cmp edi, 0e0h
        ; Exact mapped bytes 7C 92: jl 0x100ad28f
        __asm _emit 0x7c
        __asm _emit 0x92
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [ecx + 94h]
        test eax, 10000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100ad39a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a1h
        ; Exact mapped bytes 7E 12: jle 0x100ad335
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad335
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 684h]
        ; Exact mapped bytes EB 02: jmp 0x100ad337
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad36c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a2h
        ; Exact mapped bytes 0F 8E 13 04 00 00: jle 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 05 04 00 00: je 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 688h]
        ; Exact mapped bytes E9 FC 03 00 00: jmp 0x100ad796
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 2000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100ad42d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a3h
        ; Exact mapped bytes 7E 12: jle 0x100ad3c8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad3c8
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 68ch]
        ; Exact mapped bytes EB 02: jmp 0x100ad3ca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad3ff
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a4h
        ; Exact mapped bytes 0F 8E 80 03 00 00: jle 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 72 03 00 00: je 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 690h]
        ; Exact mapped bytes E9 69 03 00 00: jmp 0x100ad796
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 80000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100ad4c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a5h
        ; Exact mapped bytes 7E 12: jle 0x100ad45b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad45b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 694h]
        ; Exact mapped bytes EB 02: jmp 0x100ad45d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad492
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a6h
        ; Exact mapped bytes 0F 8E ED 02 00 00: jle 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 DF 02 00 00: je 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 698h]
        ; Exact mapped bytes E9 D6 02 00 00: jmp 0x100ad796
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 200000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100ad553
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a7h
        ; Exact mapped bytes 7E 12: jle 0x100ad4ee
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad4ee
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 69ch]
        ; Exact mapped bytes EB 02: jmp 0x100ad4f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad525
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a8h
        ; Exact mapped bytes 0F 8E 5A 02 00 00: jle 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 4C 02 00 00: je 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 6a0h]
        ; Exact mapped bytes E9 43 02 00 00: jmp 0x100ad796
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 1000000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100ad5e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1a9h
        ; Exact mapped bytes 7E 12: jle 0x100ad581
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad581
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 6a4h]
        ; Exact mapped bytes EB 02: jmp 0x100ad583
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad5b8
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1aah
        ; Exact mapped bytes 0F 8E C7 01 00 00: jle 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B9 01 00 00: je 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 6a8h]
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x100ad796
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 40000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100ad679
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1abh
        ; Exact mapped bytes 7E 12: jle 0x100ad614
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad614
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 6ach]
        ; Exact mapped bytes EB 02: jmp 0x100ad616
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad64b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1ach
        ; Exact mapped bytes 0F 8E 34 01 00 00: jle 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 6b0h]
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x100ad796
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 20000h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x100ad70c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1b1h
        ; Exact mapped bytes 7E 12: jle 0x100ad6a7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad6a7
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 6c4h]
        ; Exact mapped bytes EB 02: jmp 0x100ad6a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad6de
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1b2h
        ; Exact mapped bytes 0F 8E A1 00 00 00: jle 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x100ad794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 6c8h]
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x100ad796
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, 40000000h
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x100ad7ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1c2h
        ; Exact mapped bytes 7E 12: jle 0x100ad73a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad73a
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 708h]
        ; Exact mapped bytes EB 02: jmp 0x100ad73c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad771
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1c3h
        ; Exact mapped bytes 7E 12: jle 0x100ad794
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad794
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 70ch]
        ; Exact mapped bytes EB 02: jmp 0x100ad796
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a4h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x100ad860
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x100ad838
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1afh
        ; Exact mapped bytes 7E 12: jle 0x100ad7cf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad7cf
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 6bch]
        ; Exact mapped bytes EB 02: jmp 0x100ad7d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad806
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 1b0h
        ; Exact mapped bytes 7E 12: jle 0x100ad829
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100ad829
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 6c0h]
        ; Exact mapped bytes EB 02: jmp 0x100ad82b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a4h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100ad860
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [esi + 0a0h]
        mov edi, dword ptr [esp + 1ch]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        mov ebx, ecx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        xor ecx, ecx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4F 2A: mov cx, word ptr [edi + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x2a
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 61 1E 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [edi + 10h]
        mov ecx, dword ptr [esi + 0e4h]
        xor edx, 0fffffaafh
        shr edx, 4
        and edx, 0ffh
        push edx
        ; Exact mapped bytes E8 39 1E 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi + 5ch]
        mov ecx, dword ptr [esi + 0ech]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 11 1E 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x100ada48
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4F 08: mov cx, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x08
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [esi + 0d4h]
        ; Exact mapped bytes E8 ED 1D 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 0A: mov dx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0a
        xor edx, 0aah
        push edx
        ; Exact mapped bytes E8 D5 1D 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 0C: mov ax, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 BE 1D 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4F 2A: mov cx, word ptr [edi + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x2a
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes E8 A6 1D 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [edi + 58h]
        mov ecx, dword ptr [esi + 0e8h]
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 91 1D 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 47 2A: mov ax, word ptr [edi + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 4F 08: mov cx, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x08
        xor eax, 0aah
        xor ecx, 0aah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 180h]
        ; Exact mapped bytes E8 9D C9 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 47 08: mov ax, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        xor edx, edx
        xor eax, 0aah
        ; Exact mapped bytes 66 8B 57 2A: mov dx, word ptr [edi + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x2a
        xor ecx, 0aah
        xor edx, 0aah
        add eax, ecx
        mov ecx, dword ptr [esi + 184h]
        push edx
        push eax
        ; Exact mapped bytes E8 6B C9 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        xor eax, eax
        ; Exact mapped bytes 66 8B 57 2A: mov dx, word ptr [edi + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 47 08: mov ax, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        xor edx, 0aah
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        push edx
        xor edx, edx
        xor eax, 0aah
        ; Exact mapped bytes 66 8B 57 0C: mov dx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        xor ecx, 0aah
        add eax, ecx
        mov ecx, dword ptr [esi + 188h]
        xor edx, 0aah
        add eax, edx
        push eax
        ; Exact mapped bytes E8 2B C9 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [edi + 5ch]
        mov ecx, dword ptr [edi + 58h]
        xor eax, 0aaaaaaaah
        xor ecx, 0aaaaaaaah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 18ch]
        ; Exact mapped bytes E8 0D C9 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x100adb31
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 08: mov dx, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        xor ecx, ecx
        xor edx, 0aah
        mov dword ptr [eax + 64h], edx
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        mov edx, dword ptr [esi + 0d8h]
        xor ecx, 0aah
        xor eax, eax
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes 66 8B 47 0C: mov ax, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 0dch]
        xor eax, 0aah
        xor edx, edx
        mov dword ptr [ecx + 64h], eax
        ; Exact mapped bytes 66 8B 57 2A: mov dx, word ptr [edi + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 0e0h]
        xor edx, 0aah
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [edi + 58h]
        mov edx, dword ptr [esi + 0e8h]
        xor ecx, 0aaaaaaaah
        xor eax, eax
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes 66 8B 47 08: mov ax, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 180h]
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 2C C8 F7 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 4F 08: mov cx, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 57 0A: mov dx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0a
        xor ecx, 0aah
        xor edx, 0aah
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 184h]
        ; Exact mapped bytes E8 06 C8 F7 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 47 08: mov ax, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        xor edx, edx
        xor eax, 0aah
        ; Exact mapped bytes 66 8B 57 0C: mov dx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        xor ecx, 0aah
        add eax, ecx
        mov ecx, dword ptr [esi + 188h]
        xor edx, 0aah
        add eax, edx
        push eax
        ; Exact mapped bytes E8 D3 C7 F7 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [edi + 58h]
        mov ecx, dword ptr [esi + 18ch]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 BF C7 F7 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        test dword ptr [edi + 94h], 20000000h
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F 84 C6 01 00 00: je 0x100add0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 2E 03 00 00: jle 0x100ade7b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov edx, 0ffffffd4h
        sub edx, ecx
        lea edi, [esi + 190h]
        lea eax, [ecx + 2ch]
        lea ebx, [ecx + 14h]
        mov dword ptr [esp + 18h], eax
        lea ebp, [esi + 0f4h]
        mov dword ptr [esp + 20h], edx
        mov cl, byte ptr [eax]
        mov eax, dword ptr [edi - 48h]
        xor cl, 0aah
        mov edx, 0
        setl dl
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [edi - 48h]
        mov ecx, 1
        mov edx, 0fffeh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [edi + 2ch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x100adc4d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        xor eax, 0aah
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 36 1B 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor eax, 0ffffffaah
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 1E 1B 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        xor eax, eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        push 9f6h
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 37 C7 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        xor ecx, ecx
        mov eax, 51eb851fh
        ; Exact mapped bytes 66 8B 0B: mov cx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0b
        push 9f6h
        xor ecx, 0aah
        imul ecx, dword ptr [esp + 18h]
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [edi + 2ch]
        push edx
        ; Exact mapped bytes E8 08 C7 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x100adce1
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        xor eax, 0aah
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, 51eb851fh
        imul ecx
        mov ecx, dword ptr [ebp - 4]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 64h], edx
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F BE 01: movsx eax, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        xor eax, 0aah
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [ebp]
        mov dword ptr [edx + 64h], eax
        mov edx, dword ptr [edi - 48h]
        ; Exact mapped bytes 66 0F BE 01: movsx ax, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        xor eax, 0aah
        xor ecx, ecx
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        setl cl
        xor eax, eax
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        mov ecx, dword ptr [edi]
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 39 C6 F7 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        xor ecx, ecx
        mov eax, 51eb851fh
        ; Exact mapped bytes 66 8B 0B: mov cx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0b
        xor ecx, 0aah
        imul ecx, dword ptr [esp + 14h]
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [edi + 2ch]
        push edx
        ; Exact mapped bytes E8 0F C6 F7 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 20h]
        add ebx, 2
        add edi, 4
        add ebp, 8
        inc eax
        mov dword ptr [esp + 18h], eax
        lea ecx, [eax + edx]
        mov edx, dword ptr [esp + 10h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C 6C FE FF FF: jl 0x100adb72
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 70 01 00 00: jmp 0x100ade7b
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 68 01 00 00: jle 0x100ade7b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        mov ecx, 0ffffffd4h
        sub ecx, eax
        lea edi, [esi + 190h]
        lea edx, [eax + 2ch]
        lea ebp, [eax + 14h]
        mov dword ptr [esp + 18h], edx
        lea ebx, [esi + 0f4h]
        mov dword ptr [esp + 20h], ecx
        mov eax, dword ptr [esp + 18h]
        mov edx, 0
        mov cl, byte ptr [eax]
        mov eax, dword ptr [edi - 48h]
        xor cl, 0aah
        setl dl
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [edi - 48h]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 2ch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx - 4]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        ; Exact mapped bytes 75 76: jne 0x100addf3
        __asm _emit 0x75
        __asm _emit 0x76
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4D 00: mov cx, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [ebx - 4]
        ; Exact mapped bytes E8 8E 19 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor eax, 0ffffffaah
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 77 19 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 00: mov ax, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        push 9f6h
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 8F C5 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        xor ecx, ecx
        mov eax, 51eb851fh
        ; Exact mapped bytes 66 8B 4D 00: mov cx, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        push 9f6h
        xor ecx, 0aah
        imul ecx, dword ptr [esp + 18h]
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [edi + 2ch]
        push edx
        ; Exact mapped bytes E8 5F C5 F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 64: jmp 0x100ade57
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebx - 4]
        mov ecx, dword ptr [esp + 18h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 55 00: mov dx, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        xor edx, 0aah
        mov dword ptr [eax + 64h], edx
        ; Exact mapped bytes 0F BE 01: movsx eax, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        xor eax, 0ffffffaah
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [ebx]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [edi]
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 00: mov ax, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 C4 C4 F7 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        xor ecx, ecx
        mov eax, 51eb851fh
        ; Exact mapped bytes 66 8B 4D 00: mov cx, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        xor ecx, 0aah
        imul ecx, dword ptr [esp + 14h]
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [edi + 2ch]
        push edx
        ; Exact mapped bytes E8 99 C4 F7 FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 10h]
        add ebp, 2
        add edi, 4
        inc eax
        mov dword ptr [esp + 18h], eax
        add eax, edx
        add ebx, 8
        cmp eax, ecx
        ; Exact mapped bytes 0F 8C BD FE FF FF: jl 0x100add38
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        ; Exact mapped bytes 7E 3F: jle 0x100adec2
        __asm _emit 0x7e
        __asm _emit 0x3f
        lea eax, [esi + 190h]
        lea ecx, [esi + 0f4h]
        mov ebx, ebp
        mov edi, 1
        mov edx, dword ptr [eax - 48h]
        add eax, 4
        add ecx, 8
        ; Exact mapped bytes 66 09 7A 24: or word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7a
        __asm _emit 0x24
        mov edx, dword ptr [ecx - 0ch]
        ; Exact mapped bytes 66 09 7A 24: or word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7a
        __asm _emit 0x24
        mov edx, dword ptr [ecx - 8]
        ; Exact mapped bytes 66 09 7A 24: or word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7a
        __asm _emit 0x24
        mov edx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 09 7A 24: or word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7a
        __asm _emit 0x24
        mov edx, dword ptr [eax + 28h]
        ; Exact mapped bytes 66 09 7A 24: or word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7a
        __asm _emit 0x24
        dec ebx
        ; Exact mapped bytes 75 D4: jne 0x100ade96
        __asm _emit 0x75
        __asm _emit 0xd4
        cmp ebp, 0bh
        ; Exact mapped bytes 7D 46: jge 0x100adf0d
        __asm _emit 0x7d
        __asm _emit 0x46
        mov edi, 0bh
        lea eax, [esi + ebp*4 + 190h]
        lea esi, [esi + ebp*8 + 0f4h]
        sub edi, ebp
        mov edx, 0fffeh
        mov ecx, dword ptr [eax - 48h]
        add eax, 4
        add esi, 8
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi - 0ch]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi - 8]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        dec edi
        ; Exact mapped bytes 75 D4: jne 0x100adee1
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [esp + 1ch]
        mov esi, 20h
        mov edi, 0fh
        mov edx, dword ptr [eax + 94h]
        mov eax, dword ptr [esp + 24h]
        test dl, 1
        ; Exact mapped bytes 74 06: je 0x100adf30
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        shr edx, 1
        add eax, 4
        dec esi
        ; Exact mapped bytes 75 ED: jne 0x100adf25
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100adf5c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101a858ch
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100adf5c
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 0e4h]
        mov edx, 0bh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ech]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        lea eax, [esi + 190h]
        add esi, 0f4h
        mov ecx, dword ptr [eax - 48h]
        add eax, 4
        add esi, 8
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        mov ecx, dword ptr [esi - 0ch]
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        mov ecx, dword ptr [esi - 8]
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 D4: jne 0x100adf8b
        __asm _emit 0x75
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
