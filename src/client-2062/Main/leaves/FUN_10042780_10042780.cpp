// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042780 .. +0x1DC bytes.
extern "C" __declspec(naked) void FUN_10042780_10042780() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 8]
        push eax
        ; Exact mapped bytes E8 42 03 00 00: call 0x10042ad0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 50h]
        mov ebx, dword ptr [esi + 4ch]
        mov eax, dword ptr [esi + 14h]
        xor edi, 0aaaaaaaah
        xor ebx, 0aaaaaaaah
        test eax, eax
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x1004288a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        mov ecx, 64h
        cmp eax, ecx
        ; Exact mapped bytes 7E 69: jle 0x10042820
        __asm _emit 0x7e
        __asm _emit 0x69
        mov eax, dword ptr [esi + 28h]
        mov edx, dword ptr [esi + 2ch]
        cmp eax, edx
        ; Exact mapped bytes 7C 59: jl 0x1004281a
        __asm _emit 0x7c
        __asm _emit 0x59
        mov eax, dword ptr [esi + 44h]
        mov dword ptr [esi + 34h], ecx
        xor eax, 0aaaaaaaah
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 2
        mul edx
        mov eax, dword ptr [esi + 60h]
        shr edx, 5
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 4ch], edx
        mov dword ptr [esi + 54h], edx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 3B: jne 0x10042834
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 87h
        ; Exact mapped bytes 7C 05: jl 0x1004280c
        __asm _emit 0x7c
        __asm _emit 0x05
        mov eax, 87h
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A8 A7 05 00: call 0x1009cfc0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x10042834
        __asm _emit 0xeb
        __asm _emit 0x1a
        inc eax
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes EB 14: jmp 0x10042834
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 28h]
        dec ecx
        mov eax, ecx
        mov dword ptr [esi + 28h], ecx
        test eax, eax
        ; Exact mapped bytes 7F 07: jg 0x10042834
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [esi + 28h], 0
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x1004294f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 32: jge 0x10042870
        __asm _emit 0x7d
        __asm _emit 0x32
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 85 06 01 00 00: jne 0x1004294f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 40h]
        add eax, edi
        cmp eax, ebx
        ; Exact mapped bytes 7C 0F: jl 0x10042861
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edi, ebx
        xor edi, 0aaaaaaaah
        mov dword ptr [esi + 50h], edi
        pop edi
        pop esi
        pop ebx
        ret
        mov edi, eax
        xor edi, 0aaaaaaaah
        mov dword ptr [esi + 50h], edi
        pop edi
        pop esi
        pop ebx
        ret
        add edi, -10h
        cmp edi, ebx
        ; Exact mapped bytes 0F 8F D4 00 00 00: jg 0x1004294f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ebx
        xor edi, 0aaaaaaaah
        mov dword ptr [esi + 50h], edi
        pop edi
        pop esi
        pop ebx
        ret
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x1004294f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        test eax, eax
        ; Exact mapped bytes 7E 31: jle 0x100428cd
        __asm _emit 0x7e
        __asm _emit 0x31
        dec eax
        cmp edi, ebx
        mov dword ptr [esi + 24h], eax
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x1004294f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, -10h
        cmp edi, ebx
        ; Exact mapped bytes 7F 02: jg 0x100428b1
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, ebx
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 93 00 00 00: jle 0x1004294f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        xor edi, 0aaaaaaaah
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 28h], eax
        pop edi
        pop esi
        pop ebx
        ret
        mov ebx, dword ptr [esi + 34h]
        mov ecx, dword ptr [esi + 44h]
        test ebx, ebx
        mov dword ptr [esi + 14h], 0
        ; Exact mapped bytes 7C 21: jl 0x100428ff
        __asm _emit 0x7c
        __asm _emit 0x21
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul ecx, ebx
        mul ecx
        shr edx, 5
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 4ch], edx
        mov dword ptr [esi + 54h], edx
        ; Exact mapped bytes EB 23: jmp 0x10042922
        __asm _emit 0xeb
        __asm _emit 0x23
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul ecx, ebx
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 4ch], edx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 1F: jne 0x1004294f
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, ebx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 87h
        ; Exact mapped bytes 7C 05: jl 0x10042943
        __asm _emit 0x7c
        __asm _emit 0x05
        mov eax, 87h
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 71 A6 05 00: call 0x1009cfc0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        xor edi, 0aaaaaaaah
        mov dword ptr [esi + 50h], edi
        pop edi
        pop esi
        pop ebx
        ret
    }
}
