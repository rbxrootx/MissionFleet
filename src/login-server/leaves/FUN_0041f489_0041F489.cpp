// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F489 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_0041f489_0041F489() {
    __asm {
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes E8 DB 31 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
