// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902C70 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_58902c70() {
    __asm {
        mov edx, dword ptr [ecx + 40h]
        push esi
        xor esi, esi
        cmp edx, esi
        ; Exact mapped bytes 74 57: je 0x58902cd1
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ecx + 48h]
        cmp eax, esi
        ; Exact mapped bytes 75 23: jne 0x58902ca4
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ecx + 44h]
        cmp eax, esi
        ; Exact mapped bytes 75 0E: jne 0x58902c96
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
        mov edx, dword ptr [ecx + 48h]
        cmp eax, esi
        ; Exact mapped bytes 75 11: jne 0x58902cc5
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ecx + 40h]
        mov dword ptr [eax + 4ch], edx
        mov dword ptr [ecx + 40h], esi
        mov dword ptr [ecx + 44h], esi
        mov dword ptr [ecx + 48h], esi
        pop esi
        ret
        mov dword ptr [eax + 48h], edx
        mov dword ptr [ecx + 40h], esi
        mov dword ptr [ecx + 44h], esi
        mov dword ptr [ecx + 48h], esi
        pop esi
        ret
    }
}
