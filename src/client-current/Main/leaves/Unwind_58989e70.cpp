// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989E70 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58989e70() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E9 55 A1 F6 FF: jmp 0x588f3fd0
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xa1
        __asm _emit 0xf6
        __asm _emit 0xff
    }
}
