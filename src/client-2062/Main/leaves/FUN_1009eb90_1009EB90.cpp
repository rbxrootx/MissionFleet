// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009EB90 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_1009eb90_1009EB90() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 8]
        ; Exact mapped bytes 66 89 81 90 00 00 00: mov word ptr [ecx + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 04: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 81 92 00 00 00: mov word ptr [ecx + 0x92], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 94 00 00 00: mov word ptr [ecx + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 9ch], edx
        mov dword ptr [ecx + 98h], eax
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
