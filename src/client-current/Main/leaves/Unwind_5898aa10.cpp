// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AA10 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898aa10() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 38 8A F7 FF: jmp 0x58903450
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
