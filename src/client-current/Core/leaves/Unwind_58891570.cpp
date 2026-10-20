// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891570 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891570() {
    __asm {
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E9 88 78 F0 FF: jmp 0x58798e00
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
