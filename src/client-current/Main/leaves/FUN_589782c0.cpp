// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589782C0 .. +0x22B bytes.
extern "C" __declspec(naked) void FUN_589782c0() {
    __asm {
        sub esp, 82ch
        mov ecx, 8
        xor eax, eax
        push ebx
        push ebp
        push esi
        push edi
        lea edi, [esp + 10h]
        mov ebp, dword ptr [esp + 848h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov ecx, 101h
        xor eax, eax
        lea edi, [esp + 34h]
        mov dword ptr [ebp + 400h], 1
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 101h
        or eax, 0ffffffffh
        lea edi, [esp + 438h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        or eax, 0ffffffffh
        mov edi, 3b9aca00h
        xor ecx, ecx
        mov esi, ebp
        mov edx, dword ptr [esi]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x58978321
        __asm _emit 0x74
        __asm _emit 0x08
        cmp edx, edi
        ; Exact mapped bytes 7F 04: jg 0x58978321
        __asm _emit 0x7f
        __asm _emit 0x04
        mov edi, edx
        mov eax, ecx
        inc ecx
        add esi, 4
        cmp ecx, 100h
        ; Exact mapped bytes 7E E6: jle 0x58978313
        __asm _emit 0x7e
        __asm _emit 0xe6
        or edx, 0ffffffffh
        mov ebx, 3b9aca00h
        xor ecx, ecx
        mov edi, ebp
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x5897834b
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp esi, ebx
        ; Exact mapped bytes 7F 08: jg 0x5897834b
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp ecx, eax
        ; Exact mapped bytes 74 04: je 0x5897834b
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebx, esi
        mov edx, ecx
        inc ecx
        add edi, 4
        cmp ecx, 100h
        ; Exact mapped bytes 7E E2: jle 0x58978339
        __asm _emit 0x7e
        __asm _emit 0xe2
        test edx, edx
        ; Exact mapped bytes 7C 78: jl 0x589783d3
        __asm _emit 0x7c
        __asm _emit 0x78
        mov ecx, dword ptr [ebp + edx*4]
        mov ebx, dword ptr [ebp + eax*4]
        mov edi, dword ptr [esp + eax*4 + 34h]
        add ebx, ecx
        mov ecx, dword ptr [esp + eax*4 + 438h]
        inc edi
        mov dword ptr [ebp + eax*4], ebx
        mov dword ptr [ebp + edx*4], 0
        test ecx, ecx
        mov dword ptr [esp + eax*4 + 34h], edi
        ; Exact mapped bytes 7C 16: jl 0x5897839b
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, ecx
        mov edi, dword ptr [esp + eax*4 + 34h]
        mov ecx, dword ptr [esp + eax*4 + 438h]
        inc edi
        test ecx, ecx
        mov dword ptr [esp + eax*4 + 34h], edi
        ; Exact mapped bytes 7D EA: jge 0x58978385
        __asm _emit 0x7d
        __asm _emit 0xea
        mov esi, dword ptr [esp + edx*4 + 34h]
        mov dword ptr [esp + eax*4 + 438h], edx
        mov eax, dword ptr [esp + edx*4 + 438h]
        inc esi
        test eax, eax
        mov dword ptr [esp + edx*4 + 34h], esi
        ; Exact mapped bytes 0F 8C 4D FF FF FF: jl 0x58978307
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + eax*4 + 34h]
        inc edx
        mov dword ptr [esp + eax*4 + 34h], edx
        mov eax, dword ptr [esp + eax*4 + 438h]
        test eax, eax
        ; Exact mapped bytes 7D EC: jge 0x589783ba
        __asm _emit 0x7d
        __asm _emit 0xec
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x58978307
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 840h]
        lea edi, [esp + 34h]
        mov ebp, 101h
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 74 22: je 0x5897840b
        __asm _emit 0x74
        __asm _emit 0x22
        cmp esi, 20h
        ; Exact mapped bytes 7E 11: jle 0x589783ff
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, dword ptr [ebx]
        push ebx
        mov dword ptr [edx + 14h], 27h
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        add esp, 4
        mov cl, byte ptr [esp + esi + 10h]
        lea eax, [esp + esi + 10h]
        inc cl
        mov byte ptr [eax], cl
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 D2: jne 0x589783e3
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, 20h
        mov cl, byte ptr [esp + edx + 10h]
        test cl, cl
        ; Exact mapped bytes 76 46: jbe 0x58978464
        __asm _emit 0x76
        __asm _emit 0x46
        lea esi, [edx - 2]
        mov eax, esi
        mov bl, byte ptr [esp + eax + 10h]
        test bl, bl
        ; Exact mapped bytes 75 09: jne 0x58978434
        __asm _emit 0x75
        __asm _emit 0x09
        mov bl, byte ptr [esp + eax + 0fh]
        dec eax
        test bl, bl
        ; Exact mapped bytes 74 F7: je 0x5897842b
        __asm _emit 0x74
        __asm _emit 0xf7
        sub cl, 2
        mov byte ptr [esp + edx + 10h], cl
        mov cl, byte ptr [esp + edx + 0fh]
        inc cl
        mov byte ptr [esp + edx + 0fh], cl
        mov bl, byte ptr [esp + eax + 11h]
        add bl, 2
        mov byte ptr [esp + eax + 11h], bl
        mov cl, byte ptr [esp + eax + 10h]
        lea eax, [esp + eax + 10h]
        dec cl
        mov byte ptr [eax], cl
        mov cl, byte ptr [esp + edx + 10h]
        test cl, cl
        ; Exact mapped bytes 77 BD: ja 0x58978421
        __asm _emit 0x77
        __asm _emit 0xbd
        dec edx
        cmp edx, 10h
        ; Exact mapped bytes 7F AC: jg 0x58978416
        __asm _emit 0x7f
        __asm _emit 0xac
        mov al, byte ptr [esp + edx + 10h]
        test al, al
        ; Exact mapped bytes 75 09: jne 0x5897847b
        __asm _emit 0x75
        __asm _emit 0x09
        mov al, byte ptr [esp + edx + 0fh]
        dec edx
        test al, al
        ; Exact mapped bytes 74 F7: je 0x58978472
        __asm _emit 0x74
        __asm _emit 0xf7
        mov cl, byte ptr [esp + edx + 10h]
        mov edi, dword ptr [esp + 844h]
        lea eax, [esp + edx + 10h]
        dec cl
        mov esi, 1
        mov byte ptr [eax], cl
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        mov ecx, edi
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 8], edx
        mov dl, byte ptr [esp + 20h]
        mov dword ptr [ecx + 0ch], eax
        mov byte ptr [ecx + 10h], dl
        xor edx, edx
        xor eax, eax
        lea ecx, [esp + 34h]
        cmp dword ptr [ecx], esi
        ; Exact mapped bytes 75 05: jne 0x589784c8
        __asm _emit 0x75
        __asm _emit 0x05
        mov byte ptr [edx + edi + 11h], al
        inc edx
        inc eax
        add ecx, 4
        cmp eax, 0ffh
        ; Exact mapped bytes 7E EC: jle 0x589784bf
        __asm _emit 0x7e
        __asm _emit 0xec
        inc esi
        cmp esi, 20h
        ; Exact mapped bytes 7E E0: jle 0x589784b9
        __asm _emit 0x7e
        __asm _emit 0xe0
        mov byte ptr [edi + 111h], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 82ch
        ret
    }
}
