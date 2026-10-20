// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430110 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_00430110_00430110() {
    __asm {
        ; Exact mapped bytes C7 01 00 00 00 00: mov dword ptr [ecx], 0
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
