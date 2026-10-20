// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588801CE .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588801ce() {
    __asm {
        ; Exact mapped bytes 8D 8D CC FC FF FF: lea ecx, [ebp - 0x334]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 9B C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x9b
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
