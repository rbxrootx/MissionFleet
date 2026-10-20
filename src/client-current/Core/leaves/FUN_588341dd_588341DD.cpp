// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588341DD .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_588341dd_588341DD() {
    __asm {
        ; Exact mapped bytes 80 3D 94 7D 96 58 00: cmp byte ptr [0x58967d94], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x588341ea
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        inc eax
        ret
        ; Exact mapped bytes 80 3D 97 7D 96 58 00: cmp byte ptr [0x58967d97], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x97
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x588341f7
        __asm _emit 0x75
        __asm _emit 0x04
        push 2
        pop eax
        ret
        ; Exact mapped bytes A1 74 41 89 58: mov eax, dword ptr [0x58894174]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push esi
        xor esi, esi
        ; Exact mapped bytes 39 05 08 84 96 58: cmp dword ptr [0x58968408], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 29: je 0x58834230
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 39 35 EC 83 96 58: cmp dword ptr [0x589683ec], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1E: je 0x5883422d
        __asm _emit 0x74
        __asm _emit 0x1e
        push eax
        push 588f16a4h
        ; Exact mapped bytes E8 39 81 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 60 5E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor esi, esi
        inc esi
        ; Exact mapped bytes A1 B8 42 89 58: mov eax, dword ptr [0x588942b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 04 84 96 58: cmp dword ptr [0x58968404], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 28: je 0x58834265
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x58834264
        __asm _emit 0x74
        __asm _emit 0x1e
        push eax
        push 588f16b8h
        ; Exact mapped bytes E8 02 81 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 29 5E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        inc esi
        ; Exact mapped bytes A1 24 45 89 58: mov eax, dword ptr [0x58894524]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 0C 84 96 58: cmp dword ptr [0x5896840c], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 28: je 0x5883429a
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x58834299
        __asm _emit 0x74
        __asm _emit 0x1e
        push eax
        push 588f16cch
        ; Exact mapped bytes E8 CD 80 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 F4 5D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        inc esi
        xor eax, eax
        test esi, esi
        pop esi
        sete al
        ret
    }
}
