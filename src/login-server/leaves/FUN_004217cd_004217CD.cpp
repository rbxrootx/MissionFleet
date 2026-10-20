// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004217CD .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_004217cd_004217CD() {
    __asm {
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes E8 97 0E 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
