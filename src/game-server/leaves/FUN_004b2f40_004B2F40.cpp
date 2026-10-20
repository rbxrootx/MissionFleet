// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2F40 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_004b2f40_004B2F40() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 60 16 5D 00 FF: cmp dword ptr [0x5d1660], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x4b3045
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x4b2f65
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes A1 60 16 5D 00: mov eax, dword ptr [0x5d1660]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 24 23 5E 00: call dword ptr [0x5e2324]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x4b3036
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 11: je 0x4b2f89
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 24h]
        push eax
        ; Exact mapped bytes E8 3A 7D FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 11: je 0x4b2fa3
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes E8 20 7D FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 11: je 0x4b2fbd
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 30h]
        push eax
        ; Exact mapped bytes E8 06 7D FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 11: je 0x4b2fd7
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes E8 EC 7C FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 74 11: je 0x4b2ff1
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40h]
        push eax
        ; Exact mapped bytes E8 D2 7C FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 11: je 0x4b300b
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 44h]
        push eax
        ; Exact mapped bytes E8 B8 7C FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 50h], 5d1a00h
        ; Exact mapped bytes 74 11: je 0x4b3028
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 50h]
        push eax
        ; Exact mapped bytes E8 9B 7C FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8D 7C FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 0
        ; Exact mapped bytes 8B 15 60 16 5D 00: mov edx, dword ptr [0x5d1660]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 2C 23 5E 00: call dword ptr [0x5e232c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}
