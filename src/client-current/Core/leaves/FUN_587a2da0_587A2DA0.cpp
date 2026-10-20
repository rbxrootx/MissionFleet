// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A2DA0 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_587a2da0_587A2DA0() {
    __asm {
        sub esp, 14h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 24h]
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 128h]
        mov edx, dword ptr [esi + 12ch]
        inc eax
        mov dword ptr [esp + 10h], eax
        mov ecx, eax
        mov eax, dword ptr [esi + 124h]
        mov esi, dword ptr [esp + 2ch]
        inc eax
        mov byte ptr [edx], 4
        lea ebx, [edx + 1]
        mov dword ptr [esp + 28h], eax
        mov ebp, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x587a2e7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 40h
        ; Exact mapped bytes 0F 82 7C 00 00 00: jb 0x587a2e64
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi - 1]
        lea edx, [esi - 1]
        add eax, ebp
        add edx, ebx
        cmp ebx, eax
        ; Exact mapped bytes 77 04: ja 0x587a2dfa
        __asm _emit 0x77
        __asm _emit 0x04
        cmp edx, ebp
        ; Exact mapped bytes 73 6A: jae 0x587a2e64
        __asm _emit 0x73
        __asm _emit 0x6a
        lea eax, [esi - 1]
        add eax, ecx
        cmp ebx, eax
        ; Exact mapped bytes 77 04: ja 0x587a2e07
        __asm _emit 0x77
        __asm _emit 0x04
        cmp edx, ecx
        ; Exact mapped bytes 73 5D: jae 0x587a2e64
        __asm _emit 0x73
        __asm _emit 0x5d
        mov eax, esi
        and eax, 0ffffffc0h
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 45 00: movups xmm0, xmmword ptr [ebp]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        add edi, 40h
        ; Exact mapped bytes 0F 10 09: movups xmm1, xmmword ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x09
        mov edx, edi
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 0B: movups xmmword ptr [ebx], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 10 45 10: movups xmm0, xmmword ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 0F 10 49 10: movups xmm1, xmmword ptr [ecx + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 4B 10: movups xmmword ptr [ebx + 0x10], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4b
        __asm _emit 0x10
        ; Exact mapped bytes 0F 10 45 20: movups xmm0, xmmword ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 0F 10 49 20: movups xmm1, xmmword ptr [ecx + 0x20]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 4B 20: movups xmmword ptr [ebx + 0x20], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4b
        __asm _emit 0x20
        ; Exact mapped bytes 0F 10 49 30: movups xmm1, xmmword ptr [ecx + 0x30]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0x30
        add ecx, 40h
        ; Exact mapped bytes 0F 10 45 30: movups xmm0, xmmword ptr [ebp + 0x30]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x30
        add ebp, 40h
        ; Exact mapped bytes 66 0F F8 C8: psubb xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 11 4B 30: movups xmmword ptr [ebx + 0x30], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4b
        __asm _emit 0x30
        add ebx, 40h
        cmp edi, eax
        ; Exact mapped bytes 72 B0: jb 0x587a2e10
        __asm _emit 0x72
        __asm _emit 0xb0
        cmp edx, esi
        ; Exact mapped bytes 73 1B: jae 0x587a2e7f
        __asm _emit 0x73
        __asm _emit 0x1b
        mov edx, esi
        sub edx, edi
        mov edi, esi
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        sub al, byte ptr [ebp]
        inc ebp
        mov byte ptr [ebx], al
        inc ebx
        sub edx, 1
        ; Exact mapped bytes 75 F1: jne 0x587a2e70
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esp + 30h]
        cmp edi, eax
        ; Exact mapped bytes 0F 83 91 00 00 00: jae 0x587a2f1c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        sub ebx, ecx
        sub dword ptr [esp + 28h], edx
        sub ebp, edx
        sub eax, edi
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 28h]
        movzx esi, byte ptr [edi + ebp]
        movzx edx, byte ptr [edi + eax]
        movzx eax, byte ptr [edi]
        inc edi
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 10h], edi
        mov edi, esi
        mov esi, eax
        mov dword ptr [esp + 1ch], edx
        sub edi, edx
        sub esi, edx
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 14h], eax
        mov eax, esi
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 18h], eax
        lea eax, [esi + edi]
        cdq
        mov esi, eax
        mov eax, dword ptr [esp + 14h]
        xor esi, edx
        sub esi, edx
        mov edx, dword ptr [esp + 18h]
        cmp eax, edx
        ; Exact mapped bytes 7F 04: jg 0x587a2efc
        __asm _emit 0x7f
        __asm _emit 0x04
        cmp eax, esi
        ; Exact mapped bytes 7E 0F: jle 0x587a2f0b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [esp + 1ch]
        cmp edx, esi
        cmovle eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 2ch], eax
        mov al, byte ptr [ecx]
        sub al, byte ptr [esp + 2ch]
        mov byte ptr [ecx + ebx], al
        inc ecx
        sub dword ptr [esp + 30h], 1
        ; Exact mapped bytes 75 84: jne 0x587a2ea0
        __asm _emit 0x75
        __asm _emit 0x84
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
    }
}
