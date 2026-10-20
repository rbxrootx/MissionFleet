// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898754F .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898754f() {
    __asm {
        ; Exact mapped bytes 8D 4D B4: lea ecx, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes E9 39 BB DB FF: jmp 0x58743090
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0xbb
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
