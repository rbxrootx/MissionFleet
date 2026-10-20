// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B3A0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_5879b3a0() {
    __asm {
        ; Exact mapped bytes C7 01 00 73 8B 58: mov dword ptr [ecx], 0x588b7300
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
