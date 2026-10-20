// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0CC0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_100a0cc0_100A0CC0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes E8 ED E7 FA FF: call 0x1004f4c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ch]
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 DD E7 FA FF: call 0x1004f4c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0a8h]
        xor eax, eax
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 66 89 86 A4 00 00 00: mov word ptr [esi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 A6 00 00 00: mov word ptr [esi + 0xa6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
