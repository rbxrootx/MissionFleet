// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F310 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5879f310_5879F310() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 2E: je 0x5879f34b
        __asm _emit 0x74
        __asm _emit 0x2e
        push edi
        mov edi, dword ptr [esp + 10h]
        cmp eax, edi
        ; Exact mapped bytes 73 24: jae 0x5879f34a
        __asm _emit 0x73
        __asm _emit 0x24
        mov edx, dword ptr [esp + 18h]
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x5879f346
        __asm _emit 0x74
        __asm _emit 0x18
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 12: je 0x5879f346
        __asm _emit 0x74
        __asm _emit 0x12
        dec edi
        sub edx, eax
        cmp eax, edi
        ; Exact mapped bytes 73 0B: jae 0x5879f346
        __asm _emit 0x73
        __asm _emit 0x0b
        mov byte ptr [esi + eax], cl
        inc eax
        mov cl, byte ptr [edx + eax]
        test cl, cl
        ; Exact mapped bytes 75 F1: jne 0x5879f337
        __asm _emit 0x75
        __asm _emit 0xf1
        mov byte ptr [esi + eax], 0
        pop edi
        pop esi
        ret
    }
}
