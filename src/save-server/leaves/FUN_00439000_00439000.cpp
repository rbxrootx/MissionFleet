// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439000 .. +0x271 bytes.
extern "C" __declspec(naked) void FUN_00439000_00439000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        push esi
        push edi
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x439034
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 6F CD FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 0B: jae 0x43905e
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 8]
        mov dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x439067
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 14h], -2
        ; Exact mapped bytes 77 20: ja 0x43909e
        __asm _emit 0x77
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp - 4]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp + 14h]
        cmp edx, eax
        ; Exact mapped bytes 72 0D: jb 0x4390ab
        __asm _emit 0x72
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 58 CF FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 80h], eax
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], cl
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 78h], eax
        mov cl, byte ptr [ebp - 34h]
        mov byte ptr [ebp - 30h], cl
        mov edx, dword ptr [ebp - 7ch]
        sub edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 84h]
        sub eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8C C4 00 00 00: jl 0x4391d9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 0B: jne 0x43913b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 90h], edx
        ; Exact mapped bytes EB 1F: jmp 0x43915a
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 38h]
        mov esi, dword ptr [ebp - 3ch]
        mov edi, dword ptr [ebp - 80h]
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
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 80h]
        add eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        cmp ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes 74 66: je 0x4391d4
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp - 84h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 75 0B: jne 0x439194
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes EB 1D: jmp 0x4391b1
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 B8 CA 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 84h]
        sub edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x439263
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 2ch], ecx
        mov dl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 50h], dl
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 60h]
        sub eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 0B: jne 0x439214
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 98h], ecx
        ; Exact mapped bytes EB 1F: jmp 0x439233
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 58h]
        mov esi, dword ptr [ebp - 5ch]
        mov edi, dword ptr [ebp - 80h]
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
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 70h], edx
        mov al, byte ptr [ebp - 6ch]
        mov byte ptr [ebp - 68h], al
        lea ecx, [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 ED F6 00 00: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
