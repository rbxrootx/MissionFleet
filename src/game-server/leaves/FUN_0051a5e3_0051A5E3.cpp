// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A5E3 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_0051a5e3_0051A5E3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 07: jne 0x51a5fc
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x51a73a
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 1C 27 5E 00: call dword ptr [0x5e271c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D0 2A 02 00: call 0x53d0e2
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2F 15 02 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E6 A5 FD FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 43 24 02 00: call 0x53ca73
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D7 A5 FD FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 11: je 0x51a661
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 C7 4A F7 FF: call 0x48f120
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4a
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x51a668
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0B: je 0x51a67f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 10 27 5E 00: call dword ptr [0x5e2710]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 75 23: jne 0x51a6a2
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 75 06: jne 0x51a690
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D8 E8 5D 00: mov ecx, dword ptr [0x5de8d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 78 25 5E 00: call dword ptr [0x5e2578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x51a729
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 22: je 0x51a6ca
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x51a6ca
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 14: jne 0x51a6ca
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 3B 00 01 00: call 0x52a701
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x51a6ec
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 07: je 0x51a6d9
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 06: jne 0x51a6ea
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 3D: jmp 0x51a729
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 09: je 0x51a704
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 25: jmp 0x51a729
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 0D: je 0x51a71c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 18 27 5E 00: call dword ptr [0x5e2718]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 DC E8 5D 00: mov edx, dword ptr [0x5de8dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
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
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x51a737
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
