// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A55D0 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_584a55d0_584A55D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 44: je 0x584a5627
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 38: je 0x584a5627
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 C7 13 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 9ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 9B 6A FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 0a0h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 8F 13 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 6C 6A FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 E9 6D FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 82 F3 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x584a570e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 C4 6D FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5D F3 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 74 7B: je 0x584a570e
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 24 00 00: call 0x584a7ae0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 24 00 00: call 0x584a7b90
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 17 00 00: call 0x584a6ea0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x584a56b2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 5C: jmp 0x584a570e
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 19 00 00: call 0x584a7030
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x584a56c0
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x584a570e
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 1D 00 00: call 0x584a73f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x584a56ce
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 40: jmp 0x584a570e
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 32h
        ; Exact mapped bytes 7C 1F: jl 0x584a56f9
        __asm _emit 0x7c
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 0F 00 00: call 0x584a65f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 08 00 00: call 0x584a5f10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 0
        ; Exact mapped bytes EB 15: jmp 0x584a570e
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
