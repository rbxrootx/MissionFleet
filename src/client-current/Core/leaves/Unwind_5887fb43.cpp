// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887FB43 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_5887fb43() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 64: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        ; Exact mapped bytes E9 F2 20 C7 FF: jmp 0x584f1c40
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x20
        __asm _emit 0xc7
        __asm _emit 0xff
    }
}
