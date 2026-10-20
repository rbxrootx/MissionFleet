// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA005 .. +0x1EB bytes.
extern "C" __declspec(naked) void FUN_004fa005_004FA005() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1A: jne 0x4fa031
        __asm _emit 0x75
        __asm _emit 0x1a
        push 41h
        push 0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 AD 83 03 00: call 0x5323d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 52 23 03 00: call 0x52c37e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x4fa1e7
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 21eh
        push 674fe8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1C 02 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 0F 87 38 01 00 00: ja 0x4fa1a6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 95 F0 A1 4F 00: jmp dword ptr [edx*4 + 0x4fa1f0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xa1
        __asm _emit 0x4f
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4fa095
        __asm _emit 0x75
        __asm _emit 0x14
        push 225h
        push 674fe8h
        ; Exact mapped bytes E8 B0 EC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa095
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fa078
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 8B 0D E0 6D 68 00: mov ecx, dword ptr [0x686de0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 DC 6D 68 00: mov edx, dword ptr [0x686ddc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 11 83 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A 30 02 00: call 0x51d0f4
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 28 84 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 6D 68 00: mov eax, dword ptr [0x686dd8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D E8 6D 68 00: mov ecx, dword ptr [0x686de8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E7 82 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 30 02 00: call 0x51d0f4
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x4fa1e7
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x4fa106
        __asm _emit 0x74
        __asm _emit 0x14
        push 22ch
        push 674fe8h
        ; Exact mapped bytes E8 3F EC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa106
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fa0e9
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x4fa1c9
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 56: je 0x4fa170
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes A1 E8 6D 68 00: mov eax, dword ptr [0x686de8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D D8 6D 68 00: mov ecx, dword ptr [0x686dd8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 93 82 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC 2F 02 00: call 0x51d0f4
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AA 83 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 DC 6D 68 00: mov edx, dword ptr [0x686ddc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes A1 E0 6D 68 00: mov eax, dword ptr [0x686de0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 69 82 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 2F 02 00: call 0x51d0f4
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 80 83 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 59: jmp 0x4fa1c9
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2B: jne 0x4fa1a4
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D DC 6D 68 00: mov ecx, dword ptr [0x686ddc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 E0 6D 68 00: mov edx, dword ptr [0x686de0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 33 82 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C 2F 02 00: call 0x51d0f4
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4A 83 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x4fa1c9
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4fa1c3
        __asm _emit 0x74
        __asm _emit 0x14
        push 242h
        push 674fe8h
        ; Exact mapped bytes E8 82 EB 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa1c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fa1a6
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 8B 15 D8 6D 68 00: mov edx, dword ptr [0x686dd8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E4 81 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 2D 02 00: call 0x51cfe6
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
