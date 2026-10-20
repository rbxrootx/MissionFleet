// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A5D0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898a5d0() {
    __asm {
        ; Exact mapped bytes 8B 8D E8 FE FF FF: mov ecx, dword ptr [ebp - 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 86 F7 FF: jmp 0x58902c10
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
