// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100278E0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_100278e0_100278E0() {
    __asm {
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 8B 41 5C: mov ax, word ptr [ecx + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x5c
        ; Exact mapped bytes 66 8B 51 5A: mov dx, word ptr [ecx + 0x5a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5a
        xor eax, 0aah
        xor edx, 0aah
        add eax, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 58: mov dx, word ptr [ecx + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x58
        xor edx, 0aah
        add eax, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 A0 00 00 00: mov dx, word ptr [ecx + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, 0aah
        imul eax, edx
        ret
    }
}
