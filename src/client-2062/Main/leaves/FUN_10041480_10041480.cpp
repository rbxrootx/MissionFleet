// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10041480 .. +0x29E bytes.
extern "C" __declspec(naked) void FUN_10041480_10041480() {
    __asm {
        push -1
        push 1016e6ach
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
        sub esp, 0ch
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [ecx], 10175918h
        mov edx, dword ptr [ecx + 0e0h]
        mov eax, dword ptr [ecx + 0e4h]
        xor ebp, ebp
        cmp edx, eax
        mov dword ptr [esp + 20h], 1
        mov dword ptr [esp + 0ch], edx
        ; Exact mapped bytes 0F 84 BE 01 00 00: je 0x10041685
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes EB 04: jmp 0x100414ce
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx]
        mov eax, dword ptr [eax + 88h]
        mov ebx, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        cmp ebx, ecx
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x100415f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [ecx + 88h]
        mov esi, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        cmp esi, ecx
        ; Exact mapped bytes 74 6B: je 0x10041561
        __asm _emit 0x74
        __asm _emit 0x6b
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 0c8h], ebp
        ; Exact mapped bytes 76 1B: jbe 0x1004151b
        __asm _emit 0x76
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 0bch]
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x1004151b
        __asm _emit 0x74
        __asm _emit 0x11
        push eax
        ; Exact mapped bytes E8 74 B2 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb2
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        add esp, 4
        mov dword ptr [edx + 0bch], ebp
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 0c4h], ebp
        ; Exact mapped bytes 76 1B: jbe 0x10041540
        __asm _emit 0x76
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 0b8h]
        cmp eax, ebp
        ; Exact mapped bytes 74 11: je 0x10041540
        __asm _emit 0x74
        __asm _emit 0x11
        push eax
        ; Exact mapped bytes E8 4F B2 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb2
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esp, 4
        mov dword ptr [eax + 0b8h], ebp
        mov eax, dword ptr [esi]
        cmp eax, ebp
        ; Exact mapped bytes 74 0B: je 0x10041551
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 38 B2 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb2
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi], ebp
        mov ecx, dword ptr [ebx]
        add esi, 4
        mov edx, dword ptr [ecx + 88h]
        cmp esi, dword ptr [edx + 8]
        ; Exact mapped bytes 75 95: jne 0x100414f6
        __asm _emit 0x75
        __asm _emit 0x95
        mov eax, dword ptr [ebx]
        mov edi, dword ptr [eax + 88h]
        mov ecx, dword ptr [edi + 8]
        mov esi, dword ptr [edi + 4]
        mov eax, ecx
        cmp eax, ecx
        ; Exact mapped bytes 74 0E: je 0x10041583
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax]
        add eax, 4
        mov dword ptr [esi], edx
        add esi, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x10041575
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [edi + 8]
        mov ecx, edi
        push eax
        push esi
        ; Exact mapped bytes E8 41 D6 05 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi + 8], esi
        mov ecx, dword ptr [ebx]
        mov esi, dword ptr [ecx + 88h]
        cmp esi, ebp
        ; Exact mapped bytes 74 27: je 0x100415c5
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 D9 B1 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        push esi
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebp
        mov dword ptr [esi + 0ch], ebp
        ; Exact mapped bytes E8 CA B1 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebx]
        add esp, 8
        mov dword ptr [edx + 88h], ebp
        mov eax, dword ptr [ebx]
        cmp eax, ebp
        ; Exact mapped bytes 74 0B: je 0x100415d6
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 B3 B1 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebx], ebp
        mov eax, dword ptr [esp + 10h]
        add ebx, 4
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        cmp ebx, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 85 F6 FE FF FF: jne 0x100414e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx]
        mov edi, dword ptr [eax + 88h]
        mov ecx, dword ptr [edi + 8]
        mov esi, dword ptr [edi + 4]
        mov eax, ecx
        cmp eax, ecx
        ; Exact mapped bytes 74 0E: je 0x10041614
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax]
        add eax, 4
        mov dword ptr [esi], edx
        add esi, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x10041606
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [edi + 8]
        mov ecx, edi
        push eax
        push esi
        ; Exact mapped bytes E8 B0 D5 05 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi + 8], esi
        mov edi, dword ptr [esp + 10h]
        mov ecx, dword ptr [edi]
        mov esi, dword ptr [ecx + 88h]
        cmp esi, ebp
        ; Exact mapped bytes 74 27: je 0x1004165a
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 44 B1 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        push esi
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebp
        mov dword ptr [esi + 0ch], ebp
        ; Exact mapped bytes E8 35 B1 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        add esp, 8
        mov dword ptr [edx + 88h], ebp
        mov eax, dword ptr [edi]
        cmp eax, ebp
        ; Exact mapped bytes 74 0B: je 0x1004166b
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 1E B1 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb1
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi], ebp
        mov eax, dword ptr [esp + 14h]
        add edi, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, dword ptr [eax + 0e4h]
        ; Exact mapped bytes 0F 85 48 FE FF FF: jne 0x100414ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        pop ebx
        lea esi, [ecx + 0dch]
        mov ecx, dword ptr [ecx + 0e4h]
        mov edi, dword ptr [esi + 4]
        mov eax, ecx
        cmp eax, ecx
        ; Exact mapped bytes 74 0E: je 0x100416a8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax]
        add eax, 4
        mov dword ptr [edi], edx
        add edi, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x1004169a
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 8]
        mov ecx, esi
        push eax
        push edi
        ; Exact mapped bytes E8 1C D5 05 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi + 8], edi
        mov edi, dword ptr [esp + 10h]
        mov ecx, dword ptr [edi + 0ech]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100416d1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0ech], ebp
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes E8 A6 B0 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebp
        mov dword ptr [esi + 0ch], ebp
        mov eax, dword ptr [edi + 0d0h]
        push eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 8D B0 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        add esp, 8
        mov dword ptr [edi + 0d0h], ebp
        mov dword ptr [edi + 0d4h], ebp
        mov dword ptr [edi + 0d8h], ebp
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        ret
    }
}
