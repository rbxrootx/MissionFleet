// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B44A0 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_587b44a0() {
    __asm {
        ; Exact mapped bytes 8B 81 EC 02 00 00: mov eax, dword ptr [ecx + 0x2ec]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
