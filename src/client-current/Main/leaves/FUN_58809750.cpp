// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58809750 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58809750() {
    __asm {
        push esi
        push edi
        push 1c8h
        lea edi, [ecx + 6e4h]
        push 0
        push edi
        ; Exact mapped bytes E8 E3 34 17 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x34
        __asm _emit 0x17
        __asm _emit 0x00
        mov esi, dword ptr [esp + 18h]
        add esp, 0ch
        mov ecx, 72h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
