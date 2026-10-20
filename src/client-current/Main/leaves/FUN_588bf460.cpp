// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BF460 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_588bf460() {
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
        mov dword ptr [ecx + 58h], 100h
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 49 24 07: or word ptr [ecx + 0x24], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x07
        ; Exact mapped bytes E9 87 F5 FF FF: jmp 0x588bea10
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
