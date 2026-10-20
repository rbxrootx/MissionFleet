// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109B40 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10109b40_10109B40() {
    __asm {
        ; Exact mapped bytes C7 01 D8 6A 17 10: mov dword ptr [ecx], 0x10176ad8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xd8
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 D5 95 FF FF: jmp 0x10103120
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
