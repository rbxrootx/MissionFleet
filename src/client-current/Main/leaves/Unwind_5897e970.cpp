// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E970 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897e970() {
    __asm {
        ; Exact mapped bytes 8B 8D 40 FA FF FF: mov ecx, dword ptr [ebp - 0x5c0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E5 43 F8 FF: jmp 0x58902d60
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x43
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
