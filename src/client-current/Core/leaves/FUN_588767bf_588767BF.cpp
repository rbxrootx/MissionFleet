// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588767BF .. +0x21D bytes.
extern "C" __declspec(naked) void FUN_588767bf_588767BF() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        xor esi, esi
        mov dword ptr [ebp - 18h], edi
        mov dword ptr [ebp - 14h], esi
        cmp dword ptr [edi + 0b0h], esi
        ; Exact mapped bytes 75 15: jne 0x588767f2
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [edi + 0ach], esi
        ; Exact mapped bytes 75 0D: jne 0x588767f2
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dword ptr [ebp - 4], esi
        mov ebx, 58907310h
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x5887698a
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        inc esi
        push 50h
        push esi
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 10 8A FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        pop ecx
        pop ecx
        test ebx, ebx
        ; Exact mapped bytes 75 07: jne 0x5887680f
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, esi
        ; Exact mapped bytes E9 C8 01 00 00: jmp 0x588769d7
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + 88h]
        mov edi, ebx
        mov esi, dword ptr [eax]
        push 14h
        pop ecx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 A8 66 FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        mov dword ptr [ebp - 4], eax
        push esi
        ; Exact mapped bytes E8 DD 63 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x5887684b
        __asm _emit 0x75
        __asm _emit 0x0f
        push ebx
        ; Exact mapped bytes E8 CE 63 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop ecx
        inc eax
        ; Exact mapped bytes E9 8C 01 00 00: jmp 0x588769d7
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ecx], esi
        cmp dword ptr [edi + 0b0h], esi
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x5887695d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes E8 6D 66 FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 A4 63 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        pop ecx
        pop ecx
        push ebx
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x58876881
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 95 63 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x5887690d
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        lea eax, [ebp - 18h]
        mov edi, dword ptr [edi + 0b0h]
        push 0eh
        push edi
        push 1
        push eax
        ; Exact mapped bytes E8 17 D1 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebx + 4]
        mov esi, eax
        push ecx
        push 0fh
        push edi
        lea eax, [ebp - 18h]
        push 1
        push eax
        ; Exact mapped bytes E8 03 D1 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 8]
        push eax
        push 10h
        push edi
        lea eax, [ebp - 18h]
        push 1
        push eax
        ; Exact mapped bytes E8 EF D0 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 30h]
        push eax
        push 0eh
        push edi
        lea eax, [ebp - 18h]
        push 2
        push eax
        ; Exact mapped bytes E8 DB D0 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 50h
        or esi, eax
        lea eax, [ebx + 34h]
        push eax
        push 0fh
        push edi
        lea eax, [ebp - 18h]
        push 2
        push eax
        ; Exact mapped bytes E8 C4 D0 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        or eax, esi
        ; Exact mapped bytes 74 2E: je 0x5887691f
        __asm _emit 0x74
        __asm _emit 0x2e
        push ebx
        ; Exact mapped bytes E8 5F FE FF FF: call 0x58876756
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 13 63 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 0A 63 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        or dword ptr [ebp - 10h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 FA 62 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        pop ecx
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x588769d7
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 8]
        ; Exact mapped bytes EB 0B: jmp 0x5887692f
        __asm _emit 0xeb
        __asm _emit 0x0b
        lea ecx, [eax - 30h]
        cmp cl, 9
        ; Exact mapped bytes 77 1D: ja 0x58876949
        __asm _emit 0x77
        __asm _emit 0x1d
        mov byte ptr [edx], cl
        inc edx
        mov al, byte ptr [edx]
        test al, al
        ; Exact mapped bytes 75 EF: jne 0x58876924
        __asm _emit 0x75
        __asm _emit 0xef
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        mov edi, dword ptr [ebp + 8]
        inc eax
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, ecx
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 4A: jmp 0x58876993
        __asm _emit 0xeb
        __asm _emit 0x4a
        cmp al, 3bh
        ; Exact mapped bytes 75 E1: jne 0x5887692e
        __asm _emit 0x75
        __asm _emit 0xe1
        mov esi, edx
        mov cl, byte ptr [esi + 1]
        mov byte ptr [esi], cl
        lea esi, [esi + 1]
        test cl, cl
        ; Exact mapped bytes 75 F4: jne 0x5887694f
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB D2: jmp 0x5887692f
        __asm _emit 0xeb
        __asm _emit 0xd2
        ; Exact mapped bytes A1 10 73 90 58: mov eax, dword ptr [0x58907310]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebx], eax
        ; Exact mapped bytes A1 14 73 90 58: mov eax, dword ptr [0x58907314]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebx + 4], eax
        ; Exact mapped bytes A1 18 73 90 58: mov eax, dword ptr [0x58907318]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebx + 8], eax
        ; Exact mapped bytes A1 40 73 90 58: mov eax, dword ptr [0x58907340]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebx + 30h], eax
        ; Exact mapped bytes A1 44 73 90 58: mov eax, dword ptr [0x58907344]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebx + 34h], eax
        mov dword ptr [ecx], 1
        lea eax, [edi + 88h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [edi + 80h]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x588769a0
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes F0 FF 08: lock dec dword ptr [eax]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x08
        mov ecx, dword ptr [edi + 7ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x588769c4
        __asm _emit 0x74
        __asm _emit 0x1d
        or eax, 0ffffffffh
        ; Exact mapped bytes F0 0F C1 01: lock xadd dword ptr [ecx], eax
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 14: jne 0x588769c4
        __asm _emit 0x75
        __asm _emit 0x14
        push dword ptr [edi + 7ch]
        ; Exact mapped bytes E8 58 62 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 4E 62 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 7ch], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edi + 80h], esi
        mov dword ptr [eax], ebx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
