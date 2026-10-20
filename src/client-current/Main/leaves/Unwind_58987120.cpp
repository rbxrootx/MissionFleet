// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58987120 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58987120() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 68 F6 E2 FF: jmp 0x587b6790
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
