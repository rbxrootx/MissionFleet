// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B5E0 .. +0x43C bytes.
extern "C" __declspec(naked) void FUN_5887b5e0_5887B5E0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 118h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 100h], eax
        push ebx
        mov ebx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 0fch], ebx
        push esi
        mov esi, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0f8h], esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x5887b63f
        __asm _emit 0x75
        __asm _emit 0x25
        test edi, edi
        ; Exact mapped bytes 74 21: je 0x5887b63f
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes E8 4C 6E FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 7D 59 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 15 5A FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
        test esi, esi
        ; Exact mapped bytes 74 DB: je 0x5887b61e
        __asm _emit 0x74
        __asm _emit 0xdb
        test ebx, ebx
        ; Exact mapped bytes 74 D7: je 0x5887b61e
        __asm _emit 0x74
        __asm _emit 0xd7
        mov ecx, ebx
        ; Exact mapped bytes E8 22 D1 FE FF: call 0x58868770
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], 0
        cmp edi, 2
        ; Exact mapped bytes 72 D1: jb 0x5887b62e
        __asm _emit 0x72
        __asm _emit 0xd1
        lea ecx, [edi - 1]
        mov edi, dword ptr [ebp - 100h]
        imul ecx, esi
        add ecx, edi
        mov dword ptr [ebp - 108h], ecx
        mov eax, ecx
        xor edx, edx
        sub eax, edi
        div esi
        inc eax
        cmp eax, 8
        ; Exact mapped bytes 0F 87 A1 00 00 00: ja 0x5887b724
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, edi
        ; Exact mapped bytes 76 72: jbe 0x5887b6f9
        __asm _emit 0x76
        __asm _emit 0x72
        lea eax, [esi + edi]
        mov dword ptr [ebp - 10ch], eax
        mov ebx, eax
        cmp ebx, ecx
        ; Exact mapped bytes 77 20: ja 0x5887b6b6
        __asm _emit 0x77
        __asm _emit 0x20
        push edi
        push ebx
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, ebx
        test eax, eax
        cmovle ecx, edi
        add ebx, esi
        mov edi, ecx
        mov ecx, dword ptr [ebp - 108h]
        cmp ebx, ecx
        ; Exact mapped bytes 76 E0: jbe 0x5887b696
        __asm _emit 0x76
        __asm _emit 0xe0
        mov ebx, esi
        mov edx, ecx
        cmp edi, ecx
        ; Exact mapped bytes 74 1D: je 0x5887b6db
        __asm _emit 0x74
        __asm _emit 0x1d
        sub edi, ecx
        mov al, byte ptr [edx]
        lea edx, [edx + 1]
        mov cl, byte ptr [edi + edx - 1]
        mov byte ptr [edi + edx - 1], al
        mov byte ptr [edx - 1], cl
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x5887b6c0
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [ebp - 108h]
        mov edi, dword ptr [ebp - 100h]
        sub ecx, esi
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 108h], ecx
        cmp ecx, edi
        ; Exact mapped bytes 77 9D: ja 0x5887b690
        __asm _emit 0x77
        __asm _emit 0x9d
        mov ebx, dword ptr [ebp - 0fch]
        mov eax, dword ptr [ebp - 114h]
        sub eax, 1
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes 0F 88 20 FF FF FF: js 0x5887b62e
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + eax*4 - 7ch]
        mov ecx, dword ptr [ebp + eax*4 - 0f4h]
        mov dword ptr [ebp - 100h], edi
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x5887b66b
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        shr eax, 1
        imul eax, esi
        add edi, eax
        mov dword ptr [ebp - 10ch], eax
        push edi
        push dword ptr [ebp - 100h]
        mov dword ptr [ebp - 110h], edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 8
        test eax, eax
        mov eax, dword ptr [ebp - 100h]
        ; Exact mapped bytes 7E 3C: jle 0x5887b789
        __asm _emit 0x7e
        __asm _emit 0x3c
        mov dword ptr [ebp - 104h], esi
        mov ebx, edi
        cmp eax, edi
        ; Exact mapped bytes 74 30: je 0x5887b789
        __asm _emit 0x74
        __asm _emit 0x30
        mov esi, dword ptr [ebp - 10ch]
        mov edi, dword ptr [ebp - 104h]
        mov al, byte ptr [ebx]
        mov edx, ebx
        sub edx, esi
        mov cl, byte ptr [edx]
        mov byte ptr [edx], al
        mov byte ptr [ebx], cl
        inc ebx
        sub edi, 1
        ; Exact mapped bytes 75 EE: jne 0x5887b765
        __asm _emit 0x75
        __asm _emit 0xee
        mov edi, dword ptr [ebp - 110h]
        mov esi, dword ptr [ebp - 0f8h]
        mov eax, dword ptr [ebp - 100h]
        mov ebx, dword ptr [ebp - 108h]
        push ebx
        push eax
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 7E 31: jle 0x5887b7cf
        __asm _emit 0x7e
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 100h]
        mov edx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 25: je 0x5887b7cf
        __asm _emit 0x74
        __asm _emit 0x25
        sub eax, ebx
        mov dword ptr [ebp - 110h], eax
        mov ebx, eax
        mov al, byte ptr [edx]
        lea edx, [edx + 1]
        mov cl, byte ptr [ebx + edx - 1]
        mov byte ptr [ebx + edx - 1], al
        mov byte ptr [edx - 1], cl
        sub esi, 1
        ; Exact mapped bytes 75 EB: jne 0x5887b7b4
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebx, dword ptr [ebp - 108h]
        push ebx
        push edi
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f8h]
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 7E 3D: jle 0x5887b821
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov esi, ecx
        mov edx, ebx
        cmp edi, ebx
        ; Exact mapped bytes 74 35: je 0x5887b821
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, edi
        sub eax, ebx
        mov dword ptr [ebp - 110h], eax
        mov ebx, eax
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx]
        lea edx, [edx + 1]
        mov cl, byte ptr [ebx + edx - 1]
        mov byte ptr [ebx + edx - 1], al
        mov byte ptr [edx - 1], cl
        sub esi, 1
        ; Exact mapped bytes 75 EB: jne 0x5887b800
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [ebp - 0f8h]
        mov ebx, dword ptr [ebp - 108h]
        mov esi, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 104h], ebx
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        cmp edi, esi
        ; Exact mapped bytes 76 23: jbe 0x5887b857
        __asm _emit 0x76
        __asm _emit 0x23
        add esi, ecx
        mov dword ptr [ebp - 10ch], esi
        cmp esi, edi
        ; Exact mapped bytes 73 17: jae 0x5887b857
        __asm _emit 0x73
        __asm _emit 0x17
        push edi
        push esi
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f8h]
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 7E DF: jle 0x5887b834
        __asm _emit 0x7e
        __asm _emit 0xdf
        ; Exact mapped bytes EB 30: jmp 0x5887b887
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ebx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        add esi, ecx
        cmp esi, ebx
        ; Exact mapped bytes 77 15: ja 0x5887b87b
        __asm _emit 0x77
        __asm _emit 0x15
        push edi
        push esi
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f8h]
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 7E E5: jle 0x5887b860
        __asm _emit 0x7e
        __asm _emit 0xe5
        mov ebx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 10ch], esi
        mov esi, dword ptr [ebp - 0fch]
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0f8h]
        mov eax, ebx
        sub ebx, ecx
        mov dword ptr [ebp - 104h], eax
        cmp ebx, edi
        ; Exact mapped bytes 76 17: jbe 0x5887b8bb
        __asm _emit 0x76
        __asm _emit 0x17
        push edi
        push ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 7F E1: jg 0x5887b890
        __asm _emit 0x7f
        __asm _emit 0xe1
        mov ecx, dword ptr [ebp - 0f8h]
        mov eax, dword ptr [ebp - 104h]
        mov esi, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 104h], ebx
        cmp ebx, esi
        ; Exact mapped bytes 72 4A: jb 0x5887b915
        __asm _emit 0x72
        __asm _emit 0x4a
        mov dword ptr [ebp - 118h], ecx
        mov edx, ebx
        ; Exact mapped bytes 74 32: je 0x5887b907
        __asm _emit 0x74
        __asm _emit 0x32
        sub esi, ebx
        mov ebx, ecx
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx]
        lea edx, [edx + 1]
        mov cl, byte ptr [esi + edx - 1]
        mov byte ptr [esi + edx - 1], al
        mov byte ptr [edx - 1], cl
        sub ebx, 1
        ; Exact mapped bytes 75 EB: jne 0x5887b8e0
        __asm _emit 0x75
        __asm _emit 0xeb
        mov esi, dword ptr [ebp - 10ch]
        mov ebx, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 0f8h]
        cmp edi, ebx
        mov eax, esi
        cmovne eax, edi
        mov edi, eax
        ; Exact mapped bytes E9 1B FF FF FF: jmp 0x5887b830
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, eax
        ; Exact mapped bytes 73 30: jae 0x5887b949
        __asm _emit 0x73
        __asm _emit 0x30
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        mov dword ptr [ebp - 104h], eax
        cmp eax, edi
        ; Exact mapped bytes 76 1D: jbe 0x5887b949
        __asm _emit 0x76
        __asm _emit 0x1d
        push edi
        push eax
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f8h]
        add esp, 8
        test eax, eax
        mov eax, dword ptr [ebp - 104h]
        ; Exact mapped bytes 74 D9: je 0x5887b920
        __asm _emit 0x74
        __asm _emit 0xd9
        ; Exact mapped bytes EB 34: jmp 0x5887b97d
        __asm _emit 0xeb
        __asm _emit 0x34
        mov esi, dword ptr [ebp - 0fch]
        nop
        sub eax, ecx
        mov dword ptr [ebp - 104h], eax
        cmp eax, dword ptr [ebp - 100h]
        ; Exact mapped bytes 76 17: jbe 0x5887b977
        __asm _emit 0x76
        __asm _emit 0x17
        push edi
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 0f8h]
        add esp, 8
        test eax, eax
        mov eax, dword ptr [ebp - 104h]
        ; Exact mapped bytes 74 D9: je 0x5887b950
        __asm _emit 0x74
        __asm _emit 0xd9
        mov esi, dword ptr [ebp - 10ch]
        mov ebx, dword ptr [ebp - 108h]
        mov ecx, ebx
        mov edx, dword ptr [ebp - 104h]
        sub ecx, esi
        mov edi, dword ptr [ebp - 100h]
        mov eax, edx
        sub eax, edi
        cmp eax, ecx
        ; Exact mapped bytes 7C 3F: jl 0x5887b9da
        __asm _emit 0x7c
        __asm _emit 0x3f
        cmp edi, edx
        ; Exact mapped bytes 73 18: jae 0x5887b9b7
        __asm _emit 0x73
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp + eax*4 - 7ch], edi
        mov dword ptr [ebp + eax*4 - 0f4h], edx
        inc eax
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov ebx, dword ptr [ebp - 0fch]
        cmp esi, ecx
        ; Exact mapped bytes 73 4A: jae 0x5887ba11
        __asm _emit 0x73
        __asm _emit 0x4a
        mov edi, esi
        mov esi, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 100h], edi
        ; Exact mapped bytes E9 97 FC FF FF: jmp 0x5887b671
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, ebx
        ; Exact mapped bytes 73 18: jae 0x5887b9f6
        __asm _emit 0x73
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp + eax*4 - 7ch], esi
        mov dword ptr [ebp + eax*4 - 0f4h], ebx
        inc eax
        mov dword ptr [ebp - 114h], eax
        mov esi, dword ptr [ebp - 0f8h]
        cmp edi, edx
        ; Exact mapped bytes 0F 83 EF FC FF FF: jae 0x5887b6f3
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp - 0fch]
        mov ecx, edx
        ; Exact mapped bytes E9 5A FC FF FF: jmp 0x5887b66b
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E9 DD FC FF FF: jmp 0x5887b6f9
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
