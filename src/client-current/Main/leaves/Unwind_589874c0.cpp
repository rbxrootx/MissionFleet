// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589874C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589874c0() {
    __asm {
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E9 88 EA E2 FF: jmp 0x587b5f50
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xea
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
