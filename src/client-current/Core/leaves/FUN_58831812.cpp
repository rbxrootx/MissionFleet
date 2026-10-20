// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831812 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58831812() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 45 03 00: call 0x58865e15
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes E9 29 DA 01 00: jmp 0x5884f248
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
