// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E900 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887e900() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 58 62 F3 FF: jmp 0x587b4b60
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x62
        __asm _emit 0xf3
        __asm _emit 0xff
    }
}
