// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873FB60 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_5873fb60_5873FB60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 01 D7 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5873fc0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 4E D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4e
        __asm _emit 0xd4
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
        cmp ecx, 6
        ; Exact mapped bytes 74 48: je 0x5873fbe1
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F 4E D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4e
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 7
        ; Exact mapped bytes 74 30: je 0x5873fbe1
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 4E D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4e
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 8
        ; Exact mapped bytes 74 18: je 0x5873fbe1
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 4E D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4e
        __asm _emit 0xd4
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
        ; Exact mapped bytes 75 21: jne 0x5873fc02
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 0A 76 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x76
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 7d0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 74 91 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x91
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0D: jmp 0x5873fc0d
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes EB 07: jmp 0x5873fc09
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5873fc0d
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5873fc0d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
    }
}
