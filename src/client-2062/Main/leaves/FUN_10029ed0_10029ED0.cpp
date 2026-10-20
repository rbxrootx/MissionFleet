// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029ED0 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_10029ed0_10029ED0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 41 78: mov dword ptr [ecx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
