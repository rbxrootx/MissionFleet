// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58871225 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58871225() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 FF 85 00 00: call 0x5887982a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
