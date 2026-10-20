// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053E70 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_10053e70_10053E70() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 0ech]
        ; Exact mapped bytes 66 8B 96 AA 09 00 00: mov dx, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        mov ecx, dword ptr [esi + 9a4h]
        push edx
        ; Exact mapped bytes E8 1E 92 07 00: call 0x100cd0b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9a4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
