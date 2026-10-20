// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887ED5E .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ed5e() {
    __asm {
        ; Exact mapped bytes 8D 8D 10 FF FF FF: lea ecx, [ebp - 0xf0]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 17 A2 F1 FF: jmp 0x58798f80
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xa2
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
