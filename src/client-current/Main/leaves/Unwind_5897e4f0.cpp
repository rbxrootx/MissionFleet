// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E4F0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5897e4f0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 D8 C0 DC FF: jmp 0x5874a5d0
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xc0
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
