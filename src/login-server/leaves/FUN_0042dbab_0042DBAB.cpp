// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DBAB .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0042dbab_0042DBAB() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        lea ecx, [eax - 0ch]
        ; Exact mapped bytes 3B 0D 10 9B 44 00: cmp ecx, dword ptr [0x449b10]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x42dbd3
        __asm _emit 0x74
        __asm _emit 0x18
        add eax, -0ch
        push eax
        ; Exact mapped bytes FF 15 98 C2 43 00: call dword ptr [0x43c298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7F 0A: jg 0x42dbd3
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov ecx, dword ptr [esi]
        sub ecx, 0ch
        ; Exact mapped bytes E8 C7 FE FF FF: call 0x42da9a
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
