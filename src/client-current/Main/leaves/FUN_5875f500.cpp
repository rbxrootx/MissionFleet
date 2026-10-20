// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875F500 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5875f500() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0fch]
        xor dword ptr [esi + 60h], eax
        xor dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 8C 7C 1A 00: call 0x589071a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0fch]
        xor dword ptr [esi + 60h], eax
        xor dword ptr [esi + 64h], eax
        pop esi
        ret
    }
}
