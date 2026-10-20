// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A2550 .. +0x244 bytes.
extern "C" __declspec(naked) void FUN_587a2550_587A2550() {
    __asm {
        sub esp, 0ch
        push edi
        mov edi, dword ptr [esp + 1ch]
        cmp edi, 6
        ; Exact mapped bytes 0F 8D 2E 02 00 00: jge 0x587a278f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        movzx ebx, byte ptr [edi + 588b898ch]
        push ebp
        mov ebp, dword ptr [esp + 1ch]
        push esi
        movzx eax, byte ptr [ebp + 0bh]
        mov ebp, dword ptr [ebp]
        mov ecx, eax
        mov dword ptr [esp + 14h], ebp
        sub ecx, 1
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x587a26d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x587a2664
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 2
        ; Exact mapped bytes 74 5C: je 0x587a25ef
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edi, dword ptr [esp + 24h]
        shr eax, 3
        mov dword ptr [esp + 10h], eax
        cmp ebx, ebp
        ; Exact mapped bytes 0F 83 9A 01 00 00: jae 0x587a2740
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        mov esi, ebx
        imul esi, eax
        movzx ecx, byte ptr [ecx + 588b8994h]
        mov dword ptr [esp + 14h], ecx
        mov edx, ecx
        imul ecx, eax
        add esi, edi
        mov dword ptr [esp + 18h], ecx
        cmp edi, esi
        ; Exact mapped bytes 74 17: je 0x587a25e0
        __asm _emit 0x74
        __asm _emit 0x17
        push eax
        push esi
        push edi
        ; Exact mapped bytes E8 BF A2 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        add esp, 0ch
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        add ebx, edx
        add edi, eax
        add esi, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 72 DB: jb 0x587a25c5
        __asm _emit 0x72
        __asm _emit 0xdb
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x587a2740
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 24h]
        mov edx, 4
        mov dword ptr [esp + 10h], 0
        cmp ebx, ebp
        ; Exact mapped bytes 0F 83 38 01 00 00: jae 0x587a2740
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edi, byte ptr [edi + 588b8994h]
        nop
        mov ebp, dword ptr [esp + 24h]
        mov al, bl
        and al, 1
        mov ecx, 4
        shl al, 2
        sub cl, al
        mov eax, ebx
        shr eax, 1
        movzx eax, byte ptr [eax + ebp]
        shr eax, cl
        mov ecx, edx
        and eax, 0fh
        shl eax, cl
        mov ecx, dword ptr [esp + 10h]
        or ecx, eax
        mov dword ptr [esp + 10h], ecx
        test edx, edx
        ; Exact mapped bytes 75 10: jne 0x587a2651
        __asm _emit 0x75
        __asm _emit 0x10
        mov byte ptr [esi], cl
        mov edx, 4
        inc esi
        xor ecx, ecx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes EB 03: jmp 0x587a2654
        __asm _emit 0xeb
        __asm _emit 0x03
        sub edx, 4
        add ebx, edi
        cmp ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 72 B4: jb 0x587a2610
        __asm _emit 0x72
        __asm _emit 0xb4
        cmp edx, 4
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x587a273c
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 24h]
        mov edx, 6
        mov dword ptr [esp + 10h], 0
        cmp ebx, ebp
        ; Exact mapped bytes 0F 83 C3 00 00 00: jae 0x587a2740
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edi, byte ptr [edi + 588b8994h]
        mov ebp, dword ptr [esp + 24h]
        mov al, bl
        and al, 3
        mov ecx, 3
        sub cl, al
        mov eax, ebx
        shr eax, 2
        add cl, cl
        movzx eax, byte ptr [eax + ebp]
        shr eax, cl
        mov ecx, edx
        and eax, 3
        shl eax, cl
        mov ecx, dword ptr [esp + 10h]
        or ecx, eax
        mov dword ptr [esp + 10h], ecx
        test edx, edx
        ; Exact mapped bytes 75 10: jne 0x587a26c5
        __asm _emit 0x75
        __asm _emit 0x10
        mov byte ptr [esi], cl
        mov edx, 6
        inc esi
        xor ecx, ecx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes EB 03: jmp 0x587a26c8
        __asm _emit 0xeb
        __asm _emit 0x03
        sub edx, 2
        add ebx, edi
        cmp ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 72 B4: jb 0x587a2684
        __asm _emit 0x72
        __asm _emit 0xb4
        cmp edx, 6
        ; Exact mapped bytes EB 67: jmp 0x587a273c
        __asm _emit 0xeb
        __asm _emit 0x67
        mov esi, dword ptr [esp + 24h]
        mov edx, 7
        mov dword ptr [esp + 10h], 0
        cmp ebx, ebp
        ; Exact mapped bytes 73 56: jae 0x587a2740
        __asm _emit 0x73
        __asm _emit 0x56
        movzx edi, byte ptr [edi + 588b8994h]
        mov ebp, dword ptr [esp + 24h]
        mov al, bl
        and al, 7
        mov ecx, 7
        sub cl, al
        mov eax, ebx
        shr eax, 3
        movzx eax, byte ptr [eax + ebp]
        shr eax, cl
        mov ecx, edx
        and eax, 1
        shl eax, cl
        mov ecx, dword ptr [esp + 10h]
        or ecx, eax
        mov dword ptr [esp + 10h], ecx
        test edx, edx
        ; Exact mapped bytes 75 10: jne 0x587a2730
        __asm _emit 0x75
        __asm _emit 0x10
        mov byte ptr [esi], cl
        mov edx, 7
        inc esi
        xor ecx, ecx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes EB 01: jmp 0x587a2731
        __asm _emit 0xeb
        __asm _emit 0x01
        dec edx
        add ebx, edi
        cmp ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 72 B8: jb 0x587a26f1
        __asm _emit 0x72
        __asm _emit 0xb8
        cmp edx, 7
        ; Exact mapped bytes 74 02: je 0x587a2740
        __asm _emit 0x74
        __asm _emit 0x02
        mov byte ptr [esi], cl
        mov eax, dword ptr [esp + 28h]
        xor edx, edx
        mov ebx, dword ptr [esp + 20h]
        movzx esi, byte ptr [eax + 588b8994h]
        movzx eax, byte ptr [eax + 588b898ch]
        mov ecx, esi
        sub ecx, eax
        mov eax, dword ptr [ebx]
        dec eax
        add eax, ecx
        div esi
        cmp byte ptr [ebx + 0bh], 8
        movzx edx, byte ptr [ebx + 0bh]
        mov dword ptr [ebx], eax
        ; Exact mapped bytes 72 11: jb 0x587a2780
        __asm _emit 0x72
        __asm _emit 0x11
        shr edx, 3
        imul edx, eax
        pop esi
        pop ebp
        mov dword ptr [ebx + 4], edx
        pop ebx
        pop edi
        add esp, 0ch
        ret
        imul edx, eax
        pop esi
        pop ebp
        add edx, 7
        shr edx, 3
        mov dword ptr [ebx + 4], edx
        pop ebx
        pop edi
        add esp, 0ch
        ret
    }
}
