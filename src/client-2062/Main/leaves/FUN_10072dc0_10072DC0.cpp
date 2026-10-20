// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10072DC0 .. +0x3A8 bytes.
extern "C" __declspec(naked) void FUN_10072dc0_10072DC0() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr [esp + 1ch]
        push edi
        lea ebx, [ebp + 180h]
        mov ecx, 1ch
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        test byte ptr [ebp + 1b8h], 1
        ; Exact mapped bytes 74 15: je 0x10072dfa
        __asm _emit 0x74
        __asm _emit 0x15
        mov al, byte ptr [ebp + 1b2h]
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        and eax, 0fh
        push eax
        ; Exact mapped bytes E8 06 F4 FC FF: call 0x10042200
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 1e8h]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 74 8B FF FF: call 0x1006b980
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, ebp
        mov esi, dword ptr [edx + 104e0h]
        push esi
        mov dword ptr [ebp + 11ch], esi
        ; Exact mapped bytes E8 DA C0 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        push esi
        mov ecx, ebp
        ; Exact mapped bytes E8 72 C1 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x00
        push 1
        mov ecx, ebp
        ; Exact mapped bytes E8 49 1C 00 00: call 0x10074a80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 28h]
        xor esi, esi
        mov dword ptr [eax + 1d0h], 1
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [ebp + 200h], esi
        mov dword ptr [ebp + 204h], esi
        mov dword ptr [ebp + 1fch], esi
        mov dword ptr [ebp + 80h], esi
        mov dword ptr [ebp + 104h], esi
        mov dword ptr [ebp + 0a0h], ecx
        mov dword ptr [ebp + 0a4h], edx
        mov cl, byte ptr [eax + 32h]
        and ecx, 0fh
        push 1
        mov dword ptr [ebp + 90h], ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 68 A4 04 00: call 0x100bd300
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 95 A4 00 00 00: mov dx, word ptr [ebp + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 A0 00 00 00: mov ax, word ptr [ebp + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 174h]
        push edx
        push eax
        mov dword ptr [ebp + 6ch], esi
        ; Exact mapped bytes E8 EA 23 05 00: call 0x100c52a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 90h]
        push ecx
        mov ecx, dword ptr [ebp + 174h]
        ; Exact mapped bytes E8 F8 23 05 00: call 0x100c52c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 174h]
        push ebx
        ; Exact mapped bytes E8 DC 24 05 00: call 0x100c53b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 174h]
        ; Exact mapped bytes E8 C1 51 FD FF: call 0x100480a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 128h]
        mov ebx, 0fff0h
        mov dword ptr [ebp + 7ch], esi
        mov dword ptr [ebp + 74h], esi
        mov dword ptr [ebp + 68h], esi
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        or eax, 0ffffffffh
        mov dword ptr [ebp + 1f0h], esi
        mov dword ptr [ebp + 94h], eax
        mov dword ptr [ebp + 98h], eax
        mov dword ptr [ebp + 8ch], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 33 93 FB FF: call 0x1002c250
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x93
        __asm _emit 0xfb
        __asm _emit 0xff
        xor edi, edi
        mov ecx, dword ptr [edi + 101ace60h]
        ; Exact mapped bytes E8 F6 8F FB FF: call 0x1002bf20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 108h]
        add edi, 4
        mov eax, dword ptr [edx + edi - 4]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        cmp edi, 20h
        ; Exact mapped bytes 7C DF: jl 0x10072f1f
        __asm _emit 0x7c
        __asm _emit 0xdf
        mov eax, dword ptr [esp + 20h]
        xor ecx, ecx
        mov dword ptr [esp + 24h], ecx
        test byte ptr [eax + 32h], 0fh
        ; Exact mapped bytes 0F 86 A7 01 00 00: jbe 0x100730fb
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2d8h
        mov ebx, 0fffffeb0h
        sub eax, ebp
        sub ebx, ebp
        mov dword ptr [esp + 28h], esi
        lea edi, [ebp + 150h]
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes EB 04: jmp 0x10072f7a
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 108h]
        add ebx, edi
        mov esi, dword ptr [ebx + ecx]
        mov ecx, dword ptr [ebp + 11ch]
        push esi
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes E8 6B BF 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbf
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push esi
        ; Exact mapped bytes E8 01 C0 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [edi]
        mov ecx, dword ptr [ebp + 11ch]
        push esi
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes E8 4F BF 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xbf
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push esi
        ; Exact mapped bytes E8 E5 BF 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbf
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [ebp + 0e0h]
        lea eax, [edx*8]
        mov edx, dword ptr [esp + 28h]
        add eax, esi
        xor esi, esi
        lea ecx, [edx + ecx + 448h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [edx + edi]
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 7E 63: jle 0x10073060
        __asm _emit 0x7e
        __asm _emit 0x63
        mov ecx, dword ptr [esp + 28h]
        add ecx, 448h
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes EB 04: jmp 0x10073011
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [ecx + eax + 4]
        mov eax, dword ptr [ecx + eax]
        mov ecx, dword ptr [ebp + 10ch]
        push edx
        push eax
        mov edx, dword ptr [ebx + ecx]
        mov ecx, dword ptr [edx + esi*4]
        ; Exact mapped bytes E8 A5 BC 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10ch]
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [ebx + eax]
        mov eax, dword ptr [ecx + esi*4]
        lea ecx, [edx + edi]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esp + 10h]
        add eax, 8
        inc esi
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp esi, dword ptr [ecx + eax]
        ; Exact mapped bytes 7C B5: jl 0x1007300d
        __asm _emit 0x7c
        __asm _emit 0xb5
        cmp esi, 400h
        ; Exact mapped bytes 7D 24: jge 0x10073084
        __asm _emit 0x7d
        __asm _emit 0x24
        lea eax, [esi*4]
        mov ecx, dword ptr [ebp + 10ch]
        add eax, 4
        mov edx, dword ptr [ebx + ecx]
        mov ecx, dword ptr [edx + eax - 4]
        ; Exact mapped bytes 66 81 61 24 F0 FF: and word ptr [ecx + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 1000h
        ; Exact mapped bytes 7C E3: jl 0x10073067
        __asm _emit 0x7c
        __asm _emit 0xe3
        mov edx, dword ptr [esp + 24h]
        mov ecx, dword ptr [ebp + 0e0h]
        lea eax, [edx*8]
        mov edx, dword ptr [eax + ecx]
        add eax, ecx
        sub edx, 64h
        mov ecx, dword ptr [eax + 4]
        add ecx, 96h
        push ecx
        mov ecx, dword ptr [edi - 20h]
        push edx
        ; Exact mapped bytes E8 20 BC 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi - 20h]
        mov edx, dword ptr [esp + 28h]
        mov ecx, 0fh
        add edx, 2000h
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov dword ptr [esp + 28h], edx
        mov edx, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 24h]
        mov dl, byte ptr [edx + 32h]
        inc eax
        and edx, ecx
        add edi, 4
        cmp eax, edx
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8C 89 FE FF FF: jl 0x10072f76
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 7D 2F: jge 0x10073121
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ebx, 0fff0h
        mov ecx, eax
        xor esi, esi
        mov edx, 8
        lea eax, [ebp + ecx*4 + 130h]
        sub edx, ecx
        mov dword ptr [eax - 70h], esi
        mov ecx, dword ptr [eax]
        add eax, 4
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 66 21 59 24: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 EA: jne 0x10073109
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes EB 02: jmp 0x10073123
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [ebp + 108h]
        pop edi
        mov eax, dword ptr [eax]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [ebp + 0e0h]
        mov dword ptr [ebp + 84h], esi
        mov dword ptr [ebp + 88h], esi
        mov ecx, dword ptr [eax]
        pop esi
        sub ecx, 96h
        mov dword ptr [ebp + 0fch], ecx
        mov edx, dword ptr [eax + 4]
        sub edx, 12ch
        mov dword ptr [ebp + 100h], edx
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
