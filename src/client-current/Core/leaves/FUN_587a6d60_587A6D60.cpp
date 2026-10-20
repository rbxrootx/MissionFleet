// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6D60 .. +0x267 bytes.
extern "C" __declspec(naked) void FUN_587a6d60_587A6D60() {
    __asm {
        sub esp, 34h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 40h]
        push edi
        mov edi, dword ptr [esp + 48h]
        mov dword ptr [esp + 10h], edi
        mov bh, byte ptr [ebp + 8]
        cmp bh, 3
        ; Exact mapped bytes 0F 84 42 02 00 00: je 0x587a6fc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, byte ptr [ebp + 9]
        push esi
        movzx esi, bl
        test bh, 2
        ; Exact mapped bytes 74 45: je 0x587a6dcf
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [esp + 50h]
        mov ecx, esi
        mov dword ptr [esp + 10h], 3
        movzx edx, byte ptr [eax]
        sub ecx, edx
        mov dword ptr [esp + 1ch], ecx
        mov dword ptr [esp + 24h], ecx
        movzx ecx, byte ptr [eax + 1]
        mov eax, esi
        sub eax, ecx
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esp + 50h]
        movzx ecx, byte ptr [eax + 2]
        mov eax, esi
        sub eax, ecx
        mov dword ptr [esp + 3ch], ecx
        mov ecx, dword ptr [esp + 50h]
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes EB 1C: jmp 0x587a6deb
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 50h]
        mov eax, esi
        mov dword ptr [esp + 10h], 1
        movzx edx, byte ptr [ecx + 3]
        sub eax, edx
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 18h], edx
        test bh, 4
        ; Exact mapped bytes 74 2B: je 0x587a6e23
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [esp + 10h]
        movzx eax, byte ptr [ecx + 4]
        sub esi, eax
        mov dword ptr [esp + edx*4 + 24h], esi
        mov esi, edx
        mov dword ptr [esp + esi*4 + 34h], eax
        inc esi
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes EB 04: jmp 0x587a6e27
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 10h]
        cmp bl, 8
        ; Exact mapped bytes 0F 83 A2 00 00 00: jae 0x587a6ed2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [esp + 20h], eax
        mov al, byte ptr [ecx + 3]
        cmp al, 1
        ; Exact mapped bytes 75 0F: jne 0x587a6e4d
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp bl, 2
        ; Exact mapped bytes 75 0A: jne 0x587a6e4d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esp + 10h], 55h
        ; Exact mapped bytes EB 19: jmp 0x587a6e66
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp bl, 4
        ; Exact mapped bytes 75 0C: jne 0x587a6e5e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esp + 10h], 11h
        cmp al, 3
        ; Exact mapped bytes 74 08: je 0x587a6e66
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 0ffh
        mov eax, dword ptr [esp + 20h]
        test eax, eax
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x587a6fbf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov ebp, edx
        neg ebp
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx esi, byte ptr [edi]
        mov edx, ecx
        xor ebx, ebx
        cmp edx, ebp
        ; Exact mapped bytes 7E 2F: jle 0x587a6eba
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov edi, dword ptr [esp + 10h]
        nop
        mov eax, esi
        mov ecx, edx
        test edx, edx
        ; Exact mapped bytes 7E 04: jle 0x587a6e9c
        __asm _emit 0x7e
        __asm _emit 0x04
        shl eax, cl
        ; Exact mapped bytes EB 06: jmp 0x587a6ea2
        __asm _emit 0xeb
        __asm _emit 0x06
        neg ecx
        shr eax, cl
        and eax, edi
        sub edx, dword ptr [esp + 18h]
        or eax, ebx
        mov ebx, eax
        cmp edx, ebp
        ; Exact mapped bytes 7F E2: jg 0x587a6e90
        __asm _emit 0x7f
        __asm _emit 0xe2
        mov edi, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 1ch]
        mov byte ptr [edi], bl
        inc edi
        sub eax, 1
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 75 B6: jne 0x587a6e80
        __asm _emit 0x75
        __asm _emit 0xb6
        pop esi
        pop edi
        pop ebp
        pop ebx
        add esp, 34h
        ret
        mov ecx, dword ptr [ebp]
        xor eax, eax
        imul ecx, esi
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 20h], ecx
        cmp bl, 8
        ; Exact mapped bytes 75 65: jne 0x587a6f4c
        __asm _emit 0x75
        __asm _emit 0x65
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x587a6fbf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor edx, edx
        movzx ebp, byte ptr [edi]
        div esi
        xor ebx, ebx
        mov esi, dword ptr [esp + edx*4 + 24h]
        mov eax, dword ptr [esp + edx*4 + 34h]
        mov edx, eax
        neg edx
        mov dword ptr [esp + 18h], eax
        cmp esi, edx
        ; Exact mapped bytes 7E 23: jle 0x587a6f30
        __asm _emit 0x7e
        __asm _emit 0x23
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, ebp
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 7E 04: jle 0x587a6f1c
        __asm _emit 0x7e
        __asm _emit 0x04
        shl eax, cl
        ; Exact mapped bytes EB 04: jmp 0x587a6f20
        __asm _emit 0xeb
        __asm _emit 0x04
        neg ecx
        shr eax, cl
        sub esi, dword ptr [esp + 18h]
        or eax, ebx
        mov ebx, eax
        cmp esi, edx
        ; Exact mapped bytes 7F E4: jg 0x587a6f10
        __asm _emit 0x7f
        __asm _emit 0xe4
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 10h]
        inc eax
        mov byte ptr [edi], bl
        inc edi
        mov dword ptr [esp + 14h], eax
        cmp eax, ecx
        ; Exact mapped bytes 72 AC: jb 0x587a6ef0
        __asm _emit 0x72
        __asm _emit 0xac
        pop esi
        pop edi
        pop ebp
        pop ebx
        add esp, 34h
        ret
        test ecx, ecx
        ; Exact mapped bytes 74 6F: je 0x587a6fbf
        __asm _emit 0x74
        __asm _emit 0x6f
        xor edx, edx
        movzx ebp, byte ptr [edi]
        div esi
        lea eax, [edi + 1]
        shl ebp, 8
        mov dword ptr [esp + 1ch], eax
        xor ebx, ebx
        movzx eax, byte ptr [eax]
        add ebp, eax
        mov esi, dword ptr [esp + edx*4 + 24h]
        mov eax, dword ptr [esp + edx*4 + 34h]
        mov edx, eax
        neg edx
        mov dword ptr [esp + 18h], eax
        cmp esi, edx
        ; Exact mapped bytes 7E 24: jle 0x587a6fa0
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov eax, ebp
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 7E 04: jle 0x587a6f8c
        __asm _emit 0x7e
        __asm _emit 0x04
        shl eax, cl
        ; Exact mapped bytes EB 04: jmp 0x587a6f90
        __asm _emit 0xeb
        __asm _emit 0x04
        neg ecx
        shr eax, cl
        sub esi, dword ptr [esp + 18h]
        or eax, ebx
        mov ebx, eax
        cmp esi, edx
        ; Exact mapped bytes 7F E4: jg 0x587a6f80
        __asm _emit 0x7f
        __asm _emit 0xe4
        mov ecx, dword ptr [esp + 20h]
        mov esi, dword ptr [esp + 10h]
        mov eax, ebx
        shr eax, 8
        mov byte ptr [edi], al
        mov edi, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 14h]
        inc eax
        mov dword ptr [esp + 14h], eax
        mov byte ptr [edi], bl
        inc edi
        cmp eax, ecx
        ; Exact mapped bytes 72 91: jb 0x587a6f50
        __asm _emit 0x72
        __asm _emit 0x91
        pop esi
        pop edi
        pop ebp
        pop ebx
        add esp, 34h
        ret
    }
}
