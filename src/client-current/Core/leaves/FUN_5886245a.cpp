// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886245A .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_5886245a() {
    __asm {
        ; Exact mapped bytes E8 92 67 00 00: call 0x58868bf1
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes B8 24 74 90 58: mov eax, 0x58907424
        __asm _emit 0xb8
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 4A 14: lea ecx, [edx + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0x14
        ; Exact mapped bytes 0F 45 C1: cmovne eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
