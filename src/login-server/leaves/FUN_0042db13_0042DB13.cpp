// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DB13 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0042db13_0042DB13() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        ; Exact mapped bytes 3B 35 10 9B 44 00: cmp esi, dword ptr [0x449b10]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x42db32
        __asm _emit 0x74
        __asm _emit 0x12
        push esi
        ; Exact mapped bytes FF 15 98 C2 43 00: call dword ptr [0x43c298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7F 07: jg 0x42db32
        __asm _emit 0x7f
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 68 FF FF FF: call 0x42da9a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
