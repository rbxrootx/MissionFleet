// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58794AD0 .. +0x1B4 bytes.
extern "C" __declspec(naked) void FUN_58794ad0() {
    __asm {
        sub esp, 18h
        mov edx, dword ptr [esp + 20h]
        xor eax, eax
        mov dword ptr [ecx + 74h], eax
        mov dword ptr [ecx + 78h], eax
        mov dword ptr [ecx + 7ch], eax
        mov dword ptr [ecx + 80h], eax
        mov dword ptr [ecx + 84h], eax
        mov dword ptr [ecx + 88h], eax
        mov dword ptr [ecx + 9ch], eax
        mov eax, dword ptr [esp + 1ch]
        push ebx
        mov ebx, dword ptr [edx]
        push ebp
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [eax + 4]
        mov eax, dword ptr [edx + 4]
        sub eax, edi
        mov dword ptr [esp + 24h], eax
        sub ebx, esi
        mov eax, ebx
        cdq
        xor eax, edx
        sub eax, edx
        cdq
        mov ebp, 3
        idiv ebp
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 18h], edx
        cdq
        xor eax, edx
        sub eax, edx
        cdq
        idiv ebp
        cmp dword ptr [esp + 18h], 0
        mov ebp, edx
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 0D: je 0x58794b4d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, ebx
        cdq
        idiv dword ptr [esp + 18h]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 04: jmp 0x58794b51
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 10h], ebx
        mov eax, dword ptr [esp + 24h]
        test ebp, ebp
        ; Exact mapped bytes 74 03: je 0x58794b5c
        __asm _emit 0x74
        __asm _emit 0x03
        cdq
        idiv ebp
        mov dword ptr [esp + 14h], eax
        mov ebp, 1
        test ebx, ebx
        ; Exact mapped bytes 74 02: je 0x58794b6b
        __asm _emit 0x74
        __asm _emit 0x02
        mov ebp, ebx
        mov eax, dword ptr [esp + 24h]
        imul eax, eax, 64h
        cdq
        idiv ebp
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 64h
        ; Exact mapped bytes 7D 57: jge 0x58794bd6
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ebp, dword ptr [esp + 18h]
        mov dword ptr [ecx + 9ch], ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 8E E9 00 00 00: jle 0x58794c7a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        imul ebx, dword ptr [esp + 14h]
        xor edi, edi
        add ecx, 78h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        add esi, dword ptr [esp + 10h]
        add edi, ebx
        mov eax, 51eb851fh
        imul edi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 2ch]
        mov dword ptr [ecx - 4], esi
        add eax, dword ptr [edx + 4]
        add ecx, 8
        sub ebp, 1
        mov dword ptr [ecx - 8], eax
        ; Exact mapped bytes 75 D4: jne 0x58794ba0
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
        ; Exact mapped bytes 75 38: jne 0x58794c10
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [ecx + 9ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 8E 90 00 00 00: jle 0x58794c7a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        add ecx, 78h
        add esi, ebx
        add edi, edx
        mov dword ptr [ecx - 4], esi
        mov dword ptr [ecx], edi
        add ecx, 8
        sub eax, 1
        ; Exact mapped bytes 75 EF: jne 0x58794bf5
        __asm _emit 0x75
        __asm _emit 0xef
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
        ; Exact mapped bytes 7E 65: jle 0x58794c7a
        __asm _emit 0x7e
        __asm _emit 0x65
        mov esi, dword ptr [esp + 24h]
        test esi, esi
        ; Exact mapped bytes 75 05: jne 0x58794c22
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, 1
        mov eax, ebx
        imul eax, eax, 64h
        cdq
        idiv esi
        mov ebp, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 9ch], ebp
        cdq
        xor eax, edx
        sub eax, edx
        test ebp, ebp
        ; Exact mapped bytes 7E 3D: jle 0x58794c7a
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov ebx, eax
        imul ebx, dword ptr [esp + 10h]
        xor esi, esi
        add ecx, 78h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, dword ptr [esp + 14h]
        add esi, ebx
        mov eax, 51eb851fh
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 2ch]
        add eax, dword ptr [edx]
        mov dword ptr [ecx], edi
        mov dword ptr [ecx - 4], eax
        add ecx, 8
        sub ebp, 1
        ; Exact mapped bytes 75 D6: jne 0x58794c50
        __asm _emit 0x75
        __asm _emit 0xd6
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
