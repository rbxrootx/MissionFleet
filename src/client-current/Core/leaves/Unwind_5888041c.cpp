// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888041C .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5888041c() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 18: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x18
        ; Exact mapped bytes E9 A9 6A C8 FF: jmp 0x58506ed0
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x6a
        __asm _emit 0xc8
        __asm _emit 0xff
    }
}
