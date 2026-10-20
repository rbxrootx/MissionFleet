// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DCE0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887dce0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 A8 48 C2 FF: jmp 0x584a2590
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
