// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F180 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887f180() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 C8 39 C0 FF: jmp 0x58482b50
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x39
        __asm _emit 0xc0
        __asm _emit 0xff
    }
}
