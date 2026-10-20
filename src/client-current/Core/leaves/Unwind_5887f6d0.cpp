// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887F6D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887f6d0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 68 C8 CE FF: jmp 0x5856bf40
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xce
        __asm _emit 0xff
    }
}
