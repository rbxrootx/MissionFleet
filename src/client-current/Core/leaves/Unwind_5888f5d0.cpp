// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F5D0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888f5d0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 A8 44 CF FF: jmp 0x58583a80
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0xff
    }
}
