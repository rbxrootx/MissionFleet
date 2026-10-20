// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BC40 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_5850bc40() {
    __asm {
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x5850bc50
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}
