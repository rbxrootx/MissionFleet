// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A9B60 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_588a9b60() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov dword ptr [esi + 88h], eax
        movzx eax, word ptr [eax + 8]
        xor eax, 0aah
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 8F F8 FF FF: call 0x588a9410
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [ecx + 50h], 0
        mov ecx, esi
        ; Exact mapped bytes E8 6E 98 05 00: call 0x58903400
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
