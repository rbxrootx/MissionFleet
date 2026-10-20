// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426608 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_00426608_00426608() {
    __asm {
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes E8 1A CC FF FF: call 0x423229
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 16: push 0x16
        __asm _emit 0x6a
        __asm _emit 0x16
        ; Exact mapped bytes E8 CA 0F 00 00: call 0x4275e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes E8 86 AB FF FF: call 0x4211a5
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
