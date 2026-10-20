// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012FC0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_10012fc0_10012FC0() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0ch]
        push ebx
        push esi
        cmp eax, ecx
        push edi
        ; Exact mapped bytes 74 1B: je 0x10012fe8
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [esp + 10h]
        mov esi, dword ptr [edx]
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 75 0A: jne 0x10012fe1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 4]
        mov ebx, dword ptr [edx + 4]
        cmp edi, ebx
        ; Exact mapped bytes 74 09: je 0x10012fea
        __asm _emit 0x74
        __asm _emit 0x09
        add eax, 48h
        cmp eax, ecx
        ; Exact mapped bytes 75 EB: jne 0x10012fd3
        __asm _emit 0x75
        __asm _emit 0xeb
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
