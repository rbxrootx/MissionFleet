// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CC750 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_587cc750() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        push 4
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 C0 FA FF FF: call 0x587cc220
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 5
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 B6 FA FF FF: call 0x587cc220
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 6
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 AC FA FF FF: call 0x587cc220
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
