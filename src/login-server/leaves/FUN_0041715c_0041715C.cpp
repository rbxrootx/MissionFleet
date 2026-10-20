// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041715C .. +0x2CB bytes.
extern "C" __declspec(naked) void FUN_0041715c_0041715C() {
    __asm {
        mov eax, 43aa01h
        ; Exact mapped bytes E8 A2 84 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 80h
        push ebx
        push edi
        mov edi, dword ptr [ebp + 14h]
        xor ebx, ebx
        cmp dword ptr [ebp + 10h], ebx
        lea eax, [edi + 12h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 74 3E: je 0x4171bc
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [edi + 8]
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], edx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [ebp - 60h], edx
        ; Exact mapped bytes 66 8B 57 0C: mov dx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 55 A4: mov word ptr [ebp - 0x5c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes 66 8B 57 0E: mov dx, word ptr [edi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes 66 89 55 A6: mov word ptr [ebp - 0x5a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa6
        ; Exact mapped bytes 66 8B 57 10: mov dx, word ptr [edi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 45 AA: mov word ptr [ebp - 0x56], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xaa
        ; Exact mapped bytes 66 8B 47 14: mov ax, word ptr [edi + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x14
        add ecx, 18h
        ; Exact mapped bytes 66 89 55 A8: mov word ptr [ebp - 0x58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 66 89 45 AC: mov word ptr [ebp - 0x54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xac
        lea edi, [ebp - 64h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F BF 57 0A: movsx edx, word ptr [edi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x57
        __asm _emit 0x0a
        ; Exact mapped bytes 0F BF 47 0E: movsx eax, word ptr [edi + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x47
        __asm _emit 0x0e
        ; Exact mapped bytes 0F BF 4F 0C: movsx ecx, word ptr [edi + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4f
        __asm _emit 0x0c
        add eax, edx
        push esi
        ; Exact mapped bytes 0F BF 77 08: movsx esi, word ptr [edi + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x77
        __asm _emit 0x08
        mov dword ptr [ebp - 34h], eax
        lea eax, [ebp - 40h]
        push eax
        mov eax, dword ptr [ebp + 8]
        add ecx, esi
        mov dword ptr [ebp - 40h], esi
        push dword ptr [eax + 1ch]
        mov dword ptr [ebp - 3ch], edx
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes FF 15 C8 C3 43 00: call dword ptr [0x43c3c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp + 20h], 4
        mov esi, dword ptr [ebp + 1ch]
        mov dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes 72 21: jb 0x41721a
        __asm _emit 0x72
        __asm _emit 0x21
        mov ebx, dword ptr [esi]
        sub dword ptr [ebp + 20h], 4
        add esi, 4
        test ebx, ebx
        ; Exact mapped bytes 76 12: jbe 0x417218
        __asm _emit 0x76
        __asm _emit 0x12
        push ebx
        push esi
        ; Exact mapped bytes FF 15 40 C3 43 00: call dword ptr [0x43c340]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        add ebx, ebx
        mov dword ptr [ebp + 10h], eax
        add esi, ebx
        sub dword ptr [ebp + 20h], ebx
        xor ebx, ebx
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 66 81 7D 18 7A 03: cmp word ptr [ebp + 0x18], 0x37a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0x7a
        __asm _emit 0x03
        mov dword ptr [ebp - 4], ebx
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 20h], ebx
        mov dword ptr [ebp - 24h], ebx
        ; Exact mapped bytes 74 0C: je 0x417245
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 81 7D 18 7B 03: cmp word ptr [ebp + 0x18], 0x37b
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0x7b
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x4172e5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esi, 0ch
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [eax - 0ch]
        cmp ecx, ebx
        mov dword ptr [ebp + 1ch], ecx
        ; Exact mapped bytes 0F 86 80 00 00 00: jbe 0x4172db
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 8B 5E 04: mov bx, word ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x04
        sub dword ptr [ebp + 1ch], 6
        add esi, 4
        inc esi
        mov dword ptr [ebp - 28h], eax
        inc esi
        cmp eax, 80010001h
        ; Exact mapped bytes 75 30: jne 0x4172a4
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [esi]
        add esi, 4
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 10h]
        mov eax, dword ptr [esi]
        add esi, 0ch
        push esi
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E8 A7 6A 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push -11h
        pop ecx
        mov dword ptr [ebp - 1ch], ebx
        mov eax, dword ptr [eax - 8]
        sub ecx, eax
        add dword ptr [ebp + 1ch], ecx
        lea esi, [esi + eax + 1]
        ; Exact mapped bytes EB 2C: jmp 0x4172d0
        __asm _emit 0xeb
        __asm _emit 0x2c
        push 1ch
        ; Exact mapped bytes E8 41 66 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 30h], eax
        test eax, eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 74 10: je 0x4172c7
        __asm _emit 0x74
        __asm _emit 0x10
        push ebx
        mov ecx, eax
        push dword ptr [ebp - 28h]
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D8 5E 00 00: call 0x41d19d
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x4172c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        and byte ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 77 85: ja 0x41725b
        __asm _emit 0x77
        __asm _emit 0x85
        mov eax, dword ptr [ebp - 2ch]
        xor ebx, ebx
        sub dword ptr [ebp + 20h], eax
        add dword ptr [ebp + 18h], 0fffch
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [ebp - 50h]
        push ecx
        push eax
        ; Exact mapped bytes 66 83 38 7B: cmp word ptr [eax], 0x7b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x7b
        ; Exact mapped bytes 75 08: jne 0x4172fb
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF 15 FC C5 43 00: call dword ptr [0x43c5fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x417301
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 F8 C5 43 00: call dword ptr [0x43c5f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        lea ecx, [ebp - 8ch]
        push dword ptr [ebp + 20h]
        mov dword ptr [ebp + 1ch], eax
        push esi
        ; Exact mapped bytes E8 4C E0 01 00: call 0x435360
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 75 18: mov si, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x18
        lea eax, [ebp - 8ch]
        ; Exact mapped bytes 66 81 EE 78 03: sub si, 0x378
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0x78
        __asm _emit 0x03
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 66 F7 DE: neg si
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xde
        sbb esi, esi
        mov dword ptr [ebp + 14h], ebx
        and esi, eax
        cmp dword ptr [ebp + 1ch], ebx
        ; Exact mapped bytes 0F 8C A7 00 00 00: jl 0x4173e1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 0B 00 00: call 0x417e78
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x4173e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 14h]
        push eax
        xor eax, eax
        ; Exact mapped bytes 66 81 7D 18 77 03: cmp word ptr [ebp + 0x18], 0x377
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0x77
        __asm _emit 0x03
        push dword ptr [ebp + 10h]
        sete al
        push eax
        push esi
        movzx eax, word ptr [edi + 10h]
        push eax
        lea eax, [ebp - 40h]
        push eax
        lea eax, [ebp - 50h]
        push dword ptr [edi]
        push ebx
        push eax
        mov eax, dword ptr [ebp + 8]
        push ebx
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 0C 0D 00 00: call 0x418086
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x4173e1
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp + 14h]
        push 1
        ; Exact mapped bytes E8 28 27 00 00: call 0x419ab0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push 13h
        push ebx
        push ebx
        push ebx
        push ebx
        push dword ptr [ebp + 0ch]
        push dword ptr [eax + 20h]
        ; Exact mapped bytes FF 15 D4 C4 43 00: call dword ptr [0x43c4d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 8ch], ecx
        lea eax, [ebp - 10h]
        push eax
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + 9ch]
        ; Exact mapped bytes E8 29 69 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 4D E4: mov cx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 88 90 00 00 00: mov word ptr [eax + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 94h], ecx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 98h], ecx
        cmp dword ptr [ebp + 10h], ebx
        pop esi
        ; Exact mapped bytes 74 09: je 0x4173f0
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 15 44 C3 43 00: call dword ptr [0x43c344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        cmp eax, ebx
        ; Exact mapped bytes 74 03: je 0x4173fa
        __asm _emit 0x74
        __asm _emit 0x03
        mov ebx, dword ptr [eax + 20h]
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 93 DF 01 00: call 0x43539c
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 96 67 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, ebx
        pop edi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
