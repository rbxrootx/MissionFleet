// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E000 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887e000() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E9 E8 BB C2 FF: jmp 0x584a9bf0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
