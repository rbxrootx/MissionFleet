// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897DC90 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897dc90() {
    __asm {
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 83 C1 0C: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0c
        ; Exact mapped bytes E9 25 5A DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x5a
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
