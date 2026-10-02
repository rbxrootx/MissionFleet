// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856E0D0 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_5856e0d0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes 0F B6 05 2C 22 96 58: movzx eax, byte ptr [0x5896222c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x5856e234
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x5856e126
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x5856e115
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856e11c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes C7 05 94 75 94 58 00 00 00 00: mov dword ptr [0x58947594], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 75 94 58 00: cmp dword ptr [0x58947598], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x5856e167
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 15 98 75 94 58: mov edx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 18: je 0x5856e156
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856e15d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes C7 05 98 75 94 58 00 00 00 00: mov dword ptr [0x58947598], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 27 F9 FF: call 0x585008c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x27
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1D 2C F9 FF: call 0x58500d90
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E8 48 27 F9 FF: call 0x585008c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x27
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 2C F9 FF: call 0x58500db0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes E8 D4 99 2E 00: call 0x58857b5a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x99
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        mov eax, 1
        imul ecx, eax, 0
        mov byte ptr [ecx + 589604e0h], 41h
        mov edx, 1
        shl edx, 0
        mov byte ptr [edx + 589604e0h], 0
        ; Exact mapped bytes C6 05 2C 22 96 58 01: mov byte ptr [0x5896222c], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 83 3D 24 5F 96 58 00: cmp dword ptr [0x58965f24], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 36: je 0x5856e1eb
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes A1 24 5F 96 58: mov eax, dword ptr [0x58965f24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5856e1da
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856e1e1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes C7 05 24 5F 96 58 00 00 00 00: mov dword ptr [0x58965f24], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 28 22 96 58 00: cmp dword ptr [0x58962228], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x5856e22b
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 28 22 96 58: mov ecx, dword ptr [0x58962228]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x5856e21a
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856e221
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes C7 05 28 22 96 58 00 00 00 00: mov dword ptr [0x58962228], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
