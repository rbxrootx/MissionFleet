// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883C00 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58883c00() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 F8 3F F4 FF: jmp 0x587c7c00
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x3f
        __asm _emit 0xf4
        __asm _emit 0xff
    }
}
