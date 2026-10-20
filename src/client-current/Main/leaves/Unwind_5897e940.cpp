// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E940 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e940() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 28 86 E1 FF: jmp 0x58796f70
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x86
        __asm _emit 0xe1
        __asm _emit 0xff
    }
}
