// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897EAE0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897eae0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 B8 83 F8 FF: jmp 0x58906ea0
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
    }
}
