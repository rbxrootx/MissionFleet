// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898190B .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5898190b() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 74: add ecx, 0x74
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x74
        ; Exact mapped bytes E9 3A AD E4 FF: jmp 0x587cc650
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
