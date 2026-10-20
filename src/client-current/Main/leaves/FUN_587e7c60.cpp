// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E7C60 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_587e7c60() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 E8 1C 02 00: mov dword ptr [ecx + 0x21ce8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
