// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FAB90 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_588fab90() {
    __asm {
        mov eax, dword ptr [ecx + 20h]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x588fabb8
        __asm _emit 0x74
        __asm _emit 0x21
        inc dword ptr [ecx + 1ch]
        mov edx, dword ptr [ecx + 1ch]
        cmp dword ptr [ecx + 18h], edx
        ; Exact mapped bytes 77 07: ja 0x588faba9
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ecx + 1ch], 0
        add eax, -1
        mov dword ptr [ecx + 20h], eax
        ; Exact mapped bytes 75 07: jne 0x588fabb8
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ecx + 1ch], 0
        ret
    }
}
