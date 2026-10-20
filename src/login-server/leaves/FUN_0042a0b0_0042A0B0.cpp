// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A0B0 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_0042a0b0_0042A0B0() {
    __asm {
        push esi
        push 4513e0h
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, 451e60h
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 06: je 0x42a0cc
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [eax], 0
        add eax, 18h
        cmp eax, 451ef0h
        ; Exact mapped bytes 72 EB: jb 0x42a0c1
        __asm _emit 0x72
        __asm _emit 0xeb
        ; Exact mapped bytes E8 15 F0 FF FF: call 0x4290f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 3D 08 14 45 00 00: cmp word ptr [0x451408], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x42a0f6
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 A1 08 14 45 00: mov ax, word ptr [0x451408]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 00 C2 43 00: mov esi, dword ptr [0x43c200]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes EB 06: jmp 0x42a0fc
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 35 00 C2 43 00: mov esi, dword ptr [0x43c200]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3D 0E 14 45 00 00: cmp word ptr [0x45140e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x42a10f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 0E 14 45 00: mov ax, word ptr [0x45140e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 0C 14 45 00 00: cmp word ptr [0x45140c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x42a122
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 0C 14 45 00: mov ax, word ptr [0x45140c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 0A 14 45 00 00: cmp word ptr [0x45140a], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x42a135
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 0A 14 45 00: mov ax, word ptr [0x45140a]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 12 14 45 00 00: cmp word ptr [0x451412], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x42a148
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 12 14 45 00: mov ax, word ptr [0x451412]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 10 14 45 00 00: cmp word ptr [0x451410], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x42a15b
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 10 14 45 00: mov ax, word ptr [0x451410]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 14 14 45 00 00: cmp word ptr [0x451414], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x42a16e
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 14 14 45 00: mov ax, word ptr [0x451414]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes C7 05 00 14 45 00 00 00 00 00: mov dword ptr [0x451400], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4513e0h
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        ret
    }
}
