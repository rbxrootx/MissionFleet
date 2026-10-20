// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E607 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5882e607_5882E607() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push 18h
        push edi
        lea eax, [esi + 14h]
        push eax
        ; Exact mapped bytes E8 F7 E7 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 30h], edi
        mov eax, esi
        mov dword ptr [esi + 34h], edi
        pop edi
        pop esi
        ret
    }
}
