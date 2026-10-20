// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F3710 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_100f3710_100F3710() {
    __asm {
        mov edx, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [ecx + edx*4 + 8]
        inc edi
        mov dword ptr [ecx + edx*4 + 8], edi
        mov eax, dword ptr [ecx + edx*4 + 808h]
        test eax, eax
        ; Exact mapped bytes 75 7A: jne 0x100f37a3
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, dword ptr [ecx + 100ch]
        push esi
        mov esi, dword ptr [ecx + 1014h]
        dec eax
        cmp esi, eax
        ; Exact mapped bytes 75 04: jne 0x100f373f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x100f3742
        __asm _emit 0xeb
        __asm _emit 0x03
        lea eax, [esi + 1]
        mov edi, dword ptr [ecx + 1018h]
        mov dword ptr [ecx + 1014h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 16: je 0x100f3768
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ecx + 101ch]
        mov dword ptr [eax + esi*4], edx
        mov eax, dword ptr [ecx + 1010h]
        inc eax
        mov dword ptr [ecx + 1010h], eax
        mov eax, dword ptr [ecx + edx*4 + 1024h]
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 0ch]
        dec esi
        cmp edx, esi
        ; Exact mapped bytes 75 04: jne 0x100f377e
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 03: jmp 0x100f3781
        __asm _emit 0xeb
        __asm _emit 0x03
        lea esi, [edx + 1]
        mov edi, dword ptr [eax + 10h]
        mov dword ptr [eax + 0ch], esi
        cmp esi, edi
        ; Exact mapped bytes 74 11: je 0x100f379c
        __asm _emit 0x74
        __asm _emit 0x11
        mov esi, dword ptr [eax + 14h]
        mov edi, dword ptr [esp + 0ch]
        mov dword ptr [esi + edx*4], edi
        mov edx, dword ptr [eax + 8]
        inc edx
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ecx + 1438h]
        pop esi
        pop edi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
