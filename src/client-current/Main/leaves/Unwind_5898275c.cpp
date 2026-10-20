// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898275C .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898275c() {
    __asm {
        ; Exact mapped bytes 8D 8D D4 FD FF FF: lea ecx, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 19 5A DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x5a
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
