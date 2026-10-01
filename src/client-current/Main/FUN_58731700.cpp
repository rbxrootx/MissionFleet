// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58731700 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58731700() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push esi
        push 40h
        push eax
        mov eax, dword ptr [esp + 18h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 20h]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 7B 1A 1D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1a
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esi + 50h], edx
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi], 5898c540h
        mov dword ptr [esi + 64h], ecx
        mov dword ptr [esi + 68h], edx
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], 0
        mov eax, esi
        pop esi
        ret 24h
    }
}
