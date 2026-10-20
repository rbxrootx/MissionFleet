// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052376E .. +0x1D6 bytes.
extern "C" __declspec(naked) void FUN_0052376e_0052376E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x523792
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 3A: jmp 0x5237cc
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 B8 23 5E 00: call dword ptr [0x5e23b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 23 5E 00: call dword ptr [0x5e23bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 B4 23 5E 00: call dword ptr [0x5e23b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5237e6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c9h
        push 5c8174h
        ; Exact mapped bytes E8 1F 12 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5237e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5237cc
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        cmp edx, 0ffffh
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x5238c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 7B: je 0x523891
        __asm _emit 0x74
        __asm _emit 0x7b
        push 5c81c4h
        ; Exact mapped bytes FF 15 28 24 5E 00: call dword ptr [0x5e2428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x52383e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e1h
        push 5c8174h
        ; Exact mapped bytes E8 C7 11 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52383e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x523824
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 45: je 0x52388f
        __asm _emit 0x74
        __asm _emit 0x45
        push 5c81d4h
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 23: jne 0x523885
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x52387f
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e6h
        push 5c8174h
        ; Exact mapped bytes E8 86 11 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52387f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x523862
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 88 23 5E 00: call dword ptr [0x5e2388]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x5238c1
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffh
        cmp eax, 3
        ; Exact mapped bytes 75 23: jne 0x5238c1
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x5238bb
        __asm _emit 0x74
        __asm _emit 0x14
        push 0edh
        push 5c8174h
        ; Exact mapped bytes E8 4A 11 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5238bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x52389e
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 7D 1B 02 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [eax + 1038h], 0
        ; Exact mapped bytes 74 0F: je 0x5238de
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 48 FE FF FF: call 0x523723
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 FA FC FF FF: call 0x5235e5
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 17: je 0x52390e
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 44h]
        push edx
        ; Exact mapped bytes FF 15 B0 23 5E 00: call dword ptr [0x5e23b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 44h], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x523923
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        or ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
