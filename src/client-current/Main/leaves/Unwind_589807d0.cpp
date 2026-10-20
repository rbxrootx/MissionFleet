// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589807D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589807d0() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E9 B8 28 DC FF: jmp 0x58743090
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
