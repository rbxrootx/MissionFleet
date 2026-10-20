// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095E20 .. +0x570 bytes.
extern "C" __declspec(naked) void FUN_10095e20_10095E20() {
    __asm {
        push -1
        push 10170b6bh
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
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 4B 8B 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        push 54h
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esi], 10175f0ch
        ; Exact mapped bytes E8 22 69 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x69
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 73: je 0x10095f03
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 4ah
        ; Exact mapped bytes 7E 12: jle 0x10095eb0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10095eb0
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 128h]
        ; Exact mapped bytes EB 02: jmp 0x10095eb2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EA 8A 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10095efd
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x10095f05
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes E8 8C 68 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 73: je 0x10095f99
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 49h
        ; Exact mapped bytes 7E 12: jle 0x10095f46
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10095f46
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 124h]
        ; Exact mapped bytes EB 02: jmp 0x10095f48
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 54 8A 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10095f93
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x10095f9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes E8 F6 67 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x67
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 73: je 0x1009602f
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 3C 58 1C 10: mov eax, dword ptr [0x101c583c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 4bh
        ; Exact mapped bytes 7E 12: jle 0x10095fdc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10095fdc
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 12ch]
        ; Exact mapped bytes EB 02: jmp 0x10095fde
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 BE 89 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10096029
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x10096031
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esi + 50h]
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 58h], edi
        ; Exact mapped bytes E8 1A 91 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 0dch
        ; Exact mapped bytes E8 CD 90 06 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        push 101h
        ; Exact mapped bytes E8 00 91 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        push 0e8h
        ; Exact mapped bytes E8 36 67 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x67
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        xor edi, edi
        mov byte ptr [esp + 1ch], 4
        cmp eax, edi
        ; Exact mapped bytes 74 30: je 0x100960ac
        __asm _emit 0x74
        __asm _emit 0x30
        push 646464h
        push edi
        lea ecx, [ebx + 2fh]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 0a5h]
        lea ecx, [ebx + 23h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 20h]
        push edx
        push ecx
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A6 28 F8 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100960ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0e8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 E0 66 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x66
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 30: je 0x10096100
        __asm _emit 0x74
        __asm _emit 0x30
        push 646464h
        push edi
        lea edx, [ebx + 7eh]
        push 0ffffffh
        push edx
        lea ecx, [ebp + 0c8h]
        lea edx, [ebx + 3ah]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 20h]
        push ecx
        push edx
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 52 28 F8 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10096102
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [esi + 6ch]
        mov ecx, 0fffdh
        push 0a0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [eax + 90h], 0bh
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 C7 80 9C 00 00 00 1C 00: mov word ptr [eax + 0x9c], 0x1c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes E8 60 66 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x66
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 49: je 0x10096199
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 10h
        ; Exact mapped bytes 7E 12: jle 0x10096171
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x10096171
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 400h
        ; Exact mapped bytes EB 02: jmp 0x10096173
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0ah]
        push 40h
        push edx
        lea edx, [ebp + 0abh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 29 11 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009619b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 5ch], eax
        ; Exact mapped bytes E8 F3 65 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x65
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 49: je 0x10096206
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x100961de
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100961de
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x100961e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 0ah]
        push 40h
        push edx
        lea edx, [ebp + 85h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 BC 10 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10096208
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 86 65 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x65
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 49: je 0x10096273
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x1009624b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x1009624b
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 300h
        ; Exact mapped bytes EB 02: jmp 0x1009624d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebx + 22h]
        push 40h
        push edx
        lea edx, [ebp + 0abh]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 4F 10 F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10096275
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 19 65 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x65
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 49: je 0x100962e0
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 58 1C 10: mov ecx, dword ptr [0x101c583c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0fh
        ; Exact mapped bytes 7E 12: jle 0x100962b8
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100962b8
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3c0h
        ; Exact mapped bytes EB 02: jmp 0x100962ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebx, 22h
        push 40h
        add ebp, 0abh
        push ebx
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 E2 0F F8 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100962e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 5ch]
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 69 8E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        push 101h
        ; Exact mapped bytes E8 5C 8E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 101h
        ; Exact mapped bytes E8 4F 8E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 101h
        ; Exact mapped bytes E8 42 8E 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0bh
        ; Exact mapped bytes 7E 0F: jle 0x1009633b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x1009633b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x1009633d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        or ah, 5
        mov dword ptr [esi + 90h], edi
        mov dword ptr [esi + 94h], edi
        mov dword ptr [esi + 98h], edi
        mov dword ptr [esi + 9ch], edi
        mov dword ptr [esi + 0a0h], edi
        ; Exact mapped bytes 66 89 BE A4 00 00 00: mov word ptr [esi + 0xa4], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov byte ptr [esi + 78h], 0
        mov eax, esi
        pop edi
        pop esi
        pop ebp
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
