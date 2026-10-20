// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10098B50 .. +0xA20 bytes.
extern "C" __declspec(naked) void FUN_10098b50_10098B50() {
    __asm {
        push -1
        push 10170dbch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov ecx, dword ptr [esp + 30h]
        mov esi, dword ptr [esp + 28h]
        push edi
        mov edi, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push esi
        push edi
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 28h], ebx
        ; Exact mapped bytes E8 1B 5E 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        or byte ptr [ebx + 24h], 20h
        mov dword ptr [ebx + 50h], edi
        xor edi, edi
        mov dword ptr [ebx + 54h], esi
        mov dword ptr [ebx + 58h], 100h
        mov dword ptr [ebx + 5ch], edi
        push 198h
        mov dword ptr [esp + 20h], edi
        mov dword ptr [ebx], 10175f5ch
        ; Exact mapped bytes E8 E1 3B 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 1E: je 0x10098bed
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        push 101abc24h
        mov ecx, eax
        ; Exact mapped bytes E8 E4 6E 06 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebx + 60h], eax
        mov byte ptr [esp + 1ch], 0
        xor ebp, ebp
        mov eax, 4
        ; Exact mapped bytes EB 19: jmp 0x10098c06
        __asm _emit 0xeb
        __asm _emit 0x19
        xor eax, eax
        xor ebp, ebp
        mov byte ptr [esp + 1ch], al
        mov dword ptr [ebx + 60h], eax
        mov eax, 4
        ; Exact mapped bytes EB 07: jmp 0x10098c06
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, 4
        xor edi, edi
        cmp ebp, edi
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x10098cad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 6
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x10098cad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 8
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x10098cad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 0ah
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x10098cad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 0ch
        ; Exact mapped bytes 74 7F: je 0x10098cad
        __asm _emit 0x74
        __asm _emit 0x7f
        cmp ebp, 1
        ; Exact mapped bytes 74 68: je 0x10098c9b
        __asm _emit 0x74
        __asm _emit 0x68
        cmp ebp, eax
        ; Exact mapped bytes 74 64: je 0x10098c9b
        __asm _emit 0x74
        __asm _emit 0x64
        cmp ebp, 7
        ; Exact mapped bytes 74 5F: je 0x10098c9b
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp ebp, 9
        ; Exact mapped bytes 74 5A: je 0x10098c9b
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp ebp, 0bh
        ; Exact mapped bytes 74 55: je 0x10098c9b
        __asm _emit 0x74
        __asm _emit 0x55
        cmp ebp, 0dh
        ; Exact mapped bytes 74 50: je 0x10098c9b
        __asm _emit 0x74
        __asm _emit 0x50
        cmp ebp, 2
        ; Exact mapped bytes 75 0E: jne 0x10098c5e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [esp + 30h], 0ah
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes EB 57: jmp 0x10098cb5
        __asm _emit 0xeb
        __asm _emit 0x57
        cmp ebp, 3
        ; Exact mapped bytes 75 0E: jne 0x10098c71
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [esp + 30h], 0dh
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes EB 44: jmp 0x10098cb5
        __asm _emit 0xeb
        __asm _emit 0x44
        cmp ebp, 5
        ; Exact mapped bytes 75 0E: jne 0x10098c84
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [esp + 30h], 10h
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes EB 31: jmp 0x10098cb5
        __asm _emit 0xeb
        __asm _emit 0x31
        cmp ebp, 0eh
        ; Exact mapped bytes 75 2C: jne 0x10098cb5
        __asm _emit 0x75
        __asm _emit 0x2c
        mov dword ptr [esp + 30h], 13h
        mov dword ptr [esp + 34h], 5
        ; Exact mapped bytes EB 1A: jmp 0x10098cb5
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov dword ptr [esp + 30h], 7
        mov dword ptr [esp + 34h], 1
        ; Exact mapped bytes EB 08: jmp 0x10098cb5
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 34h], edi
        cmp ebp, 3
        mov dword ptr [esp + 38h], 0fh
        ; Exact mapped bytes 7C 52: jl 0x10098d14
        __asm _emit 0x7c
        __asm _emit 0x52
        cmp ebp, 6
        ; Exact mapped bytes 7D 0A: jge 0x10098cd1
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 38h], 3fh
        ; Exact mapped bytes EB 43: jmp 0x10098d14
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp ebp, 8
        ; Exact mapped bytes 7D 0A: jge 0x10098ce0
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 38h], 6fh
        ; Exact mapped bytes EB 34: jmp 0x10098d14
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp ebp, 0ah
        ; Exact mapped bytes 7D 0A: jge 0x10098cef
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 38h], 9fh
        ; Exact mapped bytes EB 25: jmp 0x10098d14
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp ebp, 0ch
        ; Exact mapped bytes 7D 0A: jge 0x10098cfe
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 38h], 0cfh
        ; Exact mapped bytes EB 16: jmp 0x10098d14
        __asm _emit 0xeb
        __asm _emit 0x16
        xor ecx, ecx
        cmp ebp, 0eh
        setge cl
        dec ecx
        and ecx, 0ffffffdfh
        add ecx, 120h
        mov dword ptr [esp + 38h], ecx
        push 58h
        ; Exact mapped bytes E8 85 3A 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        cmp esi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x10098db5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 60h]
        mov edx, dword ptr [esp + 34h]
        mov ecx, dword ptr [eax + 160h]
        lea edi, [edx + 22h]
        cmp ecx, edi
        ; Exact mapped bytes 7E 15: jle 0x10098d5a
        __asm _emit 0x7e
        __asm _emit 0x15
        test edi, edi
        ; Exact mapped bytes 7C 11: jl 0x10098d5a
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10098d5a
        __asm _emit 0x74
        __asm _emit 0x07
        shl edi, 6
        add edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10098d5c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        push 40h
        push 0
        push 0
        push eax
        push 258h
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 3C 5C 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 29: je 0x10098db1
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [edi]
        lea eax, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x10098db7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebx + ebp*4 + 118h], eax
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebx + ebp*4 + 118h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebx + ebp*4 + 118h]
        ; Exact mapped bytes E8 78 63 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esp + 30h]
        lea eax, [ebp + ebp*2]
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 28h], 3
        shl edi, 6
        lea esi, [ebx + eax*4 + 64h]
        push 0a0h
        ; Exact mapped bytes E8 93 39 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 48: je 0x10098e65
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebx + 60h]
        mov edx, dword ptr [esp + 2ch]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 12: jle 0x10098e3e
        __asm _emit 0x7e
        __asm _emit 0x12
        test edx, edx
        ; Exact mapped bytes 7C 0E: jl 0x10098e3e
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x10098e3e
        __asm _emit 0x74
        __asm _emit 0x04
        add edx, edi
        ; Exact mapped bytes EB 02: jmp 0x10098e40
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 38h]
        push 40h
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 258h
        push edx
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5D E4 F7 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe4
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10098e67
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 E6 62 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 2ch]
        add edi, 40h
        add esi, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 28h]
        inc ecx
        dec eax
        mov dword ptr [esp + 2ch], ecx
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 0F 85 63 FF FF FF: jne 0x10098e03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebp
        cmp ebp, 0fh
        ; Exact mapped bytes 0F 8C 55 FD FF FF: jl 0x10098bff
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebx + 158h]
        lea eax, [ebx + 154h]
        mov ebp, 16h
        mov dword ptr [esp + 38h], edx
        mov dword ptr [esp + 34h], 580h
        mov dword ptr [esp + 30h], eax
        push 58h
        ; Exact mapped bytes E8 CE 38 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 7C: je 0x10098f60
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebx + 60h]
        lea ecx, [ebp + 1]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 18: jle 0x10098f0a
        __asm _emit 0x7e
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 7C 14: jl 0x10098f0a
        __asm _emit 0x7c
        __asm _emit 0x14
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x10098f0a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 34h]
        lea edi, [eax + ecx + 40h]
        ; Exact mapped bytes EB 02: jmp 0x10098f0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 40h
        push 0
        push 0
        push 0fh
        push 258h
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 8F 5A 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 2D: je 0x10098f62
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [edi]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10098f62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov ecx, dword ptr [esp + 38h]
        push 58h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ecx - 4], esi
        ; Exact mapped bytes E8 2B 38 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 77: je 0x10098ffe
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebx + 60h]
        cmp dword ptr [eax + 160h], ebp
        ; Exact mapped bytes 7E 16: jle 0x10098fa8
        __asm _emit 0x7e
        __asm _emit 0x16
        test ebp, ebp
        ; Exact mapped bytes 7C 12: jl 0x10098fa8
        __asm _emit 0x7c
        __asm _emit 0x12
        mov edi, dword ptr [eax + 190h]
        test edi, edi
        ; Exact mapped bytes 74 08: je 0x10098fa8
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [esp + 34h]
        add edi, edx
        ; Exact mapped bytes EB 02: jmp 0x10098faa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 40h
        push 0
        push 0
        push 0fh
        push 258h
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 F1 59 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 2D: je 0x10099000
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [edi]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x10099000
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edx, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [edx], esi
        xor esi, esi
        lea eax, [esi + ebp]
        lea ecx, [ebx + eax*4 + 0fch]
        mov eax, dword ptr [ebx + eax*4 + 0fch]
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 75 0B: jne 0x10099033
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esp + 30h]
        push 0fffffeffh
        ; Exact mapped bytes EB 05: jmp 0x10099038
        __asm _emit 0xeb
        __asm _emit 0x05
        push 101h
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 21 61 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        inc esi
        cmp esi, 2
        ; Exact mapped bytes 7C C8: jl 0x1009900d
        __asm _emit 0x7c
        __asm _emit 0xc8
        mov eax, dword ptr [esp + 38h]
        mov esi, dword ptr [esp + 30h]
        mov ecx, 8
        add ebp, 2
        add eax, ecx
        add esi, ecx
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 34h]
        add eax, 80h
        mov dword ptr [esp + 30h], esi
        cmp eax, 880h
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 8C 52 FE FF FF: jl 0x10098ecb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 80h
        ; Exact mapped bytes E8 1D 37 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 15: je 0x100990a8
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push 26h
        push 173h
        push 0
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 AA E8 FA FF: call 0x10047950
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100990aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebx + 184h], eax
        ; Exact mapped bytes E8 E4 36 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 38h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 2A: je 0x100990f8
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 184h]
        push 40h
        push 0
        push 0
        push 26h
        push 173h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C7 58 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x100990fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        lea edx, [ebx + 18ch]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [ebx + 188h], esi
        mov dword ptr [esp + 34h], 1
        mov dword ptr [esp + 38h], edx
        mov ebp, 4
        push 54h
        ; Exact mapped bytes E8 7D 36 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 30h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 77: je 0x100991ac
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebx + 60h]
        mov ecx, dword ptr [esp + 34h]
        cmp dword ptr [eax + 164h], ecx
        ; Exact mapped bytes 7E 13: jle 0x10099157
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x10099157
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10099157
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x10099159
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebx + 184h]
        push 40h
        push 0
        push 0
        push 26h
        push 173h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3C 58 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 2D: je 0x100991ae
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [edi]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100991ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edx, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [edx], esi
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 66 C7 46 26 64 00: mov word ptr [esi + 0x26], 0x64
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100991cc
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D4 5D 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100991d9
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 27 5D 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov eax, 4
        add edi, eax
        sub ebp, eax
        dec edx
        cmp ebp, -4
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], edx
        ; Exact mapped bytes 0F 8F 20 FF FF FF: jg 0x1009911c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 38h], eax
        lea ebp, [ebx + 1a0h]
        xor edi, edi
        mov dword ptr [esp + 34h], edi
        push 54h
        ; Exact mapped bytes E8 8D 35 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x35
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 30h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 2A: je 0x1009924f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebx + 184h]
        push 40h
        push 0
        push 0
        push 26h
        push 173h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 70 57 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x10099251
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 40 35 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x35
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 30h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 7F: je 0x100992f1
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebx + 60h]
        mov eax, dword ptr [esp + 38h]
        sub eax, edi
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x10099296
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x10099296
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x10099296
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10099298
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebx + 184h]
        push 40h
        push 0
        push 0
        push 26h
        push 173h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FD 56 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 29: je 0x100992e9
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [edi]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edi, dword ptr [esp + 34h]
        mov ecx, esi
        ; Exact mapped bytes EB 02: jmp 0x100992f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [ebp], ecx
        ; Exact mapped bytes E8 5B 5E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, dword ptr [ebp]
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 C7 46 26 C8 00: mov word ptr [esi + 0x26], 0xc8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xc8
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1009931b
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 85 5C 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10099328
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D8 5B 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        inc edi
        cmp edi, 2
        mov dword ptr [esp + 34h], edi
        ; Exact mapped bytes 0F 8C CD FE FF FF: jl 0x1009920c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 38h]
        add ebp, 8
        add eax, 2
        cmp eax, 22h
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C B0 FE FF FF: jl 0x10099206
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebx + 214h]
        mov dword ptr [esp + 30h], 6
        mov dword ptr [esp + 38h], 3
        mov dword ptr [esp + 34h], eax
        mov ebp, 0c0h
        push 58h
        ; Exact mapped bytes E8 24 34 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 75: je 0x10099403
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [ebx + 60h]
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 13: jle 0x100993b0
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x100993b0
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100993b0
        __asm _emit 0x74
        __asm _emit 0x05
        lea edi, [eax + ebp]
        ; Exact mapped bytes EB 02: jmp 0x100993b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 40h
        push 0
        push 0
        push 0
        push 0
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 EC 55 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 2D: je 0x10099405
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [edi]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x10099405
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 38h]
        sub ebp, 40h
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], esi
        add eax, 4
        dec ecx
        cmp ebp, 40h
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 0F 8F 49 FF FF FF: jg 0x10099375
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 30h]
        dec ecx
        mov dword ptr [esp + 30h], ecx
        ; Exact mapped bytes 0F 85 29 FF FF FF: jne 0x10099364
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebx + 244h]
        mov dword ptr [esp + 30h], 6
        mov dword ptr [esp + 38h], 1
        mov dword ptr [esp + 34h], eax
        mov ebp, 40h
        push 58h
        ; Exact mapped bytes E8 3F 33 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x33
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 74: je 0x100994e7
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebx + 60h]
        mov ecx, dword ptr [esp + 38h]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x10099494
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x10099494
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edi, dword ptr [eax + 190h]
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x10099494
        __asm _emit 0x74
        __asm _emit 0x04
        add edi, ebp
        ; Exact mapped bytes EB 02: jmp 0x10099496
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 40h
        push 0
        push 0
        push 0
        push 0
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 08 55 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 2D: je 0x100994e9
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [edi]
        lea eax, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100994e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 38h]
        sub ebp, 40h
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], esi
        add eax, 4
        dec ecx
        cmp ebp, -40h
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], ecx
        ; Exact mapped bytes 0F 8F 4A FF FF FF: jg 0x1009945a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 30h]
        dec ecx
        mov dword ptr [esp + 30h], ecx
        ; Exact mapped bytes 0F 85 2A FF FF FF: jne 0x10099449
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 89 83 74 02 00 00: mov word ptr [ebx + 0x274], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 83 76 02 00 00: mov word ptr [ebx + 0x276], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        mov dword ptr [ebx + 27ch], eax
        ; Exact mapped bytes 66 89 83 80 02 00 00: mov word ptr [ebx + 0x280], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 43 24: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x24
        pop esi
        and eax, 0e5f0h
        mov dword ptr [ebx + 278h], 1
        or ah, 5
        pop ebp
        ; Exact mapped bytes 66 89 43 24: mov word ptr [ebx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x24
        mov eax, ebx
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
