// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A8490 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100a8490_100A8490() {
    __asm {
        ; Exact mapped bytes C7 01 8C 60 17 10: mov dword ptr [ecx], 0x1017608c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x8c
        __asm _emit 0x60
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 05 AA 05 00: jmp 0x10102ea0
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
    }
}
