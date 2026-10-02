// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 95 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58731C60 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_58731c60_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push esi
        push eax
        mov eax, dword ptr [esp + 0ch]
        push 0
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        push 0
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1E 15 1D 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x15
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esi], 5898c55ch
        mov dword ptr [esi + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x58731cb9
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
