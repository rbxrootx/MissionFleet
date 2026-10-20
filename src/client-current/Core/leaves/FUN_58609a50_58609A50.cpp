// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58609A50 .. +0x38F bytes.
extern "C" __declspec(naked) void FUN_58609a50_58609A50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588866feh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 74h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D7 87 E7 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588adf24h
        push 54h
        ; Exact mapped bytes E8 54 75 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x75
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 35: je 0x58609af5
        __asm _emit 0x74
        __asm _emit 0x35
        push 0bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 B0 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 30 88 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x88
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58609afc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 48h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 8B BA 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 D7 74 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 35: je 0x58609b72
        __asm _emit 0x74
        __asm _emit 0x35
        push 0ah
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 AF E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xaf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B3 87 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58609b79
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 50h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 01 C2 E7 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 58h], ecx
        push 0f0h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 8B B9 1A 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58609bc8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x58609c7b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 2B 74 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 4E: je 0x58609c37
        __asm _emit 0x74
        __asm _emit 0x4e
        push 0
        push 0
        push 0ffffffh
        imul eax, dword ptr [ebp - 14h], 14h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 5ah]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 258h
        push eax
        imul ecx, dword ptr [ebp - 14h], 14h
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 46h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0dch
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7E 87 E7 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58609c3e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 5ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [eax + edx*4 + 68h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 68h]
        mov dword ptr [ebp - 60h], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 190h
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0B C2 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x58609bbf
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 7F 73 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x73
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 59: je 0x58609cee
        __asm _emit 0x74
        __asm _emit 0x59
        push 9
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E AE E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xae
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e2h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0afh
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 1F EC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1f
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58609cf5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 88h], edx
        push 0ach
        ; Exact mapped bytes E8 EF 72 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x72
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 59: je 0x58609d7e
        __asm _emit 0x74
        __asm _emit 0x59
        push 0bh
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E AD E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xad
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e2h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 109h
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 67 1F EC FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x1f
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58609d85
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ecx + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
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
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CD C1 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
