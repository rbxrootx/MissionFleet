// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588428E0 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_588428e0() {
    __asm {
        push ebx
        push esi
        lea esi, [ecx + 0d0h]
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 88h], 0fh
        push edi
        ; Exact mapped bytes 7E 62: jle 0x58842956
        __asm _emit 0x7e
        __asm _emit 0x62
        ; Exact mapped bytes E8 77 58 0C 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 2D: je 0x5884292d
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 88h]
        sub edx, 0fh
        cmp eax, edx
        ; Exact mapped bytes 7D 62: jge 0x58842971
        __asm _emit 0x7d
        __asm _emit 0x62
        lea ebx, [eax + 1]
        mov edi, 4
        mov ecx, dword ptr [esi]
        push ebx
        ; Exact mapped bytes E8 71 58 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 F0: jne 0x58842917
        __asm _emit 0x75
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 40: jle 0x58842971
        __asm _emit 0x7e
        __asm _emit 0x40
        lea ebx, [eax - 1]
        mov edi, 4
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push ebx
        ; Exact mapped bytes E8 48 58 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 F0: jne 0x58842940
        __asm _emit 0x75
        __asm _emit 0xf0
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, 4
        ; Exact mapped bytes EB 03: jmp 0x58842960
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0
        ; Exact mapped bytes E8 27 58 0C 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 EF: jne 0x58842960
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        pop ebx
    }
}
