// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588763F5 .. +0x361 bytes.
extern "C" __declspec(naked) void FUN_588763f5_588763F5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        xor edi, edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 4], edi
        mov dword ptr [ebp - 0ch], edi
        cmp dword ptr [esi + 0ach], edi
        ; Exact mapped bytes 75 1E: jne 0x58876434
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp dword ptr [esi + 0b0h], edi
        ; Exact mapped bytes 75 16: jne 0x58876434
        __asm _emit 0x75
        __asm _emit 0x16
        mov dword ptr [ebp - 4], edi
        mov ebx, 58907310h
        mov dword ptr [ebp - 8], edi
        lea edi, [esi + 88h]
        ; Exact mapped bytes E9 DC 02 00 00: jmp 0x58876710
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 50h
        push 1
        ; Exact mapped bytes E8 D3 8D FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov ebx, eax
        ; Exact mapped bytes E8 CB 67 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test ebx, ebx
        ; Exact mapped bytes 75 08: jne 0x58876454
        __asm _emit 0x75
        __asm _emit 0x08
        xor eax, eax
        inc eax
        ; Exact mapped bytes E9 FD 02 00 00: jmp 0x58876751
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 1
        ; Exact mapped bytes E8 B3 8D FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        push 0
        mov dword ptr [ebp - 8], edi
        ; Exact mapped bytes E8 A7 67 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 75 09: jne 0x58876479
        __asm _emit 0x75
        __asm _emit 0x09
        push ebx
        ; Exact mapped bytes E8 9A 67 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB D3: jmp 0x5887644c
        __asm _emit 0xeb
        __asm _emit 0xd3
        cmp dword ptr [esi + 0ach], 0
        ; Exact mapped bytes 0F 84 3E 02 00 00: je 0x588766c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 1
        ; Exact mapped bytes E8 81 8D FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        push 0
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes E8 75 67 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 75 12: jne 0x588764b4
        __asm _emit 0x75
        __asm _emit 0x12
        push ebx
        ; Exact mapped bytes E8 68 67 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5F 67 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB C2: jmp 0x58876476
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov edi, dword ptr [esi + 0ach]
        lea eax, [ebx + 0ch]
        push eax
        push 15h
        push edi
        lea eax, [ebp - 10h]
        push 1
        push eax
        ; Exact mapped bytes E8 E2 D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebx + 10h]
        mov esi, eax
        push ecx
        push 14h
        push edi
        lea eax, [ebp - 10h]
        push 1
        push eax
        ; Exact mapped bytes E8 CE D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 14h]
        push eax
        push 16h
        push edi
        lea eax, [ebp - 10h]
        push 1
        push eax
        ; Exact mapped bytes E8 BA D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 18h]
        push eax
        push 17h
        push edi
        lea eax, [ebp - 10h]
        push 1
        push eax
        ; Exact mapped bytes E8 A6 D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 50h
        or esi, eax
        lea eax, [ebx + 1ch]
        push eax
        push 18h
        push edi
        lea eax, [ebp - 10h]
        push 1
        push eax
        ; Exact mapped bytes E8 8F D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 20h]
        push eax
        push 50h
        push edi
        lea eax, [ebp - 10h]
        push 1
        push eax
        ; Exact mapped bytes E8 7B D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 24h]
        push eax
        push 51h
        push edi
        lea eax, [ebp - 10h]
        push 1
        push eax
        ; Exact mapped bytes E8 67 D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 28h]
        push eax
        push 1ah
        push edi
        lea eax, [ebp - 10h]
        push 0
        push eax
        ; Exact mapped bytes E8 53 D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 50h
        or esi, eax
        lea eax, [ebx + 29h]
        push eax
        push 19h
        push edi
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 3C D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 2ah]
        push eax
        push 54h
        push edi
        lea eax, [ebp - 10h]
        push 0
        push eax
        ; Exact mapped bytes E8 28 D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 2bh]
        push eax
        push 55h
        push edi
        lea eax, [ebp - 10h]
        push 0
        push eax
        ; Exact mapped bytes E8 14 D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 2ch]
        push eax
        push 56h
        push edi
        lea eax, [ebp - 10h]
        push 0
        push eax
        ; Exact mapped bytes E8 00 D4 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 50h
        or esi, eax
        lea eax, [ebx + 2dh]
        push eax
        push 57h
        push edi
        lea eax, [ebp - 10h]
        push 0
        push eax
        ; Exact mapped bytes E8 E9 D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 2eh]
        push eax
        push 52h
        push edi
        lea eax, [ebp - 10h]
        push 0
        push eax
        ; Exact mapped bytes E8 D5 D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 2fh]
        push eax
        push 53h
        push edi
        lea eax, [ebp - 10h]
        push 0
        push eax
        ; Exact mapped bytes E8 C1 D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 38h]
        push eax
        push 15h
        push edi
        lea eax, [ebp - 10h]
        push 2
        push eax
        ; Exact mapped bytes E8 AD D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 50h
        or esi, eax
        lea eax, [ebx + 3ch]
        push eax
        push 14h
        push edi
        lea eax, [ebp - 10h]
        push 2
        push eax
        ; Exact mapped bytes E8 96 D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 40h]
        push eax
        push 16h
        push edi
        lea eax, [ebp - 10h]
        push 2
        push eax
        ; Exact mapped bytes E8 82 D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 44h]
        push eax
        push 17h
        push edi
        lea eax, [ebp - 10h]
        push 2
        push eax
        ; Exact mapped bytes E8 6E D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, eax
        lea eax, [ebx + 48h]
        push eax
        push 50h
        push edi
        lea eax, [ebp - 10h]
        push 2
        push eax
        ; Exact mapped bytes E8 5A D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 50h
        or esi, eax
        lea eax, [ebx + 4ch]
        push eax
        push 51h
        push edi
        lea eax, [ebp - 10h]
        push 2
        push eax
        ; Exact mapped bytes E8 43 D3 FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        or eax, esi
        ; Exact mapped bytes 74 26: je 0x58876698
        __asm _emit 0x74
        __asm _emit 0x26
        push ebx
        ; Exact mapped bytes E8 7F FC FF FF: call 0x588762f7
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 92 65 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 89 65 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 80 65 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 B4 FD FF FF: jmp 0x5887644c
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 1ch]
        ; Exact mapped bytes EB 0B: jmp 0x588766a8
        __asm _emit 0xeb
        __asm _emit 0x0b
        lea ecx, [eax - 30h]
        cmp cl, 9
        ; Exact mapped bytes 77 0B: ja 0x588766b0
        __asm _emit 0x77
        __asm _emit 0x0b
        mov byte ptr [edx], cl
        inc edx
        mov al, byte ptr [edx]
        test al, al
        ; Exact mapped bytes 75 EF: jne 0x5887669d
        __asm _emit 0x75
        __asm _emit 0xef
        ; Exact mapped bytes EB 20: jmp 0x588766d0
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp al, 3bh
        ; Exact mapped bytes 75 F3: jne 0x588766a7
        __asm _emit 0x75
        __asm _emit 0xf3
        mov esi, edx
        mov cl, byte ptr [esi + 1]
        mov byte ptr [esi], cl
        lea esi, [esi + 1]
        test cl, cl
        ; Exact mapped bytes 75 F4: jne 0x588766b6
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB E4: jmp 0x588766a8
        __asm _emit 0xeb
        __asm _emit 0xe4
        push 14h
        pop ecx
        mov esi, 58907310h
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [ebp + 8]
        xor ecx, ecx
        inc ecx
        lea edi, [esi + 88h]
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        mov dword ptr [ebx], eax
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebx + 4], eax
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebx + 8], eax
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 30h]
        mov dword ptr [ebx + 30h], eax
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 34h]
        mov dword ptr [ebx + 34h], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 4]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x58876710
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [eax], ecx
        mov eax, dword ptr [esi + 84h]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x5887671d
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes F0 FF 08: lock dec dword ptr [eax]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 7ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x5887673e
        __asm _emit 0x74
        __asm _emit 0x1a
        or eax, 0ffffffffh
        ; Exact mapped bytes F0 0F C1 01: lock xadd dword ptr [ecx], eax
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 11: jne 0x5887673e
        __asm _emit 0x75
        __asm _emit 0x11
        push dword ptr [edi]
        ; Exact mapped bytes E8 DC 64 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 D4 64 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 84h], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [esi + 7ch], eax
        xor eax, eax
        mov dword ptr [edi], ebx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
