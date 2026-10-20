// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F080 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5882f080() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov ecx, dword ptr [esi + 6ch]
        push edi
        ; Exact mapped bytes E8 AF 7A F5 FF: call 0x58786b40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7a
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx eax, word ptr [edi]
        mov ecx, dword ptr [esi + 6ch]
        push eax
        ; Exact mapped bytes E8 43 77 F5 FF: call 0x587867e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        mov cl, byte ptr [edi + 1]
        pop edi
        mov byte ptr [esi + 21ch], cl
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
