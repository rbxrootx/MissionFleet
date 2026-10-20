// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042549E .. +0xD bytes.
extern "C" __declspec(naked) void FUN_0042549e_0042549E() {
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
        ; Exact mapped bytes 8B 40 FC: mov eax, dword ptr [eax - 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0xfc
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
