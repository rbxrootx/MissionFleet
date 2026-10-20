// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D1ED .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5884d1ed_5884D1ED() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [esi], ecx
        ; Exact mapped bytes E8 28 24 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [esi + 4], ecx
        ; Exact mapped bytes E8 1D 24 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 24h], esi
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
