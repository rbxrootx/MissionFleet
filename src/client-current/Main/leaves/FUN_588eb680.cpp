// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EB680 .. +0x22E bytes.
extern "C" __declspec(naked) void FUN_588eb680() {
    __asm {
        sub esp, 0ch
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 18 02 00 00: je 0x588eb8aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        add ecx, dword ptr [esi + 4]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        mov edx, dword ptr [ebx]
        lea eax, [ecx + edx + 140h]
        mov ecx, dword ptr [ebx + 4]
        add ecx, dword ptr [esi + 10h]
        cmp dword ptr [esi + 0b0h], 0
        mov edx, dword ptr [esi + 8]
        mov dword ptr [esp + 0ch], eax
        lea eax, [ecx + edx + 0f0h]
        push edi
        mov dword ptr [esp + 14h], eax
        mov cl, 2
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x588eb762
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 0a9h], cl
        ; Exact mapped bytes 74 27: je 0x588eb6fd
        __asm _emit 0x74
        __asm _emit 0x27
        movzx edx, word ptr [esi + 88h]
        movzx edi, word ptr [esi + 0aah]
        mov al, byte ptr [esi + 0a8h]
        imul edi, edx
        inc al
        movzx eax, al
        cdq
        idiv edi
        mov byte ptr [esi + 0a8h], dl
        ; Exact mapped bytes EB 65: jmp 0x588eb762
        __asm _emit 0xeb
        __asm _emit 0x65
        mov eax, dword ptr [esi + 0a0h]
        mov dword ptr [esp + 0ch], eax
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x588eb762
        __asm _emit 0x7e
        __asm _emit 0x57
        mov edx, dword ptr [esi + 0a4h]
        movzx eax, word ptr [edx + 0ch]
        movzx edx, word ptr [esi + 88h]
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes DC 0D 20 15 9A 58: fmul qword ptr [0x589a1520]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes DE E9: fsubp st(1)
        __asm _emit 0xde
        __asm _emit 0xe9
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D9 7C 24 24: fnstcw word ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x24
        movzx eax, word ptr [esp + 24h]
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        or eax, 0c00h
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes D9 6C 24 0C: fldcw word ptr [esp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes DB 5C 24 0C: fistp dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x0c
        mov al, byte ptr [esp + 0ch]
        mov byte ptr [esi + 0a8h], al
        ; Exact mapped bytes D9 6C 24 24: fldcw word ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        mov al, byte ptr [esi + 0a9h]
        cmp al, 1
        ; Exact mapped bytes 75 48: jne 0x588eb7b4
        __asm _emit 0x75
        __asm _emit 0x48
        cmp byte ptr [esi + 0a8h], 0
        ; Exact mapped bytes 75 3F: jne 0x588eb7b4
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 24h
        ; Exact mapped bytes 7E 16: jle 0x588eb799
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x588eb799
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 900h
        ; Exact mapped bytes EB 02: jmp 0x588eb79b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 96 AA 00 00 00: mov word ptr [esi + 0xaa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 0a9h], cl
        ; Exact mapped bytes EB 72: jmp 0x588eb826
        __asm _emit 0xeb
        __asm _emit 0x72
        cmp al, cl
        ; Exact mapped bytes 74 6E: je 0x588eb826
        __asm _emit 0x74
        __asm _emit 0x6e
        cmp al, 3
        ; Exact mapped bytes 75 53: jne 0x588eb80f
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, 4
        ; Exact mapped bytes 66 89 86 88 00 00 00: mov word ptr [esi + 0x88], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 25h
        ; Exact mapped bytes 7E 16: jle 0x588eb7ec
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x588eb7ec
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 940h
        ; Exact mapped bytes EB 02: jmp 0x588eb7ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 8E AA 00 00 00: mov word ptr [esi + 0xaa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 0a8h], 0
        mov byte ptr [esi + 0a9h], 4
        ; Exact mapped bytes EB 17: jmp 0x588eb826
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp al, 4
        ; Exact mapped bytes 75 13: jne 0x588eb826
        __asm _emit 0x75
        __asm _emit 0x13
        cmp byte ptr [esi + 0a8h], 0
        ; Exact mapped bytes 75 0A: jne 0x588eb826
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi + 0b0h], 0
        cmp dword ptr [esi + 0b0h], 0
        mov edi, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        ; Exact mapped bytes 74 2C: je 0x588eb864
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [esi + 2ch]
        mov eax, dword ptr [esi + 28h]
        movzx ecx, word ptr [esi + 88h]
        push edx
        push eax
        movzx eax, byte ptr [esi + 0a8h]
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 0a4h]
        lea edx, [esp + 1ch]
        push eax
        push edi
        push edx
        push ebp
        ; Exact mapped bytes E8 6C ED E4 FF: call 0x5873a5d0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, dword ptr [esi + 4ch]
        test esi, esi
        ; Exact mapped bytes 74 3C: je 0x588eb8a7
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes EB 03: jmp 0x588eb870
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1D: jge 0x588eb894
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 14h]
        push ebx
        push edi
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E6: jne 0x588eb870
        __asm _emit 0x75
        __asm _emit 0xe6
        pop ebp
        pop edi
        pop ebx
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 14h]
        push ebx
        push edi
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 ED: jne 0x588eb894
        __asm _emit 0x75
        __asm _emit 0xed
        pop ebp
        pop edi
        pop ebx
        pop esi
        add esp, 0ch
    }
}
