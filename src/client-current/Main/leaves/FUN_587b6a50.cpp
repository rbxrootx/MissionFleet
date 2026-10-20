// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6A50 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_587b6a50() {
    __asm {
        ; Exact mapped bytes C7 01 E8 A0 99 58: mov dword ptr [ecx], 0x5899a0e8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 B5 C1 14 00: jmp 0x58902c10
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xc1
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
