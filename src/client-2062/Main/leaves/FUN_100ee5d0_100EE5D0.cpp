// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE5D0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_100ee5d0_100EE5D0() {
    __asm {
        ; Exact mapped bytes 8B 81 84 00 00 00: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
