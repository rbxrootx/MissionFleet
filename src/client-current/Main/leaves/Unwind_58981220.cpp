// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981220 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58981220() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 E8 AF F8 FF: jmp 0x5890c210
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
