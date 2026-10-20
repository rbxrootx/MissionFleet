// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004382D2 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_004382d2_004382D2() {
    __asm {
        movzx eax, word ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [eax*4 + 43f1d0h]
        mov cl, byte ptr [edx]
        add eax, 4
        test cl, cl
        ; Exact mapped bytes 74 27: je 0x438312
        __asm _emit 0x74
        __asm _emit 0x27
        push esi
        cmp cl, 0ffh
        ; Exact mapped bytes 74 18: je 0x438309
        __asm _emit 0x74
        __asm _emit 0x18
        test cl, 40h
        mov esi, 43f20ch
        ; Exact mapped bytes 75 05: jne 0x438300
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, 43f248h
        movzx ecx, cl
        and ecx, 0ffffffbfh
        add eax, dword ptr [esi + ecx*4]
        mov cl, byte ptr [edx + 1]
        inc edx
        test cl, cl
        ; Exact mapped bytes 75 DB: jne 0x4382ec
        __asm _emit 0x75
        __asm _emit 0xdb
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
