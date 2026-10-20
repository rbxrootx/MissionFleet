// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589717DC .. +0x6 bytes.
extern "C" __declspec(naked) void FUN_589717dc() {
    __asm {
        ; Exact mapped bytes A1 B0 85 A2 58: mov eax, dword ptr [0x58a285b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
