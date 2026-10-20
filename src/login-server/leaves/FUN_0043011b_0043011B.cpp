// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043011B .. +0x4AE bytes.
extern "C" __declspec(naked) void FUN_0043011b_0043011B() {
    __asm {
        mov eax, 43a8dch
        ; Exact mapped bytes E8 E3 F4 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 54h
        and dword ptr [ebp - 10h], 0
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        cmp ebx, 111h
        mov edi, ecx
        ; Exact mapped bytes 75 18: jne 0x430154
        __asm _emit 0x75
        __asm _emit 0x18
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [edi]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x4302a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1D 04 00 00: jmp 0x430571
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 4eh
        ; Exact mapped bytes 75 28: jne 0x430181
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 3F 01 00 00: je 0x4302a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        lea ecx, [ebp - 10h]
        push ecx
        push eax
        push dword ptr [ebp + 0ch]
        mov ecx, edi
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        test eax, eax
        ; Exact mapped bytes 0F 85 39 04 00 00: jne 0x4305b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x4302a4
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 10h]
        cmp ebx, 6
        ; Exact mapped bytes 75 10: jne 0x430199
        __asm _emit 0x75
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 49 F1 FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push dword ptr [ebp + 0ch]
        push edi
        ; Exact mapped bytes E8 A7 EE FF FF: call 0x42f040
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, 20h
        ; Exact mapped bytes 75 18: jne 0x4301b6
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, esi
        shr eax, 10h
        push eax
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        push eax
        push edi
        ; Exact mapped bytes E8 F3 EE FF FF: call 0x42f0a1
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 BB 03 00 00: jne 0x430571
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov ecx, edi
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ebx, eax
        mov eax, 1ffh
        and ebx, eax
        and ecx, eax
        push 7
        xor ebx, ecx
        ; Exact mapped bytes E8 CC 6D 00 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebx + ebx*2]
        cmp ecx, dword ptr [eax*4 + 44dcd0h]
        lea ebx, [eax*4 + 44dcd0h]
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 2C: jne 0x43021c
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp eax, dword ptr [ebx + 8]
        ; Exact mapped bytes 75 27: jne 0x43021c
        __asm _emit 0x75
        __asm _emit 0x27
        mov ebx, dword ptr [ebx + 4]
        push 7
        mov dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes E8 11 6E 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x4302a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0c000h
        ; Exact mapped bytes 0F 82 AD 00 00 00: jb 0x4302c4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8B 03 00 00: jmp 0x4305a7
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [ebx], ecx
        mov dword ptr [ebx + 8], eax
        ; Exact mapped bytes 74 74: je 0x430299
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes EB 06: jmp 0x43022d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, 0c000h
        cmp ecx, edx
        ; Exact mapped bytes 73 16: jae 0x43024c
        __asm _emit 0x73
        __asm _emit 0x16
        push 0
        push 0
        push ecx
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 54 FE FF FF: call 0x430097
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 75 6D: jne 0x4302b7
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes EB 41: jmp 0x43028d
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [eax + 4]
        push 0
        push 0
        push edx
        push eax
        ; Exact mapped bytes E8 3D FE FF FF: call 0x430097
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 74 2C: je 0x43028d
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes EB 03: jmp 0x430266
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], edx
        ; Exact mapped bytes 0F 84 26 03 00 00: je 0x43059a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        add eax, 18h
        push 0c000h
        push eax
        ; Exact mapped bytes E8 11 FE FF FF: call 0x430097
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 75 D6: jne 0x430263
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 75 8E: jne 0x430227
        __asm _emit 0x75
        __asm _emit 0x8e
        and dword ptr [ebx + 4], 0
        push 7
        ; Exact mapped bytes E8 6F 6D 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
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
        push 7
        mov dword ptr [ebx + 4], eax
        ; Exact mapped bytes E8 52 6D 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov ebx, dword ptr [ebx + 14h]
        cmp dword ptr [ecx + 8], 1ah
        mov eax, dword ptr [ecx + 10h]
        ; Exact mapped bytes 75 12: jne 0x4302e5
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 E8 C1 43 00: call dword ptr [0x43c1e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp al, 4
        sbb eax, eax
        and al, 0f0h
        add eax, 2fh
        dec eax
        cmp eax, 30h
        ; Exact mapped bytes 0F 87 C6 02 00 00: ja 0x4305b5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 C9 05 43 00: jmp dword ptr [eax*4 + 0x4305c9]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x05
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 45 39 00 00: call 0x433c43
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x4303ff
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x4303ff
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        shr eax, 10h
        push eax
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BA EF FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x43041a
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AC EF FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 03 02 00 00: jmp 0x430534
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 68 38 00 00: call 0x433ba1
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        and dword ptr [ebp - 4], 0
        lea ecx, [ebp - 60h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E8 6C EB FF FF: call 0x42eeb7
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov esi, dword ptr [esi + 8]
        push eax
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E8 A2 EF FF FF: call 0x42f2ff
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x43037d
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [edi + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x43037a
        __asm _emit 0x74
        __asm _emit 0x12
        push dword ptr [ebp - 44h]
        lea ecx, [eax + 20h]
        ; Exact mapped bytes E8 06 D4 FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x43037a
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 60h]
        push esi
        push eax
        lea eax, [ebp - 24h]
        mov ecx, edi
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        and dword ptr [ebp - 20h], 0
        and dword ptr [ebp - 44h], 0
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 60h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 AC F5 FF FF: call 0x42f94a
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes EB 2E: jmp 0x4303d5
        __asm _emit 0xeb
        __asm _emit 0x2e
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 F2 37 00 00: call 0x433ba1
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        push dword ptr [esi + 8]
        mov dword ptr [ebp - 20h], eax
        lea eax, [ebp - 24h]
        push eax
        mov ecx, edi
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        and dword ptr [ebp - 20h], 0
        or dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 E6 38 00 00: call 0x433cc0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D6 01 00 00: jmp 0x4305b5
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        shr eax, 10h
        push eax
        push esi
        ; Exact mapped bytes E8 EC EE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x430415
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 0ch]
        shr eax, 10h
        push eax
        movzx eax, word ptr [ebp + 0ch]
        ; Exact mapped bytes E9 36 01 00 00: jmp 0x430534
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes E9 AA 01 00 00: jmp 0x4305b2
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 8C 22 00 00: call 0x43269a
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 0ch]
        shr eax, 10h
        push eax
        movzx eax, word ptr [ebp + 0ch]
        push eax
        mov ecx, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes E9 8E 01 00 00: jmp 0x4305b2
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x4305b5
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x43053e
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        shr eax, 10h
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        push eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x430521
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        shr eax, 10h
        push eax
        movzx eax, si
        ; Exact mapped bytes E9 0A 01 00 00: jmp 0x43055f
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7B EE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push esi
        ; Exact mapped bytes E8 74 EE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        xor eax, eax
        cmp dword ptr [edi + 1ch], esi
        sete al
        push eax
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x430563
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C8 37 00 00: call 0x433c43
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x43053e
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 11 22 00 00: call 0x43269a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB F0: jmp 0x43047b
        __asm _emit 0xeb
        __asm _emit 0xf0
        mov eax, esi
        shr eax, 10h
        push eax
        movzx eax, si
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FD 21 00 00: call 0x43269a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x43046d
        __asm _emit 0xeb
        __asm _emit 0xce
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 01: jmp 0x4304a5
        __asm _emit 0xeb
        __asm _emit 0x01
        push esi
        ; Exact mapped bytes E8 2E EE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB CF: jmp 0x43047b
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov eax, esi
        shr eax, 10h
        push eax
        movzx eax, si
        ; Exact mapped bytes EB 0A: jmp 0x4304c1
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        shr esi, 10h
        ; Exact mapped bytes 0F BF CE: movsx ecx, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xce
        push ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0E EE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A1: jmp 0x43046d
        __asm _emit 0xeb
        __asm _emit 0xa1
        push esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 03 EE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x430441
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 F8 ED FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes EB 3B: jmp 0x43051e
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp + 0ch]
        shr eax, 10h
        push eax
        push esi
        ; Exact mapped bytes E8 E8 ED FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 59: jmp 0x43054b
        __asm _emit 0xeb
        __asm _emit 0x59
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        shr eax, 10h
        cmp dword ptr [ecx + 10h], 1dh
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 0F: jne 0x430519
        __asm _emit 0x75
        __asm _emit 0x0f
        push esi
        ; Exact mapped bytes E8 C8 ED FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes EB 4A: jmp 0x430563
        __asm _emit 0xeb
        __asm _emit 0x4a
        push eax
        push edx
        ; Exact mapped bytes EB 04: jmp 0x430521
        __asm _emit 0xeb
        __asm _emit 0x04
        push esi
        push dword ptr [ebp + 0ch]
        mov ecx, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x4305b5
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        shr esi, 10h
        ; Exact mapped bytes 0F BF CE: movsx ecx, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xce
        push ecx
        push eax
        ; Exact mapped bytes EB 77: jmp 0x4305ae
        __asm _emit 0xeb
        __asm _emit 0x77
        mov ecx, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes EB 75: jmp 0x4305b2
        __asm _emit 0xeb
        __asm _emit 0x75
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes EB 71: jmp 0x4305b5
        __asm _emit 0xeb
        __asm _emit 0x71
        mov eax, dword ptr [ebp + 0ch]
        push esi
        shr eax, 10h
        push eax
        movzx eax, word ptr [ebp + 0ch]
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x43046d
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        shr esi, 10h
        ; Exact mapped bytes 0F BF CE: movsx ecx, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xce
        push ecx
        push eax
        push dword ptr [ebp + 0ch]
        mov ecx, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes EB 4C: jmp 0x4305b5
        __asm _emit 0xeb
        __asm _emit 0x4c
        push esi
        mov ecx, edi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 3B: jmp 0x4305b5
        __asm _emit 0xeb
        __asm _emit 0x3b
        movzx eax, si
        shr esi, 10h
        push esi
        push eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, edi
        shr eax, 10h
        push eax
        movzx eax, word ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 DA FB FF FF: jmp 0x430174
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 7
        mov dword ptr [ebx + 4], eax
        ; Exact mapped bytes E8 6F 6A 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        mov ebx, dword ptr [ebx + 14h]
        push esi
        push dword ptr [ebp + 0ch]
        mov ecx, edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4305c1
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        push 1
        pop eax
        ; Exact mapped bytes E9 DD FC FF FF: jmp 0x4302a6
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
