// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980430 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58980430() {
    __asm {
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E9 48 7D DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
