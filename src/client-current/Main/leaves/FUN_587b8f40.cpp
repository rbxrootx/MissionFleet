// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B8F40 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_587b8f40() {
    __asm {
        push esi
        push 10000000h
        mov esi, ecx
        ; Exact mapped bytes E8 13 83 1B 00: call 0x58971260
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x83
        __asm _emit 0x1b
        __asm _emit 0x00
        xor eax, eax
        mov ecx, 1
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
        mov dword ptr [esi + 1f4h], eax
        mov dword ptr [esi + 204h], eax
        mov dword ptr [esi + 1f8h], eax
        mov dword ptr [esi + 1fch], eax
        mov dword ptr [esi + 200h], eax
        mov dword ptr [esi + 208h], eax
        mov dword ptr [esi + 20ch], eax
        mov dword ptr [esi + 210h], eax
        mov dword ptr [esi + 214h], eax
        mov dword ptr [esi + 218h], eax
        mov dword ptr [esi], 5899a2f8h
        mov dword ptr [esi + 44h], ecx
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
