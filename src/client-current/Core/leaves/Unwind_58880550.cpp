// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880550 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58880550() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 38 6D C8 FF: jmp 0x58507290
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x6d
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
