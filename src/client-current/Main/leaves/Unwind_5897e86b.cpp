// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E86B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897e86b() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 1C: add ecx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x1c
        ; Exact mapped bytes E9 4A 4E DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
