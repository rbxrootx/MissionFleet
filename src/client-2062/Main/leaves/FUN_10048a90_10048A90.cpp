// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10048A90 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_10048a90_10048A90() {
    __asm {
        push esi
        mov esi, ecx
        push 10000000h
        ; Exact mapped bytes E8 63 3A 12 00: call 0x1016c500
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3a
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, 1
        xor eax, eax
        mov dword ptr [esi + 120h], ecx
        mov dword ptr [esi + 124h], ecx
        mov dword ptr [esi + 144h], ecx
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 134h], eax
        mov dword ptr [esi + 13ch], eax
        mov dword ptr [esi + 140h], eax
        mov dword ptr [esi + 130h], eax
        mov dword ptr [esi + 1ech], eax
        mov dword ptr [esi + 1f0h], eax
        mov dword ptr [esi], 10175b30h
        mov dword ptr [esi + 44h], ecx
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
