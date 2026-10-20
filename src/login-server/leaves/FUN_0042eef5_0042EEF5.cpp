// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EEF5 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0042eef5_0042EEF5() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 2E 2A 00 00: call 0x43192c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 1ch]
        push 20h
        push 0
        push edi
        mov dword ptr [esi], 43dd10h
        ; Exact mapped bytes E8 CF FB FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        add esp, 0ch
        mov dword ptr [edi], eax
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
