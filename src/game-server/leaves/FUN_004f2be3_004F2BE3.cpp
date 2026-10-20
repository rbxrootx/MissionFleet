// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F2BE3 .. +0x20F bytes.
extern "C" __declspec(naked) void FUN_004f2be3_004F2BE3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 A0 86 00 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 5c576ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 1F 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B8 20 04 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 1B: je 0x4f2c37
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 58h]
        cmp dword ptr [ecx + 1ch], 1
        ; Exact mapped bytes 74 12: je 0x4f2c37
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 58h]
        cmp dword ptr [edx + 1ch], -1
        ; Exact mapped bytes 74 09: je 0x4f2c37
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 1ch], -2
        ; Exact mapped bytes 75 05: jne 0x4f2c3c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x4f2dec
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4f2c5f
        __asm _emit 0x75
        __asm _emit 0x12
        push 5c5778h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 1E 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 01 00 00: jmp 0x4f2dec
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 99 ED FF FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 74 0F: je 0x4f2c85
        __asm _emit 0x74
        __asm _emit 0x0f
        push 5c5788h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 1E 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4f2c92
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5c57a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 1E 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 360h
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x4f2cc4
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 75 10: jne 0x4f2cc4
        __asm _emit 0x75
        __asm _emit 0x10
        push 40h
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 7E C3 FF FF: call 0x4ef040
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x4f2cd9
        __asm _emit 0xeb
        __asm _emit 0x15
        lea ecx, [ebp - 54h]
        push ecx
        push 40h
        push 0dh
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C0 25 5E 00: call dword ptr [0x5e25c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5c57cch
        lea ecx, [ebp - 54h]
        push ecx
        push 5c57bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 1E 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 25 1E 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1E 1E 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        push 40h
        lea edx, [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 C4 25 5E 00: call dword ptr [0x5e25c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5c57e0h
        lea edx, [ebp - 54h]
        push edx
        push 5c57d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 1D 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EE 1D 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E7 1D 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 15 30 04 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 67 93 04 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        push 5c57e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 1D 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 95 DE 00 00: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D2 A2 04 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 5c57f0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 1D 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 78 20 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        push -10h
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 5c5804h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 1D 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 54 20 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        push -10h
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4f2ddf
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        push 5c5810h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 1D 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EC 1E 04 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        push 5c5818h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F 1D 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
