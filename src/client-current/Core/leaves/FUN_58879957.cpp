// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879957 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58879957() {
    __asm {
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes E8 06 A3 FE FF: call 0x58863c64
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
