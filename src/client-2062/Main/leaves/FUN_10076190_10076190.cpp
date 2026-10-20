// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10076190 .. +0x2CD bytes.
extern "C" __declspec(naked) void FUN_10076190_10076190() {
    __asm {
        push -1
        push 1016f8a6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ebx, 0fffeh
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e1ffh
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 39ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 398h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3a0h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 89 35 DC 56 1C 10: mov dword ptr [0x101c56dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 45 0C 00 00: call 0x10076e30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 3ech]
        xor edi, edi
        mov dword ptr [esi + 78h], 1
        push edi
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 74h], edi
        mov dword ptr [esi + 654h], edi
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], 30h
        ; Exact mapped bytes E8 07 8F 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ech]
        mov dword ptr [eax + 7ch], 100h
        mov ecx, dword ptr [esi + 3ech]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, edi
        ; Exact mapped bytes 74 30: je 0x10076268
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        cmp ecx, eax
        ; Exact mapped bytes 75 06: jne 0x10076250
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 3D 50 58 1C 10: mov dword ptr [0x101c5850], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 3D E4 7D 1A 10: cmp dword ptr [0x101a7de4], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 10: je 0x10076268
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x10076265
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 60h], edi
        mov eax, dword ptr [esi + 80h]
        cmp eax, 40000000h
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 164h]
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x10076350
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 7E 0F: jle 0x10076298
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x10076298
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x1007629a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3ech]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100762cf
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
        ; Exact mapped bytes 39 3D E4 7D 1A 10: cmp dword ptr [0x101a7de4], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 46: je 0x1007631d
        __asm _emit 0x74
        __asm _emit 0x46
        push 30h
        ; Exact mapped bytes E8 C2 64 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        cmp eax, edi
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 74 1E: je 0x1007630b
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D BC 7D 1A 10: mov ecx, dword ptr [0x101a7dbc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 85 E7 08 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esp + 18h], 0ffffffffh
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x10076408
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esp + 18h], 0ffffffffh
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x10076408
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 58 1C 10: mov eax, dword ptr [0x101c5808]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, edi
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x10076405
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 170h], 4
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x100763fe
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 194h]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x100763fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x10076408
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, edi
        ; Exact mapped bytes 7E 0E: jle 0x10076362
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 04: je 0x10076362
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x10076364
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3ech]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10076399
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
        ; Exact mapped bytes 39 3D E4 7D 1A 10: cmp dword ptr [0x101a7de4], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 39: je 0x100763da
        __asm _emit 0x74
        __asm _emit 0x39
        push 30h
        ; Exact mapped bytes E8 F8 63 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x63
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        cmp eax, edi
        mov dword ptr [esp + 18h], 1
        ; Exact mapped bytes 0F 84 4C FF FF FF: je 0x1007630b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D AC 7D 1A 10: mov ecx, dword ptr [0x101a7dac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 B3 E6 08 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe6
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esp + 18h], 0ffffffffh
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 2E: jmp 0x10076408
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes A1 08 58 1C 10: mov eax, dword ptr [0x101c5808]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, edi
        ; Exact mapped bytes 74 22: je 0x10076405
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [eax + 170h], 5
        ; Exact mapped bytes 7E 12: jle 0x100763fe
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, edi
        ; Exact mapped bytes 74 08: je 0x100763fe
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 14h]
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 0A: jmp 0x10076408
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 03: jmp 0x10076408
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x10076417
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 60h]
        ; Exact mapped bytes A3 50 58 1C 10: mov dword ptr [0x101c5850], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 2C 56 1C 10: mov eax, dword ptr [0x101c562c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, edi
        ; Exact mapped bytes 74 0E: je 0x10076436
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, edi
        ; Exact mapped bytes 74 07: je 0x10076436
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 3fch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3a4h]
        ; Exact mapped bytes E8 B5 93 03 00: call 0x100af800
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
