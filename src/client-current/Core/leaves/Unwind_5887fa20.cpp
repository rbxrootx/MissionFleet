// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887FA20 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887fa20() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 18: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x18
        ; Exact mapped bytes E9 B5 EE C6 FF: jmp 0x584ee8e0
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0xc6
        __asm _emit 0xff
    }
}
