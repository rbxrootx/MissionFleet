// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C660 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888c660() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 C8 FF CD FF: jmp 0x5856c630
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xcd
        __asm _emit 0xff
    }
}
