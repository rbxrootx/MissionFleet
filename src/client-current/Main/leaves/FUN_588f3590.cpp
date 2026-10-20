// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F3590 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_588f3590() {
    __asm {
        ; Exact mapped bytes C7 41 58 00 00 00 00: mov dword ptr [ecx + 0x58], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
