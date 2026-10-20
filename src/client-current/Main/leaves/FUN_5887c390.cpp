// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C390 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_5887c390() {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 94h], 1
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x5887c439
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        movzx eax, word ptr [ecx + 2]
        mov edx, 0ddh
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 1D: je 0x5887c3d1
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, 0deh
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 13: je 0x5887c3d1
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, 0dfh
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 09: je 0x5887c3d1
        __asm _emit 0x74
        __asm _emit 0x09
        push 0ffh
        push 0
        ; Exact mapped bytes EB 4C: jmp 0x5887c41d
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, dword ptr [esi + 60h]
        ; Exact mapped bytes 66 8B 50 7C: mov dx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7c
        ; Exact mapped bytes A1 E4 45 A2 58: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 42: inc dx
        __asm _emit 0x66
        __asm _emit 0x42
        ; Exact mapped bytes 66 89 54 24 04: mov word ptr [esp + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        mov edx, dword ptr [eax + 74h]
        movzx eax, word ptr [edx + 2]
        cmp eax, 0ddh
        ; Exact mapped bytes 74 1A: je 0x5887c40c
        __asm _emit 0x74
        __asm _emit 0x1a
        add eax, 0ffffff22h
        cmp eax, 1
        ; Exact mapped bytes 77 17: ja 0x5887c413
        __asm _emit 0x77
        __asm _emit 0x17
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 8B 50 7C: mov dx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7c
        ; Exact mapped bytes 66 42: inc dx
        __asm _emit 0x66
        __asm _emit 0x42
        ; Exact mapped bytes 66 89 54 24 06: mov word ptr [esp + 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x06
        ; Exact mapped bytes EB 07: jmp 0x5887c413
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes 66 89 44 24 06: mov word ptr [esp + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x06
        mov edx, dword ptr [esp + 6]
        mov eax, dword ptr [esp + 4]
        push edx
        push eax
        push ecx
        add ecx, 4
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 DC F3 FF: call 0x587ba0c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdc
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, 7dh
        ; Exact mapped bytes 66 89 8E 92 00 00 00: mov word ptr [esi + 0x92], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 8
        ret
    }
}
