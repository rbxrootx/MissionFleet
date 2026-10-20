// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B4CF69 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58b4cf69() {
    __asm {
        ; Exact mapped bytes 2B D8: sub ebx, eax
        __asm _emit 0x2b
        __asm _emit 0xd8
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes E9 15 54 FD FF: jmp 0x58b22387
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
