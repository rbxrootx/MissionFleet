// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888D740 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888d740() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 78 E0 CD FF: jmp 0x5856b7c0
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xe0
        __asm _emit 0xcd
        __asm _emit 0xff
    }
}
