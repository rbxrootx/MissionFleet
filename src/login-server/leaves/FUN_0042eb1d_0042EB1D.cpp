// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EB1D .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0042eb1d_0042EB1D() {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi + 24h], 18h
        ; Exact mapped bytes 74 09: je 0x42eb2f
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push dword ptr [esp + 8]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        push dword ptr [esp + 8]
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 98 C4 43 00: call dword ptr [0x43c498]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
