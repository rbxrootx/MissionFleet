// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10001BE0 .. +0x514 bytes.
extern "C" __declspec(naked) void FUN_10001be0_10001BE0() {
    __asm {
        sub esp, 14h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F8 04 00 00: je 0x100020ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D7 C9 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 E2 04 00 00: jne 0x100020e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 240h]
        xor edx, edx
        mov ecx, 19h
        mov ebp, 6
        div ecx
        test edx, edx
        ; Exact mapped bytes 74 34: je 0x10001c50
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [esi + 0ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, -19h
        ; Exact mapped bytes 7C 16: jl 0x10001c3d
        __asm _emit 0x7c
        __asm _emit 0x16
        cmp eax, 3219h
        ; Exact mapped bytes 7F 0F: jg 0x10001c3d
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov eax, dword ptr [ecx + 8]
        cmp eax, -19h
        ; Exact mapped bytes 7C 07: jl 0x10001c3d
        __asm _emit 0x7c
        __asm _emit 0x07
        cmp eax, 1919h
        ; Exact mapped bytes 7E 13: jle 0x10001c50
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 66 39 6E 28: cmp word ptr [esi + 0x28], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x6e
        __asm _emit 0x28
        ; Exact mapped bytes 75 0D: jne 0x10001c50
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 98 C9 0E 00: call 0x100ee5e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
        ; Exact mapped bytes 66 83 BE E4 00 00 00 01: cmp word ptr [esi + 0xe4], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 20 01 00 00: jne 0x10001d7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 6E 28: cmp word ptr [esi + 0x28], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x6e
        __asm _emit 0x28
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x10001d7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0ch]
        mov eax, 1eh
        lea ecx, [ebx + 0ceeh]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x10001d7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        add ecx, 4
        cmp eax, 20h
        ; Exact mapped bytes 7C E9: jl 0x10001c76
        __asm _emit 0x7c
        __asm _emit 0xe9
        xor eax, eax
        xor edx, edx
        mov al, byte ptr [esi + 0f4h]
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 7E 25: jle 0x10001cc2
        __asm _emit 0x7e
        __asm _emit 0x25
        lea eax, [esi + 0fch]
        mov cl, byte ptr [eax]
        cmp cl, 3
        ; Exact mapped bytes 74 05: je 0x10001caf
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 4
        ; Exact mapped bytes 75 0B: jne 0x10001cba
        __asm _emit 0x75
        __asm _emit 0x0b
        mov cl, byte ptr [eax + 1]
        test cl, cl
        ; Exact mapped bytes 0F 87 C4 00 00 00: ja 0x10001d7e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc edx
        add eax, 14h
        cmp edx, edi
        ; Exact mapped bytes 7C E1: jl 0x10001ca3
        __asm _emit 0x7c
        __asm _emit 0xe1
        ; Exact mapped bytes 66 89 6E 28: mov word ptr [esi + 0x28], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x28
        mov ecx, dword ptr [ebx + 4]
        mov eax, 3200h
        sub eax, ecx
        cmp ecx, eax
        ; Exact mapped bytes 7D 08: jge 0x10001cdc
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [esp + 14h], ecx
        xor edx, edx
        ; Exact mapped bytes EB 09: jmp 0x10001ce5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dword ptr [esp + 14h], eax
        mov edx, 1
        mov ebp, dword ptr [ebx + 8]
        mov eax, 1900h
        sub eax, ebp
        cmp ebp, eax
        ; Exact mapped bytes 7D 06: jge 0x10001cf9
        __asm _emit 0x7d
        __asm _emit 0x06
        mov edi, ebp
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x10001d05
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edi, 3200h
        mov eax, 1
        sub edi, ebp
        cmp dword ptr [esp + 14h], edi
        ; Exact mapped bytes 7E 12: jle 0x10001d1d
        __asm _emit 0x7e
        __asm _emit 0x12
        neg eax
        sbb eax, eax
        mov edx, ecx
        and eax, 1a90h
        add eax, 0ffffff38h
        ; Exact mapped bytes EB 12: jmp 0x10001d2f
        __asm _emit 0xeb
        __asm _emit 0x12
        neg edx
        sbb edx, edx
        mov eax, ebp
        and edx, 3390h
        add edx, 0ffffff38h
        cmp edx, 64h
        ; Exact mapped bytes 7D 07: jge 0x10001d3b
        __asm _emit 0x7d
        __asm _emit 0x07
        mov edx, 64h
        ; Exact mapped bytes EB 0D: jmp 0x10001d48
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp edx, 319ch
        ; Exact mapped bytes 7E 05: jle 0x10001d48
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edx, 319ch
        cmp eax, 64h
        ; Exact mapped bytes 7D 07: jge 0x10001d54
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 64h
        ; Exact mapped bytes EB 0C: jmp 0x10001d60
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 189ch
        ; Exact mapped bytes 7E 05: jle 0x10001d60
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 189ch
        shl eax, 0fh
        and edx, 7fffh
        lea ecx, [esp + 18h]
        or eax, edx
        push ecx
        shl eax, 2
        mov ecx, ebx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 42 94 0E 00: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        mov eax, dword ptr [ecx + 218h]
        mov edx, dword ptr [eax + 50h]
        mov eax, dword ptr [eax + 44h]
        xor edx, 0aaaaaaaah
        xor eax, 0aaaaaaaah
        cmp edx, eax
        ; Exact mapped bytes 7D 0B: jge 0x10001da7
        __asm _emit 0x7d
        __asm _emit 0x0b
        push 0
        push 0
        push 8
        ; Exact mapped bytes E8 79 9B 0E 00: call 0x100eb920
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        mov ebx, 5
        cmp dword ptr [ecx + 0b4h], ebx
        ; Exact mapped bytes 74 0A: je 0x10001dc1
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 BE E4 00 00 00 04: cmp word ptr [esi + 0xe4], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 1A: jne 0x10001ddb
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 240h]
        xor edx, edx
        mov ecx, 32h
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x10001ddb
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 E5 2E 00 00: call 0x10004cc0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 0f4h]
        test al, al
        ; Exact mapped bytes 76 07: jbe 0x10001dec
        __asm _emit 0x76
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 F4 33 00 00: call 0x100051e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        xor eax, eax
        cmp ecx, eax
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 74 38: je 0x10001e38
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esi + 34h]
        push eax
        push esi
        mov ecx, dword ptr [edx + 21a4ch]
        ; Exact mapped bytes E8 DA 23 02 00: call 0x100241f0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x10001e38
        __asm _emit 0x74
        __asm _emit 0x1e
        xor ecx, ecx
        lea edx, [esi + 38h]
        mov edi, dword ptr [edx]
        test edi, edi
        ; Exact mapped bytes 74 0F: je 0x10001e34
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x10001e38
        __asm _emit 0x74
        __asm _emit 0x0f
        inc ecx
        add edx, 4
        cmp ecx, 8
        ; Exact mapped bytes 7C ED: jl 0x10001e1f
        __asm _emit 0x7c
        __asm _emit 0xed
        ; Exact mapped bytes EB 04: jmp 0x10001e38
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esi + ecx*4 + 38h], eax
        mov ecx, esi
        ; Exact mapped bytes E8 41 23 00 00: call 0x10004180
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE E2 00 00 00 00: cmp word ptr [esi + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        mov dword ptr [esp + 14h], 0
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes 75 7C: jne 0x10001ed7
        __asm _emit 0x75
        __asm _emit 0x7c
        test edi, edi
        ; Exact mapped bytes 75 11: jne 0x10001e70
        __asm _emit 0x75
        __asm _emit 0x11
        mov al, byte ptr [esi + 30h]
        cmp al, 32h
        ; Exact mapped bytes 73 0A: jae 0x10001e70
        __asm _emit 0x73
        __asm _emit 0x0a
        inc al
        mov byte ptr [esi + 30h], al
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x10001f3e
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 10h]
        lea edx, [esp + 14h]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 1F 15 00 00: call 0x100033a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, eax
        xor edx, edx
        lea eax, [esp + 10h]
        lea ecx, [esp + 14h]
        test edi, edi
        push eax
        push ecx
        setne dl
        push edx
        lea eax, [esp + 28h]
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7D 24 00 00: call 0x10004320
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        mov byte ptr [esi + 30h], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x10001f39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 84h]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push esi
        mov ecx, dword ptr [ecx + 21a4ch]
        push edi
        ; Exact mapped bytes E8 77 22 02 00: call 0x10024140
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E2 00 00 00: mov word ptr [esi + 0xe2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes EB 5B: jmp 0x10001f32
        __asm _emit 0xeb
        __asm _emit 0x5b
        test edi, edi
        ; Exact mapped bytes 74 0E: je 0x10001ee9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov al, byte ptr [esi + 30h]
        cmp al, 32h
        ; Exact mapped bytes 73 07: jae 0x10001ee9
        __asm _emit 0x73
        __asm _emit 0x07
        inc al
        mov byte ptr [esi + 30h], al
        ; Exact mapped bytes EB 55: jmp 0x10001f3e
        __asm _emit 0xeb
        __asm _emit 0x55
        lea ecx, [esp + 10h]
        lea edx, [esp + 14h]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 A6 14 00 00: call 0x100033a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, eax
        xor edx, edx
        lea eax, [esp + 10h]
        lea ecx, [esp + 14h]
        test edi, edi
        push eax
        push ecx
        setne dl
        push edx
        lea eax, [esp + 28h]
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 04 24 00 00: call 0x10004320
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        mov byte ptr [esi + 30h], 0
        ; Exact mapped bytes 75 09: jne 0x10001f2d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 89 BE E2 00 00 00: mov word ptr [esi + 0xe2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x10001f39
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 47 23 00 00: call 0x10004280
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 ED: test bp, bp
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 74: jne 0x10001fb2
        __asm _emit 0x75
        __asm _emit 0x74
        mov ebp, 1
        lea edi, [esi + 5ch]
        mov ebx, 2
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x10001f69
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [edi + 28h]
        test ecx, ecx
        ; Exact mapped bytes 74 4C: je 0x10001fa7
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes E8 70 C6 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc6
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 40: jne 0x10001fa7
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes EB 39: jmp 0x10001fa2
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x10001fa7
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [edi + 2ch]
        test edx, edx
        ; Exact mapped bytes 74 31: je 0x10001fa7
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 21a4ch]
        mov eax, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [ecx + 70h]
        cmp eax, ecx
        ; Exact mapped bytes 74 1C: je 0x10001fa7
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 74 09: je 0x10001f98
        __asm _emit 0x74
        __asm _emit 0x09
        add eax, 8
        cmp eax, ecx
        ; Exact mapped bytes 75 F5: jne 0x10001f8b
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes EB 0F: jmp 0x10001fa7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [edx + 454h]
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x10001fa7
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebp, 2
        add edi, 34h
        dec ebx
        ; Exact mapped bytes 75 9E: jne 0x10001f4b
        __asm _emit 0x75
        __asm _emit 0x9e
        mov ebx, 5
        mov ecx, dword ptr [esp + 1ch]
        mov edi, 2
        ; Exact mapped bytes 66 3B EF: cmp bp, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xef
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x10002060
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 5F: je 0x10002027
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [esp + 20h]
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x10002027
        __asm _emit 0x74
        __asm _emit 0x57
        mov dl, byte ptr [esi + 30h]
        test dl, dl
        ; Exact mapped bytes 75 50: jne 0x10002027
        __asm _emit 0x75
        __asm _emit 0x50
        cmp ecx, 64h
        ; Exact mapped bytes 7D 07: jge 0x10001fe3
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, 64h
        ; Exact mapped bytes EB 0D: jmp 0x10001ff0
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 319ch
        ; Exact mapped bytes 7E 05: jle 0x10001ff0
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 319ch
        cmp eax, 64h
        ; Exact mapped bytes 7D 07: jge 0x10001ffc
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 64h
        ; Exact mapped bytes EB 0C: jmp 0x10002008
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 189ch
        ; Exact mapped bytes 7E 05: jle 0x10002008
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 189ch
        shl eax, 0fh
        and ecx, 7fffh
        or eax, ecx
        lea ecx, [esp + 18h]
        shl eax, 2
        push ecx
        mov ecx, dword ptr [esi + 0ch]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 99 91 0E 00: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 10h]
        cmp dword ptr [edx + 0b4h], ebx
        ; Exact mapped bytes 75 07: jne 0x10002039
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [esi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10002040
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 C0 00 00 00: call 0x10002100
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 28: mov ax, word ptr [esi + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x28
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x100020e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x100020e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 7E 28: mov word ptr [esi + 0x28], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x28
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x100020e6
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 63: je 0x100020c7
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [esp + 20h]
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x100020c7
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [esi + 10h]
        cmp dword ptr [edx + 0b4h], ebx
        ; Exact mapped bytes 75 50: jne 0x100020c7
        __asm _emit 0x75
        __asm _emit 0x50
        cmp ecx, 64h
        ; Exact mapped bytes 7D 07: jge 0x10002083
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, 64h
        ; Exact mapped bytes EB 0D: jmp 0x10002090
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 319ch
        ; Exact mapped bytes 7E 05: jle 0x10002090
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 319ch
        cmp eax, 64h
        ; Exact mapped bytes 7D 07: jge 0x1000209c
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 64h
        ; Exact mapped bytes EB 0C: jmp 0x100020a8
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 189ch
        ; Exact mapped bytes 7E 05: jle 0x100020a8
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 189ch
        shl eax, 0fh
        and ecx, 7fffh
        or eax, ecx
        mov ecx, dword ptr [esi + 0ch]
        shl eax, 2
        mov dword ptr [esp + 18h], eax
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 F9 90 0E 00: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x90
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 7E 28: cmp word ptr [esi + 0x28], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x28
        ; Exact mapped bytes 75 19: jne 0x100020e6
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 C7 46 28 01 00: mov word ptr [esi + 0x28], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [esi + 8ch]
        mov ecx, edi
        ; Exact mapped bytes 66 C7 00 FF FF: mov word ptr [eax], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 34h
        dec ecx
        ; Exact mapped bytes 75 F5: jne 0x100020db
        __asm _emit 0x75
        __asm _emit 0xf5
        inc dword ptr [esi + 240h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
    }
}
