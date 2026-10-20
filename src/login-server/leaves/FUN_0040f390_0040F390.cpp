// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F390 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0040f390_0040F390() {
    __asm {
        push esi
        mov esi, ecx
        push -1
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0c28h], eax
        mov dword ptr [eax + 0c7ch], esi
        mov edx, dword ptr [esi + 0c28h]
        xor ecx, ecx
        mov dword ptr [edx + 0c80h], ecx
        mov eax, dword ptr [esi + 0c28h]
        mov dword ptr [eax + 0c84h], ecx
        mov eax, dword ptr [esi + 0c28h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 40h]
        mov dword ptr [esi + 0c2ch], eax
        push 467h
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        ret
    }
}
