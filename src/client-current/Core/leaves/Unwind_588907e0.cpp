// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588907E0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588907e0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E9 75 01 EF FF: jmp 0x58780960
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0xef
        __asm _emit 0xff
    }
}
