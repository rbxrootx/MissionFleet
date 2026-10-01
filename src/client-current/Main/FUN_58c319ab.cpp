// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58C319AB .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58c319ab() {
    __asm {
        ; Exact mapped bytes 8B E0: mov esp, eax
        __asm _emit 0x8b
        __asm _emit 0xe0
        ; Exact mapped bytes E9 FE DC 13 00: jmp 0x58d6f6b0
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xdc
        __asm _emit 0x13
        __asm _emit 0x00
    }
}
