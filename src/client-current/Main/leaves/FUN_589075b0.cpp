// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589075B0 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_589075b0() {
    __asm {
        ; Exact mapped bytes C7 41 18 00 00 00 00: mov dword ptr [ecx + 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
