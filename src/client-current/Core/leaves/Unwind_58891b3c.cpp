// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891B3C .. +0xA bytes.
extern "C" __declspec(naked) void Unwind_58891b3c() {
    __asm {
        ; Exact mapped bytes B9 B4 5E 96 58: mov ecx, 0x58965eb4
        __asm _emit 0xb9
        __asm _emit 0xb4
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E9 8A 73 F0 FF: jmp 0x58798ed0
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
