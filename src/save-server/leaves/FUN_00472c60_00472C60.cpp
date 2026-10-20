// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472C60 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00472c60_00472C60() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 98 89 68 00 03: cmp dword ptr [0x688998], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 07: jne 0x472c73
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes A1 84 89 68 00: mov eax, dword ptr [0x688984]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x472c85
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 83 3D 98 89 68 00 02: cmp dword ptr [0x688998], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 07: jne 0x472c83
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes A1 4C 02 68 00: mov eax, dword ptr [0x68024c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x472c85
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ret
    }
}
