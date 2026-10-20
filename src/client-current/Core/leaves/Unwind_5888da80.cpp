// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888DA80 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888da80() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 D8 70 F2 FF: jmp 0x587b4b60
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
