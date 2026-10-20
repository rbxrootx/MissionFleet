// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CAD00 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_004cad00_004CAD00() {
    __asm {
        push esi
        push 5e04c0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 5e0f40h
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 06: je 0x4cad1c
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [eax], 0
        add eax, 18h
        cmp eax, 5e0fd0h
        ; Exact mapped bytes 72 EB: jb 0x4cad11
        __asm _emit 0x72
        __asm _emit 0xeb
        ; Exact mapped bytes E8 55 EF FF FF: call 0x4c9c80
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 3D E8 04 5E 00 00: cmp word ptr [0x5e04e8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4cad46
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 A1 E8 04 5E 00: mov ax, word ptr [0x5e04e8]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 A4 23 5E 00: mov esi, dword ptr [0x5e23a4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes EB 06: jmp 0x4cad4c
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 35 A4 23 5E 00: mov esi, dword ptr [0x5e23a4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3D EE 04 5E 00 00: cmp word ptr [0x5e04ee], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4cad5f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 EE 04 5E 00: mov ax, word ptr [0x5e04ee]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D EC 04 5E 00 00: cmp word ptr [0x5e04ec], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4cad72
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 EC 04 5E 00: mov ax, word ptr [0x5e04ec]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D EA 04 5E 00 00: cmp word ptr [0x5e04ea], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4cad85
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 EA 04 5E 00: mov ax, word ptr [0x5e04ea]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D F2 04 5E 00 00: cmp word ptr [0x5e04f2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4cad98
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 F2 04 5E 00: mov ax, word ptr [0x5e04f2]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D F0 04 5E 00 00: cmp word ptr [0x5e04f0], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4cadab
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 F0 04 5E 00: mov ax, word ptr [0x5e04f0]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D F4 04 5E 00 00: cmp word ptr [0x5e04f4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4cadbe
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 F4 04 5E 00: mov ax, word ptr [0x5e04f4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes C7 05 E0 04 5E 00 00 00 00 00: mov dword ptr [0x5e04e0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5e04c0h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        pop esi
        ret
    }
}
