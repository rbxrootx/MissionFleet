// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832868 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_58832868() {
    __asm {
        ; Exact mapped bytes 68 28 67 96 58: push 0x58966728
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A CA 01 00: call 0x5884f28c
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
