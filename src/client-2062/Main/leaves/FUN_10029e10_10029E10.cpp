// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029E10 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10029e10_10029E10() {
    __asm {
        ; Exact mapped bytes C7 01 BC 56 17 10: mov dword ptr [ecx], 0x101756bc
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 55 49 0D 00: jmp 0x100fe770
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
    }
}
