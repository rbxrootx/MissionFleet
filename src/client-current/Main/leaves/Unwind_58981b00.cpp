// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981B00 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58981b00() {
    __asm {
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 48 D0 E4 FF: jmp 0x587ceb50
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xd0
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
