// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A768 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898a768() {
    __asm {
        ; Exact mapped bytes 8D 4D B4: lea ecx, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes E9 10 DA DB FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xda
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
