// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989830 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_58989830() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 E8 0C 00 00: add ecx, 0xce8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B2 CA F3 FF: jmp 0x588c62f0
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xff
    }
}
