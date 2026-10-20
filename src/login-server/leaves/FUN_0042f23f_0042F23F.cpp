// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F23F .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0042f23f_0042F23F() {
    __asm {
        push esi
        mov esi, ecx
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 62 7B 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [eax + 40h]
        mov edx, dword ptr [esi]
        mov ecx, esi
        push dword ptr [eax + 3ch]
        push dword ptr [eax + 38h]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
