// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB0E0 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_100fb0e0_100FB0E0() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        xor edx, edx
        cmp eax, edx
        ; Exact mapped bytes 75 1C: jne 0x100fb105
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 4], eax
        mov dword ptr [eax + 0b6ch], edx
        mov dword ptr [eax + 0b70h], edx
        inc dword ptr [ecx + 0ch]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx + 8]
        mov dword ptr [esi + 0b70h], eax
        mov esi, dword ptr [ecx + 8]
        mov dword ptr [eax + 0b6ch], esi
        mov dword ptr [ecx + 8], eax
        mov dword ptr [eax + 0b70h], edx
        mov edx, dword ptr [ecx + 0ch]
        inc edx
        pop esi
        mov dword ptr [ecx + 0ch], edx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
