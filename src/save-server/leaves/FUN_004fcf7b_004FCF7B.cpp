// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FCF7B .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_004fcf7b_004FCF7B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 9
        ; Exact mapped bytes E8 EC 5D 04 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 0C: je 0x4fcfa0
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 65h
        ; Exact mapped bytes 7C 16: jl 0x4fcfb0
        __asm _emit 0x7c
        __asm _emit 0x16
        cmp dword ptr [ebp + 8], 73h
        ; Exact mapped bytes 7F 10: jg 0x4fcfb0
        __asm _emit 0x7f
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 7905h
        mov dword ptr [ebp - 8], 7f85h
        ; Exact mapped bytes EB 6A: jmp 0x4fd01a
        __asm _emit 0xeb
        __asm _emit 0x6a
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 12: je 0x4fcfc8
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 8], 0c9h
        ; Exact mapped bytes 7C 19: jl 0x4fcfd8
        __asm _emit 0x7c
        __asm _emit 0x19
        cmp dword ptr [ebp + 8], 0d7h
        ; Exact mapped bytes 7F 10: jg 0x4fcfd8
        __asm _emit 0x7f
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 7904h
        mov dword ptr [ebp - 8], 7f84h
        ; Exact mapped bytes EB 42: jmp 0x4fd01a
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 12: je 0x4fcff0
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 8], 12dh
        ; Exact mapped bytes 7C 19: jl 0x4fd000
        __asm _emit 0x7c
        __asm _emit 0x19
        cmp dword ptr [ebp + 8], 20dh
        ; Exact mapped bytes 7F 10: jg 0x4fd000
        __asm _emit 0x7f
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 7903h
        mov dword ptr [ebp - 8], 7f86h
        ; Exact mapped bytes EB 1A: jmp 0x4fd01a
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes A1 F0 6D 68 00: mov eax, dword ptr [0x686df0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 30 BD 68 00: call dword ptr [0x68bd30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x4fd14d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 5C 6D 68 00: cmp ecx, dword ptr [0x686d5c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x4fd0e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 73 4A 03 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 15 60 6D 68 00: mov edx, dword ptr [0x686d60]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 64 6D 68 00: mov dword ptr [0x686d64], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 64 6D 68 00: mov edx, dword ptr [0x686d64]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 60 6D 68 00: mov dword ptr [0x686d60], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 6D 68 00 00: cmp dword ptr [0x686d60], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 69: jne 0x4fd0e1
        __asm _emit 0x75
        __asm _emit 0x69
        push 6752f0h
        push 675340h
        ; Exact mapped bytes E8 8E 35 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 83 3D 60 6D 68 00 00: cmp dword ptr [0x686d60], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x4fd0a7
        __asm _emit 0x74
        __asm _emit 0x14
        push 685h
        push 674fe8h
        ; Exact mapped bytes E8 9E BC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd0a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fd08a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 64 6D 68 00: mov dword ptr [0x686d64], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 64 6D 68 00 00: cmp dword ptr [0x686d64], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4fd0db
        __asm _emit 0x75
        __asm _emit 0x14
        push 687h
        push 674fe8h
        ; Exact mapped bytes E8 6A BC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd0db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fd0be
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 5C 6D 68 00: mov dword ptr [0x686d5c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 64 6D 68 00 00: cmp dword ptr [0x686d64], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4fd106
        __asm _emit 0x75
        __asm _emit 0x14
        push 68bh
        push 674fe8h
        ; Exact mapped bytes E8 3F BC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd106
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fd0e9
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 8B 15 64 6D 68 00: mov edx, dword ptr [0x686d64]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 30 BD 68 00: call dword ptr [0x68bd30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 64 6D 68 00: mov eax, dword ptr [0x686d64]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 14: jne 0x4fd137
        __asm _emit 0x75
        __asm _emit 0x14
        push 68dh
        push 674fe8h
        ; Exact mapped bytes E8 0E BC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd137
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4fd119
        __asm _emit 0x75
        __asm _emit 0xdc
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x4fd14d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 4C BC 68 00: call dword ptr [0x68bc4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 58 5D 04 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
