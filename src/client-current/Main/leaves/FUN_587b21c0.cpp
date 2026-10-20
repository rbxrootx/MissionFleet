// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B21C0 .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_587b21c0() {
    __asm {
        ; Exact mapped bytes B8 64 00 00 00: mov eax, 0x64
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
