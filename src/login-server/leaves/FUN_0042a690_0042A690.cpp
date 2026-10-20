// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A690 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_0042a690_0042A690() {
    __asm {
        sub esp, 4
        push ebx
        push esi
        push edi
        push ebp
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        push 4513e0h
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 39 35 54 14 45 00: cmp dword ptr [0x451454], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 74 61: je 0x42a713
        __asm _emit 0x74
        __asm _emit 0x61
        xor ecx, ecx
        ; Exact mapped bytes 3B 0D 5C 14 45 00: cmp ecx, dword ptr [0x45145c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7D 29: jge 0x42a6e5
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, 451464h
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 74 0E: je 0x42a6d3
        __asm _emit 0x74
        __asm _emit 0x0e
        add eax, 14h
        inc ecx
        ; Exact mapped bytes 3B 0D 5C 14 45 00: cmp ecx, dword ptr [0x45145c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7C F0: jl 0x42a6c1
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes EB 0C: jmp 0x42a6df
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 89 0D 58 14 45 00: mov dword ptr [0x451458], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 54 14 45 00: mov dword ptr [0x451454], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 3B 0D 5C 14 45 00: cmp ecx, dword ptr [0x45145c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 2C: jne 0x42a713
        __asm _emit 0x75
        __asm _emit 0x2c
        push 4513e0h
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 1ch]
        mov esi, dword ptr [esp + 18h]
        push ebx
        push eax
        push esi
        push 0
        ; Exact mapped bytes FF 15 58 C5 43 00: call dword ptr [0x43c558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 58 14 45 00: mov edi, dword ptr [0x451458]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push 4513e0h
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 20h]
        cmp esi, 3
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x42a81c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebx]
        cmp dword ptr [ebp + 28h], 8002h
        ; Exact mapped bytes 75 7E: jne 0x42a7be
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes 66 83 3D 22 14 45 00 20: cmp word ptr [0x451422], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 75 60: jne 0x42a7aa
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 66 81 3D 20 14 45 00 5F 03: cmp word ptr [0x451420], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 1B: jb 0x42a770
        __asm _emit 0x72
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 1ch]
        push -10h
        push eax
        ; Exact mapped bytes 8B 2D 14 C5 43 00: mov ebp, dword ptr [0x43c514]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov dword ptr [esp + 10h], 0
        test al, 4
        ; Exact mapped bytes 75 08: jne 0x42a778
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 1
        mov ebp, dword ptr [esp + 1ch]
        lea eax, [esp + 10h]
        push eax
        push 0
        push 11f0h
        push ebp
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x42a81c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 42a320h
        push ebp
        ; Exact mapped bytes E8 EB E6 FF FF: call 0x428e90
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 72: jmp 0x42a81c
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [esp + 1ch]
        push 42a320h
        push eax
        ; Exact mapped bytes E8 77 E8 FF FF: call 0x429030
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 5E: jmp 0x42a81c
        __asm _emit 0xeb
        __asm _emit 0x5e
        lea eax, [edi*4]
        test byte ptr [eax + eax*4 + 451470h], 1
        ; Exact mapped bytes 74 4D: je 0x42a81c
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 78 FE FF FF: call 0x42a650
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x42a804
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x42a81c
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 3D 22 14 45 00 18: cmp word ptr [0x451422], 0x18
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 74 2C: je 0x42a81c
        __asm _emit 0x74
        __asm _emit 0x2c
        push eax
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 53 FE FF FF: call 0x42a650
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x42a81c
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esp + 1ch]
        push eax
        push 1
        push 0ffffh
        push ecx
        ; Exact mapped bytes E8 07 02 00 00: call 0x42aa20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        shl edi, 2
        push ebx
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [edi + edi*4 + 451468h]
        push eax
        push esi
        push ecx
        ; Exact mapped bytes FF 15 58 C5 43 00: call dword ptr [0x43c558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
