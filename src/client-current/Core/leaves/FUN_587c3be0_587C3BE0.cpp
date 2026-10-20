// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3BE0 .. +0x16E bytes.
extern "C" __declspec(naked) void FUN_587c3be0_587C3BE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892464h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x587c3d3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 66: jne 0x587c3c7e
        __asm _emit 0x75
        __asm _emit 0x66
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 60: jne 0x587c3c7e
        __asm _emit 0x75
        __asm _emit 0x60
        push 0
        push 58965f94h
        push 0
        ; Exact mapped bytes E8 09 92 0B 00: call 0x5887ce35
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x587c3c3a
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 94 5F 96 58 00 00 00 00: mov dword ptr [0x58965f94], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3B: je 0x587c3c7e
        __asm _emit 0x74
        __asm _emit 0x3b
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 94 5F 96 58: mov ecx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 94 5F 96 58: mov eax, dword ptr [0x58965f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 7D 1E: jge 0x587c3c7e
        __asm _emit 0x7d
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 94 5F 96 58: mov edx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 94 5F 96 58: mov ecx, dword ptr [0x58965f94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 05 94 5F 96 58 00 00 00 00: mov dword ptr [0x58965f94], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 62: jne 0x587c3ce9
        __asm _emit 0x75
        __asm _emit 0x62
        push 0
        push 58965f98h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 98 91 0B 00: call 0x5887ce2f
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x587c3ca5
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 98 5F 96 58 00 00 00 00: mov dword ptr [0x58965f98], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3B: je 0x587c3ce9
        __asm _emit 0x74
        __asm _emit 0x3b
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 98 5F 96 58: mov edx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 98 5F 96 58: mov ecx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 7D 1D: jge 0x587c3ce9
        __asm _emit 0x7d
        __asm _emit 0x1d
        ; Exact mapped bytes A1 98 5F 96 58: mov eax, dword ptr [0x58965f98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 8B 15 98 5F 96 58: mov edx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ecx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes C7 05 98 5F 96 58 00 00 00 00: mov dword ptr [0x58965f98], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 9C 5F 96 58 00: cmp dword ptr [0x58965f9c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 44: jne 0x587c3d36
        __asm _emit 0x75
        __asm _emit 0x44
        push 14h
        ; Exact mapped bytes E8 0B D3 06 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0D: je 0x587c3d19
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3C 00 00 00: call 0x587c3d50
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c3d20
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 15 9C 5F 96 58: mov dword ptr [0x58965f9c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587c3d3f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
