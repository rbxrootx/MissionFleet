// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980E10 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58980e10() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 88 2A F8 FF: jmp 0x589038a0
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
