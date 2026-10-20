// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006ED30 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_1006ed30_1006ED30() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov eax, dword ptr [esi + edi*4 + 0d0h]
        mov ecx, dword ptr [esi + 104e0h]
        push eax
        ; Exact mapped bytes E8 55 02 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, dword ptr [esi + edi*4 + 0d0h]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
