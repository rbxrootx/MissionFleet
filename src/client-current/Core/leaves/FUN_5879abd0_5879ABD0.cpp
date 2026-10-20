// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879ABD0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5879abd0_5879ABD0() {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 8]
        and eax, 0ffh
        cmp eax, 7
        ; Exact mapped bytes 77 2C: ja 0x5879ac0a
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes FF 24 85 10 AC 79 58: jmp dword ptr [eax*4 + 0x5879ac10]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xac
        __asm _emit 0x79
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1D: je 0x5879ac0a
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [eax]
        lea ecx, [esp]
        mov dword ptr [esp], eax
        ; Exact mapped bytes E8 86 E7 FF FF: call 0x58799380
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp]
        mov eax, dword ptr [eax + 14h]
        inc eax
        pop ecx
        ret
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        pop ecx
        ret
        xor eax, eax
        pop ecx
        ret
    }
}
