// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FAEF0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_100faef0_100FAEF0() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        push edi
        lea ecx, [esi + 10h]
        ; Exact mapped bytes E8 2F E7 F2 FF: call 0x10029630
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe7
        __asm _emit 0xf2
        __asm _emit 0xff
        push edi
        lea ecx, [esi + 20h]
        ; Exact mapped bytes E8 26 E7 F2 FF: call 0x10029630
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe7
        __asm _emit 0xf2
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
