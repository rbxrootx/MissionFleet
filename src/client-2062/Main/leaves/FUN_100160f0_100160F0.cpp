// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100160F0 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_100160f0_100160F0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr [esp + 18h]
        push edi
        lea ebx, [ebp + 4]
        xor eax, eax
        mov ecx, 8
        mov edi, ebx
        mov dword ptr [ebp + 24h], eax
        mov dword ptr [ebp + 28h], eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 8B 3D A8 50 17 10: mov edi, dword ptr [0x101750a8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 20h
        ; Exact mapped bytes 7E 0B: jle 0x1001612e
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, 8
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes EB 13: jmp 0x10016141
        __asm _emit 0xeb
        __asm _emit 0x13
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, eax
        mov edi, ebx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        xor ecx, ecx
        mov dl, byte ptr [ebx + ecx]
        mov eax, ecx
        xor dl, 0aah
        mov esi, 0dh
        mov byte ptr [ebx + ecx], dl
        mov byte ptr [esp + 1ch], dl
        cdq
        idiv esi
        mov eax, dword ptr [esp + 1ch]
        mov esi, dword ptr [esp + 10h]
        and eax, 0ffh
        inc edx
        imul edx, eax
        add esi, edx
        inc ecx
        cmp ecx, 20h
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 7C CC: jl 0x10016143
        __asm _emit 0x7c
        __asm _emit 0xcc
        lea eax, [ebp + 5]
        mov esi, 10h
        mov dl, byte ptr [eax]
        mov cl, byte ptr [eax - 1]
        mov byte ptr [eax - 1], dl
        mov byte ptr [eax], cl
        add eax, 2
        dec esi
        ; Exact mapped bytes 75 F0: jne 0x1001617f
        __asm _emit 0x75
        __asm _emit 0xf0
        mov eax, dword ptr [esp + 10h]
        xor edi, edi
        xor eax, 390a4f16h
        xor esi, esi
        mov edx, 0ffh
        mov ecx, esi
        shl edx, cl
        add esi, 8
        and edx, eax
        shr edx, cl
        inc edi
        cmp esi, 20h
        mov byte ptr [esp + edi + 1bh], dl
        ; Exact mapped bytes 7C E6: jl 0x1001619c
        __asm _emit 0x7c
        __asm _emit 0xe6
        mov al, byte ptr [esp + 1ch]
        mov cl, byte ptr [esp + 1fh]
        mov dl, byte ptr [esp + 1eh]
        mov byte ptr [esp + 1fh], al
        mov al, byte ptr [esp + 1dh]
        mov esi, 0fffffffch
        mov byte ptr [esp + 1eh], al
        mov eax, 0dh
        sub eax, ebp
        mov byte ptr [esp + 1ch], cl
        mov dword ptr [esp + 10h], eax
        mov eax, 9
        sub eax, ebp
        mov byte ptr [esp + 1dh], dl
        mov ecx, ebx
        mov dword ptr [esp + 14h], eax
        sub esi, ebp
        mov bl, byte ptr [ecx]
        lea eax, [esi + ecx]
        mov edx, ebx
        mov edi, 3
        and edx, 0ffh
        imul eax, edx
        cdq
        idiv edi
        mov eax, dword ptr [esp + 10h]
        add eax, ecx
        mov dl, byte ptr [esp + edx + 1ch]
        xor dl, bl
        mov byte ptr [ecx], dl
        and edx, 0ffh
        imul eax, edx
        mov edx, dword ptr [ebp + 24h]
        mov edi, dword ptr [ebp + 28h]
        add edx, eax
        xor eax, eax
        mov dword ptr [ebp + 24h], edx
        mov edx, dword ptr [esp + 14h]
        mov al, byte ptr [ecx]
        add edx, ecx
        imul edx, eax
        dec edx
        add edi, edx
        inc ecx
        mov dword ptr [ebp + 28h], edi
        lea edx, [esi + ecx]
        cmp edx, 20h
        ; Exact mapped bytes 7C AA: jl 0x100161f5
        __asm _emit 0x7c
        __asm _emit 0xaa
        mov esi, dword ptr [ebp + 24h]
        mov ecx, 390a4f16h
        xor esi, ecx
        mov edx, edi
        mov eax, esi
        xor edx, ecx
        test eax, eax
        mov dword ptr [ebp + 24h], esi
        mov dword ptr [ebp + 28h], edx
        ; Exact mapped bytes 75 07: jne 0x1001626c
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 24h], 0b4920f27h
        pop edi
        mov dword ptr [ebp + 2ch], 1
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
