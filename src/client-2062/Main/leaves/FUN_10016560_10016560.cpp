// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016560 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_10016560_10016560() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 10h]
        push ebx
        push esi
        xor esi, esi
        cmp eax, esi
        mov ebx, ecx
        ; Exact mapped bytes 75 0B: jne 0x1001657a
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp dword ptr [ebx + 2ch], esi
        ; Exact mapped bytes 0F 84 C9 01 00 00: je 0x10016741
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x10016582
        __asm _emit 0xeb
        __asm _emit 0x08
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 6E FB FF FF: call 0x100160f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebx + 2ch], esi
        ; Exact mapped bytes 0F 84 B6 01 00 00: je 0x10016741
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        xor edx, edx
        mov ecx, 1bh
        push ebp
        div ecx
        push edi
        mov edi, dword ptr [esp + 18h]
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 10h], edx
        mov ebp, dword ptr [esp + 1ch]
        cmp esi, ebp
        ; Exact mapped bytes 0F 83 D1 00 00 00: jae 0x10016682
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 20h]
        mov ecx, dword ptr [ebx + 30h]
        xor eax, eax
        push 0
        mov al, byte ptr [ebx + ebp + 4]
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
        mov cl, byte ptr [edx + ebx + 4]
        and ecx, 80000fffh
        ; Exact mapped bytes 79 08: jns 0x100165f0
        __asm _emit 0x79
        __asm _emit 0x08
        dec ecx
        or ecx, 0fffff000h
        inc ecx
        test ecx, ecx
        ; Exact mapped bytes 7E 6F: jle 0x10016663
        __asm _emit 0x7e
        __asm _emit 0x6f
        mov ecx, dword ptr [esp + 10h]
        lea eax, [esi + esi*2]
        add ecx, esi
        lea ebp, [ecx + eax*4]
        mov ecx, dword ptr [ebx + 30h]
        mov eax, ebp
        xor edx, edx
        div dword ptr [ecx + 4]
        mov eax, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [eax + edx*4]
        mov dl, byte ptr [esi + edi]
        xor dl, cl
        mov ecx, dword ptr [esp + 18h]
        mov byte ptr [esi + edi], dl
        mov al, dl
        mov edx, ecx
        and edx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x1001662d
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffe0h
        inc edx
        mov dl, byte ptr [edx + ebx + 4]
        add ebp, 0dh
        xor dl, al
        mov eax, dword ptr [esp + 1ch]
        mov byte ptr [esi + edi], dl
        inc esi
        cmp esi, eax
        ; Exact mapped bytes 73 21: jae 0x10016663
        __asm _emit 0x73
        __asm _emit 0x21
        mov edx, dword ptr [esp + 20h]
        xor eax, eax
        inc ecx
        mov al, byte ptr [edx + ebx + 4]
        mov dword ptr [esp + 18h], ecx
        and eax, 80000fffh
        ; Exact mapped bytes 79 07: jns 0x1001665f
        __asm _emit 0x79
        __asm _emit 0x07
        dec eax
        or eax, 0fffff000h
        inc eax
        cmp ecx, eax
        ; Exact mapped bytes 7C 9D: jl 0x10016600
        __asm _emit 0x7c
        __asm _emit 0x9d
        mov eax, dword ptr [esp + 20h]
        inc eax
        cmp eax, 20h
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 85 30 FF FF FF: jne 0x100165a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x100165a5
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebx + 24h]
        mov cl, byte ptr [edi]
        xor cl, al
        cmp ebp, 2
        mov byte ptr [edi], cl
        ; Exact mapped bytes 7E 11: jle 0x100166a1
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, ebp
        mov ecx, dword ptr [ebx + 24h]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, edi
        shr ecx, 8
        xor byte ptr [eax], cl
        cmp ebp, 3
        ; Exact mapped bytes 7E 22: jle 0x100166c8
        __asm _emit 0x7e
        __asm _emit 0x22
        lea ecx, [ebp + ebp]
        mov eax, 55555556h
        imul ecx
        mov eax, edx
        mov ecx, dword ptr [ebx + 24h]
        shr eax, 1fh
        add edx, eax
        shr ecx, 10h
        lea eax, [edx + edi]
        mov dl, byte ptr [edx + edi]
        xor dl, cl
        mov byte ptr [eax], dl
        mov esi, dword ptr [esp + 24h]
        test esi, esi
        ; Exact mapped bytes 74 06: je 0x100166d6
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi], 0
        xor eax, eax
        test ebp, ebp
        ; Exact mapped bytes 76 56: jbe 0x10016732
        __asm _emit 0x76
        __asm _emit 0x56
        mov cl, byte ptr [esp + 1ch]
        test esi, esi
        ; Exact mapped bytes 74 15: je 0x100166f9
        __asm _emit 0x74
        __asm _emit 0x15
        xor edx, edx
        mov dl, byte ptr [eax + edi]
        lea ebp, [edx + edx*8]
        lea edx, [edx + ebp*2]
        mov ebp, dword ptr [esi]
        add ebp, edx
        mov dword ptr [esi], ebp
        mov ebp, dword ptr [esp + 1ch]
        mov edx, eax
        and edx, 3
        cmp edx, 3
        ; Exact mapped bytes 77 22: ja 0x10016725
        __asm _emit 0x77
        __asm _emit 0x22
        ; Exact mapped bytes FF 24 95 48 67 01 10: jmp dword ptr [edx*4 + 0x10016748]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x10
        mov ecx, dword ptr [ebx + 28h]
        shr ecx, 8
        ; Exact mapped bytes EB 13: jmp 0x10016725
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebx + 28h]
        shr ecx, 18h
        ; Exact mapped bytes EB 0B: jmp 0x10016725
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov cl, byte ptr [ebx + 28h]
        ; Exact mapped bytes EB 06: jmp 0x10016725
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebx + 28h]
        shr ecx, 10h
        mov dl, cl
        add dl, 7
        xor byte ptr [eax + edi], dl
        inc eax
        cmp eax, ebp
        ; Exact mapped bytes 72 AE: jb 0x100166e0
        __asm _emit 0x72
        __asm _emit 0xae
        pop edi
        pop ebp
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x10016741
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebx + 24h]
        mov ecx, dword ptr [esi]
        xor ecx, eax
        mov dword ptr [esi], ecx
        pop esi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
