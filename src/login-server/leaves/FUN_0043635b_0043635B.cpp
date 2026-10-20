// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043635B .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_0043635b_0043635B() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        lea eax, [esi + 5ch]
        mov dword ptr [esi + 1ch], edi
        push eax
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 34h], edi
        mov dword ptr [esi + 64h], edi
        ; Exact mapped bytes FF 15 DC C3 43 00: call dword ptr [0x43c3dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 24h], 1
        pop edi
        pop esi
        ret
    }
}
