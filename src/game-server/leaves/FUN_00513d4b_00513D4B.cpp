// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513D4B .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_00513d4b_00513D4B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 9
        ; Exact mapped bytes E8 7C 3F 03 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 0C: je 0x513d70
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 65h
        ; Exact mapped bytes 7C 16: jl 0x513d80
        __asm _emit 0x7c
        __asm _emit 0x16
        cmp dword ptr [ebp + 8], 73h
        ; Exact mapped bytes 7F 10: jg 0x513d80
        __asm _emit 0x7f
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 7905h
        mov dword ptr [ebp - 8], 7f85h
        ; Exact mapped bytes EB 6A: jmp 0x513dea
        __asm _emit 0xeb
        __asm _emit 0x6a
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 12: je 0x513d98
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 8], 0c9h
        ; Exact mapped bytes 7C 19: jl 0x513da8
        __asm _emit 0x7c
        __asm _emit 0x19
        cmp dword ptr [ebp + 8], 0d7h
        ; Exact mapped bytes 7F 10: jg 0x513da8
        __asm _emit 0x7f
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 7904h
        mov dword ptr [ebp - 8], 7f84h
        ; Exact mapped bytes EB 42: jmp 0x513dea
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 12: je 0x513dc0
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 8], 12dh
        ; Exact mapped bytes 7C 19: jl 0x513dd0
        __asm _emit 0x7c
        __asm _emit 0x19
        cmp dword ptr [ebp + 8], 20dh
        ; Exact mapped bytes 7F 10: jg 0x513dd0
        __asm _emit 0x7f
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 7903h
        mov dword ptr [ebp - 8], 7f86h
        ; Exact mapped bytes EB 1A: jmp 0x513dea
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes A1 D8 E8 5D 00: mov eax, dword ptr [0x5de8d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 78 25 5E 00: call dword ptr [0x5e2578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x513f1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 0C E8 5D 00: cmp ecx, dword ptr [0x5de80c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x513eb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 33 17 02 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 15 10 E8 5D 00: mov edx, dword ptr [0x5de810]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 14 E8 5D 00: mov dword ptr [0x5de814], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 14 E8 5D 00: mov edx, dword ptr [0x5de814]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 10 E8 5D 00: mov dword ptr [0x5de810], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 10 E8 5D 00 00: cmp dword ptr [0x5de810], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 69: jne 0x513eb1
        __asm _emit 0x75
        __asm _emit 0x69
        push 5c87b8h
        push 5c8808h
        ; Exact mapped bytes E8 BE BD FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 83 3D 10 E8 5D 00 00: cmp dword ptr [0x5de810], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x513e77
        __asm _emit 0x74
        __asm _emit 0x14
        push 685h
        push 5c84b0h
        ; Exact mapped bytes E8 8E 0B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513e77
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x513e5a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 14 E8 5D 00: mov dword ptr [0x5de814], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 E8 5D 00 00: cmp dword ptr [0x5de814], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x513eab
        __asm _emit 0x75
        __asm _emit 0x14
        push 687h
        push 5c84b0h
        ; Exact mapped bytes E8 5A 0B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513eab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x513e8e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 0C E8 5D 00: mov dword ptr [0x5de80c], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 E8 5D 00 00: cmp dword ptr [0x5de814], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x513ed6
        __asm _emit 0x75
        __asm _emit 0x14
        push 68bh
        push 5c84b0h
        ; Exact mapped bytes E8 2F 0B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513ed6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x513eb9
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 8B 15 14 E8 5D 00: mov edx, dword ptr [0x5de814]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 78 25 5E 00: call dword ptr [0x5e2578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 E8 5D 00: mov eax, dword ptr [0x5de814]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 14: jne 0x513f07
        __asm _emit 0x75
        __asm _emit 0x14
        push 68dh
        push 5c84b0h
        ; Exact mapped bytes E8 FE 0A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513f07
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x513ee9
        __asm _emit 0x75
        __asm _emit 0xdc
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x513f1d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 54 25 5E 00: call dword ptr [0x5e2554]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 E8 3E 03 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x03
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
