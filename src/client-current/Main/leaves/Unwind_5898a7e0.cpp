// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898A7E0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898a7e0() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E9 75 7B F7 FF: jmp 0x58902360
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
