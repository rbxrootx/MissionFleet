// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981300 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58981300() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 20 04 FF FF: jmp 0x58971728
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
