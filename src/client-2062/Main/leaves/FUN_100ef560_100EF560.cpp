// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EF560 .. +0x21C bytes.
extern "C" __declspec(naked) void FUN_100ef560_100EF560() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        push edi
        mov dword ptr [esi + 5cb4h], ecx
        mov ecx, dword ptr [esi + 5cb8h]
        push 0
        mov dword ptr [esi + 5cb0h], eax
        ; Exact mapped bytes E8 DA FB 00 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5cb8h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1054h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 6A BE FF FF: call 0x100eb410
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 5cb8h]
        mov eax, dword ptr [esi + 5c40h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 1054h]
        mov edx, dword ptr [esi + 5c40h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [esi + 5c40h]
        mov ecx, dword ptr [esi + 1058h]
        push eax
        ; Exact mapped bytes E8 BA A8 F3 FF: call 0x10029e90
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0e74h]
        mov edx, 7
        xor eax, eax
        test byte ptr [ecx + 8], dl
        ; Exact mapped bytes 76 24: jbe 0x100ef60c
        __asm _emit 0x76
        __asm _emit 0x24
        lea ecx, [esi + 5cbch]
        mov edi, dword ptr [ecx]
        mov ebx, dword ptr [esi + 5c40h]
        inc eax
        add ecx, 4
        mov dword ptr [edi + 50h], ebx
        mov edi, dword ptr [esi + 0e74h]
        mov bl, byte ptr [edi + 8]
        and ebx, edx
        cmp eax, ebx
        ; Exact mapped bytes 72 E2: jb 0x100ef5ee
        __asm _emit 0x72
        __asm _emit 0xe2
        mov eax, dword ptr [esi + 5cb0h]
        mov ecx, dword ptr [eax + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0A: jle 0x100ef626
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x100ef628
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5cb8h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100ef65d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0e74h]
        test byte ptr [ecx + 8], dl
        ; Exact mapped bytes 76 7F: jbe 0x100ef6e7
        __asm _emit 0x76
        __asm _emit 0x7f
        push ebp
        mov ecx, 1
        mov ebp, 40h
        lea edi, [esi + 5cbch]
        mov eax, dword ptr [esi + 5cb0h]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100ef699
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100ef699
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100ef699
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, ebp
        ; Exact mapped bytes EB 02: jmp 0x100ef69b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [edi]
        test eax, eax
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100ef6cc
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], ebx
        mov ebx, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov edx, dword ptr [esi + 0e74h]
        add ebp, 40h
        add edi, 4
        inc ecx
        mov al, byte ptr [edx + 8]
        and eax, 7
        lea edx, [ecx - 1]
        cmp edx, eax
        ; Exact mapped bytes 7C 93: jl 0x100ef679
        __asm _emit 0x7c
        __asm _emit 0x93
        pop ebp
        mov eax, dword ptr [esi + 5cb4h]
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100ef705
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100ef705
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x100ef707
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1054h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100ef73c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 5cb4h]
        mov ecx, dword ptr [eax + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0A: jle 0x100ef756
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x100ef758
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1058h]
        push eax
        ; Exact mapped bytes E8 7C A7 F3 FF: call 0x10029ee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5c40h]
        push ecx
        mov ecx, dword ptr [esi + 1058h]
        ; Exact mapped bytes E8 1A A7 F3 FF: call 0x10029e90
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa7
        __asm _emit 0xf3
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
