// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429530 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_00429530_00429530() {
    __asm {
        ; Exact mapped bytes 66 81 3D 20 14 45 00 0A 03: cmp word ptr [0x451420], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        push esi
        push edi
        ; Exact mapped bytes 73 07: jae 0x429544
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 14 45 00 00: cmp dword ptr [0x451400], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x429554
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        or esi, 1
        test esi, 2
        ; Exact mapped bytes 74 03: je 0x429566
        __asm _emit 0x74
        __asm _emit 0x03
        and esi, 0fffffffch
        push 4513e0h
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 81 3D 5C 14 45 00 80 00 00 00: cmp dword ptr [0x45145c], 0x80
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x429657
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        xor eax, eax
        ; Exact mapped bytes 39 05 5C 14 45 00: cmp dword ptr [0x45145c], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x4295ac
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, 451464h
        cmp dword ptr [ecx], edi
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x42964b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 14h
        inc eax
        ; Exact mapped bytes 3B 05 5C 14 45 00: cmp eax, dword ptr [0x45145c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7C EC: jl 0x429598
        __asm _emit 0x7c
        __asm _emit 0xec
        push edi
        ; Exact mapped bytes A1 1C 14 45 00: mov eax, dword ptr [0x45141c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push 42a690h
        push 5
        ; Exact mapped bytes FF 15 54 C4 43 00: call dword ptr [0x43c454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x429657
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 5C 14 45 00: mov edx, dword ptr [0x45145c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        shl edx, 2
        mov dword ptr [edx + edx*4 + 451460h], ecx
        ; Exact mapped bytes 8B 0D 5C 14 45 00: mov ecx, dword ptr [0x45145c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        shl ecx, 2
        mov dword ptr [ecx + ecx*4 + 451464h], edi
        ; Exact mapped bytes 8B 0D 5C 14 45 00: mov ecx, dword ptr [0x45145c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        shl ecx, 2
        mov dword ptr [ecx + ecx*4 + 451468h], eax
        ; Exact mapped bytes A1 5C 14 45 00: mov eax, dword ptr [0x45145c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        shl eax, 2
        mov dword ptr [eax + eax*4 + 45146ch], 1
        ; Exact mapped bytes A1 5C 14 45 00: mov eax, dword ptr [0x45145c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        shl eax, 2
        mov dword ptr [eax + eax*4 + 451470h], esi
        ; Exact mapped bytes 8B 0D 5C 14 45 00: mov ecx, dword ptr [0x45145c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 3D 54 14 45 00: mov dword ptr [0x451454], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 58 14 45 00: mov dword ptr [0x451458], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 05 5C 14 45 00: inc dword ptr [0x45145c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x5c
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
        mov eax, 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        shl eax, 2
        inc dword ptr [eax + eax*4 + 45146ch]
        ; Exact mapped bytes EB DF: jmp 0x429636
        __asm _emit 0xeb
        __asm _emit 0xdf
        push 4513e0h
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
