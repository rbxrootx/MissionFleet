// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868725 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58868725() {
    __asm {
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes E8 38 B5 FF FF: call 0x58863c64
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
