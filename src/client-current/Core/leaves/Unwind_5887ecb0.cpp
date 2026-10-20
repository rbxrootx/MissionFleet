// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887ECB0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887ecb0() {
    __asm {
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 38 AF C2 FF: jmp 0x584a9bf0
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xaf
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
