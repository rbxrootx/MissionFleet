// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF060 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_100ff060_100FF060() {
    __asm {
        mov edx, dword ptr [ecx + 30h]
        test edx, edx
        ; Exact mapped bytes 74 46: je 0x100ff0ad
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ecx + 38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 15: jne 0x100ff083
        __asm _emit 0x75
        __asm _emit 0x15
        mov dword ptr [edx + 3ch], 0
        mov dword ptr [ecx + 38h], ecx
        mov dword ptr [ecx + 34h], ecx
        mov dword ptr [ecx + 30h], 0
        ret
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [edx + 38h], eax
        mov eax, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [eax + 34h], edx
        mov eax, dword ptr [ecx + 30h]
        cmp dword ptr [eax + 3ch], ecx
        ; Exact mapped bytes 75 06: jne 0x100ff0a0
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [eax + 3ch], edx
        mov dword ptr [ecx + 38h], ecx
        mov dword ptr [ecx + 34h], ecx
        mov dword ptr [ecx + 30h], 0
        ret
    }
}
