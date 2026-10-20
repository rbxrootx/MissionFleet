// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF0B0 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_100ff0b0_100FF0B0() {
    __asm {
        mov edx, dword ptr [ecx + 40h]
        push esi
        xor esi, esi
        cmp edx, esi
        ; Exact mapped bytes 74 5A: je 0x100ff114
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ecx + 48h]
        cmp eax, esi
        ; Exact mapped bytes 75 23: jne 0x100ff0e4
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ecx + 44h]
        cmp eax, esi
        ; Exact mapped bytes 75 0E: jne 0x100ff0d6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [edx + 4ch], esi
        mov dword ptr [ecx + 40h], esi
        mov dword ptr [ecx + 44h], esi
        mov dword ptr [ecx + 48h], esi
        pop esi
        ret
        mov dword ptr [eax + 48h], esi
        mov dword ptr [ecx + 40h], esi
        mov dword ptr [ecx + 44h], esi
        mov dword ptr [ecx + 48h], esi
        pop esi
        ret
        mov edx, dword ptr [ecx + 44h]
        mov dword ptr [eax + 44h], edx
        mov eax, dword ptr [ecx + 44h]
        cmp eax, esi
        ; Exact mapped bytes 75 14: jne 0x100ff105
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ecx + 40h]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [eax + 4ch], edx
        mov dword ptr [ecx + 40h], esi
        mov dword ptr [ecx + 44h], esi
        mov dword ptr [ecx + 48h], esi
        pop esi
        ret
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [eax + 48h], edx
        mov dword ptr [ecx + 40h], esi
        mov dword ptr [ecx + 44h], esi
        mov dword ptr [ecx + 48h], esi
        pop esi
        ret
    }
}
