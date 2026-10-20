// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3DF0 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_587c3df0_587C3DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x587c3f05
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 F3 8F 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], 24h
        mov dword ptr [ebp - 24h], 11h
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x587c3e61
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        push 58965fa8h
        lea ecx, [ebp - 28h]
        push ecx
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
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x587c3e61
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x587c3f1b
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A8 5F 96 58 00: cmp dword ptr [0x58965fa8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4D: je 0x587c3eb7
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 2ch]
        add eax, 10h
        push eax
        push 588d1a38h
        ; Exact mapped bytes 8B 0D A8 5F 96 58: mov ecx, dword ptr [0x58965fa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 A8 5F 96 58: mov eax, dword ptr [0x58965fa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 7D 2B: jge 0x587c3eb7
        __asm _emit 0x7d
        __asm _emit 0x2b
        ; Exact mapped bytes 83 3D A8 5F 96 58 00: cmp dword ptr [0x58965fa8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x587c3eb3
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 A8 5F 96 58: mov edx, dword ptr [0x58965fa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D A8 5F 96 58: mov ecx, dword ptr [0x58965fa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 05 A8 5F 96 58 00 00 00 00: mov dword ptr [0x58965fa8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 64: jmp 0x587c3f1b
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 1C: je 0x587c3edc
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        ; Exact mapped bytes 83 3D A8 5F 96 58 00: cmp dword ptr [0x58965fa8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x587c3f03
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 A8 5F 96 58: mov edx, dword ptr [0x58965fa8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D A8 5F 96 58: mov ecx, dword ptr [0x58965fa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 05 A8 5F 96 58 00 00 00 00: mov dword ptr [0x58965fa8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x587c3f19
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 A8 5F 96 58 00 00 00 00: mov dword ptr [0x58965fa8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 10h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2B D1 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd1
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
