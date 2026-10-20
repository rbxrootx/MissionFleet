// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055E70 .. +0x488 bytes.
extern "C" __declspec(naked) void FUN_10055e70_10055E70() {
    __asm {
        sub esp, 0a8h
        push ebx
        push esi
        push edi
        mov ebx, ecx
        xor edi, edi
        ; Exact mapped bytes 66 39 BB 14 01 00 00: cmp word ptr [ebx + 0x114], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbb
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 120h], edi
        ; Exact mapped bytes 0F 85 FE 03 00 00: jne 0x1005628e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 33h
        mov dword ptr [esp + 68h], 54h
        mov dword ptr [esp + 64h], eax
        mov dword ptr [esp + 6ch], eax
        mov eax, dword ptr [ebx + 340h]
        mov dword ptr [esp + 70h], 83h
        mov dword ptr [esp + 74h], 2bh
        mov dword ptr [esp + 78h], 0b2h
        mov ecx, dword ptr [eax + 164h]
        mov dword ptr [esp + 7ch], 2eh
        cmp ecx, edi
        mov dword ptr [esp + 80h], 0d4h
        mov dword ptr [esp + 84h], 38h
        mov dword ptr [esp + 88h], 0eeh
        mov dword ptr [esp + 8ch], 27eh
        mov dword ptr [esp + 90h], 0deh
        mov dword ptr [esp + 94h], 261h
        mov dword ptr [esp + 98h], 0f5h
        mov dword ptr [esp + 9ch], 264h
        mov dword ptr [esp + 0a0h], 115h
        mov dword ptr [esp + 0a4h], 253h
        mov dword ptr [esp + 0a8h], 134h
        mov dword ptr [esp + 0ach], 236h
        mov dword ptr [esp + 0b0h], 148h
        mov dword ptr [esp + 14h], 8ch
        mov dword ptr [esp + 18h], 5ah
        mov dword ptr [esp + 1ch], 7dh
        mov dword ptr [esp + 20h], 8ah
        mov dword ptr [esp + 24h], 6eh
        mov dword ptr [esp + 28h], 0afh
        mov dword ptr [esp + 2ch], 7ch
        mov dword ptr [esp + 30h], 0cbh
        mov dword ptr [esp + 34h], 80h
        mov dword ptr [esp + 38h], 0efh
        mov dword ptr [esp + 3ch], 26ch
        mov dword ptr [esp + 40h], 0e1h
        mov dword ptr [esp + 44h], 265h
        mov dword ptr [esp + 48h], 102h
        mov dword ptr [esp + 4ch], 260h
        mov dword ptr [esp + 50h], 125h
        mov dword ptr [esp + 54h], 233h
        mov dword ptr [esp + 58h], 143h
        mov dword ptr [esp + 5ch], 201h
        mov dword ptr [esp + 60h], 15fh
        ; Exact mapped bytes 7E 0E: jle 0x10056012
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 04: je 0x10056012
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x10056014
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 344h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10056049
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebx + 3f4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 4D: je 0x100560a0
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebx + 3f0h]
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 0E: jle 0x1005606f
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 04: je 0x1005606f
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x10056071
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100560a0
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, 8
        push ebp
        mov dword ptr [ebx + 120h], 0ah
        ; Exact mapped bytes 66 C7 83 16 01 00 00 01 00: mov word ptr [ebx + 0x116], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], 200h
        lea esi, [ebx + 198h]
        ; Exact mapped bytes EB 04: jmp 0x100560d1
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebx + 340h]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 16: jle 0x100560f5
        __asm _emit 0x7e
        __asm _emit 0x16
        test eax, eax
        ; Exact mapped bytes 7C 12: jl 0x100560f5
        __asm _emit 0x7c
        __asm _emit 0x12
        mov eax, dword ptr [ecx + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100560f5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [esp + 14h]
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100560f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10056128
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esp + edi + 6ch]
        mov edx, dword ptr [esp + edi + 68h]
        push ecx
        mov ecx, dword ptr [esi]
        push edx
        ; Exact mapped bytes E8 97 8B 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        or byte ptr [eax + 24h], 0fh
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 9A 17 FC FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ebp, dword ptr [esp + edi + 1ch]
        mov eax, dword ptr [esp + edi + 18h]
        mov ecx, dword ptr [esi + 80h]
        push ebp
        push eax
        ; Exact mapped bytes E8 75 8B 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + edi + 18h]
        mov ecx, dword ptr [esi + 80h]
        push ebp
        push eax
        ; Exact mapped bytes E8 34 B7 FB FF: call 0x100118a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        add ecx, 40h
        add esi, 4
        inc eax
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [ebx + 120h]
        mov dword ptr [esp + 10h], eax
        add eax, -8
        add edi, 8
        cmp eax, ecx
        ; Exact mapped bytes 0F 8C 36 FF FF FF: jl 0x100560cd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        pop ebp
        cmp dword ptr [eax + 160h], 0c0h
        ; Exact mapped bytes 7E 11: jle 0x100561ba
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100561ba
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 3000h
        ; Exact mapped bytes EB 02: jmp 0x100561bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 3ech]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100561f1
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0bdh
        ; Exact mapped bytes 7E 11: jle 0x10056213
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10056213
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 2f40h
        ; Exact mapped bytes EB 02: jmp 0x10056215
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 3e8h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005624a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebx + 3e8h]
        push 47h
        push 137h
        ; Exact mapped bytes E8 14 18 FF FF: call 0x10047a70
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 3e8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [ebx + 194h]
        push 55h
        push 276h
        ; Exact mapped bytes E8 37 16 FC FF: call 0x100178b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 194h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [ebx + 3e4h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [ebx + 120h]
        cmp eax, 0ah
        ; Exact mapped bytes 7D 53: jge 0x100562ec
        __asm _emit 0x7d
        __asm _emit 0x53
        mov edi, 0ah
        lea esi, [ebx + eax*4 + 198h]
        sub edi, eax
        mov ebx, 0fff0h
        mov ecx, dword ptr [esi]
        push 12ch
        push 320h
        ; Exact mapped bytes E8 13 8A 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 1C 16 FC FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push 0
        push 320h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 F4 89 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        add esi, 4
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        dec edi
        ; Exact mapped bytes 75 C0: jne 0x100562ac
        __asm _emit 0x75
        __asm _emit 0xc0
        pop edi
        pop esi
        pop ebx
        add esp, 0a8h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
