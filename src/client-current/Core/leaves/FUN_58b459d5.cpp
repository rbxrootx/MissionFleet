// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B459D5 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58b459d5() {
    __asm {
        ; Exact mapped bytes 0F 85 58 2D 3E 00: jne 0x58f28733
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x2d
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 33 04: lea eax, [ebx + esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x33
        __asm _emit 0x04
        ; Exact mapped bytes E9 4C 57 01 00: jmp 0x58b5b130
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
