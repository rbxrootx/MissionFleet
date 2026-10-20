// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0BE0 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_587b0be0() {
    __asm {
        ; Exact mapped bytes C7 41 5C 01 00 00 00: mov dword ptr [ecx + 0x5c], 1
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
