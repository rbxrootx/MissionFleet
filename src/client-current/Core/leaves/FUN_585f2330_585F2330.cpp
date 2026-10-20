// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F2330 .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_585f2330_585F2330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 110h]
        cmp ecx, 6
        ; Exact mapped bytes 75 38: jne 0x585f2387
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 2f0h], 2
        ; Exact mapped bytes 73 07: jae 0x585f2362
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x585f2586
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 9D E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9d
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 7C 09: jl 0x585f237b
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585f2382
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 04 02 00 00: jmp 0x585f2586
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FC 01 00 00: jmp 0x585f2583
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 110h]
        cmp ecx, 4
        ; Exact mapped bytes 75 5F: jne 0x585f23f5
        __asm _emit 0x75
        __asm _emit 0x5f
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 4E EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [eax + 3ch]
        and edx, 1
        ; Exact mapped bytes 74 1D: je 0x585f23cd
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 EC F6 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 26 E9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x26
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 9C E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9c
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10h]
        cmp eax, 0eh
        ; Exact mapped bytes 7C 09: jl 0x585f23e9
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585f23f0
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 96 01 00 00: jmp 0x585f2586
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 01 00 00: jmp 0x585f2583
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 110h]
        cmp edx, 0eh
        ; Exact mapped bytes 75 5F: jne 0x585f2463
        __asm _emit 0x75
        __asm _emit 0x5f
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 4D EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [eax + 3ch]
        and eax, 1
        ; Exact mapped bytes 74 1D: je 0x585f243b
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 EC F6 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B 26 E9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x26
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 9C E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x9c
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 14h]
        cmp eax, 0eh
        ; Exact mapped bytes 7C 09: jl 0x585f2457
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585f245e
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x585f2586
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x585f2583
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 110h]
        cmp eax, 0bh
        ; Exact mapped bytes 75 7D: jne 0x585f24ef
        __asm _emit 0x75
        __asm _emit 0x7d
        mov ecx, 2
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 4D EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        movzx edx, word ptr [eax + 38h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 77 34: ja 0x585f24c7
        __asm _emit 0x77
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 85 8C 25 5F 58: jmp dword ptr [eax*4 + 0x585f258c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x5f
        __asm _emit 0x58
        mov ecx, 0eh
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 1F: jmp 0x585f24c7
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, 8
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 14: jmp 0x585f24c7
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, 0ch
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x585f24c7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 10h
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
        ; Exact mapped bytes E8 DE 9B E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9b
        __asm _emit 0xe9
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 4]
        cmp eax, edx
        ; Exact mapped bytes 7C 09: jl 0x585f24e3
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585f24ea
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x585f2586
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x585f2583
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 110h]
        cmp ecx, 0ah
        ; Exact mapped bytes 75 1F: jne 0x585f251d
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 9B E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9b
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 7C 09: jl 0x585f2517
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 04: jmp 0x585f251b
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6B: jmp 0x585f2586
        __asm _emit 0xeb
        __asm _emit 0x6b
        ; Exact mapped bytes EB 66: jmp 0x585f2583
        __asm _emit 0xeb
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 110h]
        cmp eax, 5
        ; Exact mapped bytes 75 57: jne 0x585f2583
        __asm _emit 0x75
        __asm _emit 0x57
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 4C EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 1
        ; Exact mapped bytes 74 1D: je 0x585f2563
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A EB F6 FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 24 E9 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x24
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 9B E9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9b
        __asm _emit 0xe9
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        cmp eax, 0ch
        ; Exact mapped bytes 7C 09: jl 0x585f257f
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 04: jmp 0x585f2583
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x585f2586
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
