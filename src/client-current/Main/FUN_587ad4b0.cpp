// Complete Ghidra body ranges for the selected function.
// 6 discontiguous segments; total 6185 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AD4B0 .. +0x71D bytes.
extern "C" __declspec(naked) void FUN_587ad4b0_segment_00() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        push -1
        push 58980c84h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 478h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 470h], eax
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 488h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ebx, ecx
        lea ecx, [ebx + 14ch]
        mov dword ptr [esp + 3ch], ebx
        mov dword ptr [esp + 24h], eax
        mov dword ptr [ebx], 58999d78h
        ; Exact mapped bytes E8 A2 28 15 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x00
        lea esi, [ebx + 164h]
        mov ecx, esi
        mov dword ptr [esp + 490h], 0
        ; Exact mapped bytes E8 8A 28 15 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x00
        cmp dword ptr [esp + 24h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov edi, 1
        mov byte ptr [esp + 490h], 1
        ; Exact mapped bytes 0F 84 0B 0A 00 00: je 0x587adf4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 85 02 0A 00 00: jne 0x587adf4c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        push 40h
        mov dword ptr [ebx + 4], eax
        lea eax, [ebx + 408h]
        push esi
        push eax
        mov dword ptr [ebx + 180h], edi
        mov dword ptr [ebx + 3fch], esi
        mov dword ptr [ebx + 400h], esi
        mov dword ptr [ebx + 404h], esi
        ; Exact mapped bytes E8 D2 F6 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        push ecx
        lea edx, [esp + 38ch]
        push 58999dd4h
        push edx
        mov dword ptr [esp + 44h], esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 18h
        push esi
        push esi
        lea eax, [esp + 4ch]
        push eax
        lea ecx, [esp + 388h]
        push ecx
        ; Exact mapped bytes 8B 0D 14 48 A2 58: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD E1 FA FF: call 0x5875b770
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [esp + 18h], eax
        cmp eax, esi
        ; Exact mapped bytes 75 15: jne 0x587ad5d0
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D F0 47 A2 58: mov ecx, dword ptr [0x58a247f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 3
        lea edx, [esp + 380h]
        push edx
        ; Exact mapped bytes E8 E0 7A FC FF: call 0x587750b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        mov ecx, 0ah
        mov esi, eax
        lea edi, [esp + 194h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [esp + 194h], 1
        mov ecx, dword ptr [esp + 198h]
        ; Exact mapped bytes 75 1D: jne 0x587ad612
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 73 02 00 00: jne 0x587ad871
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebx + 30h]
        mov ecx, 47h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [esp + 14h], 11ch
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        add eax, 28h
        lea esi, [ecx + eax]
        add eax, 0c4h
        lea edx, [esp + 74h]
        mov dword ptr [esp + 14h], eax
        mov ecx, 31h
        lea edi, [esp + 74h]
        push edx
        lea eax, [ebx + 30h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 35 98 C1 98 58: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 98h]
        mov ecx, dword ptr [esp + 94h]
        mov eax, dword ptr [esp + 9ch]
        mov dword ptr [ebx + 54h], edx
        mov edx, dword ptr [esp + 0a4h]
        mov dword ptr [ebx + 50h], ecx
        mov ecx, dword ptr [esp + 0a0h]
        mov dword ptr [ebx + 58h], eax
        mov eax, dword ptr [esp + 0a8h]
        mov dword ptr [ebx + 60h], edx
        mov edx, dword ptr [esp + 0b0h]
        mov dword ptr [ebx + 5ch], ecx
        mov ecx, dword ptr [esp + 0ach]
        mov dword ptr [ebx + 64h], eax
        mov eax, dword ptr [esp + 0b4h]
        mov dword ptr [ebx + 6ch], edx
        mov edx, dword ptr [esp + 0bch]
        mov dword ptr [ebx + 68h], ecx
        mov ecx, dword ptr [esp + 0b8h]
        mov dword ptr [ebx + 70h], eax
        mov eax, dword ptr [esp + 0c0h]
        mov dword ptr [ebx + 78h], edx
        mov edx, dword ptr [esp + 0c8h]
        mov dword ptr [ebx + 7ch], eax
        mov eax, dword ptr [esp + 0cch]
        mov dword ptr [ebx + 74h], ecx
        mov ecx, dword ptr [esp + 0c4h]
        mov dword ptr [ebx + 84h], edx
        lea edx, [esp + 0d4h]
        mov dword ptr [ebx + 88h], eax
        mov dword ptr [ebx + 80h], ecx
        mov ecx, dword ptr [esp + 0d0h]
        lea eax, [ebx + 90h]
        push edx
        push eax
        mov dword ptr [ebx + 8ch], ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 114h]
        mov ecx, dword ptr [esp + 118h]
        mov edx, dword ptr [esp + 11ch]
        mov dword ptr [ebx + 0d0h], eax
        mov eax, dword ptr [esp + 120h]
        mov dword ptr [ebx + 0d4h], ecx
        mov ecx, dword ptr [esp + 124h]
        mov dword ptr [ebx + 0d8h], edx
        mov dword ptr [ebx + 124h], eax
        mov dword ptr [ebx + 128h], ecx
        mov eax, dword ptr [ebx + 64h]
        test eax, eax
        ; Exact mapped bytes 0F 86 84 00 00 00: jbe 0x587ad7d2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebx + 14ch]
        ; Exact mapped bytes E8 D6 50 FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebx + 64h], 0
        mov dword ptr [esp + 24h], 0
        ; Exact mapped bytes 76 6A: jbe 0x587ad7d2
        __asm _emit 0x76
        __asm _emit 0x6a
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        add edx, eax
        mov dword ptr [esp + 4ch], edx
        push 1ch
        ; Exact mapped bytes E8 D1 F4 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf4
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esi, dword ptr [esp + 50h]
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [eax + 18h], ecx
        mov edi, eax
        mov ecx, 7
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        add esp, 4
        lea ecx, [esp + 30h]
        mov dword ptr [esp + 30h], eax
        mov eax, 1ch
        add dword ptr [esp + 14h], eax
        add dword ptr [esp + 4ch], eax
        push ecx
        lea ecx, [ebx + 14ch]
        ; Exact mapped bytes E8 0C 7D FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        inc eax
        mov dword ptr [esp + 24h], eax
        cmp eax, dword ptr [ebx + 64h]
        ; Exact mapped bytes 72 A4: jb 0x587ad776
        __asm _emit 0x72
        __asm _emit 0xa4
        mov ebx, dword ptr [ebx + 68h]
        test ebx, ebx
        ; Exact mapped bytes 0F 86 AE 06 00 00: jbe 0x587ade8b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 3ch]
        push ebx
        lea ecx, [esi + 164h]
        ; Exact mapped bytes E8 43 50 FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [esi + 68h], 0
        mov dword ptr [esp + 48h], 0
        ; Exact mapped bytes 0F 86 8C 06 00 00: jbe 0x587ade8b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 8ch
        ; Exact mapped bytes E8 44 F4 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0x1c
        __asm _emit 0x00
        push 88h
        mov ebx, eax
        push 0
        push ebx
        mov dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes E8 2B F4 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf4
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 28h]
        lea esi, [edx + eax]
        mov ecx, 22h
        mov edi, ebx
        add eax, 88h
        add esp, 10h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [ebx + 74h], 0
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 86 D4 05 00 00: jbe 0x587ade1b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        ; Exact mapped bytes E8 00 F4 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 490h], 2
        test eax, eax
        ; Exact mapped bytes 0F 84 93 02 00 00: je 0x587adaf8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 44 25 15 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x25
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes E9 89 02 00 00: jmp 0x587adafa
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 98 FD FF FF: jne 0x587ad612
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esi, 28h
        mov ecx, 47h
        lea edi, [esp + 74h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 35 98 C1 98 58: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea eax, [esp + 74h]
        push eax
        lea ecx, [ebx + 30h]
        push ecx
        mov dword ptr [esp + 1ch], 144h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 94h]
        mov eax, dword ptr [esp + 98h]
        mov ecx, dword ptr [esp + 9ch]
        mov dword ptr [ebx + 50h], edx
        mov edx, dword ptr [esp + 0a0h]
        mov dword ptr [ebx + 54h], eax
        mov eax, dword ptr [esp + 0a4h]
        mov dword ptr [ebx + 58h], ecx
        mov ecx, dword ptr [esp + 0a8h]
        mov dword ptr [ebx + 5ch], edx
        mov edx, dword ptr [esp + 0ach]
        mov dword ptr [ebx + 60h], eax
        mov eax, dword ptr [esp + 0b0h]
        mov dword ptr [ebx + 64h], ecx
        mov ecx, dword ptr [esp + 0b4h]
        mov dword ptr [ebx + 68h], edx
        mov edx, dword ptr [esp + 0b8h]
        mov dword ptr [ebx + 6ch], eax
        mov eax, dword ptr [esp + 0bch]
        mov dword ptr [ebx + 70h], ecx
        mov ecx, dword ptr [esp + 0c0h]
        mov dword ptr [ebx + 7ch], ecx
        mov ecx, dword ptr [esp + 0cch]
        mov dword ptr [ebx + 78h], eax
        mov eax, dword ptr [esp + 0c8h]
        mov dword ptr [ebx + 74h], edx
        mov edx, dword ptr [esp + 0c4h]
        mov dword ptr [ebx + 88h], ecx
        lea ecx, [esp + 0d4h]
        mov dword ptr [ebx + 84h], eax
        mov dword ptr [ebx + 80h], edx
        mov edx, dword ptr [esp + 0d0h]
        lea eax, [ebx + 90h]
        push ecx
        push eax
        mov dword ptr [ebx + 8ch], edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 114h]
        mov eax, dword ptr [esp + 118h]
        mov ecx, dword ptr [esp + 11ch]
        mov dword ptr [ebx + 0d0h], edx
        mov edx, dword ptr [esp + 120h]
        mov dword ptr [ebx + 0d4h], eax
        mov eax, dword ptr [esp + 124h]
        mov dword ptr [ebx + 0d8h], ecx
        mov ecx, dword ptr [esp + 128h]
        mov dword ptr [ebx + 0dch], edx
        mov edx, dword ptr [esp + 12ch]
        mov dword ptr [ebx + 0e0h], eax
        mov eax, dword ptr [esp + 130h]
        mov dword ptr [ebx + 0e4h], ecx
        mov ecx, dword ptr [esp + 134h]
        mov dword ptr [ebx + 0e8h], edx
        mov edx, dword ptr [esp + 138h]
        mov dword ptr [ebx + 0ech], eax
        mov eax, dword ptr [esp + 13ch]
        mov dword ptr [ebx + 0f0h], ecx
        mov ecx, dword ptr [esp + 140h]
        mov dword ptr [ebx + 0f4h], edx
        mov edx, dword ptr [esp + 144h]
        mov dword ptr [ebx + 0f8h], eax
        mov eax, dword ptr [esp + 148h]
        mov dword ptr [ebx + 0fch], ecx
        mov ecx, dword ptr [esp + 14ch]
        mov dword ptr [ebx + 100h], edx
        mov edx, dword ptr [esp + 150h]
        mov dword ptr [ebx + 104h], eax
        mov dword ptr [ebx + 108h], ecx
        mov dword ptr [ebx + 10ch], edx
        mov eax, dword ptr [esp + 154h]
        mov ecx, dword ptr [esp + 158h]
        mov edx, dword ptr [esp + 15ch]
        mov dword ptr [ebx + 110h], eax
        mov eax, dword ptr [esp + 160h]
        mov dword ptr [ebx + 114h], ecx
        mov ecx, dword ptr [esp + 164h]
        mov dword ptr [ebx + 118h], edx
        mov edx, dword ptr [esp + 168h]
        mov dword ptr [ebx + 11ch], eax
        mov eax, dword ptr [esp + 16ch]
        mov dword ptr [ebx + 120h], ecx
        mov ecx, dword ptr [esp + 170h]
        mov dword ptr [ebx + 124h], edx
        mov edx, dword ptr [esp + 174h]
        mov dword ptr [ebx + 128h], eax
        mov eax, dword ptr [esp + 178h]
        mov dword ptr [ebx + 12ch], ecx
        mov ecx, dword ptr [esp + 17ch]
        mov dword ptr [ebx + 130h], edx
        mov edx, dword ptr [esp + 180h]
        mov dword ptr [ebx + 134h], eax
        mov eax, dword ptr [esp + 184h]
        mov dword ptr [ebx + 138h], ecx
        mov ecx, dword ptr [esp + 188h]
        mov dword ptr [ebx + 13ch], edx
        mov edx, dword ptr [esp + 18ch]
        mov dword ptr [ebx + 140h], eax
        mov dword ptr [ebx + 144h], ecx
        mov dword ptr [ebx + 148h], edx
        ; Exact mapped bytes E9 4B FC FF FF: jmp 0x587ad743
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esi, dword ptr [esp + 1ch]
        mov dword ptr [esi + 88h], eax
        mov ecx, dword ptr [esi + 74h]
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 494h], 1
        ; Exact mapped bytes E8 19 4D FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [esi + 74h], 0
        mov dword ptr [esp + 58h], 0
        ; Exact mapped bytes 0F 86 F2 02 00 00: jbe 0x587ade1b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8ch
        ; Exact mapped bytes E8 14 F1 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0x1c
        __asm _emit 0x00
        push 88h
        mov ebx, eax
        push 0
        push ebx
        mov dword ptr [esp + 30h], ebx
        ; Exact mapped bytes E8 FB F0 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 28h]
        lea esi, [edx + eax]
        mov ecx, 22h
        mov edi, ebx
        add eax, 88h
        add esp, 10h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [ebx + 74h], 0
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 86 8E 02 00 00: jbe 0x587ade05
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        ; Exact mapped bytes E8 D0 F0 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf0
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 490h], 3
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587adb9a
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 18 22 15 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587adb9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esi, dword ptr [esp + 20h]
        mov dword ptr [esi + 88h], eax
        mov ecx, dword ptr [esi + 74h]
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 494h], 1
        ; Exact mapped bytes E8 77 4C FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4c
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [esi + 74h], 0
        mov dword ptr [esp + 54h], 0
        ; Exact mapped bytes 0F 86 E3 01 00 00: jbe 0x587addae
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x587adbd0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADBD0 .. +0x139 bytes.
extern "C" __declspec(naked) void FUN_587ad4b0_segment_01() {
    __asm {
        push 134h
        ; Exact mapped bytes E8 74 F0 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0x1c
        __asm _emit 0x00
        push 134h
        mov ebx, eax
        push 0
        push ebx
        mov dword ptr [esp + 40h], ebx
        ; Exact mapped bytes E8 5B F0 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 28h]
        add dword ptr [esp + 24h], 134h
        lea esi, [edx + eax]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, 4dh
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [esp + 4ch]
        mov cl, byte ptr [ebx + 11ch]
        add esi, 408h
        mov byte ptr [esi + eax], cl
        mov esi, dword ptr [ebx + 12ch]
        inc eax
        add esp, 10h
        mov dword ptr [esp + 2ch], eax
        test esi, esi
        ; Exact mapped bytes 76 7F: jbe 0x587adcb1
        __asm _emit 0x76
        __asm _emit 0x7f
        xor ecx, ecx
        mov eax, esi
        mov edx, 18h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 E4 38 1C 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x00
        xor esi, esi
        add esp, 4
        mov dword ptr [ebx + 120h], eax
        cmp dword ptr [ebx + 12ch], esi
        ; Exact mapped bytes 76 5E: jbe 0x587adcbb
        __asm _emit 0x76
        __asm _emit 0x5e
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        xor edx, edx
        add ecx, eax
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 120h]
        mov edi, dword ptr [ecx]
        add dword ptr [esp + 14h], 18h
        mov dword ptr [eax + edx], edi
        mov edi, dword ptr [ecx + 4]
        add eax, edx
        mov dword ptr [eax + 4], edi
        mov edi, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edi
        mov edi, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], edi
        mov edi, dword ptr [ecx + 10h]
        mov dword ptr [eax + 10h], edi
        mov edi, dword ptr [ecx + 14h]
        inc esi
        mov dword ptr [eax + 14h], edi
        add ecx, 18h
        add edx, 18h
        cmp esi, dword ptr [ebx + 12ch]
        ; Exact mapped bytes 72 C1: jb 0x587adc70
        __asm _emit 0x72
        __asm _emit 0xc1
        ; Exact mapped bytes EB 0A: jmp 0x587adcbb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebx + 120h], 0
        mov esi, dword ptr [ebx + 130h]
        test esi, esi
        ; Exact mapped bytes 0F 86 7C 00 00 00: jbe 0x587add45
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, esi
        mov edx, 180h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 4D 38 1C 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebx + 124h], eax
        cmp dword ptr [ebx + 130h], 0
        mov dword ptr [esp + 24h], 0
        ; Exact mapped bytes 76 4A: jbe 0x587add45
        __asm _emit 0x76
        __asm _emit 0x4a
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        xor edx, edx
        add eax, ecx
        ; Exact mapped bytes EB 07: jmp 0x587add10
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADD10 .. +0x1D4 bytes.
extern "C" __declspec(naked) void FUN_587ad4b0_segment_02() {
    __asm {
        mov edi, dword ptr [ebx + 124h]
        add dword ptr [esp + 14h], 180h
        add edi, edx
        mov esi, eax
        mov ecx, 60h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 24h]
        inc ecx
        add eax, 180h
        add edx, 180h
        mov dword ptr [esp + 24h], ecx
        cmp ecx, dword ptr [ebx + 130h]
        ; Exact mapped bytes 72 CB: jb 0x587add10
        __asm _emit 0x72
        __asm _emit 0xcb
        mov edx, dword ptr [esp + 20h]
        mov esi, dword ptr [edx + 88h]
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x587add5a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x587add62
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 14h]
        sub eax, ecx
        sar eax, 2
        mov edi, dword ptr [esi + 10h]
        mov edx, edi
        sub edx, ecx
        sar edx, 2
        cmp edx, eax
        ; Exact mapped bytes 73 0A: jae 0x587add7a
        __asm _emit 0x73
        __asm _emit 0x0a
        mov dword ptr [edi], ebx
        add edi, 4
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes EB 1E: jmp 0x587add98
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp ecx, edi
        ; Exact mapped bytes 76 05: jbe 0x587add83
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 EF EE 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xee
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [esp + 30h]
        push ecx
        push edi
        push eax
        lea edx, [esp + 68h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 F8 8A 14 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esp + 54h]
        mov ecx, dword ptr [esp + 20h]
        inc eax
        mov dword ptr [esp + 54h], eax
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 82 22 FE FF FF: jb 0x587adbd0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 1ch]
        mov esi, dword ptr [edx + 88h]
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x587addc3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x587addcb
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 14h]
        sub eax, ecx
        sar eax, 2
        mov edi, dword ptr [esi + 10h]
        mov edx, edi
        sub edx, ecx
        sar edx, 2
        cmp edx, eax
        ; Exact mapped bytes 73 0E: jae 0x587adde7
        __asm _emit 0x73
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [edi], eax
        add edi, 4
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes EB 1E: jmp 0x587ade05
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp ecx, edi
        ; Exact mapped bytes 76 05: jbe 0x587addf0
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 82 EE 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xee
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [esp + 20h]
        push ecx
        push edi
        push eax
        lea edx, [esp + 58h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 8B 8A 14 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esp + 58h]
        mov ecx, dword ptr [esp + 1ch]
        inc eax
        mov dword ptr [esp + 58h], eax
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 82 15 FD FF FF: jb 0x587adb30
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esi + 170h]
        add esi, 164h
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x587ade33
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x587ade3b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 14h]
        sub eax, ecx
        sar eax, 2
        mov edi, dword ptr [esi + 10h]
        mov edx, edi
        sub edx, ecx
        sar edx, 2
        cmp edx, eax
        ; Exact mapped bytes 73 0E: jae 0x587ade57
        __asm _emit 0x73
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [edi], eax
        add edi, 4
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes EB 1E: jmp 0x587ade75
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp ecx, edi
        ; Exact mapped bytes 76 05: jbe 0x587ade60
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 12 EE 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xee
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [esp + 1ch]
        push ecx
        push edi
        push eax
        lea edx, [esp + 70h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 1B 8A 14 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esp + 48h]
        mov ecx, dword ptr [esp + 3ch]
        inc eax
        mov dword ptr [esp + 48h], eax
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 82 75 F9 FF FF: jb 0x587ad800
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x75
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 198h], 1
        ; Exact mapped bytes 75 28: jne 0x587adebd
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [esp + 3ch]
        cmp dword ptr [edx + 134h], 0
        ; Exact mapped bytes 76 1B: jbe 0x587adebd
        __asm _emit 0x76
        __asm _emit 0x1b
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        lea eax, [esp + 14h]
        push eax
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esp + 44h]
        push 0
        ; Exact mapped bytes E8 E3 EA FF FF: call 0x587ac9a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 44h]
        mov edi, dword ptr [esp + 18h]
        ; Exact mapped bytes 8B 0D 14 48 A2 58: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push eax
        push edi
        ; Exact mapped bytes E8 AC DB FA FF: call 0x5875ba80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, dword ptr [esp + 3ch]
        push edi
        mov dword ptr [esi + 184h], eax
        ; Exact mapped bytes E8 5E ED 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xed
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADF4C .. +0x20E bytes.
extern "C" __declspec(naked) void FUN_587ad4b0_segment_03() {
    __asm {
        cmp eax, 0f4240h
        ; Exact mapped bytes 0F 85 D6 0A 00 00: jne 0x587aea2d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 184h], 0
        ; Exact mapped bytes 0F B7 05 D0 AD A0 58: movzx eax, word ptr [0x58a0add0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 6C 88 FD FF: call 0x587867e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 12h
        mov dword ptr [ebx + 18ch], eax
        mov dword ptr [ebx + 190h], eax
        mov eax, 0ch
        mov dword ptr [ebx + 188h], 0
        mov dword ptr [ebx + 194h], eax
        mov dword ptr [ebx + 198h], eax
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 81 FD FF: call 0x58786150
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 82 FD FF: call 0x58786250
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        push 11ch
        movzx ecx, ax
        lea edx, [ebx + 30h]
        push 0
        push edx
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [ebx + 4], 0f4240h
        ; Exact mapped bytes E8 74 EC 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 38h]
        add esp, 0ch
        push edi
        mov ecx, esi
        mov dword ptr [ebx + 68h], edi
        mov dword ptr [ebx + 6ch], eax
        mov dword ptr [ebx + 50h], 0f4240h
        mov dword ptr [ebx + 180h], edi
        ; Exact mapped bytes E8 3A 48 FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        push 8ch
        ; Exact mapped bytes E8 4E EC 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xec
        __asm _emit 0x1c
        __asm _emit 0x00
        push 88h
        mov esi, eax
        push 0
        push esi
        mov dword ptr [esp + 34h], esi
        ; Exact mapped bytes E8 35 EC 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 98 C1 98 58: mov ebx, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        push 58999dbch
        lea edx, [esi + 2]
        xor ecx, ecx
        push edx
        ; Exact mapped bytes 66 89 0E: mov word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0e
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 58999dbch
        lea eax, [esi + 42h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 68h], 0
        mov dword ptr [esi + 6ch], 3
        mov dword ptr [esi + 70h], 2
        mov dword ptr [esi + 74h], edi
        push 18h
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 F2 EB 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xeb
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 490h], 5
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587ae078
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 3A 1D 15 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1d
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587ae07a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 88h], eax
        mov ecx, dword ptr [esi + 74h]
        push ecx
        mov ecx, eax
        mov byte ptr [esp + 494h], 1
        ; Exact mapped bytes E8 9D 47 FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        push 8ch
        ; Exact mapped bytes E8 B1 EB 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xeb
        __asm _emit 0x1c
        __asm _emit 0x00
        push 88h
        mov esi, eax
        push 0
        push esi
        mov dword ptr [esp + 5ch], esi
        ; Exact mapped bytes E8 98 EB 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xeb
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 10h
        push 58999dbch
        lea eax, [esi + 2]
        mov edx, edi
        push eax
        ; Exact mapped bytes 66 89 16: mov word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x16
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 58999da0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esi + 42h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 68h], edi
        mov dword ptr [esi + 6ch], 3
        mov dword ptr [esi + 70h], 2
        mov dword ptr [esi + 74h], ecx
        push 18h
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 51 EB 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 490h], 6
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587ae119
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 99 1C 15 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1c
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587ae11b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 88h], eax
        mov edx, dword ptr [esi + 74h]
        push edx
        mov ecx, eax
        mov byte ptr [esp + 494h], 1
        ; Exact mapped bytes E8 FC 46 FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [esi + 74h], 0
        mov dword ptr [esp + 64h], 0
        ; Exact mapped bytes 0F 86 2D 08 00 00: jbe 0x587ae973
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x2d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 54h], eax
        mov dword ptr [esp + 58h], 58a0b130h
        ; Exact mapped bytes EB 06: jmp 0x587ae160
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AE160 .. +0x5F9 bytes.
extern "C" __declspec(naked) void FUN_587ad4b0_segment_04() {
    __asm {
        push 134h
        ; Exact mapped bytes E8 E4 EA 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0x00
        push 134h
        mov ebx, eax
        push 0
        push ebx
        mov dword ptr [esp + 44h], ebx
        ; Exact mapped bytes E8 CB EA 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 68h]
        mov ecx, dword ptr [eax]
        add esp, 10h
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E A9 FC FF: call 0x58778b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov dword ptr [esp + 30h], esi
        test esi, esi
        ; Exact mapped bytes 0F 84 AE 07 00 00: je 0x587ae94e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0eh]
        shr eax, 4
        xor edi, edi
        and eax, 0ffh
        mov dword ptr [esp + 48h], eax
        lea eax, [esi + 86h]
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 5ch], eax
        mov dword ptr [esp + 40h], eax
        mov ecx, edi
        mov edx, 80000000h
        shr edx, cl
        mov ecx, 1fh
        sub ecx, edi
        and edx, dword ptr [esi + 268h]
        shr edx, cl
        test edx, edx
        ; Exact mapped bytes 75 3F: jne 0x587ae21f
        __asm _emit 0x75
        __asm _emit 0x3f
        movzx eax, word ptr [eax]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 37: jbe 0x587ae21f
        __asm _emit 0x76
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 28h], edx
        mov byte ptr [esp + 29h], dl
        ; Exact mapped bytes 66 89 44 24 2A: mov word ptr [esp + 0x2a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2a
        mov byte ptr [esp + 28h], 5
        mov eax, dword ptr [esp + 28h]
        push eax
        ; Exact mapped bytes E8 F6 AA FC FF: call 0x58778d00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x587ae21f
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [eax + 28h]
        cmp eax, dword ptr [esp + 48h]
        ; Exact mapped bytes 76 04: jbe 0x587ae21b
        __asm _emit 0x76
        __asm _emit 0x04
        mov dword ptr [esp + 48h], eax
        inc dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 40h]
        inc edi
        add eax, 2
        cmp edi, 20h
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes 7C 94: jl 0x587ae1c4
        __asm _emit 0x7c
        __asm _emit 0x94
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebx + 11ch], 2
        mov edi, dword ptr [eax + 80h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes 8B 15 D4 AD A0 58: mov edx, dword ptr [0x58a0add4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        mov eax, dword ptr [esp + 54h]
        lea eax, [edx + eax - 11h]
        xor edx, edx
        div dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp + 14h]
        mov eax, dword ptr [eax + 84h]
        sub eax, edi
        mov dword ptr [esp + 44h], eax
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [esp + 44h]
        xor edx, edx
        div ecx
        add edx, edi
        mov dword ptr [ebx], edx
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 21c4ch]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp + 14h]
        mov edi, dword ptr [edx + 88h]
        ; Exact mapped bytes A1 D4 AD A0 58: mov eax, dword ptr [0x58a0add4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        mov edx, dword ptr [esp + 2ch]
        lea eax, [eax + edx - 13h]
        xor edx, edx
        div dword ptr [ecx + 4]
        mov eax, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 8ch]
        sub ecx, edi
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        lea eax, [edx + edi]
        cmp eax, 0c8h
        mov dword ptr [ebx + 4], eax
        ; Exact mapped bytes 7D 07: jge 0x587ae2d9
        __asm _emit 0x7d
        __asm _emit 0x07
        add dword ptr [ebx + 4], 0c8h
        mov edx, dword ptr [esp + 64h]
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 8B 3D 98 C1 98 58: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov byte ptr [ebx + 0dh], 0
        xor eax, eax
        add edx, 8000h
        ; Exact mapped bytes 66 89 43 0A: mov word ptr [ebx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 53 08: mov word ptr [ebx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x08
        mov dl, byte ptr [ecx + 78h]
        push 58999dbch
        lea eax, [ebx + 0eh]
        push eax
        mov byte ptr [ebx + 0ch], dl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 4ch]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebx + 28h], ecx
        mov edx, dword ptr [eax + 68h]
        mov dword ptr [ebx + 2ch], edx
        mov ecx, 1
        add eax, 42h
        ; Exact mapped bytes 66 89 4B 30: mov word ptr [ebx + 0x30], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4b
        __asm _emit 0x30
        movzx edx, word ptr [esi + 35eh]
        push eax
        lea eax, [ebx + 38h]
        push eax
        mov dword ptr [ebx + 34h], edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 38h]
        mov byte ptr [ebx + 108h], 3
        and ecx, 1fh
        mov byte ptr [ebx + 110h], 0
        add ecx, ecx
        mov byte ptr [ebx + 111h], 0
        or ecx, 1
        mov dword ptr [ebx + 4ch], ecx
        mov edx, dword ptr [esi + 68h]
        lea eax, [esi + 33ch]
        push eax
        lea ecx, [ebx + 58h]
        mov dword ptr [ebx + 50h], edx
        push ecx
        mov dword ptr [ebx + 54h], 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [esi]
        xor eax, eax
        mov dword ptr [ebx + 70h], edx
        ; Exact mapped bytes 66 8B 8E 84 00 00 00: mov cx, word ptr [esi + 0x84]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 40h], eax
        mov byte ptr [esp + 29h], al
        ; Exact mapped bytes 66 8B 86 82 00 00 00: mov ax, word ptr [esi + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4C 24 42: mov word ptr [esp + 0x42], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x42
        ; Exact mapped bytes 66 89 44 24 2A: mov word ptr [esp + 0x2a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2a
        mov byte ptr [esp + 28h], 2
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [ebx + 74h], edx
        mov byte ptr [esp + 40h], 3
        mov byte ptr [esp + 41h], 0
        mov eax, dword ptr [esp + 40h]
        mov dword ptr [ebx + 78h], eax
        movzx ecx, byte ptr [esi + 11h]
        and ecx, 0fh
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE B3 FC FF: call 0x58779780
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebx + 7ch], edx
        movzx eax, byte ptr [esi + 11h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        and eax, 0fh
        push eax
        ; Exact mapped bytes E8 96 B3 FC FF: call 0x58779780
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebx + 80h], ecx
        movzx edx, byte ptr [esi + 11h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        and edx, 0fh
        push edx
        ; Exact mapped bytes E8 7B B3 FC FF: call 0x58779780
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebx + 84h], eax
        movzx ecx, byte ptr [esi + 11h]
        and ecx, 0fh
        push ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 B3 FC FF: call 0x58779780
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebx + 88h], edx
        movzx eax, word ptr [esi + 4]
        and eax, 1fh
        cmp eax, 10h
        ; Exact mapped bytes 0F 87 3D 01 00 00: ja 0x587ae575
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 58 ED 7A 58: jmp dword ptr [eax*4 + 0x587aed58]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0x7a
        __asm _emit 0x58
        xor eax, eax
        xor ecx, ecx
        xor edx, edx
        xor esi, esi
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x587ae585
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov ecx, eax
        mov edx, 2
        mov esi, eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x587ae585
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        mov ecx, 1
        mov edx, eax
        mov esi, eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x587ae585
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        mov ecx, 2
        mov edx, eax
        mov esi, eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x587ae585
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        mov ecx, 2
        mov edx, eax
        mov esi, 3
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x587ae585
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5
        mov ecx, 3
        mov edx, eax
        mov esi, eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes EB 7A: jmp 0x587ae585
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov edx, 5
        mov eax, 6
        mov ecx, 3
        mov esi, edx
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes EB 57: jmp 0x587ae585
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, 5
        mov ecx, 2
        mov edx, 3
        mov esi, eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes EB 34: jmp 0x587ae585
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, 9
        mov ecx, eax
        mov edx, eax
        mov esi, eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes EB 17: jmp 0x587ae585
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 0ah
        ; Exact mapped bytes EB E1: jmp 0x587ae556
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 20h]
        lea eax, [eax + eax*4]
        add eax, eax
        ; Exact mapped bytes 66 89 83 8C 00 00 00: mov word ptr [ebx + 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ecx + ecx*4]
        lea edx, [edx + edx*4]
        add ecx, ecx
        ; Exact mapped bytes 66 89 8B 8E 00 00 00: mov word ptr [ebx + 0x8e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, edx
        lea eax, [esi + esi*4]
        add eax, eax
        ; Exact mapped bytes 66 89 93 90 00 00 00: mov word ptr [ebx + 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        ; Exact mapped bytes 66 89 83 92 00 00 00: mov word ptr [ebx + 0x92], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 0a4h]
        push 0
        push eax
        ; Exact mapped bytes E8 83 E6 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8B EC 00 00 00: mov word ptr [ebx + 0xec], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 12ch], edx
        add esp, 0ch
        mov dword ptr [ebx + 130h], 3
        cmp dword ptr [ebx + 12ch], ecx
        ; Exact mapped bytes 0F 86 00 01 00 00: jbe 0x587ae6f1
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 12ch]
        mov edx, 18h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 23 2F 1C 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2f
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 60h]
        add esp, 4
        mov dword ptr [ebx + 120h], eax
        xor eax, eax
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 44h], eax
        mov dword ptr [esp + 40h], ecx
        mov ecx, eax
        mov edx, 80000000h
        shr edx, cl
        mov ecx, dword ptr [esp + 30h]
        and edx, dword ptr [ecx + 268h]
        mov ecx, 1fh
        sub ecx, eax
        shr edx, cl
        test edx, edx
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x587ae6dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 40h]
        movzx ecx, word ptr [edx]
        xor esi, esi
        ; Exact mapped bytes 66 3B CE: cmp cx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 0F 86 80 00 00 00: jbe 0x587ae6dc
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes 66 89 4C 24 2A: mov word ptr [esp + 0x2a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov byte ptr [esp + 28h], 5
        mov byte ptr [esp + 29h], 0
        mov eax, dword ptr [esp + 28h]
        push esi
        push eax
        mov dword ptr [esp + 19ch], esi
        mov edi, esi
        mov dword ptr [esp + 1a8h], esi
        ; Exact mapped bytes E8 30 B1 FC FF: call 0x587797c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x587ae6a9
        __asm _emit 0x74
        __asm _emit 0x15
        mov cl, byte ptr [esp + 38h]
        mov edi, dword ptr [eax]
        mov byte ptr [esp + 1a0h], 32h
        mov byte ptr [esp + 1a2h], cl
        mov eax, dword ptr [ebx + 120h]
        mov ecx, dword ptr [esp + 44h]
        mov edx, dword ptr [esp + 28h]
        add eax, ecx
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 1a0h]
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax + 8], esi
        mov dword ptr [eax + 0ch], edx
        mov dword ptr [eax + 10h], esi
        add ecx, 18h
        mov dword ptr [eax + 14h], esi
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esp + 44h], ecx
        add dword ptr [esp + 40h], 2
        inc eax
        cmp eax, 20h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C 37 FF FF FF: jl 0x587ae626
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x587ae6fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebx + 120h], 0
        mov eax, dword ptr [ebx + 130h]
        xor ecx, ecx
        mov edx, 180h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 17 2E 1C 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2e
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebx + 124h], eax
        cmp dword ptr [ebx + 130h], 0
        mov dword ptr [esp + 38h], 0
        ; Exact mapped bytes 0F 86 C6 01 00 00: jbe 0x587ae8fb
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 48h]
        lea ecx, [eax + eax*4 + 32h]
        mov dword ptr [esp + 5ch], ecx
        mov ecx, eax
        imul eax, eax, 16h
        and ecx, 0ffh
        add eax, 14h
        mov dword ptr [esp + 44h], ecx
        mov dword ptr [esp + 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x587ae760
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AE760 .. +0x5F8 bytes.
extern "C" __declspec(naked) void FUN_587ad4b0_segment_05() {
    __asm {
        push 180h
        lea edx, [esp + 1c0h]
        push 0
        push edx
        ; Exact mapped bytes E8 D4 E4 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe4
        __asm _emit 0x1c
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 89 84 24 D0 01 00 00: mov word ptr [esp + 0x1d0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 68: mov ax, word ptr [esp + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes 66 89 84 24 D2 01 00 00: mov word ptr [esp + 0x1d2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 84 24 F2 01 00 00: mov word ptr [esp + 0x1f2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        mov al, byte ptr [eax + 11h]
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8C 24 D4 01 00 00: mov word ptr [esp + 0x1d4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 44h]
        and al, 0fh
        mov edx, ecx
        shl edx, 8
        or edx, dword ptr [esp + 50h]
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        shl edx, 4
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 8B 44 24 54: mov ax, word ptr [esp + 0x54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes 66 89 94 24 D6 01 00 00: mov word ptr [esp + 0x1d6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        mov eax, edx
        shl edx, 10h
        or eax, edx
        mov dword ptr [esp + 1dch], eax
        mov dword ptr [esp + 1e0h], eax
        mov dword ptr [esp + 1e4h], eax
        mov dword ptr [esp + 1e8h], eax
        mov dword ptr [esp + 1ech], eax
        ; Exact mapped bytes 66 89 84 24 F0 01 00 00: mov word ptr [esp + 0x1f0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1d6h]
        and eax, 0fh
        add esp, 0ch
        cmp eax, 4
        ; Exact mapped bytes 77 29: ja 0x587ae83a
        __asm _emit 0x77
        __asm _emit 0x29
        ; Exact mapped bytes FF 24 85 9C ED 7A 58: jmp dword ptr [eax*4 + 0x587aed9c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xed
        __asm _emit 0x7a
        __asm _emit 0x58
        mov edx, 1f4h
        ; Exact mapped bytes EB 13: jmp 0x587ae832
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, 212h
        ; Exact mapped bytes EB 0C: jmp 0x587ae832
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, 226h
        ; Exact mapped bytes EB 05: jmp 0x587ae832
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edx, 235h
        ; Exact mapped bytes 66 89 94 24 0C 02 00 00: mov word ptr [esp + 0x20c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x587ae859
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [edx + eax*4 + 188h]
        mov edx, dword ptr [esp + 210h]
        add eax, eax
        and edx, 1
        or eax, edx
        ; Exact mapped bytes EB 0D: jmp 0x587ae866
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [esp + 210h]
        and eax, 1
        or eax, 2
        push ecx
        mov ecx, dword ptr [esp + 68h]
        push ecx
        lea edx, [esp + 344h]
        push 58999d98h
        push edx
        mov dword ptr [esp + 220h], eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        lea eax, [esp + 33ch]
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 14h
        ; Exact mapped bytes 7D 18: jge 0x587ae8b4
        __asm _emit 0x7d
        __asm _emit 0x18
        lea ecx, [esp + 33ch]
        push ecx
        lea edx, [esp + 24ch]
        push edx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 18: jmp 0x587ae8cc
        __asm _emit 0xeb
        __asm _emit 0x18
        push 14h
        lea eax, [esp + 340h]
        push eax
        lea ecx, [esp + 250h]
        push ecx
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esp + 38h]
        lea edi, [eax + eax*2]
        shl edi, 7
        add edi, dword ptr [ebx + 124h]
        mov ecx, 60h
        lea esi, [esp + 1bch]
        inc eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [esp + 38h], eax
        cmp eax, dword ptr [ebx + 130h]
        ; Exact mapped bytes 0F 82 65 FE FF FF: jb 0x587ae760
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 4ch]
        mov esi, dword ptr [edx + 88h]
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x587ae910
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x587ae918
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 14h]
        sub eax, ecx
        sar eax, 2
        mov edi, dword ptr [esi + 10h]
        mov edx, edi
        sub edx, ecx
        sar edx, 2
        cmp edx, eax
        ; Exact mapped bytes 73 0A: jae 0x587ae930
        __asm _emit 0x73
        __asm _emit 0x0a
        mov dword ptr [edi], ebx
        add edi, 4
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes EB 1E: jmp 0x587ae94e
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp ecx, edi
        ; Exact mapped bytes 76 05: jbe 0x587ae939
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 39 E3 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [esp + 34h]
        push ecx
        push edi
        push eax
        lea edx, [esp + 78h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 42 7F 14 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7f
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esp + 64h]
        mov ecx, dword ptr [esp + 4ch]
        add dword ptr [esp + 58h], 4
        add dword ptr [esp + 54h], 3
        add dword ptr [esp + 2ch], 7
        inc eax
        mov dword ptr [esp + 64h], eax
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 82 ED F7 FF FF: jb 0x587ae160
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xed
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 24h]
        mov ecx, dword ptr [edi + 88h]
        lea edx, [esp + 4ch]
        push edx
        ; Exact mapped bytes E8 49 6B FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 3ch]
        lea eax, [esp + 24h]
        push eax
        lea ecx, [ebx + 164h]
        ; Exact mapped bytes E8 35 6B FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        push 1ch
        ; Exact mapped bytes E8 AC E2 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esi, eax
        push 1ch
        mov dword ptr [esp + 3ch], esi
        ; Exact mapped bytes E8 9F E2 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi + 8], ecx
        mov dword ptr [esi + 0ch], ecx
        mov dword ptr [esi + 10h], ecx
        mov dword ptr [esi + 14h], ecx
        mov dword ptr [esi + 18h], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [edi + 64h]
        mov dword ptr [esi], edx
        mov dword ptr [esi + 0ch], 3
        mov edx, 0ffffh
        mov dword ptr [esi + 10h], edx
        mov dword ptr [esi + 14h], ecx
        mov ecx, dword ptr [edi + 64h]
        mov dword ptr [eax], ecx
        mov ecx, 1
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], edx
        add esp, 8
        lea edx, [esp + 34h]
        mov dword ptr [eax + 14h], ecx
        lea esi, [ebx + 14ch]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 60h], eax
        ; Exact mapped bytes E8 B4 6A FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 5ch]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A8 6A FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C9 02 00 00: jmp 0x587aecf6
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0f4241h
        ; Exact mapped bytes 0F 85 BE 02 00 00: jne 0x587aecf6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        push 11ch
        lea ecx, [ebx + 30h]
        push edi
        push ecx
        mov dword ptr [ebx + 184h], edi
        mov dword ptr [ebx + 180h], 1
        mov dword ptr [ebx + 4], eax
        mov dword ptr [ebx + 17ch], edi
        ; Exact mapped bytes E8 E6 E1 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe1
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        add esp, 0ch
        push eax
        mov ecx, esi
        mov dword ptr [ebx + 68h], eax
        mov dword ptr [ebx + 6ch], edi
        mov dword ptr [ebx + 50h], 0f4241h
        mov dword ptr [ebx + 3fch], edi
        mov dword ptr [ebx + 400h], edi
        mov dword ptr [ebx + 404h], edi
        ; Exact mapped bytes E8 A1 3D FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3d
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], edi
        mov dword ptr [esp + 4ch], edi
        ; Exact mapped bytes 0F 8E 5A 02 00 00: jle 0x587aecf6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        push 8ch
        ; Exact mapped bytes E8 A4 E1 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe1
        __asm _emit 0x1c
        __asm _emit 0x00
        push 88h
        mov edi, eax
        push 0
        push edi
        mov dword ptr [esp + 6ch], edi
        ; Exact mapped bytes E8 8B E1 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe1
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 98 C1 98 58: mov esi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        push 58999d8ch
        lea eax, [edi + 2]
        xor edx, edx
        push eax
        ; Exact mapped bytes 66 89 17: mov word ptr [edi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x17
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 5898c922h
        lea ecx, [edi + 42h]
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 4ch]
        lea ecx, [eax + 1]
        mov dword ptr [edi + 64h], ecx
        mov dword ptr [edi + 68h], 0
        mov dword ptr [edi + 6ch], 3
        mov dword ptr [edi + 70h], 2
        mov dword ptr [edi + 74h], 1
        push 18h
        mov dword ptr [esp + 48h], ecx
        mov dword ptr [edi + 78h], eax
        ; Exact mapped bytes E8 39 E1 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe1
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        mov byte ptr [esp + 490h], 7
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587aeb31
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 81 12 15 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x12
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587aeb33
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1
        mov ecx, eax
        mov byte ptr [esp + 494h], 1
        mov dword ptr [edi + 88h], eax
        ; Exact mapped bytes E8 E6 3C FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        push 8ch
        ; Exact mapped bytes E8 FA E0 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x00
        push 88h
        mov esi, eax
        push 0
        push esi
        mov dword ptr [esp + 44h], esi
        ; Exact mapped bytes E8 E1 E0 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 10h
        push 58999d7ch
        lea eax, [esi + 2]
        mov edx, 1
        push eax
        ; Exact mapped bytes 66 89 16: mov word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x16
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898c922h
        lea ecx, [esi + 42h]
        push ecx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 4ch]
        mov dword ptr [esi + 64h], edx
        mov dword ptr [esi + 68h], 1
        mov dword ptr [esi + 6ch], 3
        mov dword ptr [esi + 70h], 2
        mov dword ptr [esi + 74h], 0
        push 18h
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 8D E0 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        mov byte ptr [esp + 490h], 8
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587aebdd
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 D5 11 15 00: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587aebdf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 18h
        mov ecx, eax
        mov byte ptr [esp + 494h], 1
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 3A 3C FA FF: call 0x58752830
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [esp + 34h]
        push ecx
        mov ecx, dword ptr [edi + 88h]
        ; Exact mapped bytes E8 CA 68 FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [esp + 5ch]
        push edx
        lea ecx, [ebx + 164h]
        ; Exact mapped bytes E8 BA 68 FF FF: call 0x587a54d0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 2ch], 0
        mov edi, edi
        push 1ch
        ; Exact mapped bytes E8 27 E0 1C 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [eax + 18h], ecx
        mov ecx, dword ptr [edi + 64h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 50h]
        mov dword ptr [eax + 0ch], 3
        add esp, 4
        mov dword ptr [eax + 10h], 0ffffh
        mov dword ptr [esp + 34h], eax
        mov dword ptr [eax + 14h], ecx
        cmp dword ptr [esp + 2ch], ecx
        ; Exact mapped bytes 75 07: jne 0x587aec6b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [eax + 0ch], 1
        mov ecx, dword ptr [ebx + 158h]
        lea esi, [ebx + 14ch]
        test ecx, ecx
        ; Exact mapped bytes 75 06: jne 0x587aec81
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esp + 30h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x587aec8d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [esi + 14h]
        sub edx, ecx
        sar edx, 2
        mov dword ptr [esp + 30h], edx
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [esp + 24h], edx
        sub edx, ecx
        sar edx, 2
        cmp edx, dword ptr [esp + 30h]
        ; Exact mapped bytes 73 0E: jae 0x587aecad
        __asm _emit 0x73
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [ecx], eax
        add ecx, 4
        mov dword ptr [esi + 10h], ecx
        ; Exact mapped bytes EB 26: jmp 0x587aecd3
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, ecx
        cmp eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 76 05: jbe 0x587aecba
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 B8 DF 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [esi]
        lea edx, [esp + 34h]
        push edx
        push ecx
        push eax
        lea edx, [esp + 78h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 BD 7B 14 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x7b
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        inc eax
        cmp eax, dword ptr [ebp + 10h]
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 0F 8C 3B FF FF FF: jl 0x587aec20
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 44h]
        cmp eax, dword ptr [ebp + 10h]
        mov dword ptr [esp + 4ch], eax
        ; Exact mapped bytes 0F 8C AA FD FF FF: jl 0x587aeaa0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [ebx + 3dch]
        lea edi, [ebx + 19ch]
        mov dword ptr [esp + 30h], 8
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        push 0
        push edi
        ; Exact mapped bytes E8 2E DF 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdf
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [esi], 0
        add esp, 0ch
        add esi, 4
        add edi, 48h
        sub dword ptr [esp + 30h], 1
        ; Exact mapped bytes 75 E0: jne 0x587aed10
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, ebx
        mov ecx, dword ptr [esp + 488h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 470h]
        xor ecx, esp
        ; Exact mapped bytes E8 88 DE 1C 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
