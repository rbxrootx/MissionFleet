// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B5B130 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58b5b130() {
    __asm {
        ; Exact mapped bytes 03 30: add esi, dword ptr [eax]
        __asm _emit 0x03
        __asm _emit 0x30
        ; Exact mapped bytes 3B 75 0C: cmp esi, dword ptr [ebp + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E9 75 B9 3B 00: jmp 0x58f16aaf
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xb9
        __asm _emit 0x3b
        __asm _emit 0x00
    }
}
