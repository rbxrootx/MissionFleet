// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9CB0 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_004a9cb0_004A9CB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d8h
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 B0 22 5E 00: call dword ptr [0x5e22b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 B4 22 5E 00: call dword ptr [0x5e22b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6]
        and edx, 0ffffh
        xor eax, eax
        ; Exact mapped bytes 66 A1 0A ED 5D 00: mov ax, word ptr [0x5ded0a]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0a
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp edx, eax
        ; Exact mapped bytes 75 66: jne 0x4a9d48
        __asm _emit 0x75
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 08 ED 5D 00: mov dx, word ptr [0x5ded08]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp ecx, edx
        ; Exact mapped bytes 75 50: jne 0x4a9d48
        __asm _emit 0x75
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 0ah]
        and eax, 0ffffh
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 06 ED 5D 00: mov cx, word ptr [0x5ded06]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 75 3B: jne 0x4a9d48
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 0eh]
        and edx, 0ffffh
        xor eax, eax
        ; Exact mapped bytes 66 A1 02 ED 5D 00: mov ax, word ptr [0x5ded02]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp edx, eax
        ; Exact mapped bytes 75 26: jne 0x4a9d48
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffffh
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 00 ED 5D 00: mov dx, word ptr [0x5ded00]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp ecx, edx
        ; Exact mapped bytes 75 10: jne 0x4a9d48
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes A1 F8 EC 5D 00: mov eax, dword ptr [0x5decf8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x4a9dd0
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0d0h]
        push ecx
        ; Exact mapped bytes FF 15 B8 22 5E 00: call dword ptr [0x5e22b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        cmp dword ptr [ebp - 0d4h], -1
        ; Exact mapped bytes 74 34: je 0x4a9d98
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [ebp - 0d4h], 2
        ; Exact mapped bytes 75 1F: jne 0x4a9d8c
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 36h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4a9d8c
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0C: je 0x4a9d8c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0d8h], 1
        ; Exact mapped bytes EB 0A: jmp 0x4a9d96
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes EB 0A: jmp 0x4a9da2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0ffffffffh
        mov eax, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes A3 F8 EC 5D 00: mov dword ptr [0x5decf8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 0D 00 ED 5D 00: mov dword ptr [0x5ded00], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 04 ED 5D 00: mov dword ptr [0x5ded04], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes A3 08 ED 5D 00: mov dword ptr [0x5ded08], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 0D 0C ED 5D 00: mov dword ptr [0x5ded0c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 1ah]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 1eh]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 22h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 24h]
        and edx, 0ffffh
        push edx
        ; Exact mapped bytes E8 0A B2 00 00: call 0x4b5020
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x4a9e2a
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
