// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58890EC0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58890ec0() {
    __asm {
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E9 48 AF EF FF: jmp 0x5878be10
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xaf
        __asm _emit 0xef
        __asm _emit 0xff
    }
}
