// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888E9E0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888e9e0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 E8 6D F2 FF: jmp 0x587b57d0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
