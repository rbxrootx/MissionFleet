// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024140 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_10024140_10024140() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        mov ecx, dword ptr [eax + 5c54h]
        push esi
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x1002416d
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 7ch]
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ecx + 68h]
        mov esi, dword ptr [eax + 68h]
        cmp esi, edx
        pop esi
        sbb eax, eax
        and al, 0feh
        inc eax
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, dword ptr [esp + 18h]
        test esi, esi
        ; Exact mapped bytes 74 62: je 0x100241d7
        __asm _emit 0x74
        __asm _emit 0x62
        push ebx
        push edi
        mov edi, dword ptr [esp + 1ch]
        mov edx, dword ptr [esi + 4]
        mov esi, dword ptr [esi + 8]
        mov ecx, dword ptr [edi + 0ch]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        mov ebx, ecx
        sub ecx, esi
        sub ebx, esi
        imul ebx, ecx
        mov ecx, eax
        sub eax, edx
        sub ecx, edx
        imul ecx, eax
        add ebx, ecx
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DD 5C 24 0C: fstp qword ptr [esp + 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x0c
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 0ch]
        push edx
        push eax
        ; Exact mapped bytes E8 F3 85 14 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 E5 85 14 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 68h]
        pop edi
        shr ecx, 1
        cmp ecx, eax
        pop ebx
        sbb eax, eax
        pop esi
        and eax, 2
        dec eax
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
