// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C6BD0 .. +0x4A5 bytes.
extern "C" __declspec(naked) void FUN_585c6bd0_585C6BD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 4], ecx
        push 0dch
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 10af0h
        push eax
        ; Exact mapped bytes E8 22 62 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x62
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 1c8h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1091ch
        push ecx
        ; Exact mapped bytes E8 09 62 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x62
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB FD EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D0 BB 00 00: call 0x585d27f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        xor edx, 7c8ba106h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2101ch], edx
        ; Exact mapped bytes 74 1D: je 0x585c6c50
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0ah
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 5D FB FF: call 0x5857c9c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 8B FB FF: call 0x5857f810
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8b
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585c6c62
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 6D 02 00 00: jge 0x585c6ed9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*2 + 10921h]
        mov edx, 1
        imul eax, edx, 0
        mov byte ptr [ecx + eax], 55h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*2 + 10921h]
        mov ecx, 1
        shl ecx, 0
        mov byte ptr [eax + ecx], 55h
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 DC EB FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 88 63 EC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7D 57 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x57
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8E 63 EC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 74 19: je 0x585c6cf7
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x585c6d99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0dh
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x585c6dd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DD 01 00 00: jmp 0x585c6ed4
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 61 C5 00 00: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + edx*2 + 10921h]
        mov ecx, 1
        imul ecx, ecx, 0
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1B C5 00 00: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + edx*2 + 10921h]
        mov ecx, 1
        shl ecx, 0
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 36 02 00: call 0x585ea420
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3B 01 00 00: jmp 0x585c6ed4
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 BF C4 00 00: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C8 39 FA FF: call 0x5856a780
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        imul edx, edx, 0
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x585c6ed4
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 FB EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 56 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 DB EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 6C: jne 0x585c6e6a
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 EB EC FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, 1ch
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 55 82 0C 00: call 0x5868f070
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        imul edx, edx, 0
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 EB EC FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, 1ch
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 80 82 0C 00: call 0x5868f0d0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        shl edx, 0
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes EB 6A: jmp 0x585c6ed4
        __asm _emit 0xeb
        __asm _emit 0x6a
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B EB EC FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, 1ch
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 99 CF 0B 00: call 0x58683e20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        imul edx, edx, 0
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 EB EC FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, 1ch
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C4 CF 0B 00: call 0x58683e80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        shl edx, 0
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes E9 80 FD FF FF: jmp 0x585c6c59
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10ae0h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1091ch
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10abch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10a28h]
        mov dword ptr [eax + 10abch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10abch]
        xor ecx, 0f3a91cd0h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10abch], ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C A7 FA FF: call 0x58571660
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10abch]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        xor edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10abch], edx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585c6f6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 1c4h
        ; Exact mapped bytes 73 23: jae 0x585c6f97
        __asm _emit 0x73
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 10ae0h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10ae0h], eax
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB CB: jmp 0x585c6f62
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10dach]
        ; Exact mapped bytes E8 02 E8 EC FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10adch], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10a40h], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10a24h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10a38h], 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10a44h], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10a3ch], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10a28h], 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10a2ch], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10a48h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10a4ch], 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10ac4h], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 10ac8h], 55h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10ae0h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10ae0h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1091ch
        push ecx
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 9B 03 00: call 0x58600bb0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
