// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D900 .. +0x2E bytes.
extern "C" __declspec(naked) void __AfxDlgSetFocus__YGXPAVCWnd___Z_0041D900() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push 0
        push esi
        ; Exact mapped bytes E8 C5 FF FF FF: call 0x41d8d2
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test al, 8
        ; Exact mapped bytes 74 12: je 0x41d923
        __asm _emit 0x74
        __asm _emit 0x12
        push -1
        push 0
        push 0b1h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 66 0A 01 00: call 0x42e390
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
