// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B3F0 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_5886b3f0() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 0e1ffh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 1
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 49 24 04: or word ptr [ecx + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, dword ptr [ecx + 60h]
        mov dword ptr [ecx + 50h], 0fah
        mov eax, dword ptr [eax + 0a4h]
        shr eax, 1
        cmp eax, 51h
        ; Exact mapped bytes 74 12: je 0x5886b43f
        __asm _emit 0x74
        __asm _emit 0x12
        cmp eax, 52h
        ; Exact mapped bytes 75 08: jne 0x5886b43a
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ret
        cmp eax, 53h
        ; Exact mapped bytes 75 08: jne 0x5886b447
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ret
        cmp eax, 56h
        ; Exact mapped bytes 75 08: jne 0x5886b454
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ret
        cmp eax, 58h
        ; Exact mapped bytes 75 09: jne 0x5886b462
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ecx + 70h]
        push edx
        ; Exact mapped bytes E8 8E 61 EC FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x61
        __asm _emit 0xec
        __asm _emit 0xff
        ret
    }
}
