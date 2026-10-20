// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589780B0 .. +0x20F bytes.
extern "C" __declspec(naked) void FUN_589780b0() {
    __asm {
        sub esp, 518h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 530h]
        test esi, esi
        push edi
        mov ebx, 32h
        ; Exact mapped bytes 7C 05: jl 0x589780cf
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp esi, 4
        ; Exact mapped bytes 7C 1B: jl 0x589780ea
        __asm _emit 0x7c
        __asm _emit 0x1b
        mov edi, dword ptr [esp + 52ch]
        push edi
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 14h], ebx
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 18h], esi
        mov edx, dword ptr [edi]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        ; Exact mapped bytes EB 07: jmp 0x589780f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edi, dword ptr [esp + 52ch]
        mov al, byte ptr [esp + 530h]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x58978106
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [edi + esi*4 + 58h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5897810e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [edi + esi*4 + 68h]
        mov dword ptr [esp + 14h], ecx
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x58978128
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [edi]
        push edi
        mov dword ptr [edx + 14h], ebx
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 18h], esi
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        mov esi, dword ptr [esp + 538h]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 12: jne 0x58978146
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [edi + 4]
        push 500h
        push 1
        push edi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 0ch
        mov dword ptr [esi], eax
        mov eax, dword ptr [esi]
        mov ebx, 1
        mov dword ptr [esp + 18h], eax
        xor esi, esi
        mov dword ptr [esp + 10h], ebx
        mov edx, dword ptr [esp + 14h]
        xor ecx, ecx
        mov cl, byte ptr [ebx + edx]
        mov ebp, ecx
        test ebp, ebp
        ; Exact mapped bytes 7C 0A: jl 0x58978170
        __asm _emit 0x7c
        __asm _emit 0x0a
        lea eax, [esi + ebp]
        cmp eax, 100h
        ; Exact mapped bytes 7E 11: jle 0x58978181
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [edi]
        push edi
        mov dword ptr [ecx + 14h], 8
        mov edx, dword ptr [edi]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov eax, ebp
        dec ebp
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x589781b6
        __asm _emit 0x74
        __asm _emit 0x2e
        inc ebp
        mov al, bl
        mov bh, bl
        mov ecx, ebp
        mov eax, ebx
        mov edx, ecx
        shl eax, 10h
        lea edi, [esp + esi + 20h]
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ebx, dword ptr [esp + 10h]
        mov ecx, edx
        and ecx, 3
        add esi, ebp
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov edi, dword ptr [esp + 52ch]
        inc ebx
        cmp ebx, 10h
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 7E 97: jle 0x58978157
        __asm _emit 0x7e
        __asm _emit 0x97
        mov byte ptr [esp + esi + 20h], 0
        mov al, byte ptr [esp + 20h]
        mov dword ptr [esp + 10h], esi
        xor edi, edi
        xor esi, esi
        test al, al
        ; Exact mapped bytes 0F BE E8: movsx ebp, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xe8
        ; Exact mapped bytes 74 50: je 0x58978228
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 0F BE 44 34 20: movsx eax, byte ptr [esp + esi + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x20
        cmp eax, ebp
        ; Exact mapped bytes 75 17: jne 0x589781f8
        __asm _emit 0x75
        __asm _emit 0x17
        lea eax, [esp + esi*4 + 124h]
        ; Exact mapped bytes 0F BE 4C 34 21: movsx ecx, byte ptr [esp + esi + 0x21]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x34
        __asm _emit 0x21
        inc esi
        mov dword ptr [eax], edi
        add eax, 4
        inc edi
        cmp ecx, ebp
        ; Exact mapped bytes 74 F0: je 0x589781e8
        __asm _emit 0x74
        __asm _emit 0xf0
        mov edx, 1
        mov ecx, ebp
        shl edx, cl
        cmp edi, edx
        ; Exact mapped bytes 7C 18: jl 0x5897821d
        __asm _emit 0x7c
        __asm _emit 0x18
        mov eax, dword ptr [esp + 52ch]
        push eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 8
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov al, byte ptr [esp + esi + 20h]
        shl edi, 1
        inc ebp
        test al, al
        ; Exact mapped bytes 75 B0: jne 0x589781d8
        __asm _emit 0x75
        __asm _emit 0xb0
        mov eax, dword ptr [esp + 18h]
        mov ecx, 40h
        lea ebp, [eax + 400h]
        xor eax, eax
        mov edi, ebp
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov al, byte ptr [esp + 530h]
        neg al
        sbb eax, eax
        xor edi, edi
        and al, 10h
        add eax, 0ffh
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x589782b4
        __asm _emit 0x7e
        __asm _emit 0x57
        lea ebx, [esp + 124h]
        mov edx, dword ptr [esp + 14h]
        xor ecx, ecx
        mov cl, byte ptr [edx + edi + 11h]
        mov esi, ecx
        test esi, esi
        ; Exact mapped bytes 7C 0C: jl 0x58978280
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp esi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 7F 06: jg 0x58978280
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp byte ptr [esi + ebp], 0
        ; Exact mapped bytes 74 18: je 0x58978298
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [esp + 52ch]
        push eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 8
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [ebx]
        mov dl, byte ptr [esp + edi + 20h]
        inc edi
        mov dword ptr [ecx + esi*4], eax
        mov eax, dword ptr [esp + 10h]
        add ebx, 4
        cmp edi, eax
        mov byte ptr [esi + ebp], dl
        ; Exact mapped bytes 7C B0: jl 0x58978264
        __asm _emit 0x7c
        __asm _emit 0xb0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 518h
        ret
    }
}
