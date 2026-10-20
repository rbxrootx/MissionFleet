// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883980 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58883980() {
    __asm {
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes E9 38 45 CE FF: jmp 0x58567ec0
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0xce
        __asm _emit 0xff
    }
}
