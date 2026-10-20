// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B840 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b840() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 08 C1 C5 FF: jmp 0x584e7950
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xc1
        __asm _emit 0xc5
        __asm _emit 0xff
    }
}
