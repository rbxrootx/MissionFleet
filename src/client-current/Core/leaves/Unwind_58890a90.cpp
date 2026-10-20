// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58890A90 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58890a90() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 18 4E F2 FF: jmp 0x587b58b0
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x4e
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
