// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589779C0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_589779c0() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push esi
        mov edx, 1
        mov esi, dword ptr [ecx + 0e4h]
        mov eax, dword ptr [ecx + 148h]
        cmp esi, edx
        ; Exact mapped bytes 7F 27: jg 0x58977a01
        __asm _emit 0x7f
        __asm _emit 0x27
        mov edx, dword ptr [ecx + 0e0h]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 0e8h]
        dec edx
        cmp esi, edx
        ; Exact mapped bytes 73 10: jae 0x589779fe
        __asm _emit 0x73
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0ch]
        xor ecx, ecx
        mov dword ptr [eax + 14h], edx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        pop esi
        ret
        mov edx, dword ptr [ecx + 48h]
        xor ecx, ecx
        mov dword ptr [eax + 14h], edx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        pop esi
        ret
    }
}
