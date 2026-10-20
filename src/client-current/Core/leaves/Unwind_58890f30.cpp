// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58890F30 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58890f30() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 78 49 F2 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x49
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
