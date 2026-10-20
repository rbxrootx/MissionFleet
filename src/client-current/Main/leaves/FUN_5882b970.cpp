// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882B970 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_5882b970() {
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
        mov edx, 500h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 5B: jne 0x5882b9e1
        __asm _emit 0x75
        __asm _emit 0x5b
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
        mov eax, 1
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 49 24 04: or word ptr [ecx + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
        mov byte ptr [ecx + 188h], al
        mov byte ptr [ecx + 189h], al
        xor eax, eax
        xor edx, edx
        mov byte ptr [ecx + 18ah], al
        mov byte ptr [ecx + 18bh], al
        mov byte ptr [ecx + 18ch], al
        mov byte ptr [ecx + 18dh], al
        ; Exact mapped bytes 66 89 91 8E 01 00 00: mov word ptr [ecx + 0x18e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 170h], eax
        ret
    }
}
