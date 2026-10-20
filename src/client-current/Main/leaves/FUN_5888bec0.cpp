// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888BEC0 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_5888bec0() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        push esi
        mov edx, 500h
        push edi
        mov edi, 2
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 24: je 0x5888bf01
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov edx, 400h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 0E: je 0x5888bf01
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 85 C2: test dx, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc2
        ; Exact mapped bytes 75 26: jne 0x5888bf27
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 49 24 01: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
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
        ; Exact mapped bytes 66 83 49 24 04: or word ptr [ecx + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 60h]
        mov eax, 0fh
        ; Exact mapped bytes 66 09 42 24: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 66 09 42 24: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 66 09 42 24: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 66 09 42 24: or word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 70h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 74h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 78h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 84h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        lea edx, [ecx + 70h]
        mov esi, 4
        ; Exact mapped bytes EB 07: jmp 0x5888bf90
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        add edx, 4
        sub esi, 1
        ; Exact mapped bytes 75 ED: jne 0x5888bf90
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 150h]
        mov edx, edi
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
    }
}
