// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D020 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_0043d020_0043D020() {
    __asm {
        ; Exact mapped bytes C7 01 C0 45 63 00: mov dword ptr [ecx], 0x6345c0
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 95 02 00: jmp 0x4665d0
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
    }
}
