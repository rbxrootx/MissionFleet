// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2E20 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_004c2e20_004C2E20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 18 F0 5D 00 00: cmp dword ptr [0x5df018], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x4c2eec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4ah
        push 58ce5ch
        push 2
        push 30h
        push 1
        ; Exact mapped bytes E8 FD 77 FE FF: call 0x4aa640
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x4c2e59
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x4c2f4c
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EE 00 00 00: call 0x4c2f50
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x4c2e8d
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 6E 03 00 00: call 0x4c31e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 40 7E FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x4c2f4c
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 A8 2A 5D 00: mov dword ptr [0x5d2aa8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 F0 5D 00: mov ecx, dword ptr [0x5df070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 14 03 00 00: call 0x4c31e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        ; Exact mapped bytes 8B 15 70 F0 5D 00: mov edx, dword ptr [0x5df070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 E3 7D FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 70 F0 5D 00: mov dword ptr [0x5df070], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 60: jmp 0x4c2f4c
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D A8 2A 5D 00: mov ecx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 89 15 78 2A 5D 00: mov dword ptr [0x5d2a78], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 2A 5D 00: mov eax, dword ptr [0x5d2aa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 89 0D 7C 2A 5D 00: mov dword ptr [0x5d2a7c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A8 2A 5D 00: mov edx, dword ptr [0x5d2aa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes A3 80 2A 5D 00: mov dword ptr [0x5d2a80], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 A8 2A 5D 00 78 2A 5D 00: mov dword ptr [0x5d2aa8], 0x5d2a78
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 F0 5D 00: mov ecx, dword ptr [0x5df070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 B4 02 00 00: call 0x4c31e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        ; Exact mapped bytes 8B 15 70 F0 5D 00: mov edx, dword ptr [0x5df070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 83 7D FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 70 F0 5D 00 00 00 00 00: mov dword ptr [0x5df070], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
