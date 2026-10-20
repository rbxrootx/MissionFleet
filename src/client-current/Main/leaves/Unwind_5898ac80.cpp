// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898AC80 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5898ac80() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 A8 31 FE FF: jmp 0x5896de30
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
