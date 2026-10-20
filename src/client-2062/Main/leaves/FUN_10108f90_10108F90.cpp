// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10108F90 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_10108f90_10108F90() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 51 5C: mov edx, dword ptr [ecx + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5c
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 7D 0C: jge 0x10108fa7
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 89 94 00 00 00: mov ecx, dword ptr [ecx + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
