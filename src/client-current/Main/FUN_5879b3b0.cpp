// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 8189 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B3B0 .. +0x1FFD bytes.
extern "C" __declspec(naked) void FUN_5879b3b0_segment_00() {
    __asm {
        sub esp, 290h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 28ch], eax
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0b0h]
        push edi
        ; Exact mapped bytes E8 EB CD 16 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcd
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push eax
        ; Exact mapped bytes E8 FF CC 16 00: call 0x589080e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        push eax
        ; Exact mapped bytes E8 F3 68 F9 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [esi + 88h]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 0d0h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1a8h]
        push 5898c922h
        ; Exact mapped bytes E8 C7 68 F9 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ebx, [esi + 0dch]
        mov edi, ebx
        mov ebp, 30h
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 F3 3E FC FF: call 0x5875f320
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [edi]
        add edi, 4
        sub ebp, 1
        mov dword ptr [edx + 60h], 0eeeeeeh
        ; Exact mapped bytes 75 E8: jne 0x5879b426
        __asm _emit 0x75
        __asm _emit 0xe8
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 9A D3 FF FF: call 0x587987e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 268h], 1
        ; Exact mapped bytes 0F 85 41 1F 00 00: jne 0x5879d394
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2f8h]
        mov edi, dword ptr [eax + 8]
        movzx eax, byte ptr [edi]
        dec eax
        cmp eax, 0dh
        ; Exact mapped bytes 0F 87 2B 1F 00 00: ja 0x5879d394
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2b
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 B0 D3 79 58: jmp dword ptr [eax*4 + 0x5879d3b0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xd3
        __asm _emit 0x79
        __asm _emit 0x58
        movzx ecx, byte ptr [edi + 11h]
        movzx edx, word ptr [edi + 0eh]
        mov eax, dword ptr [edi + 38ch]
        and ecx, 0fh
        push ecx
        shr edx, 4
        and edx, 0ffh
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6C D0 FF FF: call 0x58798500
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [esi + 2d8h], 2
        ; Exact mapped bytes 75 1C: jne 0x5879b4b9
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 50h], 1
        mov edx, dword ptr [esi + 194h]
        mov dword ptr [edx + 60h], 0eeeeeeh
        ; Exact mapped bytes EB 3C: jmp 0x5879b4f5
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 68 B4 A0 58: mov ecx, dword ptr [0x58a0b468]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov eax, dword ptr [esi + 2f8h]
        xor ecx, 0aaaaaaaah
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 7C 0F: jl 0x5879b4df
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [esi + 88h]
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes EB 16: jmp 0x5879b4f5
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [esi + 88h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 194h]
        mov dword ptr [ecx + 60h], 0eeh
        mov edx, dword ptr [esi + 2f8h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 194h]
        add esp, 0ch
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 3C 3E FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 4]
        shr eax, 5
        and eax, 1fh
        push eax
        ; Exact mapped bytes FF 15 28 C0 98 58: call dword ptr [0x5898c028]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebx]
        add esp, 0ch
        add edx, 2ch
        push edx
        add eax, 10ah
        push eax
        ; Exact mapped bytes E8 39 7D 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 FD 3D FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [edi + 68h]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 38h
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        add edx, 10ah
        push edx
        ; Exact mapped bytes E8 FE 7C 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 BE 3D FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 70h]
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push ecx
        push 5899835ch
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea edx, [esp + 24h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 44h
        add ecx, 10ah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes E8 B3 7C 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 73 3D FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [edi + 74h]
        push eax
        push 5899835ch
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0e8h]
        add esp, 0ch
        add edx, 50h
        push edx
        add eax, 10ah
        push eax
        ; Exact mapped bytes E8 6F 7C 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 2F 3D FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [edi + 78h]
        push edx
        push 5899835ch
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 5ch
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        add edx, 10ah
        push edx
        ; Exact mapped bytes E8 2A 7C 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 EA 3C FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 8]
        shr ecx, 6
        and ecx, 0ffh
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 68h
        add ecx, 10ah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes E8 E1 7B 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 A1 3C FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 7ch]
        push eax
        lea ecx, [esp + 20h]
        push 58998354h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0f4h]
        add esp, 0ch
        add edx, 0a4h
        push edx
        add eax, 10ah
        push eax
        ; Exact mapped bytes E8 9F 7B 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0f4h]
        ; Exact mapped bytes E8 5F 3C FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 80h]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 74h
        push ecx
        mov ecx, dword ptr [esi + 100h]
        add edx, 10ah
        push edx
        ; Exact mapped bytes E8 5C 7B 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 1C 3C FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 120h]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        sub eax, -80h
        add ecx, 10ah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 154h]
        ; Exact mapped bytes E8 19 7B 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 154h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 D9 3B FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 11eh]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 158h]
        add esp, 0ch
        add edx, 8ch
        push edx
        add eax, 10ah
        push eax
        ; Exact mapped bytes E8 D4 7A 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 158h]
        ; Exact mapped bytes E8 94 3B FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 0ch]
        and edx, 3ffh
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 98h
        push ecx
        mov ecx, dword ptr [esi + 15ch]
        add edx, 10ah
        push edx
        ; Exact mapped bytes E8 8B 7A 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 15ch]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 4B 3B FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 0
        push 58998348h
        lea ecx, [esp + 28h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0f8h]
        add esp, 10h
        add edx, 2ch
        push edx
        add eax, 18bh
        push eax
        ; Exact mapped bytes E8 4D 7A 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0f8h]
        ; Exact mapped bytes E8 0D 3B FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 0
        lea edx, [esp + 24h]
        push 58998348h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 44h
        add ecx, 18bh
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0fch]
        ; Exact mapped bytes E8 0E 7A 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0fch]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 CE 3A FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 0d8h]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 104h]
        add esp, 0ch
        add edx, 2ch
        push edx
        add eax, 217h
        push eax
        ; Exact mapped bytes E8 CC 79 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 104h]
        ; Exact mapped bytes E8 8C 3A FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 0d6h]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 38h
        push ecx
        mov ecx, dword ptr [esi + 108h]
        add edx, 217h
        push edx
        ; Exact mapped bytes E8 89 79 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 49 3A FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 11ah]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        add esp, 0ch
        add eax, 44h
        push eax
        mov ecx, dword ptr [esi + 4]
        add ecx, 217h
        push ecx
        mov ecx, dword ptr [esi + 10ch]
        ; Exact mapped bytes E8 46 79 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 06 3A FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 11ch]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 160h]
        add esp, 0ch
        add edx, 50h
        push edx
        add eax, 217h
        push eax
        ; Exact mapped bytes E8 04 79 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 160h]
        ; Exact mapped bytes E8 C4 39 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 10h]
        and edx, 0ffh
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 5ch
        push ecx
        mov ecx, dword ptr [esi + 164h]
        add edx, 217h
        push edx
        ; Exact mapped bytes E8 BE 78 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 7E 39 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2f8h]
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx eax, ax
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x5879ba05
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, 10h
        movzx eax, ax
        xor ebx, ebx
        mov dword ptr [esp + 18h], eax
        test eax, eax
        ; Exact mapped bytes 7E 7C: jle 0x5879ba8e
        __asm _emit 0x7e
        __asm _emit 0x7c
        lea ecx, [esi + 110h]
        lea edx, [edi + 0dah]
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], edx
        mov eax, dword ptr [esp + 14h]
        movzx ecx, word ptr [eax]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov eax, ebx
        and eax, 7
        add eax, 9
        lea eax, [eax + eax*2]
        lea edx, [ecx + eax*4]
        mov ecx, dword ptr [esi + 4]
        mov eax, ebx
        shr eax, 3
        imul eax, eax, 46h
        add esp, 0ch
        push edx
        lea edx, [eax + ecx + 1cfh]
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 23 78 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 E3 38 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        add dword ptr [esp + 14h], 2
        add dword ptr [esp + 10h], 4
        inc ebx
        cmp ebx, dword ptr [esp + 18h]
        ; Exact mapped bytes 7C 98: jl 0x5879ba26
        __asm _emit 0x7c
        __asm _emit 0x98
        movzx eax, word ptr [edi + 0eh]
        mov ecx, dword ptr [esi + 0d0h]
        shr eax, 4
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 BA B8 16 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 18 00 00: jmp 0x5879d394
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [edi + 6]
        mov edx, dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 68h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 41 CA FF FF: call 0x58798500
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2f8h]
        mov edx, dword ptr [ecx + 8]
        movzx eax, word ptr [edx + 4]
        ; Exact mapped bytes 8B 0D 58 46 A2 58: mov ecx, dword ptr [0x58a24658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x5879baf1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, ebp
        ; Exact mapped bytes 7C 13: jl 0x5879baf1
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0B: je 0x5879baf1
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5879baf3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 9ch], eax
        xor edx, edx
        mov dword ptr [esi + 0a0h], ebp
        mov eax, dword ptr [edi + 24h]
        mov ecx, 3e8h
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        push ecx
        push 5899832ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 18ch]
        add esp, 10h
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 18 38 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 1eh]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 190h]
        add esp, 0ch
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 F4 37 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2f8h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 CB 37 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [edi + 0a4h]
        mov eax, dword ptr [edi + 98h]
        push edx
        push eax
        lea ecx, [esp + 24h]
        push 58998320h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebx]
        add esp, 10h
        add edx, 28h
        push edx
        add eax, 1eah
        push eax
        ; Exact mapped bytes E8 C7 76 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 8B 37 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [edi + 9ch]
        push edx
        push 58998304h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        add esp, 0ch
        add ecx, 33h
        mov edx, dword ptr [esi + 4]
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        add edx, 1eah
        push edx
        ; Exact mapped bytes E8 7F 76 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 3F 37 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0ah]
        push ecx
        lea edx, [esp + 20h]
        push 58998354h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 3eh
        add ecx, 1eah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes E8 3F 76 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 FF 36 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 0ah]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0e8h]
        add esp, 0ch
        add edx, 28h
        push edx
        add eax, 124h
        push eax
        ; Exact mapped bytes E8 00 76 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 C0 36 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 1ch]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 33h
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        add edx, 124h
        push edx
        ; Exact mapped bytes E8 C0 75 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 80 36 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 1eh]
        mov eax, 10624dd3h
        mul dword ptr [edi + 24h]
        push ecx
        shr edx, 6
        push edx
        mov edx, dword ptr [esi + 2f8h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3E C0 FF FF: call 0x58797d40
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D 16 00 00: jmp 0x5879d394
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [edi + 6]
        mov edx, dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 68h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 E5 C7 FF FF: call 0x58798500
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [esi + 2d8h], 2
        ; Exact mapped bytes 74 5C: je 0x5879bd80
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0d78h]
        mov edx, dword ptr [eax + 0cc0h]
        mov ebp, dword ptr [edx + 26ch]
        movzx eax, word ptr [edi + 4]
        mov ecx, 1fh
        sub ecx, dword ptr [esi + 270h]
        shr ebp, cl
        and ebp, 1
        lea ecx, [eax + ebp + 3]
        push ecx
        ; Exact mapped bytes 8B 0D 4C 46 A2 58: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 5A F9 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [esi + 9ch], eax
        movzx edx, word ptr [edi + 4]
        ; Exact mapped bytes 8B 0D 4C 46 A2 58: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [edx + ebp + 5]
        push eax
        ; Exact mapped bytes E8 66 5A F9 FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [esi + 0a0h], eax
        mov ebp, dword ptr [edi + 24h]
        mov eax, 10624dd3h
        imul ebp
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, ecx
        imul edx, edx, 3e8h
        sub ebp, edx
        mov eax, 51eb851fh
        imul ebp
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        push ecx
        push 5899832ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 28h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 18ch]
        add esp, 10h
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 80 35 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 1eh]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 190h]
        add esp, 0ch
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 5C 35 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2f8h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 194h]
        add esp, 0ch
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 33 35 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 98h]
        and ecx, 7
        push ecx
        ; Exact mapped bytes FF 15 2C C0 98 58: call dword ptr [0x5898c02c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        lea edx, [esp + 24h]
        push 5898d0d4h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 24h
        add ecx, 1cch
        push eax
        push ecx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 2A 74 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 EE 34 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0a0h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, edx, 64h
        sub ecx, edx
        push ecx
        push eax
        push 589982e4h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 10h
        add ecx, 30h
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        add edx, 1cch
        push edx
        ; Exact mapped bytes E8 C6 73 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 86 34 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0a6h]
        push ecx
        push 589982c0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea edx, [esp + 24h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 3ch
        add ecx, 1cch
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes E8 7D 73 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 3D 34 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 9eh]
        lea ecx, [ecx + ecx*4]
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ebx, edx
        shr ebx, 1fh
        add ebx, edx
        mov eax, ebx
        imul eax, eax, 3e8h
        sub ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        push ebx
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589982a0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 10h
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 48h
        add ecx, 1cch
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 F8 72 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 B8 33 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 9ah]
        shr eax, 4
        and eax, 7fh
        push eax
        push 58998280h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0ech]
        add esp, 0ch
        add edx, 54h
        push edx
        add eax, 1cch
        push eax
        ; Exact mapped bytes E8 AA 72 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 6A 33 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 9ch]
        and edx, 7fh
        push edx
        push 5899825ch
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 60h
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        add edx, 1cch
        push edx
        ; Exact mapped bytes E8 5E 72 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 1E 33 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0ah]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 28h
        add ecx, 124h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0f4h]
        ; Exact mapped bytes E8 1E 72 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x72
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 DE 32 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 1ch]
        push eax
        push 5898d18ch
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0f8h]
        add esp, 0ch
        add edx, 33h
        push edx
        add eax, 124h
        push eax
        ; Exact mapped bytes E8 DF 71 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x71
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0f8h]
        ; Exact mapped bytes E8 9F 32 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        mov al, byte ptr [esi + 2d8h]
        cmp al, 1
        ; Exact mapped bytes 75 27: jne 0x5879c0f2
        __asm _emit 0x75
        __asm _emit 0x27
        movzx edx, word ptr [edi + 1eh]
        push edx
        mov eax, 10624dd3h
        mul dword ptr [edi + 24h]
        mov eax, dword ptr [esi + 2f8h]
        mov ecx, dword ptr [eax + 0ch]
        shr edx, 6
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 53 BC FF FF: call 0x58797d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A2 12 00 00: jmp 0x5879d394
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 9A 12 00 00: jne 0x5879d394
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 88h]
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes E9 88 12 00 00: jmp 0x5879d394
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 6]
        mov ecx, dword ptr [edi + 28h]
        mov edx, dword ptr [edi + 68h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 E0 C3 FF FF: call 0x58798500
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [edi + 4]
        ; Exact mapped bytes 8B 0D 54 46 A2 58: mov ecx, dword ptr [0x58a24654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x5879c149
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, ebp
        ; Exact mapped bytes 7C 13: jl 0x5879c149
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0B: je 0x5879c149
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5879c14b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 9ch], eax
        xor edx, edx
        mov dword ptr [esi + 0a0h], ebp
        mov eax, dword ptr [edi + 24h]
        mov ecx, 3e8h
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        push ecx
        push 5899832ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 18ch]
        add esp, 10h
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 C0 31 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 1eh]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 190h]
        add esp, 0ch
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 9C 31 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2f8h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 73 31 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 98h]
        push edx
        lea eax, [esp + 20h]
        push 58998254h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 2ah
        push ecx
        mov ecx, dword ptr [ebx]
        add edx, 1d6h
        push edx
        ; Exact mapped bytes E8 74 70 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 38 31 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 9ah]
        cdq
        mov ecx, 3e8h
        idiv ecx
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push edx
        push eax
        push 58998238h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 36h
        add ecx, 1d6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes E8 20 70 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 E0 30 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 9ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push edx
        push eax
        push 5899821ch
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 42h
        add ecx, 1d6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes E8 CE 6F 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 8E 30 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 9eh]
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, edx, 3e8h
        sub ecx, edx
        push ecx
        push eax
        push 58998238h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 10h
        add ecx, 4eh
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        add edx, 1d6h
        push edx
        ; Exact mapped bytes E8 63 6F 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 23 30 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0ah]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 28h
        add ecx, 124h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 23 6F 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 E3 2F FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 1ch]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0f0h]
        add esp, 0ch
        add edx, 33h
        push edx
        add eax, 124h
        push eax
        ; Exact mapped bytes E8 E4 6E 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6e
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes E8 A4 2F FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 1eh]
        push edx
        mov eax, 10624dd3h
        mul dword ptr [edi + 24h]
        mov eax, dword ptr [esi + 2f8h]
        mov ecx, dword ptr [eax + 0ch]
        shr edx, 6
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 62 B9 FF FF: call 0x58797d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B1 0F 00 00: jmp 0x5879d394
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [edi + 6]
        mov eax, dword ptr [edi + 28h]
        mov ecx, dword ptr [edi + 68h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 09 C1 FF FF: call 0x58798500
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [edi + 4]
        ; Exact mapped bytes 8B 0D 50 46 A2 58: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 3
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x5879c423
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, ebp
        ; Exact mapped bytes 7C 13: jl 0x5879c423
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0B: je 0x5879c423
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5879c425
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 9ch], eax
        movzx eax, word ptr [edi + 4]
        ; Exact mapped bytes 8B 0D 50 46 A2 58: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 4
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 17: jle 0x5879c457
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, ebp
        ; Exact mapped bytes 7C 13: jl 0x5879c457
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0B: je 0x5879c457
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5879c459
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a0h], eax
        mov ebp, dword ptr [edi + 24h]
        mov eax, 10624dd3h
        imul ebp
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, ecx
        imul edx, edx, 3e8h
        sub ebp, edx
        mov eax, 51eb851fh
        imul ebp
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        push ecx
        push 5899832ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 28h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 18ch]
        add esp, 10h
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 A1 2E FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 1eh]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 190h]
        add esp, 0ch
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 7D 2E FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2f8h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 194h]
        add esp, 0ch
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 54 2E FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0a2h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, edx, 64h
        sub ecx, edx
        push ecx
        push eax
        push 589982e4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 10h
        add ecx, 28h
        push ecx
        add edx, 1cch
        push edx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 32 6D 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 F6 2D FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 0a0h]
        lea ecx, [eax + eax*4]
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov ebx, edx
        shr ebx, 1fh
        add ebx, edx
        mov edx, ebx
        imul edx, edx, 3e8h
        sub ecx, edx
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        push ebx
        push 589982a0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 28h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0e0h]
        add esp, 10h
        add edx, 34h
        push edx
        add eax, 1cch
        push eax
        ; Exact mapped bytes E8 B4 6C 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6c
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes E8 74 2D FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 98h]
        and edx, 0fh
        push edx
        lea eax, [esp + 20h]
        push 58998214h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        add edx, 1cch
        push edx
        ; Exact mapped bytes E8 6E 6C 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 2E 2D FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 98h]
        shr ecx, 4
        and ecx, 7fh
        push ecx
        lea edx, [esp + 20h]
        push 58998210h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 4ch
        push eax
        add ecx, 1cch
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 25 6C 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 E5 2C FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, byte ptr [edi + 9fh]
        movzx ecx, byte ptr [edi + 9eh]
        push eax
        push ecx
        lea edx, [esp + 24h]
        push 58998204h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 58h
        add ecx, 1cch
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 DA 6B 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 9A 2C FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 0ah]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0f0h]
        add esp, 0ch
        add edx, 28h
        push edx
        add eax, 124h
        push eax
        ; Exact mapped bytes E8 9B 6B 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes E8 5B 2C FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 1ch]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 33h
        push ecx
        mov ecx, dword ptr [esi + 0f4h]
        add edx, 124h
        push edx
        ; Exact mapped bytes E8 5B 6B 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        ; Exact mapped bytes E9 96 F5 FF FF: jmp 0x5879bcd6
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 6]
        mov edx, dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 68h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AC BD FF FF: call 0x58798500
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 7F 20 02: cmp word ptr [edi + 0x20], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x20
        __asm _emit 0x02
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x5879c84c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 22h]
        sub eax, 1
        ; Exact mapped bytes 74 72: je 0x5879c7e0
        __asm _emit 0x74
        __asm _emit 0x72
        sub eax, 7
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x5879c85c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 7fh
        push eax
        lea ecx, [esp + 125h]
        push ecx
        mov byte ptr [esp + 128h], al
        ; Exact mapped bytes E8 BA 04 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x00
        movzx eax, word ptr [edi + 22h]
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push eax
        push 2
        ; Exact mapped bytes E8 4B 3D 0E 00: call 0x588804f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 589981d8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 124h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0d8h]
        add esp, 0ch
        add eax, 1a0h
        push eax
        ; Exact mapped bytes E8 0A 6B 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 11ch]
        push ecx
        ; Exact mapped bytes EB 71: jmp 0x5879c851
        __asm _emit 0xeb
        __asm _emit 0x71
        push 7fh
        lea edx, [esp + 221h]
        push 0
        push edx
        mov byte ptr [esp + 228h], 0
        ; Exact mapped bytes E8 4F 04 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x00
        movzx eax, word ptr [edi + 22h]
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push eax
        push 2
        ; Exact mapped bytes E8 E0 3C 0E 00: call 0x588804f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 589981b0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 224h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 4]
        add ecx, 1ach
        add esp, 0ch
        push ecx
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 9E 6A 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x00
        lea edx, [esp + 21ch]
        push edx
        ; Exact mapped bytes EB 05: jmp 0x5879c851
        __asm _emit 0xeb
        __asm _emit 0x05
        push 5898c922h
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 84 54 F9 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, word ptr [edi + 9eh]
        push eax
        push 5899818ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 18ch]
        add esp, 0ch
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 D3 2A FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        push eax
        lea edx, [esp + 24h]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 190h]
        add esp, 10h
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 A6 2A FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2f8h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 7D 2A FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 1ach]
        add edx, 96h
        push edx
        add eax, 1c6h
        push eax
        ; Exact mapped bytes E8 8F 69 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x69
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 0a2h
        push ecx
        mov ecx, dword ptr [esi + 1b0h]
        add edx, 1c6h
        push edx
        ; Exact mapped bytes E8 70 69 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x69
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 0aeh
        add ecx, 1c6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 1b4h]
        ; Exact mapped bytes E8 52 69 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x69
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ach]
        mov eax, 0fh
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        movzx eax, word ptr [edi + 0a0h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        push eax
        push 589982e4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 28h
        add ecx, 1e6h
        push eax
        push ecx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 ED 68 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 B1 29 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, byte ptr [edi + 99h]
        movzx ecx, word ptr [edi + 9ch]
        push eax
        push ecx
        lea edx, [esp + 24h]
        push 5899817ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 34h
        add ecx, 1e6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes E8 A6 68 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 66 29 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 98h]
        and eax, 0ffh
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0e4h]
        add esp, 0ch
        add edx, 40h
        push edx
        add eax, 1e6h
        push eax
        ; Exact mapped bytes E8 5F 68 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes E8 1F 29 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 0a4h]
        push edx
        lea eax, [esp + 20h]
        push 58998178h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 4ch
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        add edx, 1e6h
        push edx
        ; Exact mapped bytes E8 1C 68 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 DC 28 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2f8h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [esi + 250h]
        ; Exact mapped bytes 75 0F: jne 0x5879caa6
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 25ch]
        xor ecx, 0aah
        push ecx
        ; Exact mapped bytes EB 14: jmp 0x5879caba
        __asm _emit 0xeb
        __asm _emit 0x14
        movzx eax, word ptr [esi + 2b0h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 06: jbe 0x5879cab8
        __asm _emit 0x76
        __asm _emit 0x06
        movzx edx, ax
        push edx
        ; Exact mapped bytes EB 02: jmp 0x5879caba
        __asm _emit 0xeb
        __asm _emit 0x02
        push 1
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 7B F1 16 00: call 0x5890bc40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf1
        __asm _emit 0x16
        __asm _emit 0x00
        cmp byte ptr [esi + 2d8h], 2
        mov ecx, esi
        ; Exact mapped bytes 0F 85 BB 08 00 00: jne 0x5879d38f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 B9 FF FF: call 0x587983f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B6 08 00 00: jmp 0x5879d394
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 6]
        mov ecx, dword ptr [edi + 28h]
        mov edx, dword ptr [edi + 68h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 0E BA FF FF: call 0x58798500
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 7F 20 02: cmp word ptr [edi + 0x20], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x20
        __asm _emit 0x02
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 75 73: jne 0x5879cb72
        __asm _emit 0x75
        __asm _emit 0x73
        movzx eax, word ptr [edi + 22h]
        sub eax, 1
        ; Exact mapped bytes 75 7A: jne 0x5879cb82
        __asm _emit 0x75
        __asm _emit 0x7a
        push 7fh
        push eax
        mov byte ptr [esp + 1a4h], al
        lea eax, [esp + 1a5h]
        push eax
        ; Exact mapped bytes E8 29 01 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x1e
        __asm _emit 0x00
        movzx eax, word ptr [edi + 22h]
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 0ch
        push 0
        push eax
        push 2
        ; Exact mapped bytes E8 BA 39 0E 00: call 0x588804f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 589981b0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 1a4h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0d8h]
        add esp, 0ch
        add edx, 1ach
        push edx
        ; Exact mapped bytes E8 78 67 16 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x67
        __asm _emit 0x16
        __asm _emit 0x00
        lea eax, [esp + 19ch]
        push eax
        ; Exact mapped bytes EB 05: jmp 0x5879cb77
        __asm _emit 0xeb
        __asm _emit 0x05
        push 5898c922h
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 5E 51 F9 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 96h
        push ecx
        mov ecx, dword ptr [esi + 1ach]
        add edx, 1c6h
        push edx
        ; Exact mapped bytes E8 EF 66 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x66
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 0a2h
        add ecx, 1c6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 1b0h]
        ; Exact mapped bytes E8 D1 66 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x66
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 1b4h]
        add edx, 0aeh
        push edx
        add eax, 1c6h
        push eax
        ; Exact mapped bytes E8 B3 66 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x66
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ach]
        mov eax, 0fh
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        movzx ecx, word ptr [edi + 0ach]
        push ecx
        push 58998154h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 24h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 18ch]
        add esp, 0ch
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 2F 27 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        push eax
        lea edx, [esp + 24h]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 190h]
        add esp, 10h
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 02 27 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2f8h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 D9 26 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0aeh]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, edx, 64h
        sub ecx, edx
        push ecx
        push eax
        push 589982e4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 10h
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebx]
        add edx, 0f5h
        push edx
        ; Exact mapped bytes E8 B7 65 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x65
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 7B 26 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1a0h]
        push 1
        ; Exact mapped bytes E8 4E EF 16 00: call 0x5890bc40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xef
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2f8h]
        mov eax, dword ptr [ecx + 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [esi + 250h]
        ; Exact mapped bytes 75 0E: jne 0x5879cd13
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 25ch]
        xor eax, 0aah
        push eax
        ; Exact mapped bytes EB 15: jmp 0x5879cd28
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dl, 0ch
        ; Exact mapped bytes 75 1B: jne 0x5879cd33
        __asm _emit 0x75
        __asm _emit 0x1b
        movzx eax, word ptr [esi + 2b2h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 0F: jbe 0x5879cd33
        __asm _emit 0x76
        __asm _emit 0x0f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 0D EF 16 00: call 0x5890bc40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xef
        __asm _emit 0x16
        __asm _emit 0x00
        movzx edx, word ptr [edi + 0aah]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        add edx, 0f5h
        push edx
        ; Exact mapped bytes E8 2A 65 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x65
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 EA 25 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        add edx, 1d0h
        push edx
        ; Exact mapped bytes E8 FE 64 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 34h
        add ecx, 1dfh
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes E8 E2 64 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0f4h]
        add edx, 34h
        push edx
        add eax, 216h
        push eax
        ; Exact mapped bytes E8 C7 64 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [esi + 0f8h]
        add edx, 1dfh
        push edx
        ; Exact mapped bytes E8 AB 64 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 40h
        add ecx, 216h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0fch]
        ; Exact mapped bytes E8 8F 64 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7F 20 02: cmp word ptr [edi + 0x20], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x20
        __asm _emit 0x02
        ; Exact mapped bytes 75 57: jne 0x5879ce5f
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 66 83 7F 22 00: cmp word ptr [edi + 0x22], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 74 50: je 0x5879ce5f
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 0ech]
        push 5898c922h
        ; Exact mapped bytes E8 41 25 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0f0h]
        push 5898c922h
        ; Exact mapped bytes E8 31 25 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0f4h]
        push 5898c922h
        ; Exact mapped bytes E8 21 25 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0f8h]
        push 5898c922h
        ; Exact mapped bytes E8 11 25 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0fch]
        push 5898c922h
        ; Exact mapped bytes E9 29 05 00 00: jmp 0x5879d388
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [edi + 9eh]
        push edx
        lea eax, [esp + 20h]
        push 58998150h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 DA 24 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 0a2h]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes E8 B3 24 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 0a6h]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0f4h]
        ; Exact mapped bytes E8 8C 24 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 98h]
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        and edx, 3fh
        push edx
        push 58998134h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0f8h]
        ; Exact mapped bytes E8 56 24 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 98h]
        shr edx, 6
        and edx, 3fh
        push edx
        push 58998134h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [esp + 28h]
        add esp, 0ch
        push ecx
        mov ecx, dword ptr [esi + 0fch]
        ; Exact mapped bytes E9 4B 04 00 00: jmp 0x5879d388
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [edi + 6]
        mov eax, dword ptr [edi + 28h]
        mov ecx, dword ptr [edi + 68h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AF B5 FF FF: call 0x58798500
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 1ach]
        add edx, 96h
        push edx
        add eax, 1c6h
        push eax
        ; Exact mapped bytes E8 21 63 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 0a2h
        push ecx
        mov ecx, dword ptr [esi + 1b0h]
        add edx, 1c6h
        push edx
        ; Exact mapped bytes E8 02 63 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 0aeh
        add ecx, 1c6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 1b4h]
        ; Exact mapped bytes E8 E4 62 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x62
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ach]
        mov eax, 0fh
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [edi + 24h]
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        push edx
        push ecx
        push 58998114h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 18ch]
        add esp, 10h
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 48 23 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 1eh]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        push eax
        lea edx, [esp + 24h]
        push 58998184h
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 190h]
        add esp, 10h
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 1B 23 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2f8h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5898d18ch
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 F2 22 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x22
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 4]
        ; Exact mapped bytes 8B 0D 48 46 A2 58: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 3
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x5879d09b
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5879d09b
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5879d09b
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5879d09d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 9ch], eax
        movzx eax, word ptr [edi + 4]
        ; Exact mapped bytes 8B 0D 48 46 A2 58: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 4
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x5879d0d0
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5879d0d0
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5879d0d0
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5879d0d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1a0h]
        push 1
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 5B EB 16 00: call 0x5890bc40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [esi + 2f8h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [esi + 250h]
        ; Exact mapped bytes 75 18: jne 0x5879d110
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [esi + 25ch]
        mov ecx, dword ptr [esi + 1a0h]
        xor edx, 0aah
        push edx
        ; Exact mapped bytes E8 30 EB 16 00: call 0x5890bc40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0x16
        __asm _emit 0x00
        movzx eax, word ptr [edi + 0a8h]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebx]
        add esp, 0ch
        add edx, 27h
        push edx
        add eax, 114h
        push eax
        ; Exact mapped bytes E8 52 61 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x61
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 16 22 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x22
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 0a4h]
        push edx
        lea eax, [esp + 20h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 33h
        push ecx
        mov ecx, dword ptr [esi + 0e0h]
        add edx, 114h
        push edx
        ; Exact mapped bytes E8 13 61 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x61
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 D3 21 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0a6h]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 3fh
        add ecx, 114h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes E8 D0 60 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 90 21 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 0aah]
        push eax
        lea ecx, [esp + 20h]
        push 5898d18ch
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0e8h]
        add esp, 0ch
        add edx, 27h
        push edx
        add eax, 1d8h
        push eax
        ; Exact mapped bytes E8 8E 60 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 4E 21 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, word ptr [edi + 0aeh]
        push edx
        push 5898d18ch
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 33h
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        add edx, 1d8h
        push edx
        ; Exact mapped bytes E8 4B 60 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 0B 21 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 9ah]
        push ecx
        lea edx, [esp + 20h]
        push 5898d18ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 4bh
        add ecx, 1d8h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0f4h]
        ; Exact mapped bytes E8 08 60 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f4h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 C8 20 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [edi + 0b0h]
        lea ecx, [eax + eax*4]
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        mov eax, 10624dd3h
        imul ecx
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, edx, 3e8h
        sub ecx, edx
        push ecx
        push eax
        push 589982a0h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 10h
        add ecx, 57h
        push ecx
        mov ecx, dword ptr [esi + 0f8h]
        add edx, 1d8h
        push edx
        ; Exact mapped bytes E8 94 5F 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f8h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 54 20 FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BF 9C 00 00 00 00: cmp word ptr [edi + 0x9c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 39: je 0x5879d34f
        __asm _emit 0x74
        __asm _emit 0x39
        movzx eax, word ptr [edi + 98h]
        sub eax, 3
        ; Exact mapped bytes 74 19: je 0x5879d33b
        __asm _emit 0x74
        __asm _emit 0x19
        sub eax, 1
        ; Exact mapped bytes 75 66: jne 0x5879d38d
        __asm _emit 0x75
        __asm _emit 0x66
        push 589980f4h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        ; Exact mapped bytes EB 52: jmp 0x5879d38d
        __asm _emit 0xeb
        __asm _emit 0x52
        push 589980d4h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea edx, [esp + 24h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        ; Exact mapped bytes EB 3E: jmp 0x5879d38d
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 589980b8h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 3fh
        push ecx
        mov ecx, dword ptr [esi + 0f0h]
        add edx, 1d8h
        push edx
        ; Exact mapped bytes E8 13 5F 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 D3 1F FC FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 7C AB FF FF: call 0x58797f10
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 29ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 34 F8 1D 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 290h
        ret
    }
}
