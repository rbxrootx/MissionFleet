// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834159 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58834159_58834159() {
    __asm {
        ; Exact mapped bytes 80 3D 18 84 96 58 00: cmp byte ptr [0x58968418], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x58834166
        __asm _emit 0x75
        __asm _emit 0x04
        push 2
        pop eax
        ret
        ; Exact mapped bytes A1 30 45 89 58: mov eax, dword ptr [0x58894530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push esi
        xor esi, esi
        ; Exact mapped bytes 39 05 10 84 96 58: cmp dword ptr [0x58968410], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 29: je 0x5883419f
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 39 35 EC 83 96 58: cmp dword ptr [0x589683ec], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1E: je 0x5883419c
        __asm _emit 0x74
        __asm _emit 0x1e
        push eax
        push 588f1768h
        ; Exact mapped bytes E8 CA 81 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xca
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
        ; Exact mapped bytes E8 F1 5E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor esi, esi
        inc esi
        ; Exact mapped bytes A1 40 45 89 58: mov eax, dword ptr [0x58894540]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 14 84 96 58: cmp dword ptr [0x58968414], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 28: je 0x588341d4
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
        ; Exact mapped bytes 74 1E: je 0x588341d3
        __asm _emit 0x74
        __asm _emit 0x1e
        push eax
        push 588f1780h
        ; Exact mapped bytes E8 93 81 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x93
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
        ; Exact mapped bytes E8 BA 5E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5e
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
