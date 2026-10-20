// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588919FF .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588919ff() {
    __asm {
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 19 74 F0 FF: jmp 0x58798e20
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
