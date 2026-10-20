// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770930 .. +0x2CE bytes.
extern "C" __declspec(naked) void FUN_58770930_58770930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 A9 02 00 00: je 0x58770bfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 5ch]
        sub edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 49: je 0x587709ad
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 50h]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [ebp - 48h]
        cmp ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 7E 16: jle 0x587709a3
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 60h], 40000000h
        ; Exact mapped bytes EB 0A: jmp 0x587709ad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 60h], 40000000h
        ; Exact mapped bytes 75 10: jne 0x587709c9
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x587709c9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 60h], 40000000h
        ; Exact mapped bytes 0F 85 99 01 00 00: jne 0x58770b72
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 64h], 1
        ; Exact mapped bytes 75 36: jne 0x58770a18
        __asm _emit 0x75
        __asm _emit 0x36
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 09: jle 0x587709f1
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 1C: jmp 0x58770a0d
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 09: jge 0x58770a00
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x58770a07
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x58770b63
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 64h], 2
        ; Exact mapped bytes 0F 85 3E 01 00 00: jne 0x58770b63
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8E 93 00 00 00: jle 0x58770ac2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 1e240h
        ; Exact mapped bytes 7E 09: jle 0x58770a41
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 1e240h
        ; Exact mapped bytes EB 76: jmp 0x58770ab7
        __asm _emit 0xeb
        __asm _emit 0x76
        cmp dword ptr [ebp - 4], 3039h
        ; Exact mapped bytes 7E 09: jle 0x58770a53
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 3039h
        ; Exact mapped bytes EB 5E: jmp 0x58770ab1
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp dword ptr [ebp - 4], 4d2h
        ; Exact mapped bytes 7E 09: jle 0x58770a65
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 4d2h
        ; Exact mapped bytes EB 46: jmp 0x58770aab
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 4], 7bh
        ; Exact mapped bytes 7E 09: jle 0x58770a74
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 7bh
        ; Exact mapped bytes EB 31: jmp 0x58770aa5
        __asm _emit 0xeb
        __asm _emit 0x31
        cmp dword ptr [ebp - 4], 0ch
        ; Exact mapped bytes 7E 09: jle 0x58770a83
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0ch
        ; Exact mapped bytes EB 1C: jmp 0x58770a9f
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 7C 09: jl 0x58770a92
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 07: jmp 0x58770a99
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x58770b63
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8D 90 00 00 00: jge 0x58770b5c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0fffe1dc0h
        ; Exact mapped bytes 7D 09: jge 0x58770ade
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 0fffe1dc0h
        ; Exact mapped bytes EB 76: jmp 0x58770b54
        __asm _emit 0xeb
        __asm _emit 0x76
        cmp dword ptr [ebp - 4], 0ffffcfc7h
        ; Exact mapped bytes 7D 09: jge 0x58770af0
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 0ffffcfc7h
        ; Exact mapped bytes EB 5E: jmp 0x58770b4e
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp dword ptr [ebp - 4], 0fffffb2eh
        ; Exact mapped bytes 7D 09: jge 0x58770b02
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0fffffb2eh
        ; Exact mapped bytes EB 46: jmp 0x58770b48
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 4], -7bh
        ; Exact mapped bytes 7D 09: jge 0x58770b11
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0ffffff85h
        ; Exact mapped bytes EB 31: jmp 0x58770b42
        __asm _emit 0xeb
        __asm _emit 0x31
        cmp dword ptr [ebp - 4], -0ch
        ; Exact mapped bytes 7D 09: jge 0x58770b20
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 0fffffff4h
        ; Exact mapped bytes EB 1C: jmp 0x58770b3c
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 7F 09: jg 0x58770b2f
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x58770b36
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 07: jmp 0x58770b63
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 58h]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 58h], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58770b93
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58770b93
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5A: je 0x58770bfc
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58770bb6
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB E6: jmp 0x58770b9c
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 52 4A D2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x4a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58770bda
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58770bfc
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58770bfa
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2E 4A D2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB A0: jmp 0x58770b9c
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
