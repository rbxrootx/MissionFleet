// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589709D0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_589709d0() {
    __asm {
        ; Exact mapped bytes C7 01 04 2D 9A 58: mov dword ptr [ecx], 0x589a2d04
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x2d
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E9 95 86 F9 FF: jmp 0x58909070
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
    }
}
