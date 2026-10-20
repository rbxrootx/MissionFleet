// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F4060 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_100f4060_100F4060() {
    __asm {
        ; Exact mapped bytes 0F BF 44 24 10: movsx eax, word ptr [esp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 8]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 14h]
        xor edi, edi
        push 40h
        push edi
        push eax
        mov eax, dword ptr [esp + 18h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2B A9 00 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 60h], edi
        mov dword ptr [esi], 101765fch
        mov dword ptr [esi + 64h], 2
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
