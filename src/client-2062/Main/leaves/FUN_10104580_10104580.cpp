// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104580 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_10104580_10104580() {
    __asm {
        mov eax, dword ptr [ecx + 80h]
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x10104594
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ecx + 7ch]
        mov dword ptr [ecx + 80h], eax
        ret
        mov eax, dword ptr [eax + 10h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x101045a1
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ecx + 80h], eax
        ret
    }
}
