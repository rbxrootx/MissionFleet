// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DAE2 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_0042dae2_0042DAE2() {
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
        ; Exact mapped bytes 74 1F: je 0x42db11
        __asm _emit 0x74
        __asm _emit 0x1f
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
        ; Exact mapped bytes 7F 0A: jg 0x42db0a
        __asm _emit 0x7f
        __asm _emit 0x0a
        mov ecx, dword ptr [esi]
        sub ecx, 0ch
        ; Exact mapped bytes E8 90 FF FF FF: call 0x42da9a
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi], eax
        pop esi
        ret
    }
}
