// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B480B7 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58b480b7() {
    __asm {
        ; Exact mapped bytes 0F 85 BE 92 FF FF: jne 0x58b4137b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes E9 AE 92 FF FF: jmp 0x58b41374
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
