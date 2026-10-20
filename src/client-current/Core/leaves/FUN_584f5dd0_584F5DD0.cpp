// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F5DD0 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_584f5dd0_584F5DD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, 14h
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, 14h
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 14h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f5e16
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 8D AC 00 00 00: jge 0x584f5ece
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 4], 0ach
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + ecx + 2]
        cmp eax, 6ch
        ; Exact mapped bytes 74 28: je 0x584f5e5e
        __asm _emit 0x74
        __asm _emit 0x28
        imul ecx, dword ptr [ebp - 4], 0ach
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + ecx + 2]
        cmp eax, 6dh
        ; Exact mapped bytes 74 14: je 0x584f5e5e
        __asm _emit 0x74
        __asm _emit 0x14
        imul ecx, dword ptr [ebp - 4], 0ach
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + ecx + 2]
        cmp eax, 6eh
        ; Exact mapped bytes 75 0C: jne 0x584f5e6a
        __asm _emit 0x75
        __asm _emit 0x0c
        push 588a2b6ch
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        movzx ecx, word ptr [ebp + 8]
        imul edx, dword ptr [ebp - 4], 0ach
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 94 10 9A 00 00 00: mov dx, word ptr [eax + edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x10
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp ecx, eax
        ; Exact mapped bytes 75 3A: jne 0x584f5ec9
        __asm _emit 0x75
        __asm _emit 0x3a
        movzx ecx, word ptr [ebp + 0ch]
        imul edx, dword ptr [ebp - 4], 0ach
        mov eax, dword ptr [ebp - 8]
        movzx edx, word ptr [eax + edx + 0a2h]
        cmp ecx, edx
        ; Exact mapped bytes 75 20: jne 0x584f5ec9
        __asm _emit 0x75
        __asm _emit 0x20
        imul eax, dword ptr [ebp - 4], 0ach
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax + 6ch], 1
        ; Exact mapped bytes 75 0F: jne 0x584f5ec9
        __asm _emit 0x75
        __asm _emit 0x0f
        imul edx, dword ptr [ebp - 4], 0ach
        add edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 05: jmp 0x584f5ece
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3F FF FF FF: jmp 0x584f5e0d
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
