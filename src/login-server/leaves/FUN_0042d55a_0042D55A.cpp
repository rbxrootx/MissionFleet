// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D55A .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_0042d55a_0042D55A() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push -1
        push dword ptr [esi + 8]
        mov edi, ecx
        ; Exact mapped bytes E8 F7 FE FF FF: call 0x42d463
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 8]
        push dword ptr [esi + 4]
        push dword ptr [edi + 4]
        ; Exact mapped bytes E8 46 16 FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
