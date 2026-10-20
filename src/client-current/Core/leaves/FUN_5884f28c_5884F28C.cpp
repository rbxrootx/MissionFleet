// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F28C .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5884f28c_5884F28C() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 D0 42 89 58: call dword ptr [0x588942d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5884f2ad
        __asm _emit 0x74
        __asm _emit 0x11
        push esi
        mov esi, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 5B A3 00 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 F1: jne 0x5884f29d
        __asm _emit 0x75
        __asm _emit 0xf1
        pop esi
        pop ebp
        ret
    }
}
