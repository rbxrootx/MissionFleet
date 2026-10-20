// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CA0C0 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_004ca0c0_004CA0C0() {
    __asm {
        ; Exact mapped bytes 66 81 3D 00 05 5E 00 0A 03: cmp word ptr [0x5e0500], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        push esi
        push edi
        ; Exact mapped bytes 73 07: jae 0x4ca0d4
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E0 04 5E 00 00: cmp dword ptr [0x5e04e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4ca0e4
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
        ; Exact mapped bytes 74 03: je 0x4ca0f6
        __asm _emit 0x74
        __asm _emit 0x03
        and esi, 0fffffffch
        push 5e04c0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 81 3D 3C 05 5E 00 80 00 00 00: cmp dword ptr [0x5e053c], 0x80
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x4ca1e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edi, eax
        xor eax, eax
        ; Exact mapped bytes 39 05 3C 05 5E 00: cmp dword ptr [0x5e053c], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x4ca13c
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, 5e0544h
        cmp dword ptr [ecx], edi
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x4ca1db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 14h
        inc eax
        ; Exact mapped bytes 3B 05 3C 05 5E 00: cmp eax, dword ptr [0x5e053c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7C EC: jl 0x4ca128
        __asm _emit 0x7c
        __asm _emit 0xec
        push edi
        ; Exact mapped bytes A1 FC 04 5E 00: mov eax, dword ptr [0x5e04fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 4cb2e0h
        push 5
        ; Exact mapped bytes FF 15 CC 25 5E 00: call dword ptr [0x5e25cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x4ca1e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 3C 05 5E 00: mov edx, dword ptr [0x5e053c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        shl edx, 2
        mov dword ptr [edx + edx*4 + 5e0540h], ecx
        ; Exact mapped bytes 8B 0D 3C 05 5E 00: mov ecx, dword ptr [0x5e053c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        shl ecx, 2
        mov dword ptr [ecx + ecx*4 + 5e0544h], edi
        ; Exact mapped bytes 8B 0D 3C 05 5E 00: mov ecx, dword ptr [0x5e053c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        shl ecx, 2
        mov dword ptr [ecx + ecx*4 + 5e0548h], eax
        ; Exact mapped bytes A1 3C 05 5E 00: mov eax, dword ptr [0x5e053c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        shl eax, 2
        mov dword ptr [eax + eax*4 + 5e054ch], 1
        ; Exact mapped bytes A1 3C 05 5E 00: mov eax, dword ptr [0x5e053c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        shl eax, 2
        mov dword ptr [eax + eax*4 + 5e0550h], esi
        ; Exact mapped bytes 8B 0D 3C 05 5E 00: mov ecx, dword ptr [0x5e053c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 89 3D 34 05 5E 00: mov dword ptr [0x5e0534], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 38 05 5E 00: mov dword ptr [0x5e0538], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 05 3C 05 5E 00: inc dword ptr [0x5e053c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5e04c0h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        shl eax, 2
        inc dword ptr [eax + eax*4 + 5e054ch]
        ; Exact mapped bytes EB DF: jmp 0x4ca1c6
        __asm _emit 0xeb
        __asm _emit 0xdf
        push 5e04c0h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
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
