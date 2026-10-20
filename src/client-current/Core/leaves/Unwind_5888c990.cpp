// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C990 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888c990() {
    __asm {
        ; Exact mapped bytes 8D 4D CC: lea ecx, [ebp - 0x34]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E9 18 CB E5 FF: jmp 0x586e94b0
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xcb
        __asm _emit 0xe5
        __asm _emit 0xff
    }
}
