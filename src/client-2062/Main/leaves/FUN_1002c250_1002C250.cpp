// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C250 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_1002c250_1002C250() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov esi, dword ptr [edi + 0ch]
        cmp esi, ebx
        ; Exact mapped bytes 74 13: je 0x1002c271
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, esi
        mov esi, dword ptr [esi + 78h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1002c26d
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, ebx
        ; Exact mapped bytes 75 ED: jne 0x1002c25e
        __asm _emit 0x75
        __asm _emit 0xed
        mov dword ptr [edi + 10h], ebx
        mov dword ptr [edi + 18h], ebx
        mov dword ptr [edi + 14h], ebx
        mov dword ptr [edi + 0ch], ebx
        mov dword ptr [edi + 8], ebx
        mov dword ptr [edi + 4], ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}
