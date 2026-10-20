// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC1A0 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_004bc1a0_004BC1A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 50 F0 5D 00 00: cmp dword ptr [0x5df050], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 5D: jne 0x4bc213
        __asm _emit 0x75
        __asm _emit 0x5d
        push 58c51ch
        ; Exact mapped bytes FF 15 28 24 5E 00: call dword ptr [0x5e2428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1D: je 0x4bc1e7
        __asm _emit 0x74
        __asm _emit 0x1d
        push 58cd60h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 50 F0 5D 00: mov dword ptr [0x5df050], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 50 F0 5D 00 00: cmp dword ptr [0x5df050], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x4bc1eb
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6C: jmp 0x4bc257
        __asm _emit 0xeb
        __asm _emit 0x6c
        push 58cd50h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 54 F0 5D 00: mov dword ptr [0x5df054], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push 58cd3ch
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 58 F0 5D 00: mov dword ptr [0x5df058], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 F0 5D 00 00: cmp dword ptr [0x5df054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x4bc225
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes FF 15 54 F0 5D 00: call dword ptr [0x5df054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 16: je 0x4bc241
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 83 3D 58 F0 5D 00 00: cmp dword ptr [0x5df058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x4bc241
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 58 F0 5D 00: call dword ptr [0x5df058]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 50 F0 5D 00: call dword ptr [0x5df050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
