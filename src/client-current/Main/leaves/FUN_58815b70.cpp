// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58815B70 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_58815b70() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 19ch], edx
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 1ach], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 1a0h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 1b0h], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 1a4h], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 1b4h], edx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 1a8h], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 1b8h], eax
        mov edx, dword ptr [ecx + 198h]
        cmp dword ptr [edx + 0cd0h], 0
        push esi
        ; Exact mapped bytes 74 1A: je 0x58815be4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ecx + 124h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, 0fff1h
        ; Exact mapped bytes 66 23 D6: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 198h]
        cmp dword ptr [eax + 0cd4h], 0
        ; Exact mapped bytes 74 1A: je 0x58815c0d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ecx + 128h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, 0fff1h
        ; Exact mapped bytes 66 23 D6: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 198h]
        cmp dword ptr [eax + 0cdch], 0
        ; Exact mapped bytes 74 1A: je 0x58815c36
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ecx + 12ch]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, 0fff1h
        ; Exact mapped bytes 66 23 D6: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 198h]
        cmp dword ptr [eax + 0cd8h], 0
        ; Exact mapped bytes 74 1A: je 0x58815c5f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ecx + 130h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, 0fff1h
        ; Exact mapped bytes 66 23 D6: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 134h]
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 0fff1h
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 66 83 C8 01: or ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
