// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E030 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5897e030() {
    __asm {
        ; Exact mapped bytes 8B 4D DC: mov ecx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E9 85 56 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
