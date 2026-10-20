// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876DF00 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_5876df00() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 0e4ffh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov edx, 400h
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
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        xor eax, eax
        mov dword ptr [ecx + 84h], eax
        mov byte ptr [ecx + 94h], al
        mov byte ptr [ecx + 96h], al
        mov dword ptr [ecx + 8ch], eax
        cmp byte ptr [ecx + 98h], al
        ; Exact mapped bytes 74 0D: je 0x5876df67
        __asm _emit 0x74
        __asm _emit 0x0d
        mov byte ptr [ecx + 95h], al
        mov byte ptr [ecx + 97h], al
        ret
        mov byte ptr [ecx + 95h], dl
        mov byte ptr [ecx + 97h], dl
        ret
    }
}
