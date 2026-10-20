// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418E8E .. +0x29D bytes.
extern "C" __declspec(naked) void FUN_00418e8e_00418E8E() {
    __asm {
        mov eax, 43adbch
        ; Exact mapped bytes E8 70 67 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 2ch
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        mov ebx, ecx
        xor esi, esi
        cmp eax, esi
        mov dword ptr [ebx + 20h], esi
        ; Exact mapped bytes 74 06: je 0x418eb1
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [ebx + 24h], eax
        mov dword ptr [eax + 38h], ebx
        ; Exact mapped bytes E8 D0 CB 01 00: call 0x435a86
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax + 114h], esi
        ; Exact mapped bytes 75 13: jne 0x418ed1
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 45 E6 01 00: call 0x437508
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x418ed1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004005h
        ; Exact mapped bytes E9 4A 02 00 00: jmp 0x41911b
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        push dword ptr [ebp + 2ch]
        push dword ptr [ebp + 28h]
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A3 04 00 00: call 0x419388
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, esi
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 8C 27 02 00 00: jl 0x419117
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebx + 28h], eax
        mov eax, dword ptr [ebp + 1ch]
        cmp eax, esi
        ; Exact mapped bytes 75 5D: jne 0x418f5a
        __asm _emit 0x75
        __asm _emit 0x5d
        push esi
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 4D B2 01 00: call 0x434153
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4ch]
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov ecx, dword ptr [eax]
        push eax
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes FF 51 48: call dword ptr [ecx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x48
        lea eax, [ebp - 14h]
        lea ecx, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 5D C9 01 00: call 0x435881
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 14h]
        lea edi, [ebx + 2ch]
        lea esi, [ebp - 24h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 24h], eax
        add eax, edx
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 10h]
        add eax, ecx
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 18h], eax
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes E8 6D B2 01 00: call 0x4341c5
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 27: jmp 0x418f81
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [eax]
        mov esi, dword ptr [eax + 4]
        lea edi, [ebx + 2ch]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        add edx, eax
        add esi, ecx
        mov dword ptr [ebp - 18h], esi
        lea esi, [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov eax, dword ptr [ebx + 70h]
        mov dword ptr [ebx + 68h], 30000h
        test ah, 10h
        ; Exact mapped bytes 74 07: je 0x418f97
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebx + 68h], 30001h
        test ah, 4
        ; Exact mapped bytes 74 04: je 0x418fa0
        __asm _emit 0x74
        __asm _emit 0x04
        and byte ptr [ebp + 17h], 0efh
        mov eax, dword ptr [ebx + 68h]
        and eax, dword ptr [ebp + 14h]
        cmp dword ptr [ebp + 8], 1
        mov dword ptr [ebx + 6ch], eax
        ; Exact mapped bytes 74 2B: je 0x418fda
        __asm _emit 0x74
        __asm _emit 0x2b
        lea eax, [ebx + 0cch]
        mov ecx, ebx
        push eax
        lea eax, [ebx + 3ch]
        push eax
        ; Exact mapped bytes E8 76 07 00 00: call 0x419737
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 60h], eax
        lea eax, [ebx + 0c8h]
        push eax
        push 440378h
        mov ecx, ebx
        ; Exact mapped bytes E8 60 07 00 00: call 0x419737
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 64h], eax
        lea eax, [ebx + 0d4h]
        mov ecx, ebx
        push eax
        push 440328h
        ; Exact mapped bytes E8 4A 07 00 00: call 0x419737
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        mov dword ptr [ebx + 84h], eax
        ; Exact mapped bytes E8 EC FD FF FF: call 0x418de6
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 4ch]
        lea edi, [ebx + 50h]
        push edi
        push 440388h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        xor esi, esi
        mov dword ptr [ebp + 8], eax
        cmp eax, esi
        ; Exact mapped bytes 7C 7B: jl 0x41908f
        __asm _emit 0x7c
        __asm _emit 0x7b
        test byte ptr [ebp + 17h], 10h
        ; Exact mapped bytes 74 0F: je 0x419029
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebx]
        push esi
        push -5
        mov ecx, ebx
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 56: jmp 0x41907f
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes 8B 35 80 C4 43 00: mov esi, dword ptr [0x43c480]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, 0ffff8300h
        push eax
        push eax
        lea eax, [ebx + 2ch]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [ebx]
        push 0
        push -5
        mov ecx, ebx
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        test eax, eax
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7C 3F: jl 0x41908d
        __asm _emit 0x7c
        __asm _emit 0x3f
        mov eax, dword ptr [ebx]
        push 0
        push -3
        mov ecx, ebx
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        test eax, eax
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7C 2D: jl 0x41908d
        __asm _emit 0x7c
        __asm _emit 0x2d
        mov eax, 7d00h
        push eax
        push eax
        lea eax, [ebx + 2ch]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [edi]
        lea eax, [ebx + 2ch]
        push eax
        push eax
        mov edx, dword ptr [ecx]
        push ecx
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov dword ptr [ebp + 8], eax
        xor esi, esi
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 7C 0B: jl 0x41908f
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, ebx
        ; Exact mapped bytes E8 EC 08 00 00: call 0x419977
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5C: jmp 0x4190e9
        __asm _emit 0xeb
        __asm _emit 0x5c
        xor esi, esi
        mov eax, dword ptr [edi]
        cmp eax, esi
        ; Exact mapped bytes 74 08: je 0x41909d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [edi], esi
        push dword ptr [ebx + 60h]
        lea eax, [ebx + 3ch]
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 F4 06 00 00: call 0x41979f
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebx + 64h]
        mov ecx, ebx
        push 440378h
        ; Exact mapped bytes E8 E5 06 00 00: call 0x41979f
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebx + 84h]
        mov ecx, ebx
        push 440328h
        ; Exact mapped bytes E8 D3 06 00 00: call 0x41979f
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4ch]
        mov dword ptr [ebx + 60h], esi
        mov dword ptr [ebx + 64h], esi
        mov dword ptr [ebx + 84h], esi
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp + 8], esi
        mov dword ptr [ebx + 4ch], esi
        ; Exact mapped bytes 7C 2E: jl 0x419117
        __asm _emit 0x7c
        __asm _emit 0x2e
        mov ecx, ebx
        ; Exact mapped bytes E8 F6 09 00 00: call 0x419ae6
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], esi
        ; Exact mapped bytes 74 0D: je 0x419102
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebx]
        push dword ptr [ebp + 10h]
        mov ecx, ebx
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebx]
        and eax, 8800000h
        push esi
        or eax, dword ptr [ebx + 6ch]
        mov ecx, ebx
        push eax
        push esi
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 8]
        pop edi
        mov ecx, dword ptr [ebp - 0ch]
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
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
