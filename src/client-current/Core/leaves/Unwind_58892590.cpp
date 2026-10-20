// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892590 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58892590() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 78 B9 F2 FF: jmp 0x587bdf10
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
