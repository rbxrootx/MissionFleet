// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009E6B0 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_1009e6b0_1009E6B0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 AC 02 00 00: mov dword ptr [ecx + 0x2ac], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
