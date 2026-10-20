// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430DF3 .. +0x49 bytes.
extern "C" __declspec(naked) void _OnDisplayChange_CWnd__IAEJIJ_Z_00430DF3() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 60 46 FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, esi
        ; Exact mapped bytes 75 0A: jne 0x430e09
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, 44fb88h
        ; Exact mapped bytes E8 D6 20 00 00: call 0x432edf
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E2 D3 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 40000000h
        ; Exact mapped bytes 75 1A: jne 0x430e31
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 EE E3 FF FF: call 0x42f20a
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 1
        push dword ptr [eax + 0ch]
        push dword ptr [eax + 8]
        push dword ptr [eax + 4]
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 F1 FA FF FF: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 07 E4 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
