// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006CB30 .. +0x1456 bytes.
extern "C" __declspec(naked) void FUN_1006cb30_1006CB30() {
    __asm {
        sub esp, 144h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, 2eh
        xor eax, eax
        lea edi, [esi + 107dch]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea edi, [esi + 10644h]
        mov ecx, 65h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        xor edi, edi
        xor ebx, ebx
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [esp + 28h], 1
        mov dword ptr [esp + 14h], ebp
        mov cl, byte ptr [ebp + 330h]
        mov dword ptr [esi + 108b4h], 0ffffffffh
        mov edx, dword ptr [ebp + 0ed0h]
        mov eax, dword ptr [esi + 20ca4h]
        xor edx, 7c8ba106h
        mov dword ptr [esp + 10h], ecx
        cmp eax, edx
        ; Exact mapped bytes 74 29: je 0x1006cbc5
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ah
        ; Exact mapped bytes E8 B5 0B FE FF: call 0x1004d760
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 74h]
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x1006cbc5
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [eax + 74h], 1
        mov dword ptr [eax + 78h], 0fah
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x1006cc00
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 28: je 0x1006cc00
        __asm _emit 0x74
        __asm _emit 0x28
        xor ecx, ecx
        lea edx, [esi + 10894h]
        mov eax, dword ptr [edx]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 74 0C: je 0x1006cbf5
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp edi, eax
        ; Exact mapped bytes 7D 08: jge 0x1006cbf5
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edi, eax
        mov dword ptr [esi + 108b4h], ecx
        inc ecx
        add edx, 4
        cmp ecx, 8
        ; Exact mapped bytes 7C E2: jl 0x1006cbe0
        __asm _emit 0x7c
        __asm _emit 0xe2
        ; Exact mapped bytes EB 66: jmp 0x1006cc66
        __asm _emit 0xeb
        __asm _emit 0x66
        mov ecx, 8
        xor eax, eax
        lea edi, [esp + 34h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [eax + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x1006cc3b
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, edi
        ; Exact mapped bytes E8 B0 19 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1006cc34
        __asm _emit 0x74
        __asm _emit 0x10
        xor ecx, ecx
        mov cl, byte ptr [edi + 330h]
        mov dword ptr [esp + ecx*4 + 34h], 1
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 DE: jne 0x1006cc19
        __asm _emit 0x75
        __asm _emit 0xde
        xor eax, eax
        lea edi, [esp + 34h]
        lea edx, [esi + 1090ch]
        mov ecx, dword ptr [edx]
        cmp ecx, ebx
        ; Exact mapped bytes 76 0D: jbe 0x1006cc5a
        __asm _emit 0x76
        __asm _emit 0x0d
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 74 08: je 0x1006cc5a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, ecx
        mov dword ptr [esi + 108b4h], eax
        inc eax
        add edi, 4
        add edx, 4
        cmp eax, 8
        ; Exact mapped bytes 7C E1: jl 0x1006cc47
        __asm _emit 0x7c
        __asm _emit 0xe1
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x1006cc79
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 34: jne 0x1006ccad
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x1006ccad
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [eax + 0eb4h]
        mov edi, dword ptr [eax + 0ee8h]
        xor ecx, 0aaaaaaaah
        add ecx, edi
        xor ecx, 0aaaaaaaah
        mov dword ptr [eax + 0eb4h], ecx
        mov eax, dword ptr [eax + 78h]
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x1006cc86
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 2E: je 0x1006cce8
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 108b4h]
        xor eax, eax
        mov al, byte ptr [edi + 330h]
        cmp eax, ecx
        ; Exact mapped bytes 74 0B: je 0x1006ccd7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, edi
        ; Exact mapped bytes E8 FD 18 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x1006cce0
        __asm _emit 0x75
        __asm _emit 0x09
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 DC: jne 0x1006ccba
        __asm _emit 0x75
        __asm _emit 0xdc
        ; Exact mapped bytes EB 08: jmp 0x1006cce8
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 28h], 0
        mov ecx, dword ptr [esi + 10774h]
        xor eax, eax
        mov al, byte ptr [ebp + 330h]
        and cl, 0fh
        and eax, 0fh
        lea ebx, [esi + 1096ch]
        shl eax, 4
        or eax, ecx
        mov ecx, 8
        mov dword ptr [esi + 10774h], eax
        mov dl, byte ptr [esi + 10568h]
        and edx, 0fh
        and ah, 0f0h
        shl edx, 8
        or edx, eax
        xor eax, eax
        mov edi, ebx
        mov dword ptr [esi + 10774h], edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x1006cef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, 51eb851fh
        mov dl, byte ptr [ecx + 330h]
        lea edi, [esi + edx*4 + 1096ch]
        mov edx, dword ptr [ecx + 0eb4h]
        xor edx, 0aaaaaaaah
        mul edx
        mov eax, dword ptr [edi]
        shr edx, 5
        add eax, edx
        mov dword ptr [edi], eax
        mov eax, dword ptr [ecx + 0ea8h]
        mov edx, dword ptr [esi + 10880h]
        xor eax, 0aaaaaaaah
        add edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esi + 10880h], edx
        mov edx, dword ptr [ecx + 0each]
        mov edi, dword ptr [esi + 10884h]
        xor edx, 0aaaaaaaah
        add edi, edx
        mov dword ptr [esi + 10884h], edi
        mov edx, dword ptr [ecx + 0eb0h]
        xor edx, 0aaaaaaaah
        mul edx
        mov eax, dword ptr [esi + 10888h]
        shr edx, 5
        add eax, edx
        mov dword ptr [esi + 10888h], eax
        xor eax, eax
        mov al, byte ptr [ecx + 330h]
        mov edx, dword ptr [ecx + 0ea8h]
        xor edx, 0aaaaaaaah
        lea eax, [eax + eax*4]
        mov edi, dword ptr [esi + eax*4 + 107e0h]
        lea eax, [esi + eax*4 + 107e0h]
        add edi, edx
        mov dword ptr [eax], edi
        xor eax, eax
        mov al, byte ptr [ecx + 330h]
        mov edx, dword ptr [ecx + 0each]
        xor edx, 0aaaaaaaah
        lea eax, [eax + eax*4]
        mov edi, dword ptr [esi + eax*4 + 107e4h]
        lea eax, [esi + eax*4 + 107e4h]
        add edi, edx
        mov dword ptr [eax], edi
        xor eax, eax
        mov al, byte ptr [ecx + 330h]
        mov edx, dword ptr [ecx + 0eb0h]
        add eax, 0d32h
        xor edx, 0aaaaaaaah
        lea eax, [eax + eax*4]
        lea edi, [esi + eax*4]
        mov eax, 51eb851fh
        mul edx
        mov eax, dword ptr [edi]
        shr edx, 5
        add eax, edx
        mov dword ptr [edi], eax
        mov eax, dword ptr [ecx + 1030h]
        test eax, eax
        ; Exact mapped bytes 74 79: je 0x1006cec5
        __asm _emit 0x74
        __asm _emit 0x79
        cmp eax, 28h
        ; Exact mapped bytes 7E 52: jle 0x1006cea3
        __asm _emit 0x7e
        __asm _emit 0x52
        cmp eax, 50h
        ; Exact mapped bytes 7E 2B: jle 0x1006ce81
        __asm _emit 0x7e
        __asm _emit 0x2b
        cmp eax, 64h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x1006cee7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 1087ch]
        inc al
        mov byte ptr [esi + 1087ch], al
        xor eax, eax
        mov al, byte ptr [ecx + 330h]
        lea eax, [eax + eax*4]
        lea eax, [esi + eax*4 + 107dch]
        ; Exact mapped bytes EB 64: jmp 0x1006cee5
        __asm _emit 0xeb
        __asm _emit 0x64
        mov al, byte ptr [esi + 1087dh]
        inc al
        mov byte ptr [esi + 1087dh], al
        xor eax, eax
        mov al, byte ptr [ecx + 330h]
        lea edx, [eax + eax*4]
        lea eax, [esi + edx*4 + 107ddh]
        ; Exact mapped bytes EB 42: jmp 0x1006cee5
        __asm _emit 0xeb
        __asm _emit 0x42
        mov al, byte ptr [esi + 1087eh]
        inc al
        mov byte ptr [esi + 1087eh], al
        xor eax, eax
        mov al, byte ptr [ecx + 330h]
        lea eax, [eax + eax*4]
        lea eax, [esi + eax*4 + 107deh]
        ; Exact mapped bytes EB 20: jmp 0x1006cee5
        __asm _emit 0xeb
        __asm _emit 0x20
        mov al, byte ptr [esi + 1087fh]
        inc al
        mov byte ptr [esi + 1087fh], al
        xor eax, eax
        mov al, byte ptr [ecx + 330h]
        lea edx, [eax + eax*4]
        lea eax, [esi + edx*4 + 107dfh]
        inc byte ptr [eax]
        mov ecx, dword ptr [ecx + 78h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 4D FE FF FF: jne 0x1006cd3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp edi, dword ptr [esi + 108b4h]
        ; Exact mapped bytes 75 06: jne 0x1006cf02
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebx]
        shl eax, 1
        mov dword ptr [ebx], eax
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x1006cf15
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 37: jne 0x1006cf4c
        __asm _emit 0x75
        __asm _emit 0x37
        cmp edi, dword ptr [esi + 108b4h]
        ; Exact mapped bytes 75 2F: jne 0x1006cf4c
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x1006cf4c
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebx]
        mov dword ptr [esp + 1ch], 0
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes DF 6C 24 18: fild qword ptr [esp + 0x18]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD 5C 24 2C: fstp qword ptr [esp + 0x2c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes DD 44 24 2C: fld qword ptr [esp + 0x2c]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes DC 0D 30 52 17 10: fmul qword ptr [0x10175230]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 5C F8 0F 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebx], eax
        inc edi
        add ebx, 4
        cmp edi, 8
        ; Exact mapped bytes 7C 9F: jl 0x1006cef4
        __asm _emit 0x7c
        __asm _emit 0x9f
        lea ecx, [esi + 107ech]
        lea eax, [esi + 10894h]
        mov edx, 8
        mov edi, dword ptr [eax]
        add eax, 4
        xor edi, 0aaaaaaaah
        mov dword ptr [ecx], edi
        add ecx, 14h
        dec edx
        ; Exact mapped bytes 75 ED: jne 0x1006cf66
        __asm _emit 0x75
        __asm _emit 0xed
        mov al, byte ptr [esi + 20bc4h]
        test al, al
        ; Exact mapped bytes 74 74: je 0x1006cff7
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [esi + 20c40h]
        mov ebx, dword ptr [esi + 20c38h]
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 20c3ch]
        sub ecx, ebx
        mov eax, dword ptr [edx + 0ch]
        add ecx, edi
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x1006cfbd
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [eax + 0ecch]
        test edx, edx
        ; Exact mapped bytes 75 06: jne 0x1006cfb6
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [eax + 0ecch], ecx
        mov eax, dword ptr [eax + 78h]
        test eax, eax
        ; Exact mapped bytes 75 E9: jne 0x1006cfa6
        __asm _emit 0x75
        __asm _emit 0xe9
        mov eax, dword ptr [esi + 20c28h]
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x1006cfe3
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [esi + 20c2ch]
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x1006cfe3
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi + 10464h]
        and al, 20h
        or al, 20h
        mov dword ptr [esi + 10464h], eax
        ; Exact mapped bytes EB 5F: jmp 0x1006d042
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, dword ptr [esi + 10464h]
        and cl, 10h
        or ecx, 10h
        mov dword ptr [esi + 10464h], ecx
        ; Exact mapped bytes EB 4B: jmp 0x1006d042
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 108b4h]
        cmp ecx, -1
        ; Exact mapped bytes 74 2E: je 0x1006d030
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 10464h]
        test ah, 4
        ; Exact mapped bytes 74 0C: je 0x1006d019
        __asm _emit 0x74
        __asm _emit 0x0c
        and al, 2fh
        or al, 20h
        mov dword ptr [esi + 10464h], eax
        ; Exact mapped bytes EB 29: jmp 0x1006d042
        __asm _emit 0xeb
        __asm _emit 0x29
        test ah, 3
        ; Exact mapped bytes 74 24: je 0x1006d042
        __asm _emit 0x74
        __asm _emit 0x24
        cmp ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 75 E9: jne 0x1006d00d
        __asm _emit 0x75
        __asm _emit 0xe9
        and al, 1fh
        or al, 10h
        mov dword ptr [esi + 10464h], eax
        ; Exact mapped bytes EB 12: jmp 0x1006d042
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [esi + 10464h]
        and dl, 2fh
        or edx, 20h
        mov dword ptr [esi + 10464h], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 370h]
        shr edx, 0ah
        mov dword ptr [esi + 10644h], edx
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x1006d08c
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x1006d08c
        __asm _emit 0x74
        __asm _emit 0x20
        mov edi, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 0ed0h]
        mov eax, dword ptr [esi + edi*4 + 1092ch]
        xor eax, 0aaaaaaaah
        sub ecx, eax
        mov dword ptr [ebp + 0ed0h], ecx
        ; Exact mapped bytes EB 48: jmp 0x1006d0d4
        __asm _emit 0xeb
        __asm _emit 0x48
        xor ecx, ecx
        mov eax, 51eb851fh
        mov cl, byte ptr [ebp + 330h]
        mov edi, dword ptr [esp + 10h]
        mul dword ptr [esi + ecx*4 + 108ech]
        mov eax, dword ptr [esi + edi*4 + 1092ch]
        mov ecx, edx
        xor eax, 0aaaaaaaah
        cdq
        shr ecx, 5
        idiv ecx
        mov edx, dword ptr [ebp + 0e74h]
        mov ecx, eax
        mov eax, 51eb851fh
        mul dword ptr [edx + 54h]
        shr edx, 5
        imul ecx, edx
        sub dword ptr [ebp + 0ed0h], ecx
        mov ecx, dword ptr [ebp + 0ed0h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8D 30 01 00 00: jge 0x1006d212
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 108b4h]
        cmp eax, edi
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 63: jne 0x1006d156
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 4F: je 0x1006d148
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 49: je 0x1006d148
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 10750h], edx
        mov ecx, dword ptr [ebp + 0e74h]
        mov al, byte ptr [ecx + 2]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x1006d21c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl edx, 3
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 10750h], edx
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x1006d21c
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        shl ecx, 2
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x1006d1f1
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x1006d20a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x1006d20a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0e74h]
        mov al, byte ptr [edx + 2]
        and eax, 1fh
        cmp eax, 8
        ; Exact mapped bytes 0F 87 9D 00 00 00: ja 0x1006d21c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 88 DF 06 10: jmp dword ptr [eax*4 + 0x1006df88]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x10
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 10750h], edx
        ; Exact mapped bytes EB 7D: jmp 0x1006d21c
        __asm _emit 0xeb
        __asm _emit 0x7d
        lea ecx, [ecx + ecx*4]
        shl ecx, 4
        mov eax, 68db8badh
        imul ecx
        sar edx, 0ch
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 10750h], edx
        ; Exact mapped bytes EB 5E: jmp 0x1006d21c
        __asm _emit 0xeb
        __asm _emit 0x5e
        lea ecx, [ecx + ecx*2]
        lea eax, [ecx + ecx*4]
        lea ecx, [eax + eax*4]
        ; Exact mapped bytes EB 28: jmp 0x1006d1f1
        __asm _emit 0xeb
        __asm _emit 0x28
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        shl ecx, 1
        ; Exact mapped bytes EB D2: jmp 0x1006d1a5
        __asm _emit 0xeb
        __asm _emit 0xd2
        lea ecx, [ecx + ecx*4]
        shl ecx, 3
        ; Exact mapped bytes EB 16: jmp 0x1006d1f1
        __asm _emit 0xeb
        __asm _emit 0x16
        lea ecx, [ecx + ecx*4]
        shl ecx, 3
        ; Exact mapped bytes EB C2: jmp 0x1006d1a5
        __asm _emit 0xeb
        __asm _emit 0xc2
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        ; Exact mapped bytes EB BA: jmp 0x1006d1a5
        __asm _emit 0xeb
        __asm _emit 0xba
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        mov eax, 68db8badh
        imul ecx
        sar edx, 0ch
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 10750h], edx
        ; Exact mapped bytes EB 12: jmp 0x1006d21c
        __asm _emit 0xeb
        __asm _emit 0x12
        lea edx, [ecx + ecx*4]
        lea ecx, [ecx + edx*2]
        ; Exact mapped bytes EB DC: jmp 0x1006d1ee
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov dword ptr [esi + 10750h], 0
        mov cl, byte ptr [esi + 20bc4h]
        test cl, cl
        ; Exact mapped bytes 74 28: je 0x1006d24e
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 2170ch]
        cmp eax, 1
        ; Exact mapped bytes 74 05: je 0x1006d236
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 2
        ; Exact mapped bytes 75 18: jne 0x1006d24e
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esi + 10750h]
        lea eax, [eax + eax*4]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [esi + 10750h], eax
        mov eax, dword ptr [esi + 10750h]
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        xor eax, edx
        ; Exact mapped bytes 8B 2D A4 50 17 10: mov ebp, dword ptr [0x101750a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        sub eax, edx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esi + 10750h], eax
        mov eax, dword ptr [esi + 108b4h]
        cmp eax, edx
        ; Exact mapped bytes 0F 85 75 01 00 00: jne 0x1006d3f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test cl, cl
        ; Exact mapped bytes 0F 85 6D 01 00 00: jne 0x1006d3f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 21a34h]
        test eax, eax
        ; Exact mapped bytes 0F 85 5F 01 00 00: jne 0x1006d3f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + edx*4 + 10894h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 7E 0E: jle 0x1006d2af
        __asm _emit 0x7e
        __asm _emit 0x0e
        cmp eax, dword ptr [esi + 108b8h]
        ; Exact mapped bytes 76 06: jbe 0x1006d2af
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 108b8h], eax
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x1006d35b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 101aa390h
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes A3 F0 51 1C 10: mov dword ptr [0x101c51f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov edi, dword ptr [esi + 10750h]
        mov eax, dword ptr [esi + ecx*4 + 10894h]
        xor eax, 0aaaaaaaah
        lea eax, [eax + eax*2]
        lea eax, [eax + eax*4]
        shl eax, 2
        div dword ptr [esi + 108b8h]
        lea ecx, [eax + 28h]
        mov eax, 51eb851fh
        mov edx, ecx
        imul edx, edi
        mul edx
        shr edx, 5
        push edx
        push ecx
        push edi
        lea eax, [esp + 60h]
        push 101ab7c4h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 14h
        lea ecx, [esp + 18h]
        lea edx, [esp + 54h]
        push 0
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 60h]
        push eax
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 59: je 0x1006d3c1
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 53: je 0x1006d3c1
        __asm _emit 0x74
        __asm _emit 0x53
        mov al, byte ptr [esi + 20bc4h]
        test al, al
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x1006d460
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108b8h]
        test ecx, ecx
        ; Exact mapped bytes 0F 86 D6 00 00 00: jbe 0x1006d460
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + edx*4 + 10894h]
        xor edx, edx
        xor eax, 0aaaaaaaah
        lea eax, [eax + eax*4]
        shl eax, 3
        div ecx
        mov ecx, eax
        mov eax, 51eb851fh
        add ecx, 3ch
        imul ecx, dword ptr [esi + 10750h]
        mul ecx
        shr edx, 5
        mov dword ptr [esi + 10750h], edx
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x1006d460
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x1006d460
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10750h]
        lea ecx, [eax + eax*2]
        mov eax, 66666667h
        shl ecx, 2
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 10750h], edx
        ; Exact mapped bytes EB 6E: jmp 0x1006d460
        __asm _emit 0xeb
        __asm _emit 0x6e
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x1006d460
        __asm _emit 0x74
        __asm _emit 0x65
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 101aa390h
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A3 F0 51 1C 10: mov dword ptr [0x101c51f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 10750h]
        push ecx
        lea edx, [esp + 58h]
        push 101ab7b4h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea eax, [esp + 18h]
        lea ecx, [esp + 54h]
        push 0
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes A1 F0 51 1C 10: mov eax, dword ptr [0x101c51f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 60h]
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 14h]
        mov ebx, dword ptr [eax + 0edch]
        lea edi, [eax + 0ed8h]
        mov eax, dword ptr [eax + 0ed8h]
        add ebx, eax
        ; Exact mapped bytes 74 21: je 0x1006d49b
        __asm _emit 0x74
        __asm _emit 0x21
        xor ecx, ecx
        mov eax, dword ptr [edi]
        xor edx, edx
        add edi, 4
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        div ebx
        inc ecx
        cmp ecx, 3
        mov byte ptr [esi + ecx + 10757h], al
        ; Exact mapped bytes 7C E1: jl 0x1006d47c
        __asm _emit 0x7c
        __asm _emit 0xe1
        mov ebx, dword ptr [esp + 14h]
        push 0bh
        push 0
        mov ecx, ebx
        ; Exact mapped bytes E8 46 1E 08 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 24: je 0x1006d4d4
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0bh
        push 1
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 2E 1E 08 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv edi
        mov byte ptr [esi + 1075ch], al
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ch
        push 0
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 0B 1E 08 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 24: je 0x1006d50f
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ch
        push 1
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 F3 1D 08 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv edi
        mov byte ptr [esi + 1075dh], al
        test byte ptr [esi + 368h], 40h
        ; Exact mapped bytes 0F 84 CA 01 00 00: je 0x1006d6e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10468h]
        test eax, eax
        ; Exact mapped bytes 0F 85 62 01 00 00: jne 0x1006d68c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add ebx, 3f0h
        mov dword ptr [esp + 2ch], 0
        lea edi, [esi + 1068ah]
        mov dword ptr [esp + 18h], ebx
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        and edx, 3ffh
        ; Exact mapped bytes 66 89 17: mov word ptr [edi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x17
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        xor ecx, 0aah
        and ecx, 3ffh
        ; Exact mapped bytes 66 89 4F 02: mov word ptr [edi + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x02
        mov edx, dword ptr [eax]
        shr edx, 14h
        xor edx, 0aah
        and edx, 3ffh
        ; Exact mapped bytes 66 89 57 04: mov word ptr [edi + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x1006d667
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 76 62: jbe 0x1006d5fa
        __asm _emit 0x76
        __asm _emit 0x62
        xor eax, eax
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        mov ecx, eax
        sub ecx, ebx
        cmp ecx, 32h
        ; Exact mapped bytes 7E 07: jle 0x1006d5ad
        __asm _emit 0x7e
        __asm _emit 0x07
        mov ebp, 32h
        ; Exact mapped bytes EB 04: jmp 0x1006d5b1
        __asm _emit 0xeb
        __asm _emit 0x04
        sub eax, ebx
        mov ebp, eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 3e8h
        idiv ecx
        lea eax, [ebp + ebp*4]
        mov ecx, edx
        lea edx, [eax + eax*8]
        shl edx, 3
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        cmp ecx, edx
        ; Exact mapped bytes 73 04: jae 0x1006d5dd
        __asm _emit 0x73
        __asm _emit 0x04
        inc dword ptr [esp + 20h]
        xor eax, eax
        add ebx, 32h
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        cmp ebx, eax
        ; Exact mapped bytes 7C AF: jl 0x1006d598
        __asm _emit 0x7c
        __asm _emit 0xaf
        mov ecx, dword ptr [esp + 20h]
        mov eax, 3
        cmp ecx, eax
        ; Exact mapped bytes 7E 04: jle 0x1006d5fa
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 20h]
        xor ebx, ebx
        mov ecx, dword ptr [ecx + 4]
        mov bl, byte ptr [ecx + edx + 0be8h]
        lea ebp, [ebx + eax]
        cmp ebp, 5
        ; Exact mapped bytes 7E 07: jle 0x1006d623
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 5
        sub eax, ebx
        mov bl, byte ptr [ecx + edx + 0be8h]
        add bl, al
        cmp bl, 5
        mov byte ptr [ecx + edx + 0be8h], bl
        ; Exact mapped bytes 76 08: jbe 0x1006d640
        __asm _emit 0x76
        __asm _emit 0x08
        mov byte ptr [ecx + edx + 0be8h], 5
        test eax, eax
        ; Exact mapped bytes 7E 23: jle 0x1006d667
        __asm _emit 0x7e
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 0F: mov cx, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0f
        mov edx, ecx
        and edx, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 7C 0B: jl 0x1006d65e
        __asm _emit 0x7c
        __asm _emit 0x0b
        sub ecx, eax
        ; Exact mapped bytes 66 89 0F: mov word ptr [edi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0f
        ; Exact mapped bytes 66 01 47 02: add word ptr [edi + 2], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x47
        __asm _emit 0x02
        ; Exact mapped bytes EB 09: jmp 0x1006d667
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 66 01 4F 02: add word ptr [edi + 2], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x4f
        __asm _emit 0x02
        ; Exact mapped bytes 66 C7 07 00 00: mov word ptr [edi], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov ebx, dword ptr [esp + 18h]
        inc eax
        add ebx, 1ch
        add edi, 6
        cmp eax, 20h
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 0F 8C BB FE FF FF: jl 0x1006d542
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x1006d73e
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 3f0h]
        lea ecx, [esi + 1068ch]
        mov edx, 20h
        ; Exact mapped bytes 66 8B 38: mov di, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x38
        add eax, 1ch
        ; Exact mapped bytes 66 81 F7 AA 00: xor di, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        add ecx, 6
        and edi, 3ffh
        ; Exact mapped bytes 66 89 79 F8: mov word ptr [ecx - 8], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0xf8
        mov edi, dword ptr [eax - 1ch]
        shr edi, 0ah
        xor edi, 0aah
        and edi, 3ffh
        ; Exact mapped bytes 66 89 79 FA: mov word ptr [ecx - 6], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0xfa
        mov edi, dword ptr [eax - 1ch]
        shr edi, 14h
        xor edi, 0aah
        and edi, 3ffh
        dec edx
        ; Exact mapped bytes 66 89 79 FC: mov word ptr [ecx - 4], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0xfc
        ; Exact mapped bytes 75 B9: jne 0x1006d69d
        __asm _emit 0x75
        __asm _emit 0xb9
        ; Exact mapped bytes EB 58: jmp 0x1006d73e
        __asm _emit 0xeb
        __asm _emit 0x58
        lea eax, [ebx + 3f0h]
        lea ecx, [esi + 1068ch]
        mov edx, 20h
        ; Exact mapped bytes 66 8B 38: mov di, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x38
        add eax, 1ch
        ; Exact mapped bytes 66 81 F7 AA 00: xor di, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        add ecx, 6
        and edi, 3ffh
        ; Exact mapped bytes 66 89 79 F8: mov word ptr [ecx - 8], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0xf8
        mov edi, dword ptr [eax - 1ch]
        shr edi, 0ah
        xor edi, 0aah
        and edi, 3ffh
        ; Exact mapped bytes 66 89 79 FA: mov word ptr [ecx - 6], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0xfa
        mov edi, dword ptr [eax - 1ch]
        shr edi, 14h
        xor edi, 0aah
        and edi, 3ffh
        dec edx
        ; Exact mapped bytes 66 89 79 FC: mov word ptr [ecx - 4], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0xfc
        ; Exact mapped bytes 75 B9: jne 0x1006d6f7
        __asm _emit 0x75
        __asm _emit 0xb9
        mov ecx, dword ptr [esi + 104cch]
        mov byte ptr [esi + 10689h], 20h
        cmp ecx, 4e2h
        ; Exact mapped bytes 73 04: jae 0x1006d757
        __asm _emit 0x73
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 0D: jmp 0x1006d764
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 9c4h
        ; Exact mapped bytes 76 05: jbe 0x1006d764
        __asm _emit 0x76
        __asm _emit 0x05
        mov ecx, 9c4h
        shr ecx, 1
        shl ecx, 5
        mov eax, 0d1b71759h
        mov ebx, 0ffffffe4h
        mul ecx
        mov ecx, dword ptr [esp + 14h]
        mov ebp, 8
        shr edx, 0bh
        mov byte ptr [esi + 10689h], dl
        lea edi, [esi + 10649h]
        mov byte ptr [edi], 0aah
        mov byte ptr [edi + 1], 0aah
        mov eax, dword ptr [ecx + ebp + 0cech]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1006d7a6
        __asm _emit 0x74
        __asm _emit 0x07
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes EB 02: jmp 0x1006d7a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        and eax, 0ffffh
        sub eax, 5
        ; Exact mapped bytes 74 41: je 0x1006d7f3
        __asm _emit 0x74
        __asm _emit 0x41
        dec eax
        ; Exact mapped bytes 74 2C: je 0x1006d7e1
        __asm _emit 0x74
        __asm _emit 0x2c
        sub eax, 7
        ; Exact mapped bytes 75 62: jne 0x1006d81c
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 65 30 03 00: call 0x100a0830
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [edi], al
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 81 30 03 00: call 0x100a0860
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x1006d815
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edx, dword ptr [esi + 20b00h]
        mov ecx, dword ptr [edx + ebp]
        ; Exact mapped bytes E8 31 94 FD FF: call 0x10046c20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [edi], al
        ; Exact mapped bytes EB 25: jmp 0x1006d818
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [esi + 20b00h]
        push 0
        mov ecx, dword ptr [eax + ebp]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        mov byte ptr [edi], al
        mov eax, dword ptr [esi + 20b00h]
        push 1
        mov ecx, dword ptr [eax + ebp]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        mov byte ptr [edi + 1], al
        mov ecx, dword ptr [esp + 14h]
        add ebp, 4
        inc ebx
        add edi, 2
        lea eax, [ebx + 1ch]
        cmp eax, 20h
        ; Exact mapped bytes 0F 8C 5E FF FF FF: jl 0x1006d78d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov bl, byte ptr [esi + 20bc4h]
        mov ebp, 0aaaaaaaah
        test bl, bl
        mov byte ptr [esi + 10648h], 0
        mov dword ptr [esi + 1076ch], ebp
        mov dword ptr [esi + 10760h], ebp
        ; Exact mapped bytes 75 3E: jne 0x1006d88f
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [esi + 21a34h]
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x1006d88f
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [esi + 108b4h]
        mov eax, dword ptr [esp + 10h]
        cmp edx, eax
        mov edx, dword ptr [ecx + 0eb4h]
        ; Exact mapped bytes 75 10: jne 0x1006d87f
        __asm _emit 0x75
        __asm _emit 0x10
        xor edx, ebp
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        shl edx, 1
        ; Exact mapped bytes EB 47: jmp 0x1006d8c6
        __asm _emit 0xeb
        __asm _emit 0x47
        xor edx, ebp
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        shr edx, 1
        ; Exact mapped bytes EB 37: jmp 0x1006d8c6
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [esp + 10h]
        mov edi, dword ptr [esi + 10770h]
        mov edx, dword ptr [esi + eax*4 + 1094ch]
        mov eax, dword ptr [ecx + 0ebch]
        xor edx, ebp
        xor eax, ebp
        add edx, eax
        mov eax, 51eb851fh
        add edi, edx
        mov dword ptr [esi + 10770h], edi
        mov edx, dword ptr [ecx + 0eb4h]
        xor edx, ebp
        mul edx
        shr edx, 5
        xor edx, ebp
        ; Exact mapped bytes 66 83 BE 5E 05 01 00 02: cmp word ptr [esi + 0x1055e], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        mov dword ptr [esi + 10768h], edx
        ; Exact mapped bytes 75 0A: jne 0x1006d8e2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ecx + 0ebch]
        xor eax, ebp
        ; Exact mapped bytes EB 17: jmp 0x1006d8f9
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + edx*4 + 1094ch]
        mov edx, dword ptr [ecx + 0ebch]
        xor eax, ebp
        xor edx, ebp
        add eax, edx
        mov edx, dword ptr [esi + 10770h]
        add edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esi + 10770h], edx
        mov edx, dword ptr [ecx + 0eb8h]
        xor edx, ebp
        mul edx
        shr edx, 5
        xor edx, ebp
        mov dword ptr [esi + 10764h], edx
        mov eax, dword ptr [ecx + 374h]
        mov edx, dword ptr [ecx + 0eb0h]
        xor eax, ebp
        xor edx, ebp
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        xor edx, ebp
        test bl, bl
        mov dword ptr [esi + 1074ch], edx
        ; Exact mapped bytes 74 68: je 0x1006d9af
        __asm _emit 0x74
        __asm _emit 0x68
        mov edi, dword ptr [esp + 14h]
        xor edx, ebp
        mov eax, dword ptr [edi + 0ebch]
        lea ecx, [edx + edx*2]
        mov edx, dword ptr [esi + 20c28h]
        xor eax, ebp
        shr ecx, 1
        test edx, edx
        ; Exact mapped bytes 74 31: je 0x1006d995
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [esi + 20c2ch]
        test edx, edx
        ; Exact mapped bytes 74 27: je 0x1006d995
        __asm _emit 0x74
        __asm _emit 0x27
        add ecx, eax
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D8 8E BC 08 01 00: fmul dword ptr [esi + 0x108bc]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 1B EE 0F 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xee
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, ebp
        mov dword ptr [esi + 1076ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x1006d99f
        __asm _emit 0xeb
        __asm _emit 0x0a
        add ecx, eax
        xor ecx, ebp
        mov dword ptr [esi + 1076ch], ecx
        mov eax, dword ptr [esi + 1076ch]
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edi + 0ebch], eax
        mov al, byte ptr [esi + 20bc4h]
        test al, al
        ; Exact mapped bytes 74 13: je 0x1006d9cc
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + edx*4 + 10894h]
        mov dword ptr [esi + 10760h], eax
        ; Exact mapped bytes EB 2A: jmp 0x1006d9f6
        __asm _emit 0xeb
        __asm _emit 0x2a
        test byte ptr [esi + 368h], 10h
        ; Exact mapped bytes 74 21: je 0x1006d9f6
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [esi + 108b4h]
        cmp eax, -1
        ; Exact mapped bytes 74 16: je 0x1006d9f6
        __asm _emit 0x74
        __asm _emit 0x16
        test byte ptr [esi + 10464h], 10h
        ; Exact mapped bytes 74 0D: je 0x1006d9f6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [esi + eax*4 + 10894h]
        mov dword ptr [esi + 10760h], edx
        mov edx, dword ptr [esi + 10774h]
        mov eax, dword ptr [esi + 108b4h]
        and eax, 0fh
        and edx, 0ffff0ff0h
        xor eax, edx
        mov edx, eax
        mov dword ptr [esi + 10774h], eax
        mov edi, dword ptr [esi + 108b4h]
        shr edx, 4
        and edx, 0fh
        cmp edi, edx
        ; Exact mapped bytes 75 0C: jne 0x1006da31
        __asm _emit 0x75
        __asm _emit 0x0c
        and ah, 1fh
        or ah, 10h
        mov dword ptr [esi + 10774h], eax
        mov eax, dword ptr [esi + 164h]
        mov edx, 0ah
        mov dword ptr [esi + 10778h], eax
        lea eax, [esi + 1077ch]
        mov edi, dword ptr [eax - 10668h]
        mov dword ptr [eax], edi
        mov edi, dword ptr [eax - 10664h]
        mov dword ptr [eax + 4], edi
        add eax, 8
        dec edx
        ; Exact mapped bytes 75 E9: jne 0x1006da48
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x1006da72
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 3E: jne 0x1006dab0
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [esi + 10774h]
        mov eax, dword ptr [esi + 108b4h]
        shr edx, 4
        and edx, 0fh
        cmp eax, edx
        ; Exact mapped bytes 75 28: jne 0x1006dab0
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x1006dab0
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [esi + 10768h]
        xor eax, ebp
        lea edx, [eax + eax*2]
        mov eax, 0cccccccdh
        shl edx, 2
        mul edx
        shr edx, 3
        xor edx, ebp
        mov dword ptr [esi + 10768h], edx
        mov edi, dword ptr [ecx + 0e74h]
        mov al, byte ptr [edi + 2]
        and eax, 1fh
        cmp eax, 8
        ; Exact mapped bytes 77 3F: ja 0x1006db00
        __asm _emit 0x77
        __asm _emit 0x3f
        ; Exact mapped bytes FF 24 85 AC DF 06 10: jmp dword ptr [eax*4 + 0x1006dfac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x10
        mov ecx, 4aah
        ; Exact mapped bytes EB 35: jmp 0x1006db04
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, 4cah
        ; Exact mapped bytes EB 2E: jmp 0x1006db04
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, 0be2h
        ; Exact mapped bytes EB 27: jmp 0x1006db04
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, 1308h
        ; Exact mapped bytes EB 20: jmp 0x1006db04
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, 12f6h
        ; Exact mapped bytes EB 19: jmp 0x1006db04
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, 1c7ch
        ; Exact mapped bytes EB 12: jmp 0x1006db04
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, 1d4eh
        ; Exact mapped bytes EB 0B: jmp 0x1006db04
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, 0ea60h
        ; Exact mapped bytes EB 04: jmp 0x1006db04
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 24h]
        ; Exact mapped bytes 66 8B 47 0A: mov ax, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0a
        mov dl, byte ptr [edi + 0ch]
        shr eax, 0ah
        and eax, 1fh
        and edx, 0fh
        add eax, edx
        mov edx, dword ptr [esi + 10768h]
        imul eax, ecx
        mov ebx, dword ptr [esi + 1074ch]
        xor edx, ebp
        mov dword ptr [esi + 10768h], edx
        mov edi, edx
        mov edx, dword ptr [esi + 10750h]
        xor ebx, ebp
        cmp edx, eax
        mov dword ptr [esi + 1074ch], ebx
        ; Exact mapped bytes 7E 06: jle 0x1006db47
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 10750h], eax
        lea edx, [ecx + ecx*8]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 10770h]
        cmp eax, edx
        ; Exact mapped bytes 7E 06: jle 0x1006db6b
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 10770h], edx
        cmp edi, edx
        ; Exact mapped bytes 76 06: jbe 0x1006db75
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 10768h], edx
        lea ecx, [ecx + ecx*2]
        mov eax, 66666667h
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esi + 1074ch]
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 76 06: jbe 0x1006db9c
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 1074ch], edx
        mov edx, dword ptr [esi + 10768h]
        mov ecx, dword ptr [esi + 1074ch]
        mov eax, dword ptr [esi + 10750h]
        xor edx, ebp
        xor ecx, ebp
        mov dword ptr [esi + 10768h], edx
        test eax, eax
        mov dword ptr [esi + 1074ch], ecx
        ; Exact mapped bytes 7D 0A: jge 0x1006dbcc
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esi + 10750h], 0
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 79 7D FB FF: call 0x10025950
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ebx, dword ptr [esi + 10768h]
        mov edi, dword ptr [esi + 1074ch]
        mov edx, dword ptr [esi + 10760h]
        mov ecx, dword ptr [esi + 1076ch]
        mov dword ptr [esi + 107d0h], eax
        mov eax, dword ptr [esi + 10764h]
        xor ebx, ebp
        xor edi, ebp
        xor edx, ebp
        xor ecx, ebp
        mov dword ptr [esi + 10768h], ebx
        xor eax, ebp
        lea ebx, [esi + 1064ah]
        mov dword ptr [esi + 1076ch], ecx
        mov dword ptr [esi + 10764h], eax
        mov dword ptr [esi + 1074ch], edi
        mov dword ptr [esi + 10760h], edx
        mov eax, ebx
        mov ecx, 20h
        mov dl, byte ptr [eax - 1]
        add eax, 2
        xor dl, 0aah
        mov byte ptr [eax - 3], dl
        mov dl, byte ptr [eax - 2]
        xor dl, 0aah
        dec ecx
        mov byte ptr [eax - 2], dl
        ; Exact mapped bytes 75 E8: jne 0x1006dc30
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 21710h]
        xor ecx, ecx
        cmp eax, ecx
        ; Exact mapped bytes 7E 64: jle 0x1006dcb8
        __asm _emit 0x7e
        __asm _emit 0x64
        cmp dword ptr [esi + 21a34h], ecx
        ; Exact mapped bytes 75 5C: jne 0x1006dcb8
        __asm _emit 0x75
        __asm _emit 0x5c
        test byte ptr [esi + 10560h], 1
        ; Exact mapped bytes 75 53: jne 0x1006dcb8
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, dword ptr [esi + 21a4ch]
        mov eax, dword ptr [edx + 84h]
        lea eax, [eax + eax*2]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 2
        mul edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 5
        mov eax, dword ptr [eax + 4]
        cmp dword ptr [eax + 5f88h], edx
        ; Exact mapped bytes 72 24: jb 0x1006dcb8
        __asm _emit 0x72
        __asm _emit 0x24
        mov dword ptr [esi + 10768h], ecx
        mov dword ptr [esi + 1074ch], ecx
        mov dword ptr [esi + 10750h], ecx
        mov dword ptr [esi + 10754h], ecx
        mov dword ptr [esi + 10770h], ecx
        mov dword ptr [esi + 10760h], ecx
        mov ecx, dword ptr [esi + 10750h]
        mov dword ptr [esi + 107d4h], 0
        xor ecx, 0f3a91cd0h
        mov dword ptr [esi + 107cch], ecx
        ; Exact mapped bytes A1 E8 56 1C 10: mov eax, dword ptr [0x101c56e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [eax + 40h]
        mov eax, dword ptr [eax + 58h]
        lea edx, [eax + eax*2]
        lea eax, [eax + edx*4]
        xor edx, edx
        div dword ptr [edi + 4]
        mov eax, dword ptr [edi + 0ch]
        mov edx, dword ptr [eax + edx*4]
        xor edx, ecx
        xor eax, eax
        mov dword ptr [esi + 107cch], edx
        mov edi, dword ptr [esi + 107d4h]
        xor ecx, ecx
        mov cl, byte ptr [esi + eax + 10644h]
        add edi, ecx
        inc eax
        cmp eax, 190h
        mov dword ptr [esi + 107d4h], edi
        ; Exact mapped bytes 72 E1: jb 0x1006dcfa
        __asm _emit 0x72
        __asm _emit 0xe1
        mov ecx, dword ptr [esi + 10768h]
        mov eax, dword ptr [esi + 1074ch]
        mov edi, dword ptr [esi + 10760h]
        mov edx, dword ptr [esi + 1076ch]
        xor ecx, ebp
        xor eax, ebp
        mov dword ptr [esi + 10768h], ecx
        mov ecx, dword ptr [esi + 10764h]
        mov dword ptr [esi + 1074ch], eax
        mov eax, dword ptr [esi + 10750h]
        xor edi, ebp
        xor edx, ebp
        xor ecx, ebp
        xor eax, ebp
        mov dword ptr [esi + 10760h], edi
        mov edi, dword ptr [esi + 10754h]
        mov dword ptr [esi + 1076ch], edx
        mov edx, dword ptr [esi + 10770h]
        mov dword ptr [esi + 10764h], ecx
        mov ecx, dword ptr [esi + 10774h]
        mov dword ptr [esi + 10750h], eax
        mov eax, dword ptr [esi + 107d0h]
        xor edi, ebp
        xor edx, ebp
        xor ecx, ebp
        xor eax, ebp
        mov dword ptr [esi + 10774h], ecx
        mov dword ptr [esi + 107d0h], eax
        mov dword ptr [esi + 10754h], edi
        mov dword ptr [esi + 10770h], edx
        mov eax, ebx
        mov ecx, 20h
        mov dl, byte ptr [eax - 1]
        add eax, 2
        xor dl, 0aah
        mov byte ptr [eax - 3], dl
        mov bl, byte ptr [eax - 2]
        xor bl, 0aah
        dec ecx
        mov byte ptr [eax - 2], bl
        ; Exact mapped bytes 75 E8: jne 0x1006ddac
        __asm _emit 0x75
        __asm _emit 0xe8
        mov edx, dword ptr [esi + 107d4h]
        lea eax, [esi + 10644h]
        xor edx, ebp
        push eax
        mov dword ptr [esi + 107d4h], edx
        ; Exact mapped bytes 8B 0D 0C 57 1C 10: mov ecx, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 AC 87 00 00: call 0x10076590
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 10560h], 1
        ; Exact mapped bytes 74 7D: je 0x1006de6a
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 70: je 0x1006de6a
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes 8B 1D A0 50 17 10: mov ebx, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi + 0f10h]
        push 101ad0e8h
        mov eax, dword ptr [eax + 6ch]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 4E: jne 0x1006de63
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [edi + 3c8h]
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x1006de63
        __asm _emit 0x74
        __asm _emit 0x44
        xor ecx, ecx
        mov eax, 101ace80h
        mov edx, dword ptr [edi + 370h]
        mov ebp, dword ptr [eax]
        shr edx, 0ah
        cmp ebp, edx
        ; Exact mapped bytes 75 17: jne 0x1006de4c
        __asm _emit 0x75
        __asm _emit 0x17
        mov dl, byte ptr [ecx + 101ace94h]
        inc dl
        mov byte ptr [ecx + 101ace94h], dl
        mov edx, 101ace94h
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x1006de57
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 4
        inc ecx
        cmp eax, 101ace94h
        ; Exact mapped bytes 7C CF: jl 0x1006de26
        __asm _emit 0x7c
        __asm _emit 0xcf
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 7D FA FD FF: call 0x1004d8e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 96: jne 0x1006de00
        __asm _emit 0x75
        __asm _emit 0x96
        mov eax, dword ptr [esi + 21a34h]
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x1006decc
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [esi + 21a38h]
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x1006decc
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [esi + 21a3ch]
        push 0
        push 0
        push 0
        push eax
        ; Exact mapped bytes FF 15 8C 50 17 10: call dword ptr [0x1017508c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 21a3ch]
        ; Exact mapped bytes 8B 3D A4 50 17 10: mov edi, dword ptr [0x101750a4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 24h]
        push 0
        push ecx
        lea edx, [esi + 2176ch]
        push 2c8h
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 21a3ch]
        push ecx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 21a3ch], 0ffffffffh
        ; Exact mapped bytes EB 06: jmp 0x1006ded2
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 3D A4 50 17 10: mov edi, dword ptr [0x101750a4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x1006df7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 88 51 17 10: mov esi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 54h]
        push 101ab5a0h
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 1D A8 50 17 10: mov ebx, dword ptr [0x101750a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        lea eax, [esp + 24h]
        lea ecx, [esp + 54h]
        push 0
        push eax
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        ; Exact mapped bytes A1 F0 51 1C 10: mov eax, dword ptr [0x101c51f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 60h]
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea ecx, [esp + 54h]
        push 101ab7a8h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 8
        lea edx, [esp + 24h]
        lea eax, [esp + 54h]
        push 0
        push edx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 5ch]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea eax, [esp + 54h]
        push 101ab5f8h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 8
        lea ecx, [esp + 24h]
        lea edx, [esp + 54h]
        push 0
        push ecx
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 60h]
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 144h
        ret
    }
}
