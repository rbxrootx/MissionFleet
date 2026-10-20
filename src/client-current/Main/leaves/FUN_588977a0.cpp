// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588977A0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_588977a0() {
    __asm {
        xor eax, eax
        cmp dword ptr [ecx + 1a4h], eax
        mov dword ptr [ecx + 148h], eax
        ; Exact mapped bytes 7E 28: jle 0x588977d8
        __asm _emit 0x7e
        __asm _emit 0x28
        lea edx, [ecx + 0f4h]
        push esi
        ; Exact mapped bytes EB 07: jmp 0x588977c0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edx]
        mov esi, dword ptr [esi + 64h]
        add dword ptr [ecx + 148h], esi
        inc eax
        add edx, 4
        cmp eax, dword ptr [ecx + 1a4h]
        ; Exact mapped bytes 7C E9: jl 0x588977c0
        __asm _emit 0x7c
        __asm _emit 0xe9
        pop esi
        movzx eax, word ptr [ecx + 148h]
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0a00h]
        mov ecx, dword ptr [edx + 1f8h]
    }
}
