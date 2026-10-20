// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FD950 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100fd950_100FD950() {
    __asm {
        ; Exact mapped bytes C7 01 E8 66 17 10: mov dword ptr [ecx], 0x101766e8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 45 55 00 00: jmp 0x10102ea0
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
