// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F0C90 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_100f0c90_100F0C90() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x100f0d9b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E F8 00 00 00: jle 0x100f0d9b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        lea eax, [edx + 24h]
        lea esi, [eax*8]
        sub esi, eax
        lea eax, [ecx + esi*4]
        mov esi, dword ptr [ecx + esi*4]
        mov edi, esi
        xor edi, 0aah
        and edi, 3ffh
        cmp edi, ebx
        ; Exact mapped bytes 7C 2F: jl 0x100f0cfd
        __asm _emit 0x7c
        __asm _emit 0x2f
        lea edi, [edx*8]
        sub edi, edx
        lea edi, [ecx + edi*4 + 3dch]
        mov edi, dword ptr [edi + 14h]
        xor edi, 0aah
        sub edi, ebx
        xor edi, esi
        xor edi, 0aah
        and edi, 3ffh
        xor edi, esi
        mov dword ptr [eax], edi
        ; Exact mapped bytes EB 10: jmp 0x100f0d0d
        __asm _emit 0xeb
        __asm _emit 0x10
        and esi, 0fffffcaah
        mov ebx, edi
        or esi, 0aah
        mov dword ptr [eax], esi
        lea esi, [edx*8]
        mov edi, dword ptr [eax]
        sub esi, edx
        mov ebp, dword ptr [ecx + esi*4 + 3f0h]
        lea esi, [ecx + esi*4 + 3dch]
        xor ebp, 2a800h
        shr ebp, 0ah
        add ebp, ebx
        shl ebp, 0ah
        xor ebp, edi
        xor ebp, 2a800h
        and ebp, 0ffc00h
        xor ebp, edi
        mov dword ptr [eax], ebp
        lea eax, [edx + 44h]
        lea edi, [eax*8]
        sub edi, eax
        mov eax, dword ptr [esi + 14h]
        mov ebx, dword ptr [ecx + edi*4]
        lea edi, [ecx + edi*4]
        xor eax, ebx
        and eax, 3ffh
        xor eax, ebx
        mov dword ptr [edi], eax
        mov esi, dword ptr [esi + 14h]
        xor esi, eax
        and esi, 0ffc00h
        xor esi, eax
        mov dword ptr [edi], esi
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        mov esi, dword ptr [eax + 4]
        cmp esi, ecx
        pop esi
        pop ebp
        ; Exact mapped bytes 75 17: jne 0x100f0d9b
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
        mov dword ptr [eax + edx*4 + 3a0h], ecx
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
