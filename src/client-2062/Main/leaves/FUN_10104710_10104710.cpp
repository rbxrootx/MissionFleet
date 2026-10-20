// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104710 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_10104710_10104710() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov esi, dword ptr [edi + 78h]
        cmp esi, ebx
        ; Exact mapped bytes 74 13: je 0x10104731
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, esi
        mov esi, dword ptr [esi + 14h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1010472d
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, ebx
        ; Exact mapped bytes 75 ED: jne 0x1010471e
        __asm _emit 0x75
        __asm _emit 0xed
        mov dword ptr [edi + 78h], ebx
        mov dword ptr [edi + 7ch], ebx
        mov dword ptr [edi + 80h], ebx
        mov dword ptr [edi + 84h], ebx
        mov dword ptr [edi + 88h], ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}
