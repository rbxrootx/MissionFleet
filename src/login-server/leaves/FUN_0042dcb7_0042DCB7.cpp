// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DCB7 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_0042dcb7_0042DCB7() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        push edi
        ; Exact mapped bytes E8 BD FE FF FF: call 0x42db82
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push dword ptr [esp + 14h]
        push dword ptr [esi]
        ; Exact mapped bytes E8 EF 0E FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        add esp, 0ch
        mov dword ptr [eax - 8], edi
        mov eax, dword ptr [esi]
        and byte ptr [eax + edi], 0
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
