// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100335F0 .. +0x1AB bytes.
extern "C" __declspec(naked) void FUN_100335f0_100335F0() {
    __asm {
        sub esp, 18h
        push ebx
        mov edx, dword ptr [esp + 24h]
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov ecx, 6
        xor eax, eax
        lea edi, [ebx + 74h]
        mov ebp, 3
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [ebx + 9ch], eax
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [edx]
        mov esi, dword ptr [edx + 4]
        mov edi, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        sub ecx, edi
        sub esi, eax
        mov dword ptr [esp + 24h], eax
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cdq
        idiv ebp
        mov eax, esi
        mov dword ptr [esp + 18h], edx
        cdq
        xor eax, edx
        sub eax, edx
        cdq
        idiv ebp
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        mov ebp, edx
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 0D: je 0x1003365d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, ecx
        cdq
        idiv dword ptr [esp + 18h]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 04: jmp 0x10033661
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 10h], ecx
        test ebp, ebp
        ; Exact mapped bytes 74 0B: je 0x10033670
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, esi
        cdq
        idiv ebp
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 04: jmp 0x10033674
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 14h], esi
        test ecx, ecx
        mov ebp, 1
        ; Exact mapped bytes 74 02: je 0x1003367f
        __asm _emit 0x74
        __asm _emit 0x02
        mov ebp, ecx
        lea eax, [esi + esi*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ebp
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 64h
        ; Exact mapped bytes 7D 56: jge 0x100336eb
        __asm _emit 0x7d
        __asm _emit 0x56
        mov edx, dword ptr [esp + 18h]
        test edx, edx
        mov dword ptr [ebx + 9ch], edx
        ; Exact mapped bytes 0F 8E EA 00 00 00: jle 0x10033791
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        imul eax, dword ptr [esp + 14h]
        lea ecx, [ebx + 78h]
        mov ebp, eax
        mov ebx, edx
        mov eax, dword ptr [esp + 10h]
        add esi, ebp
        add edi, eax
        mov eax, 51eb851fh
        imul esi
        sar edx, 5
        mov eax, edx
        mov dword ptr [ecx - 4], edi
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 2ch]
        add ecx, 8
        add edx, dword ptr [eax + 4]
        dec ebx
        mov dword ptr [ecx - 8], edx
        ; Exact mapped bytes 75 D4: jne 0x100336b5
        __asm _emit 0x75
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 3A: jne 0x10033727
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [esp + 18h]
        test ecx, ecx
        mov dword ptr [ebx + 9ch], ecx
        ; Exact mapped bytes 0F 8E 92 00 00 00: jle 0x10033791
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov esi, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        add ebx, 78h
        add edi, esi
        add eax, edx
        mov dword ptr [ebx - 4], edi
        mov dword ptr [ebx], eax
        add ebx, 8
        dec ecx
        ; Exact mapped bytes 75 F1: jne 0x1003370e
        __asm _emit 0x75
        __asm _emit 0xf1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 64h
        ; Exact mapped bytes 7E 65: jle 0x10033791
        __asm _emit 0x7e
        __asm _emit 0x65
        test esi, esi
        ; Exact mapped bytes 75 05: jne 0x10033735
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, 1
        lea ecx, [ecx + ecx*4]
        lea eax, [ecx + ecx*4]
        shl eax, 2
        cdq
        idiv esi
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [esp + 1ch]
        test edx, edx
        mov dword ptr [ebx + 9ch], edx
        ; Exact mapped bytes 7E 3D: jle 0x10033791
        __asm _emit 0x7e
        __asm _emit 0x3d
        xor esi, esi
        imul eax, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 24h]
        lea ecx, [ebx + 78h]
        mov ebp, eax
        mov ebx, edx
        mov edx, dword ptr [esp + 14h]
        add esi, ebp
        mov eax, 51eb851fh
        add edi, edx
        imul esi
        sar edx, 5
        mov eax, edx
        add ecx, 8
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 2ch]
        add edx, dword ptr [eax]
        dec ebx
        mov dword ptr [ecx - 0ch], edx
        mov dword ptr [ecx - 8], edi
        ; Exact mapped bytes 75 D5: jne 0x10033766
        __asm _emit 0x75
        __asm _emit 0xd5
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
