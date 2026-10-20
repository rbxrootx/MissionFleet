// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A47E0 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_587a47e0_587A47E0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        mov eax, dword ptr [ebx + 11ch]
        inc eax
        mov dword ptr [ebx + 11ch], eax
        cmp eax, dword ptr [ebx + 10ch]
        ; Exact mapped bytes 0F 82 2F 01 00 00: jb 0x587a492d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebx + 150h], 0
        push esi
        push edi
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x587a491c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ebx + 7ch], 2
        mov dword ptr [ebx + 11ch], 0
        ; Exact mapped bytes 74 17: je 0x587a4834
        __asm _emit 0x74
        __asm _emit 0x17
        inc byte ptr [ebx + 151h]
        lea edx, [ebx + 104h]
        mov cl, byte ptr [ebx + 151h]
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x587a48bd
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebx + 104h]
        push ebp
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebx + 151h]
        mov edx, edi
        inc cl
        mov byte ptr [ebx + 151h], cl
        cmp cl, 7
        ; Exact mapped bytes 73 67: jae 0x587a48bc
        __asm _emit 0x73
        __asm _emit 0x67
        mov edx, dword ptr [edi]
        movzx ebx, cl
        movzx eax, byte ptr [ebx + 588b898ch]
        movzx esi, byte ptr [ebx + 588b8994h]
        sub edx, eax
        movzx edi, byte ptr [ebx + 588b89a4h]
        lea eax, [edx - 1]
        xor edx, edx
        add eax, esi
        div esi
        movzx edx, byte ptr [ebx + 588b899ch]
        mov ebp, eax
        mov eax, dword ptr [esp + 14h]
        mov ebx, eax
        mov dword ptr [eax + 110h], ebp
        lea eax, [edi - 1]
        mov esi, dword ptr [ebx + 108h]
        sub esi, edx
        xor edx, edx
        add eax, esi
        div edi
        lea edi, [ebx + 104h]
        mov dword ptr [ebx + 10ch], eax
        test ebp, ebp
        ; Exact mapped bytes 74 90: je 0x587a4840
        __asm _emit 0x74
        __asm _emit 0x90
        lea edi, [ebx + 104h]
        mov edx, edi
        test eax, eax
        ; Exact mapped bytes 74 84: je 0x587a4840
        __asm _emit 0x74
        __asm _emit 0x84
        pop ebp
        cmp cl, 7
        ; Exact mapped bytes 73 5A: jae 0x587a491c
        __asm _emit 0x73
        __asm _emit 0x5a
        mov ecx, dword ptr [ebx + 124h]
        test ecx, ecx
        ; Exact mapped bytes 74 5F: je 0x587a492b
        __asm _emit 0x74
        __asm _emit 0x5f
        movzx esi, byte ptr [ebx + 155h]
        movzx edi, byte ptr [ebx + 158h]
        mov eax, esi
        mov edx, dword ptr [edx]
        imul eax, edi
        cmp eax, 8
        ; Exact mapped bytes 72 17: jb 0x587a48fd
        __asm _emit 0x72
        __asm _emit 0x17
        shr eax, 3
        imul eax, edx
        inc eax
        push eax
        push 0
        push ecx
        ; Exact mapped bytes E8 1A 85 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, edi
        imul eax, esi
        imul eax, edx
        add eax, 7
        shr eax, 3
        inc eax
        push eax
        push 0
        push ecx
        ; Exact mapped bytes E8 FB 84 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        ret
        push 4
        push 0
        push 0
        push ebx
        ; Exact mapped bytes E8 78 D6 FF FF: call 0x587a1fa0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        ret
    }
}
