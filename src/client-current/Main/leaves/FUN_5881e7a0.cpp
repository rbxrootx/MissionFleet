// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881E7A0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5881e7a0() {
    __asm {
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 E0 49 02 00: call 0x58843190
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 4F 9E 02 00: call 0x58848610
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 C4 3A F3 FF: jmp 0x58752290
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
    }
}
