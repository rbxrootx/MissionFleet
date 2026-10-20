// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3C50 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_587c3c50() {
    __asm {
        ; Exact mapped bytes C7 01 2C AD 99 58: mov dword ptr [ecx], 0x5899ad2c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x2c
        __asm _emit 0xad
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 15 54 14 00: jmp 0x58909070
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
