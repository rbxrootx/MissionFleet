// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856A33 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58856a33() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 DD 32 00 00: call 0x58859d16
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
