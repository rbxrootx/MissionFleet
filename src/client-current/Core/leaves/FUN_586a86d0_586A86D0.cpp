// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A86D0 .. +0x83E bytes.
extern "C" __declspec(naked) void FUN_586a86d0_586A86D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c8h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586a86ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 8D AF 07 00 00: jge 0x586a8ea7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 28 06 96 58: mov edx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [edx + ecx*4 + 2f4h]
        ; Exact mapped bytes E8 43 A3 F2 FF: call 0x585d2a50
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 07 00 00: je 0x586a8ea2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + eax*4 + 2f4h]
        ; Exact mapped bytes E8 46 0A 00 00: call 0x586a9170
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes A1 28 06 96 58: mov eax, dword ptr [0x58960628]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4 + 2f4h]
        ; Exact mapped bytes E8 72 FF FF FF: call 0x586a86b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [edx + eax + 0cch]
        push ecx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D C3 DD FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BE E4 DD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        cmp dword ptr [eax + ecx + 5890c098h], 4bh
        ; Exact mapped bytes 7D 5A: jge 0x586a882f
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 20fh
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 C3 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 04 D7 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd7
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 56: jmp 0x586a8885
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        sub eax, 4bh
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB C2 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 AC D6 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd6
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8ch
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 00 D8 DD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C9 28 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 53 6F DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x6f
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000000h
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x586a89ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 89 0D 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A8 25 E5 FF: call 0x584faec0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x25
        __asm _emit 0xe5
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 7E: jne 0x586a899b
        __asm _emit 0x75
        __asm _emit 0x7e
        mov dword ptr [ebp - 1ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 4ch], edx
        push 14h
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 C1 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E4 D5 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0d9h
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 AA CC 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 54 D5 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 07 00 00: call 0x586a9190
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586a89c5
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [ebp - 1ch], 0bh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 28 D5 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 08 00 00: call 0x586a92c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x586a8a7d
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0bh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 08 00 00: call 0x586a92c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 88 0D 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8A 23 E5 FF: call 0x584fad80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x23
        __asm _emit 0xe5
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 6B: jne 0x586a8a66
        __asm _emit 0x75
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 60h], edx
        push 15h
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C C1 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0D D5 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 5ch
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0deh
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D3 CB 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcb
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 68h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 7D D4 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd4
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586a8a7d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 64 D4 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd4
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a8a8f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D B8 00 00 00: jge 0x586a8b53
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        imul eax, dword ptr [ebp - 8], 0eh
        lea ecx, [edx + eax + 4eh]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 6E CC 10 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        imul ecx, dword ptr [ebp - 8], 0eh
        lea edx, [eax + ecx + 4eh]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 3C CC 10 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 8ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        imul ecx, dword ptr [ebp - 8], 0eh
        lea edx, [eax + ecx + 4eh]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 0A CC 10 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        imul edx, dword ptr [ebp - 8], 0eh
        lea eax, [ecx + edx + 53h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 E3 CB 10 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xcb
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 33 FF FF FF: jmp 0x586a8a86
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a8b65
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D 78 02 00 00: jge 0x586a8de9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 174h]
        and ecx, 1
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x586a8c5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 2C: movsx eax, byte ptr [edx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x2c
        mov dword ptr [ebp - 18h], eax
        imul ecx, dword ptr [ebp - 14h], 0bh
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 9
        idiv ecx
        mov dword ptr [ebp - 14h], eax
        imul edx, dword ptr [ebp - 18h], 0bh
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cdq
        mov ecx, 9
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 80h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 A0 25 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x25
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 8ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 F9 86 DE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 5E 25 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x25
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 110h]
        mov dword ptr [ebp - 8ch], eax
        push 9f6h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B7 B3 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb3
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x586a8d4d
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + edx*2 + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 FC 24 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        push edx
        ; Exact mapped bytes E8 4B 83 1A 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 B3 24 11 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 2C: movsx edx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x2c
        test edx, edx
        ; Exact mapped bytes 7D 09: jge 0x586a8d07
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 07: jmp 0x586a8d0e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 23 6B DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 110h]
        mov dword ptr [ebp - 0a0h], eax
        push 9f6h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + ecx*2 + 14h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 C4 B2 E5 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb2
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 0a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 73 D1 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 8ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 0a8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 48 D1 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 8ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0ach], edx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 1D D1 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 0b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 FD D0 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 73 FD FF FF: jmp 0x586a8b5c
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x586a8dfa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 0F 8D 9C 00 00 00: jge 0x586a8ea0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 0b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 BC D0 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 91 D0 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 66 D0 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd0
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 110h]
        mov dword ptr [ebp - 0c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 46 D0 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd0
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x586a8df1
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x586a8ea7
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3E F8 FF FF: jmp 0x586a86e5
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 75 5D: jne 0x586a8f0a
        __asm _emit 0x75
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0c4h], edx
        push 588b0a64h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 D7 D1 DD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd1
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes A1 28 06 96 58: mov eax, dword ptr [0x58960628]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 68h], 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 428h]
        mov dword ptr [ebp - 0c8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 EC CF DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 CB DD FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
