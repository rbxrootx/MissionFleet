// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411710 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_00411710_00411710() {
    __asm {
        ; Exact mapped bytes C7 01 74 D4 43 00: mov dword ptr [ecx], 0x43d474
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0xd4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x411870
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
