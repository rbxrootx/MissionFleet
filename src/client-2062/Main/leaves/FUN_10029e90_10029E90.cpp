// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029E90 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_10029e90_10029E90() {
    __asm {
        mov eax, dword ptr [ecx + 64h]
        push esi
        mov esi, dword ptr [esp + 8]
        cmp eax, esi
        ; Exact mapped bytes 74 24: je 0x10029ec0
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 78h]
        push edi
        mov edi, dword ptr [ecx + 74h]
        mov dword ptr [ecx + 64h], esi
        mov edx, edi
        imul edx, eax
        imul eax, esi
        imul edx, esi
        inc eax
        mov dword ptr [ecx + 58h], edx
        imul eax, edi
        dec eax
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [ecx + 5ch], eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
