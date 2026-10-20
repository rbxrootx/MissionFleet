// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EFA4 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0042efa4_0042EFA4() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push dword ptr [esp + 0ch]
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 35 F2 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [ecx], eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
