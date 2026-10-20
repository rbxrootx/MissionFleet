// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589812D9 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_589812d9() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 58: add ecx, 0x58
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x58
        ; Exact mapped bytes E9 9C 6E DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x6e
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
