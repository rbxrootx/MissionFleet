// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419388 .. +0x30A bytes.
extern "C" __declspec(naked) void FUN_00419388_00419388() {
    __asm {
        mov eax, 43ade4h
        ; Exact mapped bytes E8 76 62 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov esi, ecx
        push dword ptr [ebp + 14h]
        xor ebx, ebx
        lea edi, [esi + 4ch]
        mov dword ptr [ebp - 24h], esi
        push edi
        push 4403f8h
        push 3
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 FD FF FF: call 0x41915a
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebx
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 0F 8C C0 02 00 00: jl 0x419681
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 3ch]
        mov ecx, esi
        push eax
        mov dword ptr [ebp - 10h], ebx
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes E8 28 04 00 00: call 0x4197fd
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 75 2E: jne 0x419414
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [edi]
        lea ecx, [esi + 70h]
        push ecx
        push 1
        mov edx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        test byte ptr [esi + 72h], 2
        ; Exact mapped bytes 74 1A: je 0x419414
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [edi]
        add esi, 0b8h
        push esi
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp eax, ebx
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 0F 8C 34 02 00 00: jl 0x419648
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        cmp esi, ebx
        ; Exact mapped bytes 74 63: je 0x41947e
        __asm _emit 0x74
        __asm _emit 0x63
        cmp dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x4194ed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        lea edx, [ebp + 8]
        push edx
        push 4403e8h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 4B: jl 0x419483
        __asm _emit 0x7c
        __asm _emit 0x4b
        mov eax, dword ptr [esi]
        push ebx
        push ebx
        push ebx
        push 3
        mov ecx, esi
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x419483
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [esi]
        lea ecx, [ebp + 0ch]
        push ecx
        lea ecx, [ebp + 10h]
        push ecx
        push -1
        push ebx
        mov ecx, esi
        mov dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov ecx, dword ptr [ebp + 8]
        push eax
        push dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes E9 A0 01 00 00: jmp 0x41961e
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes 75 6A: jne 0x4194ed
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, dword ptr [edi]
        lea edx, [ebp - 10h]
        push edx
        push 440218h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 56: jl 0x4194ed
        __asm _emit 0x7c
        __asm _emit 0x56
        cmp esi, ebx
        ; Exact mapped bytes 75 0E: jne 0x4194a9
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes EB 3C: jmp 0x4194e5
        __asm _emit 0xeb
        __asm _emit 0x3c
        push ebx
        push 1000h
        push 1
        push esi
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 B3 AF 01 00: call 0x43446d
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 70h]
        lea ecx, [ebp - 2ch]
        push eax
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes E8 BE 3B 01 00: call 0x42d087
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        lea edx, [ebp - 2ch]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 70h]
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes E8 64 B0 01 00: call 0x434549
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x419618
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        lea edx, [ebp - 14h]
        push edx
        push 4403d8h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C 3E 01 00 00: jl 0x419643
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebx
        ; Exact mapped bytes 75 5E: jne 0x419567
        __asm _emit 0x75
        __asm _emit 0x5e
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp + 0ch], ebx
        push eax
        push 1
        push ebx
        ; Exact mapped bytes FF 15 0C C6 43 00: call dword ptr [0x43c60c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 0F 8C F1 00 00 00: jl 0x419615
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 10h]
        mov dword ptr [ebp + 10h], ebx
        push eax
        push ebx
        push 1012h
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 08 C6 43 00: call dword ptr [0x43c608]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 7C 18: jl 0x419559
        __asm _emit 0x7c
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 14h]
        push dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x419615
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x41960e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        push eax
        push ebx
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes FF 15 1C C2 43 00: call dword ptr [0x43c21c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 74 21: je 0x4195aa
        __asm _emit 0x74
        __asm _emit 0x21
        push eax
        ; Exact mapped bytes FF 15 20 C2 43 00: call dword ptr [0x43c220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 74 16: je 0x4195aa
        __asm _emit 0x74
        __asm _emit 0x16
        push dword ptr [ebp + 0ch]
        mov edx, dword ptr [esi]
        mov ecx, esi
        push eax
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 15 24 C2 43 00: call dword ptr [0x43c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4195b4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp + 14h], 8007000eh
        mov dword ptr [ebp + 10h], ebx
        cmp dword ptr [ebp + 10h], ebx
        mov dword ptr [ebp - 1ch], ebx
        ; Exact mapped bytes 74 59: je 0x419615
        __asm _emit 0x74
        __asm _emit 0x59
        lea eax, [ebp - 1ch]
        push eax
        push 1
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 15 0C C6 43 00: call dword ptr [0x43c60c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 7C 43: jl 0x419615
        __asm _emit 0x7c
        __asm _emit 0x43
        lea eax, [ebp - 18h]
        mov dword ptr [ebp - 18h], ebx
        push eax
        push ebx
        push ebx
        push 12h
        push ebx
        push dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 15 04 C6 43 00: call dword ptr [0x43c604]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 7C 18: jl 0x419606
        __asm _emit 0x7c
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 14h]
        push dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x41955c
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 14h], 8000ffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp + 14h], ebx
        ; Exact mapped bytes 7C 25: jl 0x419648
        __asm _emit 0x7c
        __asm _emit 0x25
        cmp dword ptr [ebp - 20h], ebx
        ; Exact mapped bytes 75 1B: jne 0x419643
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 24h]
        test byte ptr [ecx + 72h], 2
        ; Exact mapped bytes 75 12: jne 0x419643
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [edi]
        add ecx, 0b8h
        push ecx
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp + 14h], eax
        cmp dword ptr [ebp + 14h], ebx
        ; Exact mapped bytes 7D 18: jge 0x419660
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [edi]
        cmp eax, ebx
        ; Exact mapped bytes 74 12: je 0x419660
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [eax]
        push 1
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, dword ptr [edi]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [edi], ebx
        mov eax, dword ptr [ebp + 8]
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x41966d
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], ebx
        ; Exact mapped bytes 74 0C: je 0x41967e
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 14h], ebx
        ; Exact mapped bytes 7C 07: jl 0x41967e
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp + 14h], 1
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
