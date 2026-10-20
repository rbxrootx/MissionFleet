// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E3F0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e3f0() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 58 7B E3 FF: jmp 0x587b5f50
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x7b
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
