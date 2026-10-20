// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897DF00 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897df00() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 48 5D E4 FF: jmp 0x587c3c50
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x5d
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
