// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CF2F26 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_58cf2f26() {
    __asm {
        ; Exact mapped bytes E8 60 84 25 00: call 0x58f4b38b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF F5: movsx esi, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf5
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes E9 BD 68 E0 FF: jmp 0x58af97f5
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xff
    }
}
