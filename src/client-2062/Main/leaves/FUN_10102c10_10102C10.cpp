// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10102C10 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10102c10_10102C10() {
    __asm {
        ; Exact mapped bytes C7 01 6C 56 17 10: mov dword ptr [ecx], 0x1017566c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x6c
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 75 BF FF FF: jmp 0x100feb90
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
