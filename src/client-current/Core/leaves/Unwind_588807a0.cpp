// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588807A0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588807a0() {
    __asm {
        ; Exact mapped bytes 8D 8D 7C FF FF FF: lea ecx, [ebp - 0x84]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 69 C8 FF: jmp 0x585070e0
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x69
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
