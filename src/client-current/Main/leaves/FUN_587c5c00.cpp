// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5C00 .. +0x3C5 bytes.
extern "C" __declspec(naked) void FUN_587c5c00() {
    __asm {
        push -1
        push 589813b8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 2ch], eax
        push ebx
        push ebp
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
        lea eax, [esp + 44h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 54h]
        mov edx, ecx
        mov dword ptr [esp + 18h], edx
        cmp ebx, -1
        ; Exact mapped bytes 75 07: jne 0x587c5c48
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5C 03 00 00: jmp 0x587c5fa4
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x587c5c71
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [edx + 34h]
        mov esi, dword ptr [eax]
        add esi, ecx
        cmp ecx, esi
        ; Exact mapped bytes 73 15: jae 0x587c5c71
        __asm _emit 0x73
        __asm _emit 0x15
        dec dword ptr [eax]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [eax]
        lea edx, [ecx + 1]
        mov dword ptr [eax], edx
        mov byte ptr [ecx], bl
        mov eax, ebx
        ; Exact mapped bytes E9 33 03 00 00: jmp 0x587c5fa4
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 4ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 25 03 00 00: je 0x587c5fa1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 75 1D: jne 0x587c5c9f
        __asm _emit 0x75
        __asm _emit 0x1d
        push eax
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        push eax
        ; Exact mapped bytes E8 16 73 1B 00: call 0x5897cfa2
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x73
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 0F 84 09 03 00 00: je 0x587c5fa1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        ; Exact mapped bytes E9 05 03 00 00: jmp 0x587c5fa4
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0fh
        xor eax, eax
        mov byte ptr [esp + 28h], 0
        mov byte ptr [esp + 14h], bl
        mov dword ptr [esp + 3ch], ecx
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 38h], 8
        cmp ecx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5ccc
        __asm _emit 0x73
        __asm _emit 0x04
        lea eax, [esp + 28h]
        mov byte ptr [eax + 8], 0
        mov dword ptr [esp + 4ch], 0
        mov eax, dword ptr [esp + 28h]
        mov ebx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 3ch]
        cmp edx, 10h
        ; Exact mapped bytes 0F 82 3D 02 00 00: jb 0x587c5f2a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, eax
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x587c5d13
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5cfe
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        cmp ecx, ebp
        ; Exact mapped bytes 77 11: ja 0x587c5d13
        __asm _emit 0x77
        __asm _emit 0x11
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5d0d
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        add ecx, ebx
        cmp ebp, ecx
        ; Exact mapped bytes 76 11: jbe 0x587c5d24
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes E8 5A 6F 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 28h]
        lea ecx, [esp + 24h]
        cmp ecx, -4
        ; Exact mapped bytes 74 22: je 0x587c5d4f
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5d38
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        add ecx, ebx
        cmp ebp, ecx
        ; Exact mapped bytes 72 11: jb 0x587c5d4f
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes E8 2F 6F 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 28h]
        mov edi, ebx
        cmp edx, 10h
        ; Exact mapped bytes 0F 82 D9 01 00 00: jb 0x587c5f33
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x587c5d80
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5d6b
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        cmp ecx, esi
        ; Exact mapped bytes 77 11: ja 0x587c5d80
        __asm _emit 0x77
        __asm _emit 0x11
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5d7a
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        add ecx, ebx
        cmp esi, ecx
        ; Exact mapped bytes 76 11: jbe 0x587c5d91
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes E8 ED 6E 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 28h]
        lea ecx, [esp + 24h]
        cmp ecx, -4
        ; Exact mapped bytes 74 14: je 0x587c5dae
        __asm _emit 0x74
        __asm _emit 0x14
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5da3
        __asm _emit 0x73
        __asm _emit 0x04
        lea eax, [esp + 28h]
        add eax, ebx
        cmp esi, eax
        ; Exact mapped bytes 72 05: jb 0x587c5dae
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 C4 6E 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebx + 3ch]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 14h]
        lea eax, [esp + 1ch]
        push eax
        add ebp, edi
        push ebp
        push esi
        lea eax, [esp + 2ch]
        push eax
        lea eax, [esp + 25h]
        push eax
        lea eax, [esp + 28h]
        push eax
        lea eax, [ebx + 44h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 0F 8C B8 01 00 00: jl 0x587c5f98
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 8F 65 01 00 00: jg 0x587c5f4e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 28h]
        cmp edx, 10h
        ; Exact mapped bytes 0F 82 42 01 00 00: jb 0x587c5f3c
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587c5e24
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5e0b
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        cmp ecx, esi
        ; Exact mapped bytes 77 15: ja 0x587c5e24
        __asm _emit 0x77
        __asm _emit 0x15
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5e1a
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        mov ebx, dword ptr [esp + 38h]
        add ecx, ebx
        cmp esi, ecx
        ; Exact mapped bytes 76 11: jbe 0x587c5e35
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes E8 49 6E 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 28h]
        lea ecx, [esp + 24h]
        cmp ecx, -4
        ; Exact mapped bytes 74 22: je 0x587c5e60
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5e49
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        add ecx, ebx
        cmp esi, ecx
        ; Exact mapped bytes 72 11: jb 0x587c5e60
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes E8 1E 6E 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 1ch]
        sub edi, esi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x587c5ef1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 10h
        ; Exact mapped bytes 0F 82 D0 00 00 00: jb 0x587c5f45
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x587c5e9b
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5e86
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        cmp ecx, esi
        ; Exact mapped bytes 77 11: ja 0x587c5e9b
        __asm _emit 0x77
        __asm _emit 0x11
        mov ecx, eax
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5e95
        __asm _emit 0x73
        __asm _emit 0x04
        lea ecx, [esp + 28h]
        add ecx, ebx
        cmp esi, ecx
        ; Exact mapped bytes 76 11: jbe 0x587c5eac
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes E8 D2 6D 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 28h]
        lea ecx, [esp + 24h]
        cmp ecx, -4
        ; Exact mapped bytes 74 14: je 0x587c5ec9
        __asm _emit 0x74
        __asm _emit 0x14
        cmp edx, 10h
        ; Exact mapped bytes 73 04: jae 0x587c5ebe
        __asm _emit 0x73
        __asm _emit 0x04
        lea eax, [esp + 28h]
        add eax, ebx
        cmp esi, eax
        ; Exact mapped bytes 72 05: jb 0x587c5ec9
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A9 6D 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [edx + 4ch]
        push eax
        push edi
        push 1
        push esi
        ; Exact mapped bytes E8 E0 70 1B 00: call 0x5897cfba
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x70
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 10h
        cmp edi, eax
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x587c5f98
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 18h]
        mov byte ptr [ecx + 41h], 1
        lea ecx, [esp + 14h]
        cmp dword ptr [esp + 20h], ecx
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x587c5f89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 87 D5 FD FF FF: ja 0x587c5ce4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 24h]
        cmp ebx, 20h
        ; Exact mapped bytes 0F 83 80 00 00 00: jae 0x587c5f9c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 8
        ; Exact mapped bytes E8 EB F3 FF FF: call 0x587c5310
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AE FD FF FF: jmp 0x587c5cd8
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ebp, [esp + 28h]
        ; Exact mapped bytes E9 C0 FD FF FF: jmp 0x587c5cf3
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [esp + 28h]
        ; Exact mapped bytes E9 24 FE FF FF: jmp 0x587c5d60
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [esp + 28h]
        ; Exact mapped bytes E9 BB FE FF FF: jmp 0x587c5e00
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [esp + 28h]
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x587c5e7b
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 45: jne 0x587c5f98
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, dword ptr [ebx + 4ch]
        mov eax, dword ptr [esp + 14h]
        push edx
        push eax
        ; Exact mapped bytes E8 1F F2 FF FF: call 0x587c5180
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test al, al
        ; Exact mapped bytes 74 11: je 0x587c5f79
        __asm _emit 0x74
        __asm _emit 0x11
        mov esi, dword ptr [esp + 54h]
        lea ecx, [esp + 24h]
        ; Exact mapped bytes E8 0B 22 F8 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 2B: jmp 0x587c5fa4
        __asm _emit 0xeb
        __asm _emit 0x2b
        lea ecx, [esp + 24h]
        or esi, 0ffffffffh
        ; Exact mapped bytes E8 FB 21 F8 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x21
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 1B: jmp 0x587c5fa4
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea ecx, [esp + 24h]
        ; Exact mapped bytes E8 EE 21 F8 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x21
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esp + 54h]
        ; Exact mapped bytes EB 0C: jmp 0x587c5fa4
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea ecx, [esp + 24h]
        ; Exact mapped bytes E8 DF 21 F8 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x21
        __asm _emit 0xf8
        __asm _emit 0xff
        or eax, 0ffffffffh
        mov ecx, dword ptr [esp + 44h]
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
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 2ch]
        xor ecx, esp
        ; Exact mapped bytes E8 1B 6C 1B 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 3ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
