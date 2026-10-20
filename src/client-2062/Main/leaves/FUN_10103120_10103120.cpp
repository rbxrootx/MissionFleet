// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103120 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10103120_10103120() {
    __asm {
        ; Exact mapped bytes C7 01 B4 67 17 10: mov dword ptr [ecx], 0x101767b4
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xb4
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 45 B6 FF FF: jmp 0x100fe770
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
