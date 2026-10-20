// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C250 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888c250() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 58 96 F2 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x96
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
