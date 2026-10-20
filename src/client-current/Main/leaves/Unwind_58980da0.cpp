// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980DA0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58980da0() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E9 B5 ED E2 FF: jmp 0x587afb60
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xed
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
