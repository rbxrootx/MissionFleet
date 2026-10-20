// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B9080 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_004b9080_004B9080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes 83 3D 68 02 5E 00 00: cmp dword ptr [0x5e0268], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4b9094
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 EC 5C FF FF: call 0x4aed80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes A1 24 ED 5D 00: mov eax, dword ptr [0x5ded24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 2C: je 0x4b90d9
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 3dh
        ; Exact mapped bytes 74 09: je 0x4b90c1
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 06 03 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB CA: jmp 0x4b90a3
        __asm _emit 0xeb
        __asm _emit 0xca
        push 6dh
        push 58c930h
        push 2
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax*4 + 4]
        push ecx
        ; Exact mapped bytes E8 3E 11 FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 78 ED 5D 00: mov dword ptr [0x5ded78], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 ED 5D 00 00: cmp dword ptr [0x5ded78], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x4b9114
        __asm _emit 0x75
        __asm _emit 0x0a
        push 9
        ; Exact mapped bytes E8 2F 3C FF FF: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A1 24 ED 5D 00: mov eax, dword ptr [0x5ded24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4b9127
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 66: je 0x4b9197
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 96 02 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 3dh
        ; Exact mapped bytes 74 47: je 0x4b9195
        __asm _emit 0x74
        __asm _emit 0x47
        push 79h
        push 58c930h
        push 2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D0 10 FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 0A: jne 0x4b917a
        __asm _emit 0x75
        __asm _emit 0x0a
        push 9
        ; Exact mapped bytes E8 C9 3B FF FF: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 B7 0C FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 87: jmp 0x4b911e
        __asm _emit 0xeb
        __asm _emit 0x87
        push 2
        ; Exact mapped bytes 8B 15 24 ED 5D 00: mov edx, dword ptr [0x5ded24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 1B 1B FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 24 ED 5D 00 00 00 00 00: mov dword ptr [0x5ded24], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 0
        ; Exact mapped bytes C7 05 64 02 5E 00 01 00 00 00: mov dword ptr [0x5e0264], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
