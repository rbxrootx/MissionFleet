// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589856C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589856c0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 78 27 ED FF: jmp 0x58857e40
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0xed
        __asm _emit 0xff
    }
}
