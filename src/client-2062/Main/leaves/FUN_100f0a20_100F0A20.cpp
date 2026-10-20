// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F0A20 .. +0x264 bytes.
extern "C" __declspec(naked) void FUN_100f0a20_100F0A20() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 10h]
        push ebx
        push ebp
        xor ebp, ebp
        mov eax, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        test eax, eax
        mov dword ptr [esp + 10h], ebp
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x100f0aea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 24h]
        lea edi, [edx*8]
        sub edi, edx
        mov ebx, dword ptr [ecx + edi*4]
        lea edi, [ecx + edi*4]
        mov edx, ebx
        xor edx, 0aah
        and edx, 3ffh
        cmp edx, eax
        ; Exact mapped bytes 7C 2F: jl 0x100f0a90
        __asm _emit 0x7c
        __asm _emit 0x2f
        lea edx, [esi*8]
        sub edx, esi
        lea edx, [ecx + edx*4 + 3dch]
        mov edx, dword ptr [edx + 14h]
        xor edx, 0aah
        sub edx, eax
        xor edx, ebx
        xor edx, 0aah
        and edx, 3ffh
        xor edx, ebx
        mov dword ptr [edi], edx
        ; Exact mapped bytes EB 29: jmp 0x100f0ab9
        __asm _emit 0xeb
        __asm _emit 0x29
        sub eax, edx
        mov edx, dword ptr [esp + 1ch]
        mov ebx, dword ptr [edx]
        add ebx, eax
        mov dword ptr [edx], ebx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esp + 20h]
        xor eax, 0aah
        and eax, 3ffh
        mov dword ptr [edx], eax
        mov eax, dword ptr [edi]
        and eax, 0fffffcaah
        or al, 0aah
        mov dword ptr [edi], eax
        lea edx, [esi*8]
        lea eax, [esi + 44h]
        sub edx, esi
        lea edi, [ecx + edx*4 + 3dch]
        lea edx, [eax*8]
        sub edx, eax
        mov edi, dword ptr [edi + 14h]
        lea eax, [ecx + edx*4]
        mov edx, dword ptr [ecx + edx*4]
        xor edi, edx
        and edi, 3ffh
        xor edi, edx
        mov dword ptr [eax], edi
        mov eax, dword ptr [esp + 1ch]
        mov edi, dword ptr [eax]
        test edi, edi
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x100f0c59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 1047ch]
        mov ebx, dword ptr [edx + 10474h]
        mov edx, dword ptr [esp + 20h]
        add eax, ebx
        mov ebx, dword ptr [edx]
        xor edx, edx
        sub eax, ebx
        lea ebx, [edi + edi + 1]
        add eax, edi
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ebx
        cmp edx, edi
        ; Exact mapped bytes 7C 04: jl 0x100f0b36
        __asm _emit 0x7c
        __asm _emit 0x04
        mov edx, edi
        ; Exact mapped bytes EB 0E: jmp 0x100f0b44
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 1ch]
        sub edi, edx
        mov ebp, edi
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [eax], edx
        lea eax, [esi + 24h]
        lea edi, [eax*8]
        sub edi, eax
        mov ebx, dword ptr [ecx + edi*4]
        lea edi, [ecx + edi*4]
        mov eax, ebx
        xor eax, 2a800h
        shr eax, 0ah
        and eax, 3ffh
        cmp eax, edx
        ; Exact mapped bytes 7C 30: jl 0x100f0b99
        __asm _emit 0x7c
        __asm _emit 0x30
        lea eax, [esi*8]
        sub eax, esi
        lea eax, [ecx + eax*4 + 3dch]
        mov eax, dword ptr [eax + 14h]
        xor eax, 2a800h
        shr eax, 0ah
        sub eax, edx
        shl eax, 0ah
        xor eax, ebx
        xor eax, 2a800h
        and eax, 0ffc00h
        xor eax, ebx
        ; Exact mapped bytes EB 1A: jmp 0x100f0bb3
        __asm _emit 0xeb
        __asm _emit 0x1a
        sub edx, eax
        add ebp, edx
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [edx], eax
        mov eax, dword ptr [edi]
        and eax, 0fff2abffh
        or eax, 2a800h
        mov dword ptr [edi], eax
        lea eax, [esi + 44h]
        lea edx, [esi*8]
        lea ebx, [eax*8]
        sub edx, esi
        sub ebx, eax
        mov eax, dword ptr [ecx + ebx*4]
        lea edx, [ecx + edx*4 + 3dch]
        lea ebx, [ecx + ebx*4]
        mov dword ptr [esp + 1ch], edx
        mov edx, dword ptr [edx + 14h]
        xor edx, eax
        and edx, 0ffc00h
        xor edx, eax
        test ebp, ebp
        mov dword ptr [ebx], edx
        ; Exact mapped bytes 74 6B: je 0x100f0c59
        __asm _emit 0x74
        __asm _emit 0x6b
        mov edx, dword ptr [edi]
        mov eax, edx
        xor eax, 0aa00000h
        shr eax, 14h
        and eax, 3ffh
        cmp eax, ebp
        ; Exact mapped bytes 7C 31: jl 0x100f0c34
        __asm _emit 0x7c
        __asm _emit 0x31
        mov eax, dword ptr [esp + 1ch]
        shl ebp, 0ch
        mov eax, dword ptr [eax + 14h]
        sub ebp, dword ptr [esp + 10h]
        xor eax, 0aa00000h
        shr eax, 14h
        add eax, ebp
        mov ebp, dword ptr [esp + 10h]
        shl eax, 14h
        xor eax, edx
        xor eax, 0aa00000h
        and eax, 3ff00000h
        xor eax, edx
        mov dword ptr [edi], eax
        ; Exact mapped bytes EB 10: jmp 0x100f0c44
        __asm _emit 0xeb
        __asm _emit 0x10
        and edx, 0caafffffh
        mov ebp, eax
        or edx, 0aa00000h
        mov dword ptr [edi], edx
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [edx + 14h]
        xor edx, eax
        and edx, 3ff00000h
        xor edx, eax
        mov dword ptr [ebx], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 4], ecx
        ; Exact mapped bytes 75 17: jne 0x100f0c7a
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 1
        mov dword ptr [eax + 39ch], ecx
        mov dword ptr [eax + esi*4 + 3a0h], ecx
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
