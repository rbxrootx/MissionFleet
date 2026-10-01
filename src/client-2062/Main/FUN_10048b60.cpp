// Reconstructed from Ghidra evidence and the mapped 2062 Main.dll instruction stream.
// Indexed function extent: 0x10048B60 .. +0x3A5C bytes.
extern "C" __declspec(naked) void FUN_10048b60() {
    __asm {
        push -1
        push 1016e96eh
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
        sub esp, 9d0h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 9e8h]
        mov ebx, ecx
        push esi
        push edi
        ; Exact mapped bytes 66 8B 45 06: mov ax, word ptr [ebp + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x06
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 66 3D 00 80: cmp ax, 0x8000
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 0F 85 D6 06 00 00: jne 0x10049270
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        cmp eax, 80000200h
        ; Exact mapped bytes 0F 87 D0 05 00 00: ja 0x10049178
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 50 05 00 00: je 0x100490fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80000100h
        ; Exact mapped bytes 0F 87 F2 02 00 00: ja 0x10048eab
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CC 02 00 00: je 0x10048e8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80000002h
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x10048cce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80000003h
        ; Exact mapped bytes 0F 85 C7 39 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, 80020010h
        ; Exact mapped bytes 75 1B: jne 0x10048bfa
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 DB 86 FE FF: call 0x100312d0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 A2 39 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002h
        ; Exact mapped bytes 75 1B: jne 0x10048c1c
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes E8 B9 86 FE FF: call 0x100312d0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 80 39 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8001020ch
        ; Exact mapped bytes 75 1C: jne 0x10048c3f
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d48h]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 16 04 06 00: call 0x100a9050
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 5D 39 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80011035h
        ; Exact mapped bytes 0F 84 52 39 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8001020dh
        ; Exact mapped bytes 75 35: jne 0x10048c86
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 101aa960h
        push 101aa954h
        mov ecx, dword ptr [eax + 0d48h]
        push 1
        push 0
        mov eax, dword ptr [ecx + 0a0h]
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes 8B 0D 28 57 1C 10: mov ecx, dword ptr [0x101c5728]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 EF 53 FF FF: call 0x1003e070
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 16 39 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8001020eh
        ; Exact mapped bytes 75 1C: jne 0x10048ca9
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d48h]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 FC E8 05 00: call 0x100a75a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 38 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80000520h
        ; Exact mapped bytes 0F 85 E8 38 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        mov ecx, dword ptr [edx + 0d44h]
        ; Exact mapped bytes E8 27 26 FF FF: call 0x1003b2f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CE 38 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, 8002h
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x10048db9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A0 E8 D0 1A 10: mov al, byte ptr [0x101ad0e8]
        __asm _emit 0xa0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1a
        __asm _emit 0x10
        test al, al
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x10048da9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 30h], 2
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 85 58 00 00: call 0x1004e580
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 9f4h]
        mov ecx, 1eh
        mov esi, ebx
        mov edi, 101ad0e8h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 35 00 D1 1A 10: mov esi, dword ptr [0x101ad100]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 04 D1 1A 10: mov edx, dword ptr [0x101ad104]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 A1 36 D1 1A 10: mov ax, word ptr [0x101ad136]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x36
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor esi, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 89 35 00 D1 1A 10: mov dword ptr [0x101ad100], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 89 15 04 D1 1A 10: mov dword ptr [0x101ad104], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov esi, 78h
        ; Exact mapped bytes 74 1A: je 0x10048d5e
        __asm _emit 0x74
        __asm _emit 0x1a
        xor ecx, ecx
        lea edx, [ebx + 78h]
        ; Exact mapped bytes 66 8B C8: mov cx, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc8
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 A7 1E 0B 00: call 0x100fac00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, eax
        add esi, 78h
        ; Exact mapped bytes 66 83 3D 38 D1 1A 10 00: cmp word ptr [0x101ad138], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x10048d84
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes A1 38 D1 1A 10: mov eax, dword ptr [0x101ad138]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        lea ecx, [esi + ebx]
        and eax, 0ffffh
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 CE 1E 0B 00: call 0x100fac50
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esi, eax
        xor ecx, ecx
        mov edi, 101ace9ch
        ; Exact mapped bytes 66 8B 0C 1E: mov cx, word ptr [esi + ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x1e
        lea esi, [esi + ebx + 2]
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes E9 F3 37 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BC 4A FE FF: call 0x1002d870
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 E3 37 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8004h
        ; Exact mapped bytes 75 0C: jne 0x10048dcc
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebx + 30h], 2
        ; Exact mapped bytes E9 D0 37 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020010h
        ; Exact mapped bytes 75 0C: jne 0x10048ddf
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebx + 30h], 2
        ; Exact mapped bytes E9 BD 37 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8001020ch
        ; Exact mapped bytes 75 3C: jne 0x10048e22
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 0B 1F 0B 00: call 0x100fad00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 26 FE FF FF: je 0x10048c23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 9f4h]
        push eax
        push ecx
        mov eax, dword ptr [edx + 0d48h]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 43 01 06 00: call 0x100a8f60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 7A 37 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8001020eh
        ; Exact mapped bytes 0F 85 6F 37 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 37ch
        ; Exact mapped bytes 0F 85 62 37 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        mov ecx, dword ptr [ebp + 8]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 AF 1E 0B 00: call 0x100fad00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C8 DD FD FF: call 0x10026c20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        push edx
        ; Exact mapped bytes E8 97 1E 0B 00: call 0x100fad00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F0 04 FE FF: call 0x10029360
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d48h]
        mov ecx, dword ptr [ecx + 0a0h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes E9 11 37 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ebp + 8]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 BA 1D 02 00: call 0x1006ac60
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 F1 36 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8000010ah
        ; Exact mapped bytes 0F 85 E6 36 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 8]
        lea eax, [ebp - 0ah]
        cmp eax, 21h
        ; Exact mapped bytes 0F 87 D7 36 00 00: ja 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd7
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1004c5d0h]
        ; Exact mapped bytes FF 24 8D BC C5 04 10: jmp dword ptr [ecx*4 + 0x1004c5bc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x10
        cmp dword ptr [ebx + 134h], 20000000h
        ; Exact mapped bytes 0F 85 B8 36 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        mov dword ptr [ebx + 130h], esi
        mov dword ptr [ebx + 134h], esi
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 74 53: je 0x10048f54
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A3 D8 56 1C 10: mov dword ptr [0x101c56d8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 75 30: jne 0x10048f40
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 220000h
        ; Exact mapped bytes E8 F0 31 07 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 174h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax]
        mov ecx, eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 CE AC 00 00: call 0x10053c20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x10048f5a
        __asm _emit 0xeb
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 56 AF 00 00: call 0x10053eb0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10000h
        ; Exact mapped bytes E8 96 E8 06 00: call 0x100b7800
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ah
        ; Exact mapped bytes E8 49 EC 06 00: call 0x100b7bc0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x00
        push esi
        push esi
        push esi
        push esi
        push esi
        push 80010027h
        mov ecx, ebx
        ; Exact mapped bytes E8 C8 2F 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2f
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F 36 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 134h], 40000000h
        ; Exact mapped bytes 0F 85 FF 35 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push 0ch
        mov dword ptr [ebx + 130h], eax
        mov dword ptr [ebx + 134h], eax
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 08 EC 06 00: call 0x100b7bc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, eax
        ; Exact mapped bytes 74 06: je 0x10048fcd
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 89 0D D8 56 1C 10: mov dword ptr [0x101c56d8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 D3 B8 00 00: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        xor ecx, ecx
        mov cl, ah
        and edx, 0fff0h
        and ecx, 0fh
        or ecx, edx
        ; Exact mapped bytes 66 89 4C 24 18: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B0 B8 00 00: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        and eax, 0fh
        shl eax, 4
        and ecx, 0ff0fh
        lea edx, [esp + 18h]
        or eax, ecx
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 66 89 44 24 1C: mov word ptr [esp + 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 59 4F 01 00: call 0x1005df80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ch
        ; Exact mapped bytes E8 81 EB 06 00: call 0x100b7bc0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 35 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 134h], 10000000h
        ; Exact mapped bytes 0F 85 48 35 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        push 20000h
        mov dword ptr [ebx + 130h], esi
        mov dword ptr [ebx + 134h], esi
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 0D D8 56 1C 10: mov dword ptr [0x101c56d8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 82 E7 06 00: call 0x100b7800
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0bh
        ; Exact mapped bytes E8 35 EB 06 00: call 0x100b7bc0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 05: je 0x100490a3
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 05: je 0x100490bb
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, esi
        ; Exact mapped bytes 74 05: je 0x100490ca
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        push esi
        push esi
        push esi
        push esi
        push esi
        push 80010027h
        mov ecx, ebx
        ; Exact mapped bytes E8 6A 2E 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x2e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 B1 34 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebx + 130h], eax
        mov dword ptr [ebx + 134h], eax
        ; Exact mapped bytes E9 9E 34 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 0D D8 56 1C 10: mov dword ptr [0x101c56d8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x10049119
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 EC 23 02 00: call 0x1006b510
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x10049140
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [esp + 9f4h]
        push ecx
        ; Exact mapped bytes EB 02: jmp 0x10049142
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C3 B5 02 00: call 0x10074710
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [edx + 21a34h], 0
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 F8 33 02 00: call 0x1006c560
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes E9 24 34 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80000510h
        ; Exact mapped bytes 0F 87 A6 00 00 00: ja 0x10049229
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 61: je 0x100491e6
        __asm _emit 0x74
        __asm _emit 0x61
        cmp eax, 80000300h
        ; Exact mapped bytes 74 3D: je 0x100491c9
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp eax, 80000500h
        ; Exact mapped bytes 0F 85 05 34 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 9f4h]
        mov cl, byte ptr [esi]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C4 5B 02 00: call 0x1006ed70
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        inc esi
        push esi
        ; Exact mapped bytes E8 C7 5B 02 00: call 0x1006ed80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 CC 2C 02 00: call 0x1006be90
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 D3 33 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 C0 33 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7F 5B 02 00: call 0x1006ed60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 33 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 0B 1B 0B 00: call 0x100fad00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 9F 33 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D 0C: movsx ecx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 0ch]
        push ecx
        shr edx, 10h
        ; Exact mapped bytes 0F BF CA: movsx ecx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xca
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 3D F9 FD FF: call 0x10028b50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 0d40h]
        ; Exact mapped bytes E8 4C CC 0A 00: call 0x100f5e70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcc
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 33 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80000520h
        ; Exact mapped bytes 0F 85 68 33 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        ; Exact mapped bytes C7 05 00 59 1C 10 00 00 00 00: mov dword ptr [0x101c5900], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 0E: mov dx, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0e
        push eax
        mov al, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 66 8B 55 0A: mov dx, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0a
        shr ecx, 8
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 A5 63 01 00: call 0x1005f610
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 33 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 80: cmp ax, 0x8001
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x80
        ; Exact mapped bytes 0F 85 AD 00 00 00: jne 0x10049327
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 4]
        cmp ebp, 8001000fh
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x1004930c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 80010030h
        ; Exact mapped bytes 74 60: je 0x100492f1
        __asm _emit 0x74
        __asm _emit 0x60
        cmp ebp, 80010109h
        ; Exact mapped bytes 0F 85 FF 32 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 7C 1A 10: mov ecx, dword ptr [0x101a7c8c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 90 7C 1A 10: mov edx, dword ptr [0x101a7c90]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        xor eax, eax
        mov dword ptr [esp + 64h], ecx
        push eax
        lea ecx, [esp + 5ch]
        push 0d8h
        push ecx
        push ebp
        xor edx, 0aah
        push eax
        push 80020010h
        mov ecx, ebx
        mov dword ptr [esp + 70h], eax
        mov dword ptr [esp + 74h], 10060000h
        mov dword ptr [esp + 78h], eax
        mov dword ptr [esp + 80h], edx
        mov dword ptr [esp + 144h], eax
        ; Exact mapped bytes E8 64 2C 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x2c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 32 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80010030h
        mov ecx, ebx
        ; Exact mapped bytes E8 49 2C 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x2c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 90 32 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, ebx
        ; Exact mapped bytes E8 2E 2C 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2c
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 75 32 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 80: cmp ax, 0x8002
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x80
        ; Exact mapped bytes 0F 85 6B 32 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        cmp eax, 80020f0dh
        ; Exact mapped bytes 0F 87 B4 1D 00 00: ja 0x1004b0f3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb4
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A3 1A 00 00: je 0x1004ade8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        cmp eax, 80020d09h
        ; Exact mapped bytes 0F 87 39 0B 00 00: ja 0x10049e8b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x39
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 18 0B 00 00: je 0x10049e70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002040ah
        ; Exact mapped bytes 0F 87 77 07 00 00: ja 0x10049ada
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BC 06 00 00: je 0x10049a25
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020115h
        ; Exact mapped bytes 0F 87 E0 04 00 00: ja 0x10049854
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 18 04 00 00: je 0x10049792
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 7ffdffe5h
        cmp eax, 0f9h
        ; Exact mapped bytes 0F 87 12 32 00 00: ja 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 1004c608h]
        ; Exact mapped bytes FF 24 95 F4 C5 04 10: jmp dword ptr [edx*4 + 0x1004c5f4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        push eax
        ; Exact mapped bytes E8 C5 1E 0B 00: call 0x100fb270
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 EC 31 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 134h]
        mov esi, 2
        cmp eax, esi
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x10049487
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [ebx + 130h], ecx
        mov dword ptr [ebx + 134h], ecx
        ; Exact mapped bytes 66 39 4D 0C: cmp word ptr [ebp + 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 74 7A: je 0x10049451
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 4E C9 00 00: call 0x10055d30
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100493f1
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 9F C9 00 00: call 0x10055d90
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 64 AA 00 00: call 0x10053e70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0e0h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 74 05: je 0x1004942a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0d8h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 0F 84 55 31 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes E9 4B 31 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push ecx
        push ecx
        mov edx, dword ptr [eax + 458h]
        mov dword ptr [eax + 454h], 40000000h
        mov dword ptr [eax + 45ch], edx
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        add eax, 14h
        push eax
        ; Exact mapped bytes E9 0A 31 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 0C 31 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        ; Exact mapped bytes 66 3D 09 00: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x100494a4
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 0A 00: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F8 30 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [ebx + 130h], edi
        mov dword ptr [ebx + 134h], edi
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 9a4h]
        ; Exact mapped bytes E8 4D 5C 08 00: call 0x100cf110
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 E0 A9 00 00: call 0x10053eb0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10000h
        ; Exact mapped bytes E8 0C E3 06 00: call 0x100b7800
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        push edi
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        push edi
        add eax, 14h
        push edi
        push eax
        ; Exact mapped bytes E9 8B 30 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [ebx + 130h], edi
        mov dword ptr [ebx + 134h], edi
        ; Exact mapped bytes 66 39 7D 0C: cmp word ptr [ebp + 0xc], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x1004965c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 7D 08: cmp word ptr [ebp + 8], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 74 0C: je 0x10049530
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 39 7D 0A: cmp word ptr [ebp + 0xa], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes 74 06: je 0x10049530
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 39 7D 0E: cmp word ptr [ebp + 0xe], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x0e
        ; Exact mapped bytes 75 18: jne 0x10049548
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D DC 92 1C 10: mov ecx, dword ptr [0x101c92dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push 1017f3bch
        push 101aa934h
        push ecx
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 DC 56 1C 10: mov edx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 15 D8 56 1C 10: mov dword ptr [0x101c56d8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 45 0A: mov ax, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes E8 3C E5 06 00: call 0x100b7aa0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 4A E5 06 00: call 0x100b7ac0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 22 A9 00 00: call 0x10053eb0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 8C C7 00 00: call 0x10055d30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x100495b3
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 DD C7 00 00: call 0x10055d90
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ecx + 0a7ch]
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push esi
        ; Exact mapped bytes E8 4D 92 02 00: call 0x10072820
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 55 0A: mov dx, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0a
        push ecx
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push esi
        ; Exact mapped bytes E8 C8 97 02 00: call 0x10072dc0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        push 70h
        lea eax, [esp + 1ch]
        push 101aa910h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test byte ptr [esi + 38h], 1
        ; Exact mapped bytes 74 22: je 0x10049640
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        lea edx, [esi + 70h]
        push edx
        add esi, 80h
        push eax
        push esi
        ; Exact mapped bytes E8 D5 AD 02 00: call 0x10074410
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 5C 2F 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        push edi
        ; Exact mapped bytes 66 8B 4D 0E: mov cx, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0e
        add esi, 70h
        push ecx
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 B9 AD 02 00: call 0x10074410
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 40 2F 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 7D 0E: cmp word ptr [ebp + 0xe], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 85 36 2F 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 8]
        sub ebp, edi
        ; Exact mapped bytes 74 0A: je 0x10049677
        __asm _emit 0x74
        __asm _emit 0x0a
        push edi
        dec ebp
        push edi
        push edi
        ; Exact mapped bytes 75 07: jne 0x1004967a
        __asm _emit 0x75
        __asm _emit 0x07
        push 1fh
        ; Exact mapped bytes EB 05: jmp 0x1004967c
        __asm _emit 0xeb
        __asm _emit 0x05
        push edi
        push edi
        push edi
        push 14h
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 29 44 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 56 1C 10: mov edx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 9a4h]
        ; Exact mapped bytes E8 78 5A 08 00: call 0x100cf110
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 0B A8 00 00: call 0x10053eb0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 D5 93 00 00: call 0x10052a90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 DA E9 FF FF: call 0x100480a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 130h], edi
        mov dword ptr [ebx + 134h], edi
        ; Exact mapped bytes E9 C5 2E 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp eax, 4000008h
        ; Exact mapped bytes 75 35: jne 0x10049716
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 66 83 7D 0C 03: cmp word ptr [ebp + 0xc], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 B0 2E 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        push 0
        push 0
        push 0
        lea ecx, [eax + 0ach]
        push ecx
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push 4000008h
        ; Exact mapped bytes E8 1F A6 02 00: call 0x10073d30
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 2E 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4000009h
        ; Exact mapped bytes 75 2A: jne 0x10049747
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        lea edx, [eax + 0ach]
        push 0
        push edx
        push eax
        push 4000009h
        ; Exact mapped bytes E8 EE A5 02 00: call 0x10073d30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 55 2E 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 7D 0A 00 05: cmp word ptr [ebp + 0xa], 0x500
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 49 2E 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 6D 08: mov bp, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6d
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 FD 01: cmp bp, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x01
        ; Exact mapped bytes 74 16: je 0x10049773
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 66 83 FD 02: cmp bp, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x02
        ; Exact mapped bytes 74 10: je 0x10049773
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 FD 03: cmp bp, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x03
        ; Exact mapped bytes 74 0A: je 0x10049773
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 FD 04: cmp bp, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 29 2E 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        and ebp, 0ffffh
        push eax
        push ebp
        ; Exact mapped bytes E8 A3 C4 00 00: call 0x10055c30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0A 2E 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0A 0A: cmp word ptr [ebp + 0xa], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x0a
        mov esi, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 75 72: jne 0x10049812
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, eax
        ; Exact mapped bytes 75 63: jne 0x10049812
        __asm _emit 0x75
        __asm _emit 0x63
        mov ecx, dword ptr [eax + 454h]
        test ecx, ecx
        ; Exact mapped bytes 74 59: je 0x10049812
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 66 83 7D 0C 00: cmp word ptr [ebp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 52: jne 0x10049812
        __asm _emit 0x75
        __asm _emit 0x52
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 D0 E2 06 00: call 0x100b7aa0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 14 A5 00 00: call 0x10053cf0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 1B 00: cmp word ptr [esi + 0x1b], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x100497f6
        __asm _emit 0x74
        __asm _emit 0x13
        lea edx, [esi + 4dh]
        lea eax, [esi + 29h]
        push edx
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        lea ecx, [esi + 19h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes EB 11: jmp 0x10049807
        __asm _emit 0xeb
        __asm _emit 0x11
        lea eax, [esi + 4dh]
        lea ecx, [esi + 29h]
        push eax
        ; Exact mapped bytes 66 8B 45 0C: mov ax, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        lea edx, [esi + 19h]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3E 8D 00 00: call 0x10052550
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0A 0B: cmp word ptr [ebp + 0xa], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 85 7F 2D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 6C 2D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 174h]
        test eax, eax
        ; Exact mapped bytes 0F 84 5E 2D 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0C 00: cmp word ptr [ebp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 53 2D 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 B1 CE 00 00: call 0x10056700
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 2D 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 7ffdfeeah
        cmp eax, 4
        ; Exact mapped bytes 0F 87 3A 2D 00 00: ja 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x3a
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 04 C7 04 10: jmp dword ptr [eax*4 + 0x1004c704]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 39 45 0E: cmp word ptr [ebp + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 85 27 2D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9f4h]
        mov dword ptr [ebx + 130h], eax
        mov dword ptr [ebx + 134h], eax
        push ecx
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 EC C2 00 00: call 0x10055b80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 03 2D 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 10 57 1C 10: mov edx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, edx
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x10049997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, 2bh
        ; Exact mapped bytes 66 39 45 0C: cmp word ptr [ebp + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x0c
        lea edi, [esp + 58h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 74 7C: je 0x1004993b
        __asm _emit 0x74
        __asm _emit 0x7c
        mov esi, dword ptr [esp + 9f4h]
        test esi, esi
        ; Exact mapped bytes 74 0B: je 0x100498d5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, 2bh
        lea edi, [esp + 58h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push 0
        ; Exact mapped bytes 66 89 44 24 5C: mov word ptr [esp + 0x5c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        push 0
        xor eax, eax
        push 0
        ; Exact mapped bytes 66 8B 45 0A: mov ax, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0a
        lea ecx, [esp + 64h]
        push 0
        push ecx
        push eax
        mov ecx, edx
        ; Exact mapped bytes E8 37 A4 02 00: call 0x10073d30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        dec eax
        ; Exact mapped bytes 0F 85 96 2C 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 4
        ; Exact mapped bytes E8 97 41 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        mov dword ptr [ecx + 1d0h], 0
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 4A B1 02 00: call 0x10074a80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 61 2C 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        ; Exact mapped bytes 66 3D 0A 00: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 53 2C 00 00: jae 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x53
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        sub eax, 0
        ; Exact mapped bytes 74 31: je 0x10049984
        __asm _emit 0x74
        __asm _emit 0x31
        dec eax
        ; Exact mapped bytes 0F 85 42 2C 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        mov edx, dword ptr [eax + 0b0h]
        mov eax, dword ptr [eax + 0ach]
        push edx
        push eax
        push 800100a1h
        mov ecx, ebx
        ; Exact mapped bytes E8 D1 25 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x25
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 18 2C 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4D 0A: mov cx, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0a
        push ecx
        mov ecx, edx
        ; Exact mapped bytes E8 1E BA 07 00: call 0x100c53b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xba
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 2C 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 F7 2B 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 21714h]
        test eax, eax
        ; Exact mapped bytes 0F 84 E9 2B 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A8 53 02 00: call 0x1006ed60
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 DF 2B 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 9f4h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push ecx
        mov ecx, dword ptr [edx + 0d48h]
        ; Exact mapped bytes E8 52 72 06 00: call 0x100b0c30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 B9 2B 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 10h
        ; Exact mapped bytes 75 1E: jne 0x10049a07
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 9f4h]
        push eax
        mov ecx, dword ptr [ecx + 0d5ch]
        ; Exact mapped bytes E8 AE 37 03 00: call 0x1007d1b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 95 2B 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 DC 92 1C 10: mov edx, dword ptr [0x101c92dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 1017f3bch
        push 101aa8e8h
        push edx
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 77 2B 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0A 00: cmp word ptr [ebp + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 74 6E: je 0x10049a9a
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1ah
        ; Exact mapped bytes E8 71 40 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 1D B0 50 17 10: mov ebx, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, dword ptr [eax + 4]
        test esi, esi
        ; Exact mapped bytes 0F 84 40 2B 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 48h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        shr ecx, 0ah
        cmp ecx, edx
        ; Exact mapped bytes 75 1F: jne 0x10049a8b
        __asm _emit 0x75
        __asm _emit 0x1f
        lea eax, [esi + 54h]
        push edi
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp esi, dword ptr [eax + 0d0ch]
        ; Exact mapped bytes 75 0B: jne 0x10049a8b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 0d40h]
        ; Exact mapped bytes E8 E5 C3 0A 00: call 0x100f5e70
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, dword ptr [esi + 0b70h]
        test esi, esi
        ; Exact mapped bytes 75 C7: jne 0x10049a5c
        __asm _emit 0x75
        __asm _emit 0xc7
        ; Exact mapped bytes E9 02 2B 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 6D 08: mov bp, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6d
        __asm _emit 0x08
        ; Exact mapped bytes 66 85 ED: test bp, bp
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 0D: jne 0x10049ab0
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        push 0
        push 0
        push 1bh
        ; Exact mapped bytes E9 E1 2A 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FD 01: cmp bp, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x01
        ; Exact mapped bytes 75 0D: jne 0x10049ac3
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E9 CE 2A 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FD 02: cmp bp, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 CF 2A 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 9
        ; Exact mapped bytes E9 B7 2A 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020d03h
        ; Exact mapped bytes 0F 87 40 03 00 00: ja 0x10049e25
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 10 03 00 00: je 0x10049dfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020d01h
        ; Exact mapped bytes 0F 87 F5 02 00 00: ja 0x10049deb
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 15 02 00 00: je 0x10049d11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020a00h
        ; Exact mapped bytes 74 7E: je 0x10049b81
        __asm _emit 0x74
        __asm _emit 0x7e
        cmp eax, 80020d00h
        ; Exact mapped bytes 0F 85 8E 2A 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes 66 8B 88 9C 01 00 00: mov cx, word ptr [eax + 0x19c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x10049b30
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F9 01: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 6C 2A 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 66 C7 80 9C 01 00 00 02 00: mov word ptr [eax + 0x19c], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        push eax
        push esi
        mov ecx, dword ptr [edx + 1c8h]
        ; Exact mapped bytes E8 DA FA 08 00: call 0x100d9630
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        push 0
        ; Exact mapped bytes 74 17: je 0x10049b73
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push 64h
        ; Exact mapped bytes E8 F2 6B FD FF: call 0x10020760
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 29 2A 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 191h
        ; Exact mapped bytes E9 10 2A 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 11 01 00 00: jne 0x10049ca0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 0A: mov ax, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0a
        test al, al
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x10049c54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor ecx, ecx
        mov dword ptr [esp + 10h], edx
        mov cl, byte ptr [esp + 12h]
        ; Exact mapped bytes 66 83 F9 01: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 2D: jne 0x10049bdb
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [ecx + 0cch]
        test esi, esi
        ; Exact mapped bytes 74 1D: je 0x10049bdb
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esp + 9f4h]
        push 0ffffh
        and eax, 0ff00h
        push edx
        push eax
        ; Exact mapped bytes E8 CA 6B 03 00: call 0x100807a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 C1 29 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 75 13: jne 0x10049bfd
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [esp + 9f4h]
        push eax
        push edx
        ; Exact mapped bytes E8 38 25 02 00: call 0x1006c130
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 9F 29 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 75 13: jne 0x10049c1a
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [esp + 9f4h]
        push eax
        push edx
        ; Exact mapped bytes E8 1B AC 02 00: call 0x10074830
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 29 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 64 29 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        mov ecx, dword ptr [ebp + 8]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 61 2B 07 00: call 0x100bc7b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 29 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        test ah, 0ffh
        ; Exact mapped bytes 0F 84 3F 29 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 74 1D: je 0x10049c89
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        ; Exact mapped bytes E8 7C 36 07 00: call 0x100bd300
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x36
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 13 29 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 9f4h]
        push edx
        push 20800h
        ; Exact mapped bytes E8 95 24 02 00: call 0x1006c130
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 FC 28 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 F3 28 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 8]
        xor eax, eax
        mov dword ptr [esp + 10h], ebp
        mov al, byte ptr [esp + 12h]
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 29: jne 0x10049ce5
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0cch]
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x10049ce5
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [esp + 9f4h]
        push 0
        push edx
        push 800h
        ; Exact mapped bytes E8 C0 6A 03 00: call 0x100807a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 B7 28 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 A4 28 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9f4h]
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        ; Exact mapped bytes E8 A4 2A 07 00: call 0x100bc7b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8B 28 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 1c8h]
        ; Exact mapped bytes 66 8B 88 9C 01 00 00: mov cx, word ptr [eax + 0x19c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 75 1E: jne 0x10049d48
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 C7 80 9C 01 00 00 0B 00: mov word ptr [eax + 0x19c], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1c8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes E9 54 28 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 4B 28 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 80 9C 01 00 00 0B 00: mov word ptr [eax + 0x19c], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1c8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ebp, dword ptr [ebp + 0ch]
        test ebp, ebp
        ; Exact mapped bytes 75 0D: jne 0x10049d7e
        __asm _emit 0x75
        __asm _emit 0x0d
        push ebp
        push ebp
        push ebp
        push 192h
        ; Exact mapped bytes E9 13 28 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 1
        ; Exact mapped bytes 75 10: jne 0x10049d93
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1aeh
        ; Exact mapped bytes E9 FE 27 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 2
        ; Exact mapped bytes 75 10: jne 0x10049da8
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 198h
        ; Exact mapped bytes E9 E9 27 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 3
        ; Exact mapped bytes 75 10: jne 0x10049dbd
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1afh
        ; Exact mapped bytes E9 D4 27 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 4
        ; Exact mapped bytes 75 10: jne 0x10049dd2
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1b0h
        ; Exact mapped bytes E9 BF 27 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 5
        ; Exact mapped bytes 0F 85 C1 27 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1b1h
        ; Exact mapped bytes E9 A6 27 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020d02h
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x10049ef2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 27 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ebp + 0ch]
        push eax
        mov eax, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        mov ecx, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes E8 E0 F3 08 00: call 0x100d9200
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 77 27 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020d04h
        ; Exact mapped bytes 74 2E: je 0x10049e5a
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp eax, 80020d07h
        ; Exact mapped bytes 74 21: je 0x10049e54
        __asm _emit 0x74
        __asm _emit 0x21
        cmp eax, 80020d08h
        ; Exact mapped bytes 0F 85 5E 27 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 1c8h]
        ; Exact mapped bytes E8 C1 F2 08 00: call 0x100d9110
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 27 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1
        ; Exact mapped bytes EB 1C: jmp 0x10049e76
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes E8 85 F6 08 00: call 0x100d94f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 27 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1c8h]
        ; Exact mapped bytes E8 6A F1 08 00: call 0x100d8ff0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 11 27 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020f04h
        ; Exact mapped bytes 0F 87 2C 02 00 00: ja 0x1004a0c2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x1004a095
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020f00h
        ; Exact mapped bytes 0F 87 63 01 00 00: ja 0x1004a00a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x10049fe4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 7ffdf2f6h
        cmp eax, 4
        ; Exact mapped bytes 0F 87 E1 26 00 00: ja 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 18 C7 04 10: jmp dword ptr [eax*4 + 0x1004c718]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes 66 83 B8 9C 01 00 00 01: cmp word ptr [eax + 0x19c], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 07: jne 0x10049edf
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 89 B0 9C 01 00 00: mov word ptr [eax + 0x19c], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb0
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push esi
        push esi
        push 195h
        ; Exact mapped bytes E8 BE 3B FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 1c8h]
        ; Exact mapped bytes 66 8B 9F 9C 01 00 00: mov bx, word ptr [edi + 0x19c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x9f
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B DE: cmp bx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xde
        ; Exact mapped bytes 74 0A: je 0x10049f14
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 88 26 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp eax, esi
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 1C: je 0x10049f3a
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 9f4h]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 02 F7 08 00: call 0x100d9630
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        mov ecx, edi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes E9 62 26 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9f4h]
        inc eax
        push eax
        lea edx, [esp + 1ch]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 75 12: jne 0x10049f67
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1c8h]
        ; Exact mapped bytes 66 89 B1 9C 01 00 00: mov word ptr [ecx + 0x19c], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb1
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 18h]
        push edx
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 1D 26 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push esi
        push esi
        push 190h
        ; Exact mapped bytes E9 05 26 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1c8h]
        ; Exact mapped bytes E8 E4 F1 08 00: call 0x100d9180
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 FB 25 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes E8 FE F1 08 00: call 0x100d91b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 E5 25 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 9f4h]
        push edx
        mov ecx, dword ptr [ecx + 1c8h]
        push eax
        ; Exact mapped bytes E8 BC EC 08 00: call 0x100d8c90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 196h
        ; Exact mapped bytes E9 AD 25 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esp + 9f4h]
        push edx
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push ecx
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 CB AA 04 00: call 0x10094ad0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 92 25 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020f01h
        ; Exact mapped bytes 74 5E: je 0x1004a06f
        __asm _emit 0x74
        __asm _emit 0x5e
        cmp eax, 80020f02h
        ; Exact mapped bytes 74 39: je 0x1004a051
        __asm _emit 0x74
        __asm _emit 0x39
        cmp eax, 80020f03h
        ; Exact mapped bytes 0F 85 79 25 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0aaaaaaabh
        mov ecx, dword ptr [ebp + 8]
        mul dword ptr [ebp + 10h]
        mov eax, dword ptr [esp + 9f4h]
        shr edx, 6
        push edx
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push ecx
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 44 B3 04 00: call 0x10095390
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 4B 25 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 9f4h]
        push eax
        mov ecx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes E8 56 8F 04 00: call 0x10092fc0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 2D 25 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esp + 9f4h]
        push edx
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push ecx
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 00 AB 04 00: call 0x10094b90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 07 25 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ebp + 8]
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 C3 F1 02 00: call 0x10079280
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA 24 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 7ffdf0fbh
        cmp eax, 7
        ; Exact mapped bytes 0F 87 CC 24 00 00: ja 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcc
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 2C C7 04 10: jmp dword ptr [eax*4 + 0x1004c72c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esp + 9f4h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 F2 6D 03 00: call 0x10080ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 A9 24 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0e0h]
        mov edx, dword ptr [ecx + 0dch]
        cmp byte ptr [eax + 0a0h], 0
        ; Exact mapped bytes 75 1C: jne 0x1004a12a
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [esp + 9f4h]
        mov ecx, dword ptr [ebp + 0ch]
        push edx
        mov edx, dword ptr [ebp + 8]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 1B 8F 04 00: call 0x10093040
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 72 24 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edx + 0d4h]
        xor eax, eax
        mov al, byte ptr [esi + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 84 A2 02 00 00: je 0x1004a3e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 84 9A 02 00 00: je 0x1004a3e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edx + 0d8h]
        xor eax, eax
        mov al, byte ptr [esi + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x1004a1de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 76 52: jbe 0x1004a1b5
        __asm _emit 0x76
        __asm _emit 0x52
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 4B: jne 0x1004a1b5
        __asm _emit 0x75
        __asm _emit 0x4b
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 76 36: jbe 0x1004a1a7
        __asm _emit 0x76
        __asm _emit 0x36
        mov ebx, dword ptr [esp + 9f4h]
        mov ecx, esi
        push ebx
        ; Exact mapped bytes E8 C0 BF 03 00: call 0x10086140
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebx + 2dh]
        lea ecx, [ebx + 24h]
        push eax
        mov eax, dword ptr [ebx + 8]
        lea edx, [ebx + 0ch]
        push ecx
        mov ecx, dword ptr [ebx + 4]
        push edx
        mov edx, dword ptr [ebx]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 BE 88 FC FF: call 0x10012a60
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 F5 23 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 90 BF 03 00: call 0x10086140
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 E7 23 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 76 14: jbe 0x1004a1d0
        __asm _emit 0x76
        __asm _emit 0x14
        mov ecx, dword ptr [esp + 9f4h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 F5 BF 03 00: call 0x100861c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x1004a430
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 E7 BF 03 00: call 0x100861c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 BE 23 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edx + 0e0h]
        xor eax, eax
        mov al, byte ptr [esi + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 75 63: jne 0x1004a252
        __asm _emit 0x75
        __asm _emit 0x63
        mov al, byte ptr [esi + 2e5h]
        cmp al, 8
        ; Exact mapped bytes 75 14: jne 0x1004a20d
        __asm _emit 0x75
        __asm _emit 0x14
        mov ebx, dword ptr [esp + 9f4h]
        mov ecx, esi
        push ebx
        ; Exact mapped bytes E8 08 08 04 00: call 0x1008aa10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x1004a180
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp al, 5
        ; Exact mapped bytes 75 18: jne 0x1004a229
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ebp + 0ch]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 4C FD 03 00: call 0x10089f70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 07 02 00 00: jmp 0x1004a430
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 76 14: jbe 0x1004a244
        __asm _emit 0x76
        __asm _emit 0x14
        mov ebx, dword ptr [esp + 9f4h]
        mov ecx, esi
        push ebx
        ; Exact mapped bytes E8 61 F5 03 00: call 0x100897a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x1004a180
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 53 F5 03 00: call 0x100897a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 4A 23 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edx + 0e4h]
        xor eax, eax
        mov al, byte ptr [edi + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 75 60: jne 0x1004a2c3
        __asm _emit 0x75
        __asm _emit 0x60
        mov al, byte ptr [edi + 2d5h]
        cmp al, 2
        ; Exact mapped bytes 74 2D: je 0x1004a29a
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp al, 3
        ; Exact mapped bytes 74 29: je 0x1004a29a
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 76 14: jbe 0x1004a28c
        __asm _emit 0x76
        __asm _emit 0x14
        mov ecx, dword ptr [esp + 9f4h]
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 79 42 04 00: call 0x1008e500
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 A4 01 00 00: jmp 0x1004a430
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 6B 42 04 00: call 0x1008e500
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 02 23 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 76 14: jbe 0x1004a2b5
        __asm _emit 0x76
        __asm _emit 0x14
        mov ebx, dword ptr [esp + 9f4h]
        mov ecx, edi
        push ebx
        ; Exact mapped bytes E8 80 44 04 00: call 0x1008e730
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 CB FE FF FF: jmp 0x1004a180
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 72 44 04 00: call 0x1008e730
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 D9 22 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + 0dch]
        xor eax, eax
        mov al, byte ptr [edx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 84 C4 22 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 2e5h]
        cmp al, 6
        ; Exact mapped bytes 75 14: jne 0x1004a2f6
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [esp + 9f4h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AF F4 03 00: call 0x100897a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x1004a430
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 7
        ; Exact mapped bytes 0F 85 9E 22 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 58: je 0x1004a35a
        __asm _emit 0x74
        __asm _emit 0x58
        mov esi, dword ptr [esp + 9f4h]
        lea eax, [esp + 58h]
        lea edx, [esi + 0ch]
        push edx
        push 101aa8c0h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 58h]
        push -1
        push ecx
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 CC 65 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esi, 2dh
        push esi
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 47 AA 04 00: call 0x10094d90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 36 AB 04 00: call 0x10094e90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x1004a430
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [edx + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x1004a430
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ebp, [eax + 2dh]
        mov ecx, dword ptr [esi + 0f10h]
        push ebp
        mov eax, dword ptr [ecx + 6ch]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1004a3ab
        __asm _emit 0x74
        __asm _emit 0x0c
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E8: jne 0x1004a38e
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x1004a430
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        push 0
        ; Exact mapped bytes 75 24: jne 0x1004a3d5
        __asm _emit 0x75
        __asm _emit 0x24
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        push eax
        push 101ad0e8h
        push 2
        push 0
        push 80010fa0h
        mov ecx, ebx
        ; Exact mapped bytes E8 7D 1B 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes EB 5B: jmp 0x1004a430
        __asm _emit 0xeb
        __asm _emit 0x5b
        push ebp
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        push eax
        push ebp
        ; Exact mapped bytes EB E2: jmp 0x1004a3c3
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 76 2A: jbe 0x1004a412
        __asm _emit 0x76
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x1004a412
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 86 A2 21 00 00: jbe 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa2
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 9f4h]
        mov ecx, dword ptr [edx + 0d4h]
        push ebx
        ; Exact mapped bytes E8 C3 B2 03 00: call 0x100856d0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 6E FD FF FF: jmp 0x1004a180
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 86 7F 21 00 00: jbe 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x7f
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        mov ecx, dword ptr [edx + 0d4h]
        push eax
        ; Exact mapped bytes E8 50 B3 03 00: call 0x10085780
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        lea ecx, [eax + 2dh]
        lea edx, [eax + 24h]
        push ecx
        push edx
        mov edx, dword ptr [eax + 8]
        lea ecx, [eax + 0ch]
        push ecx
        mov ecx, dword ptr [eax + 4]
        push edx
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 07 86 FC FF: call 0x10012a60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 3E 21 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esp + 9f4h]
        xor edx, edx
        mov eax, dword ptr [eax + 0dch]
        mov ecx, dword ptr [eax + 0d4h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 18: jne 0x1004a49b
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 76 3C: jbe 0x1004a4c6
        __asm _emit 0x76
        __asm _emit 0x3c
        mov edx, dword ptr [ebp + 8]
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push esi
        push eax
        push edx
        ; Exact mapped bytes E8 87 B3 03 00: call 0x10085820
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x1004a4c6
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [eax + 0dch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 18: jne 0x1004a4c6
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 76 11: jbe 0x1004a4c6
        __asm _emit 0x76
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 6A 9E 03 00: call 0x10084330
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov ebp, dword ptr [ebp + 10h]
        mov dword ptr [esp + 1d8h], edx
        cmp ebp, 800h
        mov dword ptr [esp + 1dch], eax
        ; Exact mapped bytes 72 16: jb 0x1004a4fb
        __asm _emit 0x72
        __asm _emit 0x16
        push 800h
        lea ecx, [esp + 1e4h]
        push esi
        push ecx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes EB 14: jmp 0x1004a50f
        __asm _emit 0xeb
        __asm _emit 0x14
        inc ebp
        lea edx, [esp + 1e0h]
        push ebp
        push esi
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esp + 1d8h]
        push eax
        ; Exact mapped bytes E8 5E 88 FC FF: call 0x10012d80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 75 20 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x1004a580
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 4B: jne 0x1004a580
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 66 39 05 44 D1 1A 10: cmp word ptr [0x101ad144], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 5A 20 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 86 4F 20 00 00: jbe 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x4f
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9f4h]
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x1004a567
        __asm _emit 0x75
        __asm _emit 0x0d
        push eax
        push eax
        push eax
        push 202h
        ; Exact mapped bytes E9 2A 20 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 2C 20 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 20ch
        ; Exact mapped bytes E9 11 20 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 3C D1 1A 10: cmp eax, dword ptr [0x101ad13c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 10 20 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes A1 40 D1 1A 10: mov eax, dword ptr [0x101ad140]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp edx, eax
        ; Exact mapped bytes 0F 85 00 20 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov edi, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 0F BF 35 44 D1 1A 10: movsx esi, word ptr [0x101ad144]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        inc eax
        lea ecx, [esp + 18h]
        push eax
        push edi
        push ecx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp esi, 6
        ; Exact mapped bytes 74 5A: je 0x1004a61a
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp esi, 5
        ; Exact mapped bytes 74 55: je 0x1004a61a
        __asm _emit 0x74
        __asm _emit 0x55
        cmp esi, 3
        ; Exact mapped bytes 0F 85 CE 1F 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 18h]
        lea eax, [esp + 58h]
        push edx
        push 101aa890h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 58h]
        push -1
        push ecx
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 06 63 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 10h]
        push edx
        push edi
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 0e4h]
        ; Exact mapped bytes E8 2B 46 04 00: call 0x1008ec40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 1F 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 18h]
        lea eax, [esp + 58h]
        push edx
        push 101aa860h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 58h]
        push -1
        push ecx
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 BA 62 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 10h]
        push edx
        push edi
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes E8 0F FA 03 00: call 0x1008a070
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 36 1F 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 05 44 D1 1A 10: movsx eax, word ptr [0x101ad144]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 0F 86 DC 01 00 00: jbe 0x1004a854
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x1004a6a4
        __asm _emit 0x75
        __asm _emit 0x28
        push eax
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 1
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 B1 18 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 F8 1E 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 9f4h]
        inc ecx
        push ecx
        lea eax, [esp + 1ch]
        push edx
        push eax
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 76 18: jbe 0x1004a6d8
        __asm _emit 0x76
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x1004a6d8
        __asm _emit 0x75
        __asm _emit 0x11
        lea ecx, [esp + 18h]
        lea edx, [esp + 58h]
        push ecx
        push 101aa838h
        push edx
        ; Exact mapped bytes EB 0F: jmp 0x1004a6e7
        __asm _emit 0xeb
        __asm _emit 0x0f
        lea eax, [esp + 18h]
        lea ecx, [esp + 58h]
        push eax
        push 101aa810h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 A1 44 D1 1A 10: mov ax, word ptr [0x101ad144]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 75 35: jne 0x1004a731
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 76 6F: jbe 0x1004a772
        __asm _emit 0x76
        __asm _emit 0x6f
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 18h]
        push edx
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 0e4h]
        ; Exact mapped bytes E8 72 47 04 00: call 0x1008ee90
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 0dch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes EB 41: jmp 0x1004a772
        __asm _emit 0xeb
        __asm _emit 0x41
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 3B: jne 0x1004a772
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x1004a772
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x1004a772
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 18h]
        push ecx
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 5F FF 03 00: call 0x1008a6c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esp + 18h]
        push eax
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 08 A6 04 00: call 0x10094d90
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 58h]
        push -1
        push edx
        push 0
        ; Exact mapped bytes E8 64 61 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esp + 18h]
        push eax
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 DE A6 04 00: call 0x10094e90
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 DC 56 1C 10: mov edx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edx, eax
        ; Exact mapped bytes 0F 85 D7 1D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 C7 1D 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0f10h]
        lea edx, [esp + 18h]
        push edx
        mov eax, dword ptr [ecx + 6ch]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1004a7fc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x1004a7db
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E9 A0 1D 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 18h]
        push 0
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x1004a82d
        __asm _emit 0x75
        __asm _emit 0x27
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 2
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 28 17 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 6F 1D 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        lea edx, [esp + 1ch]
        push eax
        push edx
        push 2
        push 0
        push 80010fa0h
        mov ecx, ebx
        ; Exact mapped bytes E8 01 17 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x17
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 1D 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x1004a865
        __asm _emit 0x75
        __asm _emit 0x0d
        push eax
        push eax
        push eax
        push 202h
        ; Exact mapped bytes E9 2C 1D 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 74 0E: je 0x1004a878
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 5
        ; Exact mapped bytes 74 09: je 0x1004a878
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 6
        ; Exact mapped bytes 0F 85 24 1D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 85 60 08 00 00: jne 0x1004b0e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 55 08 00 00: jne 0x1004b0e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 201h
        ; Exact mapped bytes E9 F3 1C 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor esi, esi
        cmp eax, esi
        ; Exact mapped bytes 76 0A: jbe 0x1004a8b1
        __asm _emit 0x76
        __asm _emit 0x0a
        ; Exact mapped bytes 3B 05 3C D1 1A 10: cmp eax, dword ptr [0x101ad13c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 19: je 0x1004a8c8
        __asm _emit 0x74
        __asm _emit 0x19
        cmp eax, esi
        ; Exact mapped bytes 0F 85 E5 1C 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8B 0D 40 D1 1A 10: mov ecx, dword ptr [0x101ad140]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 D4 1C 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        cmp eax, esi
        ; Exact mapped bytes 75 0D: jne 0x1004a8dc
        __asm _emit 0x75
        __asm _emit 0x0d
        push esi
        push esi
        push esi
        push 209h
        ; Exact mapped bytes E9 B5 1C 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9f4h]
        inc eax
        push eax
        lea edx, [esp + 1ch]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [esp + 18h]
        push 101ad0e8h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x1004a9bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 101ace48h
        push 101ad14ch
        ; Exact mapped bytes 89 35 3C D1 1A 10: mov dword ptr [0x101ad13c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 89 35 40 D1 1A 10: mov dword ptr [0x101ad140], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 35 44 D1 1A 10: mov word ptr [0x101ad144], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 89 35 48 D1 1A 10: mov dword ptr [0x101ad148], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 35 58 D1 1A 10: mov dword ptr [0x101ad158], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 89 35 5C D1 1A 10: mov dword ptr [0x101ad15c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0dch]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 05: jne 0x1004a95e
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0d8h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 05: jne 0x1004a97c
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 83 A6 04 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        push esi
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 1
        push esi
        push 80010fa0h
        ; Exact mapped bytes E8 A1 15 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        push esi
        push esi
        push esi
        push 20ah
        ; Exact mapped bytes E9 D5 1B 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 DC 56 1C 10: mov edx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edx, eax
        ; Exact mapped bytes 75 6C: jne 0x1004aa37
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 5E: je 0x1004aa35
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [esi + 0f10h]
        lea edx, [esp + 18h]
        push edx
        mov eax, dword ptr [ecx + 6ch]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1004a9f5
        __asm _emit 0x74
        __asm _emit 0x09
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x1004a9d7
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB 40: jmp 0x1004aa35
        __asm _emit 0xeb
        __asm _emit 0x40
        lea eax, [esp + 18h]
        push 0
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x1004aa13
        __asm _emit 0x75
        __asm _emit 0x14
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        push eax
        push 101ad0e8h
        ; Exact mapped bytes EB 12: jmp 0x1004aa25
        __asm _emit 0xeb
        __asm _emit 0x12
        lea ecx, [esp + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        lea edx, [esp + 1ch]
        push eax
        push edx
        push 2
        push 0
        push 80010fa0h
        mov ecx, ebx
        ; Exact mapped bytes E8 1B 15 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        xor esi, esi
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 76 48: jbe 0x1004aa84
        __asm _emit 0x76
        __asm _emit 0x48
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 75 43: jne 0x1004aa84
        __asm _emit 0x75
        __asm _emit 0x43
        lea eax, [esp + 18h]
        lea ecx, [esp + 58h]
        push eax
        push 101aa7e8h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov eax, dword ptr [edx + 0dch]
        xor edx, edx
        mov ecx, dword ptr [eax + 0e0h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 4C: jne 0x1004aac4
        __asm _emit 0x75
        __asm _emit 0x4c
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 BE FF 03 00: call 0x1008aa40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 40: jmp 0x1004aac4
        __asm _emit 0xeb
        __asm _emit 0x40
        lea ecx, [esp + 18h]
        lea edx, [esp + 58h]
        push ecx
        push 101aa7c0h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        add esp, 0ch
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 0e4h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 0A: jne 0x1004aac4
        __asm _emit 0x75
        __asm _emit 0x0a
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 2C 47 04 00: call 0x1008f1f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esp + 18h]
        push eax
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 65 A4 04 00: call 0x10094f50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 58h]
        push -1
        push edx
        push esi
        ; Exact mapped bytes E8 02 5E 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 99 1A 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 76 0A: jbe 0x1004ab14
        __asm _emit 0x76
        __asm _emit 0x0a
        ; Exact mapped bytes 3B 05 3C D1 1A 10: cmp eax, dword ptr [0x101ad13c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 19: je 0x1004ab2b
        __asm _emit 0x74
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 0F 85 27 02 00 00: jne 0x1004ad41
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8B 0D 40 D1 1A 10: mov ecx, dword ptr [0x101ad140]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 16 02 00 00: jne 0x1004ad41
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 77 26: ja 0x1004ab58
        __asm _emit 0x77
        __asm _emit 0x26
        ; Exact mapped bytes 66 A1 44 D1 1A 10: mov ax, word ptr [0x101ad144]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x1004ab48
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 54 1A 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 206h
        ; Exact mapped bytes E9 39 1A 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9f4h]
        inc eax
        push eax
        lea edx, [esp + 1ch]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [esp + 18h]
        push 101ad0e8h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x1004ac08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0dch]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 05: jne 0x1004aba5
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0d8h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 05: jne 0x1004abc3
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 3C A4 04 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 1
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 58 13 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 20bh
        ; Exact mapped bytes E9 89 19 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 DC 56 1C 10: mov edx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edx, eax
        ; Exact mapped bytes 75 6A: jne 0x1004ac81
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 5E: je 0x1004ac81
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [esi + 0f10h]
        lea edx, [esp + 18h]
        push edx
        mov eax, dword ptr [ecx + 6ch]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1004ac41
        __asm _emit 0x74
        __asm _emit 0x09
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x1004ac23
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB 40: jmp 0x1004ac81
        __asm _emit 0xeb
        __asm _emit 0x40
        lea eax, [esp + 18h]
        push 0
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x1004ac5f
        __asm _emit 0x75
        __asm _emit 0x14
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        push eax
        push 101ad0e8h
        ; Exact mapped bytes EB 12: jmp 0x1004ac71
        __asm _emit 0xeb
        __asm _emit 0x12
        lea ecx, [esp + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        lea edx, [esp + 1ch]
        push eax
        push edx
        push 2
        push 0
        push 80010fa0h
        mov ecx, ebx
        ; Exact mapped bytes E8 CF 12 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x12
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 76 4A: jbe 0x1004acd2
        __asm _emit 0x76
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x1004acd2
        __asm _emit 0x75
        __asm _emit 0x43
        lea eax, [esp + 18h]
        lea ecx, [esp + 58h]
        push eax
        push 101aa798h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov eax, dword ptr [edx + 0dch]
        xor edx, edx
        mov ecx, dword ptr [eax + 0e0h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 4C: jne 0x1004ad12
        __asm _emit 0x75
        __asm _emit 0x4c
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 70 FD 03 00: call 0x1008aa40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 40: jmp 0x1004ad12
        __asm _emit 0xeb
        __asm _emit 0x40
        lea ecx, [esp + 18h]
        lea edx, [esp + 58h]
        push ecx
        push 101aa770h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        add esp, 0ch
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 0e4h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 0A: jne 0x1004ad12
        __asm _emit 0x75
        __asm _emit 0x0a
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 DE 44 04 00: call 0x1008f1f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 28 A2 04 00: call 0x10094f50
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esp + 58h]
        push -1
        push eax
        push 0
        ; Exact mapped bytes E8 C4 5B 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 5B 18 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A1 44 D1 1A 10: mov ax, word ptr [0x101ad144]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x1004ad57
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 45 18 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 201h
        ; Exact mapped bytes E9 2A 18 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 77 10: ja 0x1004ad7e
        __asm _emit 0x77
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 202h
        ; Exact mapped bytes E9 13 18 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9f4h]
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 08 18 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 05 44 D1 1A 10: movsx eax, word ptr [0x101ad144]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, 6
        ; Exact mapped bytes 74 09: je 0x1004ada9
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 5
        ; Exact mapped bytes 0F 85 F3 17 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 F0 19 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, eax
        mov ecx, 15h
        xor eax, eax
        mov edi, edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 8]
        add esp, 4
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        push edx
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 1D F5 03 00: call 0x1008a300
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 B4 17 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 05 44 D1 1A 10: movsx eax, word ptr [0x101ad144]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [esp + 10h], eax
        test ecx, ecx
        ; Exact mapped bytes 0F 86 8E 02 00 00: jbe 0x1004b08c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 9f4h]
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [ebp]
        cmp ecx, eax
        ; Exact mapped bytes 75 45: jne 0x1004ae56
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, dword ptr [ebp + 4]
        ; Exact mapped bytes A1 40 D1 1A 10: mov eax, dword ptr [0x101ad140]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp edx, eax
        ; Exact mapped bytes 75 39: jne 0x1004ae56
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        push 0
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 1
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 FF 10 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 46 17 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 43 19 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        push 8
        mov edi, eax
        ; Exact mapped bytes E8 3A 19 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x19
        __asm _emit 0x12
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp]
        mov dword ptr [edi], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edi + 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [esi], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [esp + 18h]
        add esp, 8
        cmp eax, 6
        ; Exact mapped bytes 74 3C: je 0x1004aec6
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp eax, 5
        ; Exact mapped bytes 74 37: je 0x1004aec6
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        mov edx, dword ptr [ecx + 0dch]
        mov eax, dword ptr [edx + 0e0h]
        mov byte ptr [eax + 2e5h], 7
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [esi]
        push ecx
        push edx
        push 80010f06h
        mov ecx, ebx
        ; Exact mapped bytes E8 8F 10 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 D6 16 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 18 81 FC FF: call 0x10012ff0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        push 54h
        mov ebp, eax
        ; Exact mapped bytes E8 BF 18 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x18
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, eax
        mov ecx, 15h
        xor eax, eax
        mov edi, edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [esi]
        lea edi, [ebp + 2dh]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        or ecx, 0ffffffffh
        xor eax, eax
        add esp, 4
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        lea ebx, [edx + 2dh]
        mov eax, ecx
        mov esi, edi
        mov edi, ebx
        push edx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        xor eax, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        lea ecx, [edx + 0ch]
        lea edi, [ebp + 0ch]
        mov dword ptr [esp + 14h], ecx
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 14h]
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        xor eax, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        lea edi, [ebp + 24h]
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        lea ebp, [edx + 24h]
        mov eax, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0dch]
        mov ecx, dword ptr [edx + 0e0h]
        ; Exact mapped bytes E8 B8 F7 03 00: call 0x1008a740
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x1004aff6
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [esp + 10h]
        lea ecx, [esp + 158h]
        push eax
        push 101aa8c0h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        lea edx, [esp + 158h]
        push -1
        push edx
        push 0
        ; Exact mapped bytes E8 2D 59 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 AC 9D 04 00: call 0x10094d90
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 9A 9E 04 00: call 0x10094e90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 DC 56 1C 10: mov edx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edx, eax
        ; Exact mapped bytes 0F 85 93 15 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 83 15 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0f10h]
        push ebx
        mov eax, dword ptr [ecx + 6ch]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1004b03c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E8: jne 0x1004b01f
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes E9 60 15 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        push 0
        ; Exact mapped bytes 75 29: jne 0x1004b06b
        __asm _emit 0x75
        __asm _emit 0x29
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 18h]
        inc eax
        push eax
        push 101ad0e8h
        push 2
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 EA 0E 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 31 15 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 18h]
        inc eax
        push eax
        push ebx
        push 2
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 C9 0E 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 15 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 26: jne 0x1004b0b7
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 85 D2 FC FF FF: jne 0x1004ad6e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 C7 FC FF FF: jne 0x1004ad6e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 201h
        ; Exact mapped bytes E9 DA 14 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 74 09: je 0x1004b0c5
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 6
        ; Exact mapped bytes 0F 85 D7 14 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x1004b0e3
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x1004b0e3
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 201h
        ; Exact mapped bytes E9 AE 14 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 203h
        ; Exact mapped bytes E9 9E 14 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80020fa0h
        ; Exact mapped bytes 0F 87 F1 08 00 00: ja 0x1004b9ef
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F0 06 00 00: je 0x1004b7f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 7ffdf0f2h
        mov edi, 6
        cmp eax, edi
        ; Exact mapped bytes 0F 87 86 14 00 00: ja 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 4C C7 04 10: jmp dword ptr [eax*4 + 0x1004c74c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        cmp eax, 1
        mov edi, dword ptr [edx + 0dch]
        ; Exact mapped bytes 75 67: jne 0x1004b198
        __asm _emit 0x75
        __asm _emit 0x67
        mov esi, dword ptr [esp + 9f4h]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push eax
        ; Exact mapped bytes E8 F8 7B FC FF: call 0x10012d40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0e0h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 85 3D 14 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 0F 84 30 14 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 5ch
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        push 0
        push 0
        push 0
        push eax
        push ecx
        push 80010f06h
        mov ecx, ebx
        ; Exact mapped bytes E8 C8 0D 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        inc edi
        add esi, 8
        cmp edi, eax
        ; Exact mapped bytes 75 DC: jne 0x1004b16f
        __asm _emit 0x75
        __asm _emit 0xdc
        ; Exact mapped bytes E9 04 14 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 FC 13 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        ; Exact mapped bytes E8 49 7B FC FF: call 0x10012d00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0e0h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 75 0F: jne 0x1004b1d7
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push esi
        push edx
        ; Exact mapped bytes E8 9E ED 03 00: call 0x10089f70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 13 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e4h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 85 B0 13 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push esi
        push edx
        ; Exact mapped bytes E8 5A 38 04 00: call 0x1008ea50
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 13 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 57: jne 0x1004b259
        __asm _emit 0x75
        __asm _emit 0x57
        mov ebp, dword ptr [ebp + 0ch]
        test ebp, ebp
        ; Exact mapped bytes 75 0D: jne 0x1004b216
        __asm _emit 0x75
        __asm _emit 0x0d
        push ebp
        push ebp
        push ebp
        push 1f9h
        ; Exact mapped bytes E9 7B 13 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 1
        ; Exact mapped bytes 75 10: jne 0x1004b22b
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1fah
        ; Exact mapped bytes E9 66 13 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 2
        ; Exact mapped bytes 75 10: jne 0x1004b240
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1fbh
        ; Exact mapped bytes E9 51 13 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 3
        ; Exact mapped bytes 0F 85 53 13 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 20fh
        ; Exact mapped bytes E9 38 13 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 3A 13 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 9f4h]
        mov ecx, 9
        mov edi, 101ad13ch
        push 0
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 1
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 B7 0C 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x12
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1feh
        ; Exact mapped bytes E9 E8 12 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 57: jne 0x1004b307
        __asm _emit 0x75
        __asm _emit 0x57
        mov ebp, dword ptr [ebp + 0ch]
        test ebp, ebp
        ; Exact mapped bytes 75 0D: jne 0x1004b2c4
        __asm _emit 0x75
        __asm _emit 0x0d
        push ebp
        push ebp
        push ebp
        push 22bh
        ; Exact mapped bytes E9 CD 12 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 1
        ; Exact mapped bytes 75 10: jne 0x1004b2d9
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 22ch
        ; Exact mapped bytes E9 B8 12 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 2
        ; Exact mapped bytes 75 10: jne 0x1004b2ee
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 22dh
        ; Exact mapped bytes E9 A3 12 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 3
        ; Exact mapped bytes 0F 85 A5 12 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 241h
        ; Exact mapped bytes E9 8A 12 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 8C 12 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 9f4h]
        mov ecx, 9
        mov edi, 101ad13ch
        push 0
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 1
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 09 0C 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0c
        __asm _emit 0x12
        __asm _emit 0x00
        push 22h
        lea eax, [esp + 5ch]
        push 10180058h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 58h]
        push -1
        push ecx
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 90 55 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 27 12 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 42: jne 0x1004b3be
        __asm _emit 0x75
        __asm _emit 0x42
        mov ebp, dword ptr [ebp + 0ch]
        test ebp, ebp
        ; Exact mapped bytes 75 0D: jne 0x1004b390
        __asm _emit 0x75
        __asm _emit 0x0d
        push ebp
        push ebp
        push ebp
        push 200h
        ; Exact mapped bytes E9 01 12 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 1
        ; Exact mapped bytes 75 10: jne 0x1004b3a5
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 201h
        ; Exact mapped bytes E9 EC 11 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 2
        ; Exact mapped bytes 0F 85 EE 11 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1fbh
        ; Exact mapped bytes E9 D3 11 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 D5 11 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 D1 1A 10: mov eax, dword ptr [0x101ad140]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x1004b406
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [esp + 9f4h]
        add edx, 10h
        push edx
        push 101ad14ch
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        push 0
        push 0
        push 0
        push 1ffh
        ; Exact mapped bytes E9 8B 11 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 89 11 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        push 0
        push 0
        push 0
        push 231h
        ; Exact mapped bytes E9 5E 11 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x1004b588
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x1004b4e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [eax + 0dch]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 05: jne 0x1004b468
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0d8h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 05: jne 0x1004b486
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 79 9B 04 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 3
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 95 0A 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x00
        push 1ch
        lea edx, [esp + 5ch]
        push 10180168h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 58h]
        push -1
        push eax
        push 0
        ; Exact mapped bytes E8 1C 54 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 10 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0dch]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 05: jne 0x1004b507
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [ecx + 0d8h]
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 05: jne 0x1004b525
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 DA 9A 04 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 3
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 F6 09 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x00
        push 1ch
        lea edx, [esp + 5ch]
        push 10180184h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 58h]
        push -1
        push eax
        push 0
        ; Exact mapped bytes E8 7D 53 03 00: call 0x10080900
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 14 10 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push 0
        test eax, eax
        push 0
        push 0
        ; Exact mapped bytes 0F 84 ED FD FF FF: je 0x1004b386
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 201h
        ; Exact mapped bytes E9 EE 0F 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 86 E9 00 00 00: jbe 0x1004b697
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 EB 11 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x12
        __asm _emit 0x00
        push 8
        mov esi, eax
        ; Exact mapped bytes E8 E2 11 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 9fch]
        add esp, 8
        mov edx, dword ptr [ecx]
        mov dword ptr [esi], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [esi + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes 8B 0D 3C D1 1A 10: mov ecx, dword ptr [0x101ad13c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov edx, dword ptr [esi]
        cmp ecx, edx
        ; Exact mapped bytes 8B 15 40 D1 1A 10: mov edx, dword ptr [0x101ad140]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 75 54: jne 0x1004b643
        __asm _emit 0x75
        __asm _emit 0x54
        cmp edx, dword ptr [esi + 4]
        ; Exact mapped bytes 75 4F: jne 0x1004b643
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes 89 15 3C D1 1A 10: mov dword ptr [0x101ad13c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        push 0
        push 0
        push 24ah
        ; Exact mapped bytes A3 40 D1 1A 10: mov dword ptr [0x101ad140], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes E8 96 24 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 3
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 12 09 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 59 0F 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 50 0F 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 85 47 0F 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 3D 44 D1 1A 10: cmp word ptr [0x101ad144], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 75 27: jne 0x1004b685
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 243h
        ; Exact mapped bytes E8 2B 24 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 0A 0F 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 11 03 00 00: jmp 0x1004b9a8
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 3D 44 D1 1A 10: cmp word ptr [0x101ad144], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 0F 85 F8 0E 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 242h
        ; Exact mapped bytes E9 DD 0E 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 86 17 01 00 00: jbe 0x1004b7d6
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 DA 10 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0x00
        push 8
        mov esi, eax
        ; Exact mapped bytes E8 D1 10 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esp + 9fch]
        add esp, 8
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 4], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 4], edx
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [esi]
        cmp eax, ecx
        ; Exact mapped bytes 8B 0D 40 D1 1A 10: mov ecx, dword ptr [0x101ad140]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 75 69: jne 0x1004b76a
        __asm _emit 0x75
        __asm _emit 0x69
        cmp ecx, dword ptr [esi + 4]
        ; Exact mapped bytes 75 64: jne 0x1004b76a
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x1004b71a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 0dch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 20ah
        ; Exact mapped bytes E8 80 23 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes 89 0D 3C D1 1A 10: mov dword ptr [0x101ad13c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov edx, dword ptr [edi + 4]
        push 101ad0e8h
        ; Exact mapped bytes 89 15 40 D1 1A 10: mov dword ptr [0x101ad140], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        mov ecx, ebx
        push eax
        push 101ad0e8h
        push 3
        push 0
        push 80010fa0h
        ; Exact mapped bytes E8 EB 07 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 32 0E 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 29 0E 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 85 20 0E 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 24bh
        ; Exact mapped bytes E8 1E 23 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 FD 0D 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0dch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 55 98 04 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80010f01h
        mov ecx, ebx
        ; Exact mapped bytes E8 7F 07 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 C6 0D 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3D 44 D1 1A 10 03: cmp word ptr [0x101ad144], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 B8 0D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 209h
        ; Exact mapped bytes E9 9D 0D 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 85 9D 0D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, 1
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x1004b88d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 74 7D: je 0x1004b88d
        __asm _emit 0x74
        __asm _emit 0x7d
        cmp eax, 2
        ; Exact mapped bytes 0F 85 83 0D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov ebx, dword ptr [esp + 9f4h]
        sub edx, 24h
        lea ecx, [esp + 18h]
        lea eax, [ebx + 24h]
        push edx
        push eax
        push ecx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 DC 56 1C 10: mov edx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edx, eax
        ; Exact mapped bytes 0F 85 53 0D 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 43 0D 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0f10h]
        lea edx, [esp + 18h]
        push edx
        mov eax, dword ptr [ecx + 6ch]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1004b880
        __asm _emit 0x74
        __asm _emit 0x0c
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x1004b85f
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E9 1C 0D 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 98 58 0A 00: call 0x100f1120
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F 0D 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 9f4h]
        ; Exact mapped bytes A1 44 D1 1A 10: mov eax, dword ptr [0x101ad144]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 14h], eax
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 89 0D 3C D1 1A 10: mov dword ptr [0x101ad13c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4]
        ; Exact mapped bytes 89 15 40 D1 1A 10: mov dword ptr [0x101ad140], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 46 08: mov ax, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 66 A3 44 D1 1A 10: mov word ptr [0x101ad144], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0ch]
        lea edx, [esi + 10h]
        ; Exact mapped bytes 89 0D 48 D1 1A 10: mov dword ptr [0x101ad148], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov edi, edx
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        dec ecx
        ; Exact mapped bytes 74 0C: je 0x1004b8de
        __asm _emit 0x74
        __asm _emit 0x0c
        push edx
        push 101ad14ch
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 DC 56 1C 10: mov edx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edx, eax
        ; Exact mapped bytes 75 0E: jne 0x1004b8fb
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 25 58 0A 00: call 0x100f1120
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 0ch]
        cmp ebp, 1
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x1004b9ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7C 24 14 00: cmp word ptr [esp + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 75 41: jne 0x1004b950
        __asm _emit 0x75
        __asm _emit 0x41
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 07: jne 0x1004b91b
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x1004b950
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [esi + 4]
        push 0
        test eax, eax
        push 0
        push 0
        ; Exact mapped bytes 75 07: jne 0x1004b92f
        __asm _emit 0x75
        __asm _emit 0x07
        push 205h
        ; Exact mapped bytes EB 05: jmp 0x1004b934
        __asm _emit 0xeb
        __asm _emit 0x05
        push 204h
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 71 21 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 20 9A 04 00: call 0x10095370
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 08 03: cmp word ptr [esi + 8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x03
        ; Exact mapped bytes 75 2C: jne 0x1004b983
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 27: je 0x1004b983
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 205h
        ; Exact mapped bytes E8 3E 21 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 ED 99 04 00: call 0x10095370
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 76 08: mov si, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 FE 06: cmp si, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x06
        ; Exact mapped bytes 74 0A: je 0x1004b997
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 FE 04: cmp si, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 05 0C 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7C 24 14 00: cmp word ptr [esp + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F9 0B 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 5D 96 04 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80010f01h
        mov ecx, ebx
        ; Exact mapped bytes E8 87 05 12 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 CE 0B 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 3
        ; Exact mapped bytes 0F 85 C5 0B 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 C8: je 0x1004b9a8
        __asm _emit 0x74
        __asm _emit 0xc8
        mov eax, dword ptr [eax + 0dch]
        mov ecx, eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB B4: jmp 0x1004b9a3
        __asm _emit 0xeb
        __asm _emit 0xb4
        cmp eax, 8002d001h
        ; Exact mapped bytes 0F 87 03 06 00 00: ja 0x1004bffd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 3C 05 00 00: je 0x1004bf3c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80022001h
        ; Exact mapped bytes 0F 87 06 04 00 00: ja 0x1004be11
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 86 03 00 00: je 0x1004bd97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 7ffdf05fh
        cmp eax, 93h
        ; Exact mapped bytes 0F 87 7B 0B 00 00: ja 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1004c784h]
        ; Exact mapped bytes FF 24 8D 68 C7 04 10: jmp dword ptr [ecx*4 + 0x1004c768]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x10
        cmp dword ptr [ebx + 134h], 100h
        ; Exact mapped bytes 75 29: jne 0x1004ba65
        __asm _emit 0x75
        __asm _emit 0x29
        xor esi, esi
        mov dword ptr [ebx + 130h], esi
        mov dword ptr [ebx + 134h], esi
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 4D 0A: mov cx, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0a
        push edx
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 8D 26 01 00: call 0x1005e0f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x1004ba9f
        __asm _emit 0xeb
        __asm _emit 0x3a
        xor esi, esi
        mov dword ptr [ebx + 130h], esi
        mov dword ptr [ebx + 134h], esi
        ; Exact mapped bytes 66 83 7D 0A 05: cmp word ptr [ebp + 0xa], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x05
        ; Exact mapped bytes 75 25: jne 0x1004ba9f
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 66 39 75 08: cmp word ptr [ebp + 8], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 74 14: je 0x1004ba94
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        ; Exact mapped bytes E8 EE 18 01 00: call 0x1005d380
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x1004ba9f
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 91 1C 01 00: call 0x1005d730
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 0A: mov ax, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 2C 00: cmp ax, 0x2c
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x1004bab8
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 45 0C: mov ax, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D 0E: mov cx, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0e
        push eax
        push ecx
        push esi
        push 1
        ; Exact mapped bytes EB 29: jmp 0x1004bae1
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 66 3D 3C 00: cmp ax, 0x3c
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x00
        ; Exact mapped bytes 75 2E: jne 0x1004baec
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x1004bad6
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        push edx
        push eax
        push 1
        ; Exact mapped bytes EB 0A: jmp 0x1004bae0
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x1004baec
        __asm _emit 0x75
        __asm _emit 0x10
        push esi
        push esi
        push 2
        push esi
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 D4 18 01 00: call 0x1005d3c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0A 0A: cmp word ptr [ebp + 0xa], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 85 A5 0A 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push esi
        xor ecx, 0aaaaaaaah
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 33 11 07 00: call 0x100bcc40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8A 0A 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0C 00: cmp word ptr [ebp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x1004bbf5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x1004bb4c
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        push edx
        ; Exact mapped bytes 66 8B 45 0A: mov ax, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 0d48h]
        push eax
        ; Exact mapped bytes E8 09 53 06 00: call 0x100b0e50
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 50 0A 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0A 00: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 75 1E: jne 0x1004bb70
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        mov eax, dword ptr [edx + 0d48h]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 F5 7A 08 00: call 0x100d3660
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 0A 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 14 00: cmp ax, 0x14
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 22 0A 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 2A: jne 0x1004bbaa
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 8B F3 0A 00: call 0x100faf20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d48h]
        ; Exact mapped bytes E8 3B 53 06 00: call 0x100b0ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 03 00 00: jmp 0x1004bfa1
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 40 F1 0A 00: call 0x100fad00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 59 B0 FD FF: call 0x10026c20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0d0ch]
        push eax
        ; Exact mapped bytes E8 47 28 01 00: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d48h]
        mov ecx, dword ptr [edx + 0a0h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes E9 A7 09 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 6D 08: mov bp, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6d
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 FD 0A: cmp bp, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x0a
        ; Exact mapped bytes 75 26: jne 0x1004bc25
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        mov edx, dword ptr [ecx + 0d48h]
        mov ecx, dword ptr [edx + 0a4h]
        ; Exact mapped bytes E8 48 7A 08 00: call 0x100d3660
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7a
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0ah
        ; Exact mapped bytes E9 6C 09 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 66 83 FD 02: cmp bp, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x02
        push 0
        push 0
        ; Exact mapped bytes 75 ED: jne 0x1004bc1e
        __asm _emit 0x75
        __asm _emit 0xed
        push 130h
        ; Exact mapped bytes E9 56 09 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 134h], 400h
        ; Exact mapped bytes 0F 85 51 09 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebx + 130h], eax
        mov dword ptr [ebx + 134h], eax
        mov eax, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 55 0A: mov dx, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0a
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 EA 23 01 00: call 0x1005e060
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 09 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 3C D1 1A 10: mov ecx, dword ptr [0x101ad13c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 10 09 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3D 44 D1 1A 10 06: cmp word ptr [0x101ad144], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 02 09 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 27: jne 0x1004bcc7
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 244h
        ; Exact mapped bytes E8 E9 1D FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 CA 08 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        push 0
        push 0
        push 0
        push 245h
        ; Exact mapped bytes E9 9F 08 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x1004bd09
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 2C 4D FE FF: call 0x10030a30
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 93 08 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes E8 90 0A 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 9e8h], 0
        ; Exact mapped bytes 74 15: je 0x1004bd3b
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ebp + 8]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 D7 74 FC FF: call 0x10013210
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1004bd3d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov dword ptr [esp + 9e8h], 0ffffffffh
        ; Exact mapped bytes A3 34 57 1C 10: mov dword ptr [0x101c5734], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 AC 75 FC FF: call 0x10013300
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 57 1C 10: mov ecx, dword ptr [0x101c5734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 1F 79 FC FF: call 0x10013680
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 36 08 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [esp + 9f4h]
        mov edx, dword ptr [ebp + 0ch]
        push eax
        mov eax, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 34 57 1C 10: mov ecx, dword ptr [0x101c5734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        ; Exact mapped bytes E8 CB 79 FC FF: call 0x10013750
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 57 1C 10: mov ecx, dword ptr [0x101c5734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 EE 78 FC FF: call 0x10013680
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 05 08 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebx + 130h], eax
        mov dword ptr [ebx + 134h], eax
        ; Exact mapped bytes 66 83 7D 0A 01: cmp word ptr [ebp + 0xa], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 EC 07 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 0D 0C 57 1C 10: mov ecx, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 FD A7 02 00: call 0x100765c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        test eax, 3e000000h
        ; Exact mapped bytes 74 26: je 0x1004bdf3
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, eax
        xor edx, edx
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        shr ecx, 8
        and ecx, 1
        shr eax, 19h
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        and eax, 1fh
        push edx
        push eax
        lea eax, [edi + 0ch]
        push eax
        ; Exact mapped bytes E8 ED F3 0A 00: call 0x100fb1e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        add edi, 0ch
        shr ecx, 19h
        and ecx, 1fh
        push ecx
        ; Exact mapped bytes 8B 0D 0C 57 1C 10: mov ecx, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 74 BA 02 00: call 0x10077880
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 8B 07 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002c001h
        ; Exact mapped bytes 0F 87 DC 00 00 00: ja 0x1004bef8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x1004bea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 80025000h
        ; Exact mapped bytes 74 4B: je 0x1004be74
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp eax, 80025002h
        ; Exact mapped bytes 74 1E: je 0x1004be4e
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp eax, 80025003h
        ; Exact mapped bytes 0F 85 61 07 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 107d8h], edx
        ; Exact mapped bytes E9 4E 07 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 131h
        ; Exact mapped bytes E8 4C 1C FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 28 07 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push 1
        xor ecx, 0aaaaaaaah
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B5 0D 07 00: call 0x100bcc40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 80 0D 07 00: call 0x100bcc20
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 06 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 8]
        cmp ebp, 2000000h
        ; Exact mapped bytes 77 17: ja 0x1004bec7
        __asm _emit 0x77
        __asm _emit 0x17
        ; Exact mapped bytes 74 29: je 0x1004bedb
        __asm _emit 0x74
        __asm _emit 0x29
        cmp ebp, 10000h
        ; Exact mapped bytes 74 21: je 0x1004bedb
        __asm _emit 0x74
        __asm _emit 0x21
        cmp ebp, 1000000h
        ; Exact mapped bytes 74 19: je 0x1004bedb
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E9 D5 06 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 4000000h
        ; Exact mapped bytes 74 0C: je 0x1004bedb
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ebp, 8000000h
        ; Exact mapped bytes 0F 85 C1 06 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9f4h]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D C8 56 1C 10: mov dword ptr [0x101c56c8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes 89 15 CC 56 1C 10: mov dword ptr [0x101c56cc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E9 A4 06 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002c002h
        ; Exact mapped bytes 74 26: je 0x1004bf25
        __asm _emit 0x74
        __asm _emit 0x26
        cmp eax, 8002c003h
        ; Exact mapped bytes 0F 85 92 06 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 84 87 06 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 CE 1A 10: mov ecx, dword ptr [0x101ace54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes E9 77 06 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 190h
        ; Exact mapped bytes E8 99 53 FE FF: call 0x100312d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 60 06 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0A 00: cmp word ptr [ebp + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 74 73: je 0x1004bfb6
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 10h]
        push 0
        test eax, eax
        ; Exact mapped bytes 76 25: jbe 0x1004bf71
        __asm _emit 0x76
        __asm _emit 0x25
        mov esi, dword ptr [esp + 9f8h]
        push esi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push esi
        push 258h
        ; Exact mapped bytes E8 F4 47 FD FF: call 0x10020760
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 06 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 384h
        ; Exact mapped bytes E8 2B 1B FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2
        mov edx, dword ptr [ecx + 0d48h]
        mov eax, dword ptr [edx + 180h]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 3F D3 FD FF: call 0x100292e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0d48h]
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes E9 E6 05 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 384h
        ; Exact mapped bytes E8 E4 1A FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2
        mov eax, dword ptr [edx + 0d48h]
        mov ecx, dword ptr [eax + 180h]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 F8 D2 FD FF: call 0x100292e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d48h]
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes E9 9F 05 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002f004h
        ; Exact mapped bytes 0F 87 A3 03 00 00: ja 0x1004c3ab
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 79 03 00 00: je 0x1004c387
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002f001h
        ; Exact mapped bytes 0F 87 9D 02 00 00: ja 0x1004c2b6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E3 01 00 00: je 0x1004c202
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002d002h
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x1004c139
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002d010h
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x1004c122
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002e003h
        ; Exact mapped bytes 0F 85 5C 05 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 86 51 05 00 00: jbe 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp eax, 1
        ; Exact mapped bytes 74 3F: je 0x1004c092
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp eax, 2
        ; Exact mapped bytes 74 3A: je 0x1004c092
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp eax, 7a120h
        ; Exact mapped bytes 0F 85 39 05 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 00 D1 1A 10: mov eax, dword ptr [0x101ad100]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 9f4h]
        xor eax, 0aaaaaaaah
        push 0
        add eax, 7a120h
        push 0
        xor eax, 0aaaaaaaah
        push ecx
        ; Exact mapped bytes A3 00 D1 1A 10: mov dword ptr [0x101ad100], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        push 262h
        ; Exact mapped bytes E9 FF 04 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes E8 8B EC 0A 00: call 0x100fad30
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 8]
        cmp ebp, 1
        ; Exact mapped bytes 75 57: jne 0x1004c104
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        add edi, 37ch
        push 0
        push edi
        push 26ch
        ; Exact mapped bytes E8 E8 19 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 00 D1 1A 10: mov edx, dword ptr [0x101ad100]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes A1 04 D1 1A 10: mov eax, dword ptr [0x101ad104]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor edx, 0aaaaaaaah
        xor eax, 0aaaaaaaah
        add edx, 30d40h
        add eax, 4e20h
        xor edx, 0aaaaaaaah
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 89 15 00 D1 1A 10: mov dword ptr [0x101ad100], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes A3 04 D1 1A 10: mov dword ptr [0x101ad104], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes E9 98 04 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 2
        ; Exact mapped bytes 0F 85 8F 04 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        add edi, 37ch
        push 0
        push edi
        push 276h
        ; Exact mapped bytes E9 6F 04 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 1f4h
        ; Exact mapped bytes E8 9C 51 FE FF: call 0x100312d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 63 04 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0A 00: cmp word ptr [ebp + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 0
        push 0
        ; Exact mapped bytes 74 51: je 0x1004c197
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 385h
        ; Exact mapped bytes E8 5A 19 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        mov edx, dword ptr [ecx + 0d48h]
        mov eax, dword ptr [edx + 180h]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ecx + 50h]
        mov ecx, ebx
        push edx
        push 4
        push 80011034h
        ; Exact mapped bytes E8 CD FD 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 0d48h]
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes E9 05 04 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 384h
        ; Exact mapped bytes E8 09 19 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d48h]
        mov eax, dword ptr [edx + 180h]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ecx + 0a4h]
        and edx, 0fffffffeh
        cmp edx, 0a0h
        ; Exact mapped bytes 75 07: jne 0x1004c1d4
        __asm _emit 0x75
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 0C D1 FD FF: call 0x100292e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d48h]
        mov edx, dword ptr [ecx + 180h]
        mov ecx, dword ptr [edx + 78h]
        mov eax, dword ptr [ecx + 0a4h]
        and al, 0feh
        cmp eax, 0ach
        ; Exact mapped bytes 0F 85 A6 FD FF FF: jne 0x1004bfa1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E9 9A FD FF FF: jmp 0x1004bf9c
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 0E: mov ax, word ptr [ebp + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0e
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 39: jne 0x1004c244
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        mov dword ptr [edx*4 + 101ace80h], eax
        mov cl, byte ptr [ebp + 0ch]
        ; Exact mapped bytes 88 0D 99 CE 1A 10: mov byte ptr [0x101ace99], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 9D EA 0A 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 91 4B 01 00: call 0x10060dd0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 03 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x1004c25a
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 38ch
        ; Exact mapped bytes E9 37 03 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x1004c270
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 38dh
        ; Exact mapped bytes E9 21 03 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x1004c286
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 38eh
        ; Exact mapped bytes E9 0B 03 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x1004c29c
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 38fh
        ; Exact mapped bytes E9 F5 02 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F6 02 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 390h
        ; Exact mapped bytes E9 DB 02 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002f002h
        ; Exact mapped bytes 74 3F: je 0x1004c2fc
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp eax, 8002f003h
        ; Exact mapped bytes 0F 85 D4 02 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0E 00: cmp word ptr [ebp + 0xe], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C9 02 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A2 99 CE 1A 10: mov byte ptr [0x101ace99], al
        __asm _emit 0xa2
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d68h]
        ; Exact mapped bytes E8 24 C5 04 00: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 393h
        ; Exact mapped bytes E9 95 02 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0E 00: cmp word ptr [ebp + 0xe], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 95 02 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        mov esi, dword ptr [eax*4 + 101ace80h]
        mov dword ptr [eax*4 + 101ace80h], 0ffffffffh
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        mov byte ptr [edx + 101ace94h], 0
        ; Exact mapped bytes 66 0F B6 05 99 CE 1A 10: movzx ax, byte ptr [0x101ace99]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 39 45 08: cmp word ptr [ebp + 8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 75 1F: jne 0x1004c359
        __asm _emit 0x75
        __asm _emit 0x1f
        xor ecx, ecx
        mov eax, 101ace80h
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 0D: jne 0x1004c353
        __asm _emit 0x75
        __asm _emit 0x0d
        add eax, 4
        inc ecx
        cmp eax, 101ace94h
        ; Exact mapped bytes 7C F0: jl 0x1004c341
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes EB 06: jmp 0x1004c359
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 88 0D 99 CE 1A 10: mov byte ptr [0x101ace99], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0d68h]
        ; Exact mapped bytes E8 A6 C4 04 00: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 5A E9 0A 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 2E 4B 01 00: call 0x10060eb0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 15 02 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 0E 00: cmp word ptr [ebp + 0xe], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 0A 02 00 00: je 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dl, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [eax + 0d68h]
        ; Exact mapped bytes E8 8A C6 04 00: call 0x10098a30
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 F1 01 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002f00ah
        ; Exact mapped bytes 0F 87 68 01 00 00: ja 0x1004c51e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x1004c4ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002f005h
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x1004c46a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002f008h
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x1004c452
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8002f009h
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x1004c41c
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [esp + 9f4h]
        mov ecx, dword ptr [eax + 4]
        mov esi, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, 0aaaaaaaah
        ; Exact mapped bytes E8 CD E8 0A 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [eax + 4ch], esi
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 0d68h]
        ; Exact mapped bytes E8 F9 C3 04 00: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 80 01 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + 0ch]
        cmp ebp, 1
        ; Exact mapped bytes 75 10: jne 0x1004c434
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 391h
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 2
        ; Exact mapped bytes 74 09: je 0x1004c442
        __asm _emit 0x74
        __asm _emit 0x09
        cmp ebp, 3
        ; Exact mapped bytes 0F 85 5A 01 00 00: jne 0x1004c59c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 392h
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x1004c591
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 9f4h]
        mov ecx, 7
        mov edi, 101ace80h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        mov dword ptr [eax*4 + 101ace80h], 0ffffffffh
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        mov eax, 0ffh
        mov byte ptr [ecx + 101ace94h], 0
        ; Exact mapped bytes A2 99 CE 1A 10: mov byte ptr [0x101ace99], al
        __asm _emit 0xa2
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 39 45 08: cmp word ptr [ebp + 8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 75 1F: jne 0x1004c4b7
        __asm _emit 0x75
        __asm _emit 0x1f
        xor ecx, ecx
        mov eax, 101ace80h
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 0D: jne 0x1004c4b1
        __asm _emit 0x75
        __asm _emit 0x0d
        add eax, 4
        inc ecx
        cmp eax, 101ace94h
        ; Exact mapped bytes 7C F0: jl 0x1004c49f
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes EB 06: jmp 0x1004c4b7
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 88 0D 99 CE 1A 10: mov byte ptr [0x101ace99], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 8B 55 0A: mov dx, word ptr [ebp + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0a
        push edx
        ; Exact mapped bytes E8 07 E8 0A 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 DB 49 01 00: call 0x10060eb0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d68h]
        ; Exact mapped bytes E8 2B C3 04 00: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x1004c59c
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        mov edx, dword ptr [ecx + 0d68h]
        mov esi, dword ptr [edx + 0e4h]
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes E8 18 32 0B 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e1ffh
        or ecx, 105h
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes EB 7E: jmp 0x1004c59c
        __asm _emit 0xeb
        __asm _emit 0x7e
        cmp eax, 8002f10bh
        ; Exact mapped bytes 74 39: je 0x1004c55e
        __asm _emit 0x74
        __asm _emit 0x39
        cmp eax, 8002f201h
        ; Exact mapped bytes 75 70: jne 0x1004c59c
        __asm _emit 0x75
        __asm _emit 0x70
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 76 69: jbe 0x1004c59c
        __asm _emit 0x76
        __asm _emit 0x69
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 32ah
        ; Exact mapped bytes E8 67 15 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [esp + 9f4h]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 D4 E7 0A 00: call 0x100fad30
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 3E: jmp 0x1004c59c
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        push eax
        push ecx
        lea edx, [esp + 60h]
        push 101aa758h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        lea eax, [esp + 58h]
        push 0
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 5ch]
        push eax
        push ecx
        push 3b6h
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 14 15 FD FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 9e0h]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 9dch
        ret 8
    }
}
