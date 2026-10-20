// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3D30 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_004c3d30_004C3D30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A1 05 00 00: call 0x4c42e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        push 78h
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 AC F0 5D 00: mov edx, dword ptr [0x5df0ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        sbb edx, edx
        and edx, 0fffff002h
        add edx, 1001h
        push edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c3d84
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 B8 F0 5D 00 00 00 00 00: mov dword ptr [0x5df0b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x4c3e49
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 78h]
        push ecx
        ; Exact mapped bytes 8B 15 B0 F0 5D 00: mov edx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 8C 69 FF FF: call 0x4ba720
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 3E: jne 0x4c3dd9
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 83 3D AC F0 5D 00 00: cmp dword ptr [0x5df0ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x4c3db6
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 C1 02 00 00: call 0x4c4070
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x4c3dd7
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 0D BC F0 5D 00: mov dword ptr [0x5df0bc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 BC F0 5D 00: mov edx, dword ptr [0x5df0bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 A0 F0 5D 00: mov dword ptr [0x5df0a0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or al, 4
        ; Exact mapped bytes A3 B8 F0 5D 00: mov dword ptr [0x5df0b8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x4c3e3c
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 83 3D AC F0 5D 00 00: cmp dword ptr [0x5df0ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 5A: jne 0x4c3e3c
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 83 3D A8 F0 5D 00 00: cmp dword ptr [0x5df0a8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x4c3e3c
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D A8 F0 5D 00: mov ecx, dword ptr [0x5df0a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        lea edx, [ebp - 78h]
        push edx
        ; Exact mapped bytes A1 B0 F0 5D 00: mov eax, dword ptr [0x5df0b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 8F 2E 00 00: call 0x4c6c90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x4c3e3c
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        ; Exact mapped bytes E8 5D 02 00 00: call 0x4c4070
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x4c3e3c
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 15 BC F0 5D 00: mov dword ptr [0x5df0bc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 BC F0 5D 00: mov eax, dword ptr [0x5df0bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A3 A0 F0 5D 00: mov dword ptr [0x5df0a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B8 F0 5D 00: mov ecx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        or ecx, 4
        ; Exact mapped bytes 89 0D B8 F0 5D 00: mov dword ptr [0x5df0b8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 F0 5D 00: mov eax, dword ptr [0x5df0b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        neg eax
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
