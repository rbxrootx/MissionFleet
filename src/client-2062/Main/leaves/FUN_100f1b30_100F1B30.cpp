// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1B30 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_100f1b30_100F1B30() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 DD 33 F3 FF: call 0x10024f20
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [esi + 0b54h], eax
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100f1b58
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 18 09 00 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
