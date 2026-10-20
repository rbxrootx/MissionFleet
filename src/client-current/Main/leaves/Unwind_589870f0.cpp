// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589870F0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589870f0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 98 F6 E2 FF: jmp 0x587b6790
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xf6
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
