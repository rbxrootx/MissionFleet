// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10033220 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10033220_10033220() {
    __asm {
        ; Exact mapped bytes C7 01 FC 57 17 10: mov dword ptr [ecx], 0x101757fc
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 75 B6 0C 00: jmp 0x100fe8a0
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
