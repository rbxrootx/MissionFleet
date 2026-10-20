// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100128E0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_100128e0_100128E0() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0ch]
        push ebx
        push esi
        cmp eax, ecx
        push edi
        ; Exact mapped bytes 74 1B: je 0x10012908
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [esp + 10h]
        mov esi, dword ptr [edx]
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 75 0A: jne 0x10012901
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 4]
        mov ebx, dword ptr [edx + 4]
        cmp edi, ebx
        ; Exact mapped bytes 74 0F: je 0x10012910
        __asm _emit 0x74
        __asm _emit 0x0f
        add eax, 48h
        cmp eax, ecx
        ; Exact mapped bytes 75 EB: jne 0x100128f3
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        add eax, 2dh
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
