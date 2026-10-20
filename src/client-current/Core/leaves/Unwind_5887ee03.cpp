// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EE03 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887ee03() {
    __asm {
        ; Exact mapped bytes 8D 8D 28 FF FF FF: lea ecx, [ebp - 0xd8]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 72 A1 F1 FF: jmp 0x58798f80
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xa1
        __asm _emit 0xf1
        __asm _emit 0xff
    }
}
