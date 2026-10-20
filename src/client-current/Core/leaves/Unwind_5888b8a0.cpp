// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B8A0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b8a0() {
    __asm {
        ; Exact mapped bytes 8D 4D E4: lea ecx, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 58 01 E3 FF: jmp 0x586bba00
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
