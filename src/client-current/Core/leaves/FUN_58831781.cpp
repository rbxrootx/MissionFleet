// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831781 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58831781() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 D0 00 00 00: call 0x58831858
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
