// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FE8A0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100fe8a0_100FE8A0() {
    __asm {
        ; Exact mapped bytes C7 01 3C 52 17 10: mov dword ptr [ecx], 0x1017523c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x3c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 E5 02 00 00: jmp 0x100feb90
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
