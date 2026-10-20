// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831050 .. +0xE bytes.
extern "C" __declspec(naked) void __security_check_cookie() {
    __asm {
        ; Exact mapped bytes 3B 0D 40 60 90 58: cmp ecx, dword ptr [0x58906040]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 75 01: jne 0x58831059
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E9 50 00 00 00: jmp 0x588310ae
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
