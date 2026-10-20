// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58984780 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58984780() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 58 EC F7 FF: jmp 0x589033e0
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
