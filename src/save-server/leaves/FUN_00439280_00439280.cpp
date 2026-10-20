// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439280 .. +0x2B2 bytes.
extern "C" __declspec(naked) void FUN_00439280_00439280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        push esi
        push edi
        mov dword ptr [ebp - 90h], ecx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x4392b4
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 EF CA FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 0B: jae 0x4392de
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 0ch]
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4392e7
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov edi, dword ptr [ebp + 10h]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], -2
        ; Exact mapped bytes 77 20: ja 0x439330
        __asm _emit 0x77
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp - 8]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp - 4]
        cmp edx, eax
        ; Exact mapped bytes 72 0D: jb 0x43933d
        __asm _emit 0x72
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 C6 CC FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edi, dword ptr [ebp + 10h]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov edx, dword ptr [ebp + 10h]
        add edx, ecx
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 84h], ecx
        mov dl, byte ptr [ebp - 24h]
        mov byte ptr [ebp - 20h], dl
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 7ch], ecx
        mov dl, byte ptr [ebp - 38h]
        mov byte ptr [ebp - 34h], dl
        mov eax, dword ptr [ebp - 80h]
        sub eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 88h]
        sub ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 8C CD 00 00 00: jl 0x439494
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 44h]
        sub edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 0E: jne 0x4393f0
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 22: jmp 0x439412
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 3ch]
        mov esi, dword ptr [ebp - 40h]
        mov edi, dword ptr [ebp - 84h]
        mov edx, ecx
        mov eax, edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 84h]
        add ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 50h]
        cmp edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 74 66: je 0x43948f
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp - 88h]
        add ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 0B: jne 0x43944f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 9ch], edx
        ; Exact mapped bytes EB 1D: jmp 0x43946c
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 FD C7 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 88h]
        sub eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x439524
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 30h], edx
        mov al, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 54h], al
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 64h]
        sub ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 75 0E: jne 0x4394d2
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 0a0h], edx
        ; Exact mapped bytes EB 22: jmp 0x4394f4
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 5ch]
        mov esi, dword ptr [ebp - 60h]
        mov edi, dword ptr [ebp - 84h]
        mov eax, ecx
        mov edx, edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 74h], ecx
        mov dl, byte ptr [ebp - 70h]
        mov byte ptr [ebp - 6ch], dl
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 2C F4 00 00: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 90h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
