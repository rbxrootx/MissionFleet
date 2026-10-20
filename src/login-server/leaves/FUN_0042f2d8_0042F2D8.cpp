// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F2D8 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0042f2d8_0042F2D8() {
    __asm {
        push esi
        push edi
        push 1
        ; Exact mapped bytes E8 85 FF FF FF: call 0x42f266
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        push dword ptr [esp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 89 3A 00 00: call 0x432d77
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 02 F1 FF FF: call 0x42e3fa
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
