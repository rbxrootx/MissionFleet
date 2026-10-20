// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870C82 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58870c82() {
    __asm {
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A2 8B 00 00: call 0x5887982a
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
