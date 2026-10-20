// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104530 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_10104530_10104530() {
    __asm {
        mov eax, dword ptr [ecx + 84h]
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x10104548
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 7ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ecx + 84h], eax
        ; Exact mapped bytes FF 62 3C: jmp dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x62
        __asm _emit 0x3c
        mov edx, dword ptr [eax + 10h]
        test edx, edx
        ; Exact mapped bytes 74 21: je 0x10104570
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ecx + 80h]
        cmp eax, edx
        ; Exact mapped bytes 75 09: jne 0x10104562
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [edx + 10h]
        mov dword ptr [ecx + 80h], edx
        mov eax, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ecx + 84h], eax
        ; Exact mapped bytes FF 62 3C: jmp dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x62
        __asm _emit 0x3c
        ret
    }
}
