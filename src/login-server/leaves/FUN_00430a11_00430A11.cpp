// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430A11 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00430a11_00430A11() {
    __asm {
        push esi
        mov esi, ecx
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 90 63 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 8]
        mov edx, dword ptr [esi]
        mov ecx, esi
        push dword ptr [eax + 40h]
        push dword ptr [eax + 3ch]
        push dword ptr [eax + 38h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
