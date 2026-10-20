// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023050 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10023050_10023050() {
    __asm {
        ; Exact mapped bytes C7 01 FC 55 17 10: mov dword ptr [ecx], 0x101755fc
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 05 4A 02 00: jmp 0x10047a60
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
    }
}
