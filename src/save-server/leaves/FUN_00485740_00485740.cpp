// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485740 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_00485740_00485740() {
    __asm {
        push esi
        push 688de0h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 689aa0h
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 06: je 0x48575c
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [eax], 0
        add eax, 18h
        cmp eax, 689b30h
        ; Exact mapped bytes 72 EB: jb 0x485751
        __asm _emit 0x72
        __asm _emit 0xeb
        ; Exact mapped bytes E8 55 EF FF FF: call 0x4846c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 3D 48 90 68 00 00: cmp word ptr [0x689048], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x485786
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 A1 48 90 68 00: mov ax, word ptr [0x689048]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 F4 B9 68 00: mov esi, dword ptr [0x68b9f4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes EB 06: jmp 0x48578c
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 35 F4 B9 68 00: mov esi, dword ptr [0x68b9f4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3D 4E 90 68 00 00: cmp word ptr [0x68904e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x48579f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 4E 90 68 00: mov ax, word ptr [0x68904e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 4C 90 68 00 00: cmp word ptr [0x68904c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4857b2
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 4C 90 68 00: mov ax, word ptr [0x68904c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 4A 90 68 00 00: cmp word ptr [0x68904a], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4a
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4857c5
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 4A 90 68 00: mov ax, word ptr [0x68904a]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4a
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 52 90 68 00 00: cmp word ptr [0x689052], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x52
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4857d8
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 52 90 68 00: mov ax, word ptr [0x689052]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x52
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 50 90 68 00 00: cmp word ptr [0x689050], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4857eb
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 50 90 68 00: mov ax, word ptr [0x689050]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 54 90 68 00 00: cmp word ptr [0x689054], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4857fe
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 A1 54 90 68 00: mov ax, word ptr [0x689054]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes C7 05 40 90 68 00 00 00 00 00: mov dword ptr [0x689040], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 688de0h
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop esi
        ret
    }
}
