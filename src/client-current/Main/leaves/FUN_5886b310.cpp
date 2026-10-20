// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B310 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5886b310() {
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
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov dword ptr [ecx + 50h], 320h
        ret
    }
}
