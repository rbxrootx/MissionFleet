// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109280 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10109280_10109280() {
    __asm {
        ; Exact mapped bytes C7 01 68 6A 17 10: mov dword ptr [ecx], 0x10176a68
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x68
        __asm _emit 0x6a
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 A5 A9 FF FF: jmp 0x10103c30
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
