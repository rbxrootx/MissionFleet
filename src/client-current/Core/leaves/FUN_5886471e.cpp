// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886471E .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_5886471e() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 3F F5 FF FF: call 0x58863c64
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
