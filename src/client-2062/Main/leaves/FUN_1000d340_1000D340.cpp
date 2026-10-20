// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D340 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_1000d340_1000D340() {
    __asm {
        ; Exact mapped bytes C7 01 9C 52 17 10: mov dword ptr [ecx], 0x1017529c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x9c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 25 14 0F 00: jmp 0x100fe770
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
    }
}
