// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053D60 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_10053d60_10053D60() {
    __asm {
        push esi
        push edi
        lea eax, [ecx + 194h]
        mov esi, 19h
        mov edi, 0fffeh
        mov edx, dword ptr [eax - 64h]
        add eax, 4
        ; Exact mapped bytes 66 21 7A 24: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7a
        __asm _emit 0x24
        mov edx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 7A 24: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7a
        __asm _emit 0x24
        dec esi
        ; Exact mapped bytes 75 EC: jne 0x10053d72
        __asm _emit 0x75
        __asm _emit 0xec
        cmp dword ptr [ecx + 0fch], 0c8h
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x10053e61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 AA 09 00 00: mov ax, word ptr [ecx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3C 45 7E 93 19 10 00: cmp word ptr [eax*2 + 0x1019937e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0x7e
        __asm _emit 0x93
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x10053e61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax*8 + 101993b0h]
        or edi, 0ffffffffh
        cmp edx, edi
        mov esi, 1
        ; Exact mapped bytes 74 4A: je 0x10053e0b
        __asm _emit 0x74
        __asm _emit 0x4a
        push ebx
        xor edx, edx
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 AA 09 00 00: mov ax, word ptr [ecx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax*8 + 101993b0h]
        lea ebx, [edx + eax*4]
        add eax, ebx
        mov eax, dword ptr [ecx + eax*4 + 130h]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 AA 09 00 00: mov ax, word ptr [ecx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax*8 + 101993b0h]
        lea ebx, [edx + eax*4]
        add eax, ebx
        mov eax, dword ptr [ecx + eax*4 + 194h]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        inc edx
        cmp edx, 5
        ; Exact mapped bytes 7C BA: jl 0x10053dc4
        __asm _emit 0x7c
        __asm _emit 0xba
        pop ebx
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 AA 09 00 00: mov dx, word ptr [ecx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx*8 + 101993b4h], edi
        ; Exact mapped bytes 74 44: je 0x10053e61
        __asm _emit 0x74
        __asm _emit 0x44
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 AA 09 00 00: mov dx, word ptr [ecx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx*8 + 101993b4h]
        add edx, eax
        mov edx, dword ptr [ecx + edx*4 + 130h]
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 AA 09 00 00: mov dx, word ptr [ecx + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx*8 + 101993b4h]
        add edx, eax
        add eax, 5
        mov edx, dword ptr [ecx + edx*4 + 194h]
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        cmp eax, 19h
        ; Exact mapped bytes 7C BE: jl 0x10053e1f
        __asm _emit 0x7c
        __asm _emit 0xbe
        pop edi
        pop esi
        ret
    }
}
