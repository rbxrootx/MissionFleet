// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B760 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b760() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 48 A1 F2 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xa1
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
