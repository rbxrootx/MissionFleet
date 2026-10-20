// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891460 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891460() {
    __asm {
        ; Exact mapped bytes 8D 4D BC: lea ecx, [ebp - 0x44]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes E9 E8 58 F0 FF: jmp 0x58796d50
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
