// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58983880 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58983880() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 88 F3 F7 FF: jmp 0x58902c10
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xf3
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
