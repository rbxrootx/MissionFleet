// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044DC0B .. +0x347 bytes.
extern "C" __declspec(naked) void FUN_0044dc0b_0044DC0B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 60h]
        mov ecx, 18h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 5ch], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 7C 4A: jl 0x44dc81
        __asm _emit 0x7c
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 41h
        ; Exact mapped bytes 7C 0B: jl 0x44dc4d
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ah
        ; Exact mapped bytes 7E 34: jle 0x44dc81
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 61h
        ; Exact mapped bytes 7C 0B: jl 0x44dc63
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 7ah
        ; Exact mapped bytes 7E 1E: jle 0x44dc81
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 0F 8C C9 02 00 00: jl 0x44df3b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 39h
        ; Exact mapped bytes 0F 8F BA 02 00 00: jg 0x44df3b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 09: jmp 0x44dc93
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 18h
        ; Exact mapped bytes 0F 8D A6 00 00 00: jge 0x44dd43
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x44dd43
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7D 0E: jge 0x44dcc9
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 75: jl 0x44dd3e
        __asm _emit 0x7c
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 41h
        ; Exact mapped bytes 7C 0E: jl 0x44dce5
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5ah
        ; Exact mapped bytes 7E 59: jle 0x44dd3e
        __asm _emit 0x7e
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 61h
        ; Exact mapped bytes 7C 0E: jl 0x44dd01
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 7ah
        ; Exact mapped bytes 7E 3D: jle 0x44dd3e
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 7C 0E: jl 0x44dd1d
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 39h
        ; Exact mapped bytes 7E 21: jle 0x44dd3e
        __asm _emit 0x7e
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 8002h
        push 4
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 94 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 02 02 00 00: jmp 0x44df40
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x44dc8a
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push 5b7140h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 82 AA 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x44de1c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x44dd78
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 9
        ; Exact mapped bytes 7F 54: jg 0x44ddd2
        __asm _emit 0x7f
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 0c7ch]
        mov edx, dword ptr [ecx + 40cc8h]
        mov eax, dword ptr [edx + 0ca0h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 1ch]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + edx*4 + 0cch]
        cmp ecx, dword ptr [esi + eax*4 + 28h]
        ; Exact mapped bytes 74 21: je 0x44ddd0
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 8002h
        push 8
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 94 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 70 01 00 00: jmp 0x44df40
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9D: jmp 0x44dd6f
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 0c7ch]
        mov ecx, dword ptr [eax + 40cc8h]
        mov edx, dword ptr [ecx + 0ca0h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 108h]
        cmp edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 74 21: je 0x44de1c
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 8002h
        push 8
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 94 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x44df40
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 47 B5 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 58h], 10h
        lea ecx, [ebp - 58h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 15 00 00: call 0x44f380
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 18: je 0x44de64
        __asm _emit 0x74
        __asm _emit 0x18
        mov al, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 3ch], al
        mov cl, byte ptr [ebp - 0fh]
        mov byte ptr [ebp - 3bh], cl
        mov dl, byte ptr [ebp - 0eh]
        mov byte ptr [ebp - 3ah], dl
        mov al, byte ptr [ebp - 0dh]
        mov byte ptr [ebp - 39h], al
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 17h], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 27h], 0
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        push 5b714ch
        lea ecx, [ebp - 54h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 4F A9 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 18h
        mov esi, esp
        push edx
        push 5b7150h
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 2D A9 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 15 00 00: call 0x44f3f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 8A 0D 79 CB 5D 00: mov cl, byte ptr [0x5dcb79]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [ebp - 20h], cl
        mov edx, dword ptr [ebp - 5ch]
        cmp dword ptr [edx + 0db0h], 0
        ; Exact mapped bytes 74 61: je 0x44df3b
        __asm _emit 0x74
        __asm _emit 0x61
        push 0
        push 38h
        lea eax, [ebp - 54h]
        push eax
        push 0
        push 1
        push 80011000h
        mov ecx, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ecx + 0db0h]
        ; Exact mapped bytes E8 39 93 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 10dch]
        add eax, 1
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 10dch], eax
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 10dch]
        push eax
        ; Exact mapped bytes E8 E3 75 0E 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 AC A8 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 05 14 00 00: call 0x44f340
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 60h
        cmp ebp, esp
        ; Exact mapped bytes E8 94 A8 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
