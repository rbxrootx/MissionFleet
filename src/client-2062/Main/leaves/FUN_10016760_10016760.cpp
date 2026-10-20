// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016760 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_10016760_10016760() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 10h]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x1001677c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [edi + 2ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 9D 01 00 00: je 0x10016917
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x10016784
        __asm _emit 0xeb
        __asm _emit 0x08
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 6C F9 FF FF: call 0x100160f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 2ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 88 01 00 00: je 0x10016917
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 18h]
        xor esi, esi
        test ebp, ebp
        ; Exact mapped bytes 76 42: jbe 0x100167df
        __asm _emit 0x76
        __asm _emit 0x42
        mov al, byte ptr [esp + 1ch]
        mov ecx, esi
        and ecx, 3
        cmp ecx, 3
        ; Exact mapped bytes 77 22: ja 0x100167cd
        __asm _emit 0x77
        __asm _emit 0x22
        ; Exact mapped bytes FF 24 8D 20 69 01 10: jmp dword ptr [ecx*4 + 0x10016920]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x10
        mov eax, dword ptr [edi + 28h]
        shr eax, 8
        ; Exact mapped bytes EB 13: jmp 0x100167cd
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [edi + 28h]
        shr eax, 18h
        ; Exact mapped bytes EB 0B: jmp 0x100167cd
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov al, byte ptr [edi + 28h]
        ; Exact mapped bytes EB 06: jmp 0x100167cd
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [edi + 28h]
        shr eax, 10h
        mov dl, byte ptr [esi + ebx]
        mov cl, al
        add cl, 7
        xor dl, cl
        mov byte ptr [esi + ebx], dl
        inc esi
        cmp esi, ebp
        ; Exact mapped bytes 72 C2: jb 0x100167a1
        __asm _emit 0x72
        __asm _emit 0xc2
        cmp ebp, 3
        ; Exact mapped bytes 7E 22: jle 0x10016806
        __asm _emit 0x7e
        __asm _emit 0x22
        lea ecx, [ebp + ebp]
        mov eax, 55555556h
        imul ecx
        mov eax, edx
        mov ecx, dword ptr [edi + 24h]
        shr eax, 1fh
        add edx, eax
        shr ecx, 10h
        lea eax, [edx + ebx]
        mov dl, byte ptr [edx + ebx]
        xor dl, cl
        mov byte ptr [eax], dl
        cmp ebp, 2
        ; Exact mapped bytes 7E 11: jle 0x1001681c
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, ebp
        cdq
        sub eax, edx
        mov edx, dword ptr [edi + 24h]
        sar eax, 1
        add eax, ebx
        shr edx, 8
        xor byte ptr [eax], dl
        mov al, byte ptr [edi + 24h]
        mov cl, byte ptr [ebx]
        xor cl, al
        xor edx, edx
        mov byte ptr [ebx], cl
        mov eax, dword ptr [edi + 24h]
        mov ecx, 1bh
        xor esi, esi
        div ecx
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 10h], edx
        mov ebp, dword ptr [esp + 20h]
        mov ecx, dword ptr [edi + 30h]
        xor eax, eax
        push 0
        mov al, byte ptr [edi + ebp + 4]
        mov ebp, dword ptr [esp + 20h]
        mov edx, dword ptr [ecx]
        add eax, esi
        add eax, ebp
        push eax
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov edx, dword ptr [esp + 20h]
        xor ecx, ecx
        mov dword ptr [esp + 18h], 0
        mov cl, byte ptr [edi + edx + 4]
        and ecx, 80000fffh
        ; Exact mapped bytes 79 08: jns 0x1001687a
        __asm _emit 0x79
        __asm _emit 0x08
        dec ecx
        or ecx, 0fffff000h
        inc ecx
        test ecx, ecx
        ; Exact mapped bytes 7E 74: jle 0x100168f2
        __asm _emit 0x7e
        __asm _emit 0x74
        mov ecx, dword ptr [esp + 10h]
        lea eax, [esi + esi*2]
        add ecx, esi
        lea ebp, [ecx + eax*4]
        mov edx, dword ptr [esp + 18h]
        and edx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x1001689b
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffe0h
        inc edx
        mov al, byte ptr [edx + edi + 4]
        mov cl, byte ptr [esi + ebx]
        xor cl, al
        mov eax, ebp
        mov byte ptr [esi + ebx], cl
        mov ecx, dword ptr [edi + 30h]
        xor edx, edx
        add ebp, 0dh
        div dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 0ch]
        mov al, byte ptr [esi + ebx]
        mov edx, dword ptr [ecx + edx*4]
        xor dl, al
        mov eax, dword ptr [esp + 1ch]
        mov byte ptr [esi + ebx], dl
        inc esi
        cmp esi, eax
        ; Exact mapped bytes 73 4C: jae 0x10016917
        __asm _emit 0x73
        __asm _emit 0x4c
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 18h]
        xor ecx, ecx
        inc eax
        mov cl, byte ptr [edx + edi + 4]
        mov dword ptr [esp + 18h], eax
        and ecx, 80000fffh
        ; Exact mapped bytes 79 08: jns 0x100168ee
        __asm _emit 0x79
        __asm _emit 0x08
        dec ecx
        or ecx, 0fffff000h
        inc ecx
        cmp eax, ecx
        ; Exact mapped bytes 7C 98: jl 0x1001688a
        __asm _emit 0x7c
        __asm _emit 0x98
        cmp esi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 73 1F: jae 0x10016917
        __asm _emit 0x73
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 20h]
        inc eax
        cmp eax, 20h
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 85 31 FF FF FF: jne 0x1001683b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes E9 24 FF FF FF: jmp 0x1001683b
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
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
