// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022E30 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_10022e30_10022E30() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 10h]
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5E BB 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esi], 101751f8h
        test eax, eax
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x10022e93
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi], 101755e4h
        mov dword ptr [esi + 58h], ecx
        mov dword ptr [esi + 60h], 0
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
