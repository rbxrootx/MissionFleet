// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887ED4B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ed4b() {
    __asm {
        ; Exact mapped bytes 8D 8D 28 FF FF FF: lea ecx, [ebp - 0xd8]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2A A2 F1 FF: jmp 0x58798f80
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xa2
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
