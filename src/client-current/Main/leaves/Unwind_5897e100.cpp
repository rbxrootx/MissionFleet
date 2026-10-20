// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E100 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e100() {
    __asm {
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 58 33 E2 FF: jmp 0x587a1460
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x33
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
