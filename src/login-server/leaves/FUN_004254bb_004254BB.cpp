// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004254BB .. +0xE bytes.
extern "C" __declspec(naked) void FUN_004254bb_004254BB() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 83 00 04: add dword ptr [eax], 4
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 FC: mov ax, word ptr [eax - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0xfc
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
