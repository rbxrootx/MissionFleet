// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435420 .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_00435420_00435420() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bb50h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 10h]
        mov ebx, ecx
        cmp eax, edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ebx
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x4354e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        sub edi, eax
        mov eax, dword ptr [ebx + 4]
        mov esi, edi
        sar esi, 1
        sub ecx, eax
        sar ecx, 1
        lea edx, [esi + 1]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C 0C 01 00 00: jl 0x43557b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp + 8]
        sar eax, 1
        mov edi, eax
        mov eax, dword ptr [ebx + 4]
        cmp edi, esi
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 7C 73: jl 0x4354f3
        __asm _emit 0x7c
        __asm _emit 0x73
        mov cl, byte ptr [ebp + 0bh]
        lea edx, [ebp + 13h]
        mov byte ptr [ebp + 13h], cl
        lea ecx, [eax + 2]
        push edx
        push ecx
        push ecx
        lea ecx, [esi + esi]
        sub eax, ecx
        add eax, 2
        push eax
        ; Exact mapped bytes E8 F3 04 00 00: call 0x435990
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4]
        lea eax, [esi + esi]
        sub edi, esi
        add esp, 10h
        add ecx, eax
        inc edi
        mov dword ptr [ebx + 4], ecx
        ; Exact mapped bytes 74 15: je 0x4354c5
        __asm _emit 0x74
        __asm _emit 0x15
        lea ecx, [edi + edi]
        mov edi, dword ptr [ebp + 8]
        push ecx
        add eax, edi
        push edi
        push eax
        ; Exact mapped bytes E8 A0 07 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 03: jmp 0x4354c8
        __asm _emit 0xeb
        __asm _emit 0x03
        mov edi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 14: je 0x4354e0
        __asm _emit 0x74
        __asm _emit 0x14
        lea ecx, [esi + esi]
        mov esi, dword ptr [ebp + 0ch]
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        add eax, 2
        lea ecx, [ecx + edi*2 + 2]
        mov dword ptr [ebp - 18h], eax
        cmp edx, ecx
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 74 10: je 0x43551a
        __asm _emit 0x74
        __asm _emit 0x10
        sub edx, ecx
        push edx
        push ecx
        push eax
        ; Exact mapped bytes E8 4C 07 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        add esp, 0ch
        mov ecx, dword ptr [ebx + 4]
        mov dl, byte ptr [ebp + 0bh]
        sub esi, edi
        mov byte ptr [ebp + 13h], dl
        shl esi, 1
        mov edx, dword ptr [ebp + 8]
        add ecx, esi
        mov dword ptr [ebx + 4], ecx
        mov esi, ecx
        lea ecx, [ebp + 13h]
        mov dword ptr [ebp - 4], 0
        push ecx
        push esi
        push eax
        push edx
        ; Exact mapped bytes E8 AC 04 00 00: call 0x4359f0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 4]
        lea eax, [edi + edi]
        add esi, eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebx + 4], esi
        mov esi, dword ptr [ebp + 0ch]
        sub eax, esi
        add esp, 10h
        sar eax, 1
        ; Exact mapped bytes 74 82: je 0x4354e0
        __asm _emit 0x74
        __asm _emit 0x82
        mov edi, dword ptr [ebp + 8]
        lea ecx, [eax + eax]
        ; Exact mapped bytes E9 69 FF FF FF: jmp 0x4354d2
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 20h]
        push 0
        push 0
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E8 A5 03 03 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov dword ptr [ebp + 10h], esi
        sub eax, ecx
        lea ecx, [ebp + 10h]
        sar eax, 1
        cmp eax, esi
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 72 03: jb 0x435591
        __asm _emit 0x72
        __asm _emit 0x03
        lea ecx, [ebp - 20h]
        mov edx, dword ptr [ecx]
        lea eax, [edx + eax + 1]
        test eax, eax
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 74 24: je 0x4355c2
        __asm _emit 0x74
        __asm _emit 0x24
        add eax, eax
        cmp eax, 80h
        push eax
        ; Exact mapped bytes 76 0D: jbe 0x4355b5
        __asm _emit 0x76
        __asm _emit 0x0d
        ; Exact mapped bytes E8 B3 6E 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 14: jmp 0x4355c9
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes E8 06 EA FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x4355c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov cl, byte ptr [ebp + 0bh]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [ebx]
        mov byte ptr [ebp + 13h], cl
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ebp + 13h]
        push edx
        push ecx
        push esi
        push eax
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes E8 06 04 00 00: call 0x4359f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add esp, 10h
        push edi
        push edx
        push eax
        ; Exact mapped bytes E8 68 06 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov cl, byte ptr [ebp + 0bh]
        lea edx, [ebp + 0bh]
        add eax, edi
        mov edi, dword ptr [ebx + 4]
        push edx
        push eax
        push edi
        push esi
        mov byte ptr [ebp + 0bh], cl
        ; Exact mapped bytes E8 E1 03 00 00: call 0x4359f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        add esp, 1ch
        mov dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 66 C7 06 00 00: mov word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebx]
        test edi, edi
        ; Exact mapped bytes 74 46: je 0x435668
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebx + 8]
        sub eax, edi
        sar eax, 1
        shl eax, 1
        cmp eax, 80h
        ; Exact mapped bytes 76 0B: jbe 0x43563d
        __asm _emit 0x76
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes E8 71 6E 09 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 2B: jmp 0x435668
        __asm _emit 0xeb
        __asm _emit 0x2b
        dec eax
        push 685094h
        shr eax, 3
        lea esi, [eax*4 + 685054h]
        ; Exact mapped bytes E8 AE CF FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        mov dword ptr [esi], edi
        ; Exact mapped bytes C7 05 94 50 68 00 00 00 00 00: mov dword ptr [0x685094], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebx + 4], esi
        pop edi
        lea edx, [eax + ecx*2]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebx], eax
    }
}
