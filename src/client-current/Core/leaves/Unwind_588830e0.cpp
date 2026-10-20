// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588830E0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588830e0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 C8 27 F3 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x27
        __asm _emit 0xf3
        __asm _emit 0xff
    }
}
