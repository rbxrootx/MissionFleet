// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484B00 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_00484b00_00484B00() {
    __asm {
        ; Exact mapped bytes 66 81 3D 60 90 68 00 0A 03: cmp word ptr [0x689060], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        push esi
        push edi
        ; Exact mapped bytes 73 07: jae 0x484b14
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 90 68 00 00: cmp dword ptr [0x689040], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x484b24
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
        ; Exact mapped bytes 74 03: je 0x484b36
        __asm _emit 0x74
        __asm _emit 0x03
        and esi, 0fffffffch
        push 688de0h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 81 3D 9C 90 68 00 80 00 00 00: cmp dword ptr [0x68909c], 0x80
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x484c27
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        xor eax, eax
        ; Exact mapped bytes 39 05 9C 90 68 00: cmp dword ptr [0x68909c], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x484b7c
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, 6890a4h
        cmp dword ptr [ecx], edi
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x484c1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 14h
        inc eax
        ; Exact mapped bytes 3B 05 9C 90 68 00: cmp eax, dword ptr [0x68909c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7C EC: jl 0x484b68
        __asm _emit 0x7c
        __asm _emit 0xec
        push edi
        ; Exact mapped bytes A1 5C 90 68 00: mov eax, dword ptr [0x68905c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 485d20h
        push 5
        ; Exact mapped bytes FF 15 10 BF 68 00: call dword ptr [0x68bf10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x484c27
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 90 68 00: mov edx, dword ptr [0x68909c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        shl edx, 2
        mov dword ptr [edx + edx*4 + 6890a0h], ecx
        ; Exact mapped bytes 8B 0D 9C 90 68 00: mov ecx, dword ptr [0x68909c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        shl ecx, 2
        mov dword ptr [ecx + ecx*4 + 6890a4h], edi
        ; Exact mapped bytes 8B 0D 9C 90 68 00: mov ecx, dword ptr [0x68909c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        shl ecx, 2
        mov dword ptr [ecx + ecx*4 + 6890a8h], eax
        ; Exact mapped bytes A1 9C 90 68 00: mov eax, dword ptr [0x68909c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        shl eax, 2
        mov dword ptr [eax + eax*4 + 6890ach], 1
        ; Exact mapped bytes A1 9C 90 68 00: mov eax, dword ptr [0x68909c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        shl eax, 2
        mov dword ptr [eax + eax*4 + 6890b0h], esi
        ; Exact mapped bytes 8B 0D 9C 90 68 00: mov ecx, dword ptr [0x68909c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 3D 94 90 68 00: mov dword ptr [0x689094], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 98 90 68 00: mov dword ptr [0x689098], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 05 9C 90 68 00: inc dword ptr [0x68909c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push 688de0h
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        shl eax, 2
        inc dword ptr [eax + eax*4 + 6890ach]
        ; Exact mapped bytes EB DF: jmp 0x484c06
        __asm _emit 0xeb
        __asm _emit 0xdf
        push 688de0h
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
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
