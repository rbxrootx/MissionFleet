// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B8D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b8d0() {
    __asm {
        ; Exact mapped bytes 8D 4D A4: lea ecx, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E9 98 13 E3 FF: jmp 0x586bcc70
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
