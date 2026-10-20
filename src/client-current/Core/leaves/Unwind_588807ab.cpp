// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588807AB .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588807ab() {
    __asm {
        ; Exact mapped bytes 8D 4D 98: lea ecx, [ebp - 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x98
        ; Exact mapped bytes E9 7D 95 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x95
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
