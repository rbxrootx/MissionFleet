// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B9380 .. +0x135C bytes.
extern "C" __declspec(naked) void FUN_100b9380_100B9380() {
    __asm {
        push -1
        push 10172236h
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
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 6B ED F7 FF: call 0x10038130
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xed
        __asm _emit 0xf7
        __asm _emit 0xff
        xor ebx, ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi], 10176210h
        mov dword ptr [esi + 50h], ebp
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes E8 B8 33 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 6F: je 0x100b9469
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100b9415
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100b9415
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100b9417
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 5dch
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 80 55 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b946b
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100b946b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 2ch]
        push 6ch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 124h], edi
        ; Exact mapped bytes E8 20 33 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 30: je 0x100b94c0
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100b94a8
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 75 02: jne 0x100b94aa
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 28h]
        push 5ddh
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A2 8E F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100b94c6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 28h]
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 128h], eax
        ; Exact mapped bytes E8 F9 90 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 C2 32 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 3E: je 0x100b952c
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2
        ; Exact mapped bytes 7E 12: jle 0x100b950f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b950f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 80h
        ; Exact mapped bytes EB 02: jmp 0x100b9511
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp - 0ah]
        push 5ddh
        push edx
        lea edx, [edi - 96h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 36 8E F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b952e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 12ch], eax
        ; Exact mapped bytes E8 91 90 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 5A 32 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 35: je 0x100b958b
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0eh
        ; Exact mapped bytes 7E 12: jle 0x100b9577
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9577
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 380h
        ; Exact mapped bytes EB 02: jmp 0x100b9579
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 640h
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D7 8D F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b958d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 130h], eax
        ; Exact mapped bytes E8 32 90 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0a0h
        ; Exact mapped bytes E8 F8 31 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 49: je 0x100b9601
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 8
        ; Exact mapped bytes 7E 12: jle 0x100b95d9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b95d9
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 200h
        ; Exact mapped bytes EB 02: jmp 0x100b95db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 16h]
        push 640h
        push edx
        lea edx, [edi + 11h]
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
        ; Exact mapped bytes E8 C1 DC F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b9603
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 144h], eax
        ; Exact mapped bytes E8 89 31 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 49: je 0x100b9670
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x100b9648
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9648
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 240h
        ; Exact mapped bytes EB 02: jmp 0x100b964a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 14h]
        push 640h
        push edx
        lea edx, [edi + 2eh]
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
        ; Exact mapped bytes E8 52 DC F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b9672
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 14ch], eax
        ; Exact mapped bytes E8 1A 31 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 7
        ; Exact mapped bytes 74 49: je 0x100b96df
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100b96b7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b96b7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x100b96b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 17h]
        push 640h
        push edx
        lea edx, [edi + 4eh]
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
        ; Exact mapped bytes E8 E3 DB F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b96e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 148h], eax
        ; Exact mapped bytes E8 AB 30 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 4C: je 0x100b9751
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ah
        ; Exact mapped bytes 7E 12: jle 0x100b9726
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9726
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 280h
        ; Exact mapped bytes EB 02: jmp 0x100b9728
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 19h]
        push 640h
        push edx
        lea edx, [edi + 12ch]
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
        ; Exact mapped bytes E8 71 DB F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b9753
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 140h], eax
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        cmp dword ptr [eax + 170h], 0bh
        ; Exact mapped bytes 7E 0F: jle 0x100b977a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100b977a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100b977c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 0b8h], 2
        mov dword ptr [esi + 0b4h], 100000h
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [esi + 0d0h], ebx
        mov dword ptr [esi + 180h], ebx
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0b0h], ebx
        lea ecx, [esi + 0bch]
        mov dword ptr [esi + 120h], ebx
        xor eax, eax
        mov dword ptr [esi + 0ach], 0ffffffffh
        mov dword ptr [ecx], eax
        push 0e8h
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        mov dword ptr [esi + 0d4h], 0d0d0d0h
        mov dword ptr [esi + 0d8h], 40ff40h
        mov eax, 0ffffffh
        mov dword ptr [esi + 0dch], 0ff4040h
        mov dword ptr [esi + 0e0h], eax
        mov dword ptr [esi + 0e4h], 0ccccffh
        mov dword ptr [esi + 0e8h], eax
        mov dword ptr [esi + 0ech], eax
        mov dword ptr [esi + 0f0h], 83add7h
        ; Exact mapped bytes E8 7C 2F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 9
        ; Exact mapped bytes 74 33: je 0x100b9867
        __asm _emit 0x74
        __asm _emit 0x33
        push 646464h
        push ebx
        lea edx, [ebp + 2dh]
        push 0ffffffh
        push edx
        lea ecx, [edi + 136h]
        lea edx, [ebp + 19h]
        push ecx
        push edx
        ; Exact mapped bytes 8B 15 A8 56 1C 10: mov edx, dword ptr [0x101c56a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [edi + 0a6h]
        push ecx
        push edx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 EB F0 F5 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b9869
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0e8h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 23 2F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ah
        ; Exact mapped bytes 74 33: je 0x100b98c0
        __asm _emit 0x74
        __asm _emit 0x33
        push 646464h
        push ebx
        lea ecx, [ebp + 2dh]
        push 0ffffffh
        lea edx, [edi + 294h]
        push ecx
        ; Exact mapped bytes 8B 0D A4 56 1C 10: mov ecx, dword ptr [0x101c56a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 19h
        push edx
        add edi, 155h
        push ebp
        push edi
        push ecx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 92 F0 F5 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b98c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 118h]
        mov dword ptr [esi + 114h], eax
        mov ebp, 672h
        mov byte ptr [esp + 1ch], bl
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b98e8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B8 56 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b98f5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0B 56 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 114h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b990c
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 94 56 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b9919
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E7 55 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 118h]
        mov ecx, 0fffdh
        push 90h
        mov dword ptr [eax + 90h], 0dh
        mov eax, dword ptr [esi + 114h]
        mov dword ptr [eax + 90h], 60h
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 2B 2E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0bh
        ; Exact mapped bytes 74 4B: je 0x100b99d0
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 71h
        ; Exact mapped bytes 7E 12: jle 0x100b99a6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b99a6
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 1c4h]
        ; Exact mapped bytes EB 02: jmp 0x100b99a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esi + 124h]
        mov edi, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 8B 52 26: mov dx, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 C8 00: add dx, 0xc8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0x00
        push edx
        lea edx, [edi + 32h]
        push edx
        push 320h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B2 41 00 00: call 0x100bdb80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100b99d6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 6ch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 BC 2D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0ch
        ; Exact mapped bytes 74 3F: je 0x100b9a33
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 4
        ; Exact mapped bytes 7E 12: jle 0x100b9a15
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9a15
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 100h
        ; Exact mapped bytes EB 02: jmp 0x100b9a17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov ebp, dword ptr [esp + 28h]
        lea edx, [edi - 0fah]
        push 578h
        push edx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2F 89 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100b9a39
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 28h]
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 150h], eax
        ; Exact mapped bytes E8 86 8B F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 150h]
        push 5ah
        ; Exact mapped bytes E8 C9 56 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        push 6ch
        ; Exact mapped bytes E8 42 2D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0dh
        ; Exact mapped bytes 74 38: je 0x100b9aa6
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x100b9a8f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9a8f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 140h
        ; Exact mapped bytes EB 02: jmp 0x100b9a91
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi - 0ah]
        push 579h
        push edx
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BC 88 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b9aa8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 154h], eax
        ; Exact mapped bytes E8 17 8B F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        push 6ch
        ; Exact mapped bytes E8 E0 2C 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0eh
        ; Exact mapped bytes 74 38: je 0x100b9b08
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x100b9af1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9af1
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x100b9af3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add edi, -0ah
        push 577h
        push edi
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5A 88 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b9b0a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 158h], eax
        ; Exact mapped bytes E8 40 56 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 158h]
        ; Exact mapped bytes E8 A5 8A F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        push 84h
        ; Exact mapped bytes E8 6B 2C 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 0fh
        ; Exact mapped bytes 74 23: je 0x100b9b68
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esp + 2ch]
        push 582h
        add ecx, 0ffffff79h
        lea edx, [ebp + 60h]
        push ecx
        push edx
        push ebx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 2C 97 F6 FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x97
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b9b6a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 15ch], edi
        ; Exact mapped bytes E8 E0 55 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi + 78h], 101h
        mov eax, dword ptr [esi + 15ch]
        push 84h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 03 2C 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 10h
        ; Exact mapped bytes 74 44: je 0x100b9bf1
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 5bh
        ; Exact mapped bytes 7E 12: jle 0x100b9bce
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9bce
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 16ch]
        ; Exact mapped bytes EB 02: jmp 0x100b9bd0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 581h
        add edx, 0ffffff79h
        push edx
        lea edx, [ebp + 60h]
        push edx
        push ecx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 A1 96 F6 FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b9bf3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 84h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 160h], eax
        ; Exact mapped bytes E8 99 2B 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 11h
        ; Exact mapped bytes 74 23: je 0x100b9c3a
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esp + 2ch]
        push 580h
        add ecx, 0ffffff79h
        lea edx, [ebp + 60h]
        push ecx
        push edx
        push ebx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 5A 96 F6 FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b9c3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 164h], edi
        ; Exact mapped bytes E8 0E 55 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi + 78h], 0fffffeffh
        mov eax, dword ptr [esi + 164h]
        push 70h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 34 2B 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 12h
        ; Exact mapped bytes 74 4F: je 0x100b9ccd
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [esp + 2ch]
        push ebx
        push ebx
        push 0ffffffh
        lea ecx, [eax - 64h]
        lea edx, [ebp + 2a8h]
        push ecx
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, -7fh
        push edx
        push eax
        lea eax, [ebp + 19bh]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D2 BE F5 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xbe
        __asm _emit 0xf5
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 13h
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 DD 2A 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x100b9ccf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 168h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 40 06: mov word ptr [edi + 0x26], 0x640
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 74 06: je 0x100b9cec
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B4 52 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b9cf9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 07 52 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 9D 2A 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 14h
        ; Exact mapped bytes 74 41: je 0x100b9d54
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100b9d34
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9d34
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100b9d36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, -7fh
        push edx
        lea edx, [ebp + 2b2h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 40 55 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b9d56
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 16ch], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 40 06: mov word ptr [edi + 0x26], 0x640
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 74 06: je 0x100b9d73
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2D 52 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b9d80
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 80 51 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 16 2A 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 15h
        ; Exact mapped bytes 74 41: je 0x100b9ddb
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100b9dbb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9dbb
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 8c0h]
        ; Exact mapped bytes EB 02: jmp 0x100b9dbd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 2ch]
        add ecx, -7fh
        push ecx
        lea ecx, [ebp + 2e4h]
        push ecx
        push 3
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B9 54 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b9ddd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 170h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 40 06: mov word ptr [edi + 0x26], 0x640
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 74 06: je 0x100b9dfa
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 A6 51 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b9e07
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F9 50 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        push 10h
        ; Exact mapped bytes E8 0C 59 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 16ch]
        push 101h
        ; Exact mapped bytes E8 3C 53 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        push 101h
        ; Exact mapped bytes E8 2C 53 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 168h]
        mov ecx, 0fffeh
        push 0fch
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 16ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 170h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 3F 29 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x29
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 16h
        ; Exact mapped bytes 74 41: je 0x100b9eb2
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100b9e92
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b9e92
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x100b9e94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, -7fh
        push edx
        lea edx, [ebp + 2dah]
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E2 53 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b9eb4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 174h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 40 06: mov word ptr [edi + 0x26], 0x640
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 74 06: je 0x100b9ed1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CF 50 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b9ede
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 22 50 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 174h]
        push 101h
        ; Exact mapped bytes E8 72 52 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 174h]
        push 90h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 9C 28 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x28
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 17h
        ; Exact mapped bytes 74 36: je 0x100b9f4a
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [esp + 2ch]
        push 10101h
        push ebx
        push 0d0d0dfh
        lea edx, [ecx - 2]
        add ecx, -6bh
        push edx
        lea edx, [ebp + 2f8h]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea ecx, [ebp + 155h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 38 9C 04 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b9f4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 198h], eax
        mov dword ptr [eax + 5ch], 0dh
        mov eax, dword ptr [esi + 198h]
        mov byte ptr [esp + 1ch], bl
        mov ecx, dword ptr [eax + 14h]
        add ecx, 1a3h
        mov dword ptr [eax + 1ch], ecx
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 5ch]
        lea edx, [ecx + ecx*8]
        mov ecx, dword ptr [eax + 18h]
        lea edx, [ecx + edx + 5]
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [esi + 198h]
        mov dword ptr [eax + 6ch], 0fefefeh
        mov dword ptr [eax + 70h], ebx
        mov edi, dword ptr [esi + 198h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 40 06: mov word ptr [edi + 0x26], 0x640
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x06
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b9fae
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F2 4F 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b9fbb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 45 4F 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 DB 27 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 18h
        ; Exact mapped bytes 74 32: je 0x100ba007
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 2ch]
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ecx - 2]
        add ecx, -6bh
        push edx
        lea edx, [ebp + 12ch]
        push edx
        ; Exact mapped bytes 8B 15 9C 56 1C 10: mov edx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        lea ecx, [ebp + 0d2h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 7B 9B 04 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ba009
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 19ch], eax
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 19ch]
        mov byte ptr [esp + 1ch], bl
        mov ecx, dword ptr [eax + 14h]
        add ecx, 5fh
        mov dword ptr [eax + 1ch], ecx
        mov eax, dword ptr [esi + 19ch]
        mov ecx, dword ptr [eax + 5ch]
        lea edx, [ecx + ecx*2]
        mov ecx, dword ptr [eax + 18h]
        lea edx, [ecx + edx*2]
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [esi + 19ch]
        mov dword ptr [eax + 6ch], 0ffffffh
        mov dword ptr [eax + 70h], ebx
        mov edi, dword ptr [esi + 19ch]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 40 06: mov word ptr [edi + 0x26], 0x640
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x06
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ba067
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 39 4F 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ba074
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8C 4E 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        push 90h
        ; Exact mapped bytes E8 22 27 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 19h
        ; Exact mapped bytes 74 32: je 0x100ba0c0
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 2ch]
        push ebx
        push ebx
        push 0ffffffh
        lea edx, [ecx - 2]
        add ecx, -6bh
        push edx
        lea edx, [ebp + 0b4h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 80h
        push ebp
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C2 9A 04 00: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ba0c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 1a0h], eax
        mov dword ptr [eax + 5ch], 14h
        mov eax, dword ptr [esi + 1a0h]
        mov byte ptr [esp + 1ch], bl
        mov edx, dword ptr [eax + 14h]
        add edx, 5fh
        mov dword ptr [eax + 1ch], edx
        mov eax, dword ptr [esi + 19ch]
        mov ecx, dword ptr [esi + 1a0h]
        mov eax, dword ptr [eax + 5ch]
        lea edx, [eax + eax*2]
        mov eax, dword ptr [ecx + 18h]
        lea edx, [eax + edx*2]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [esi + 1a0h]
        mov dword ptr [eax + 6ch], 0ffffffh
        mov dword ptr [eax + 70h], ebx
        mov edi, dword ptr [esi + 1a0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 40 06: mov word ptr [edi + 0x26], 0x640
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x06
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ba126
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7A 4E 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ba133
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CD 4D 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        lea eax, [esi + 1a4h]
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], 6
        lea ebp, [ecx - 70h]
        push 54h
        ; Exact mapped bytes E8 4D 26 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1ah
        ; Exact mapped bytes 74 23: je 0x100ba188
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [esp + 28h]
        push 640h
        push ebx
        push ebx
        add edx, 69h
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 33 48 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100ba18a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        add ebp, 14h
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 34h]
        dec eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 75 A3: jne 0x100ba14c
        __asm _emit 0x75
        __asm _emit 0xa3
        push 9ch
        ; Exact mapped bytes E8 ED 25 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1bh
        ; Exact mapped bytes 74 32: je 0x100ba1f5
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 28h]
        push ebx
        push 0efefefh
        lea edx, [ecx - 32h]
        lea ecx, [ebp + 302h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        lea edx, [ebp + 155h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 0D F0 04 00: call 0x10109200
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100ba1fb
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 28h]
        xor eax, eax
        mov dword ptr [esi + 194h], eax
        mov dword ptr [eax + 68h], 10101h
        mov eax, dword ptr [esi + 194h]
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 81 60 24 FF DF: and word ptr [eax + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        mov eax, dword ptr [esi + 194h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 194h]
        mov dword ptr [eax + 98h], 0ah
        mov eax, dword ptr [esi + 194h]
        mov dword ptr [eax + 90h], 0bb8h
        mov edi, dword ptr [esi + 194h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 C7 47 26 40 06: mov word ptr [edi + 0x26], 0x640
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x06
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ba25d
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 43 4D 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100ba26a
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 96 4C 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 2C 25 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x25
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1ch
        ; Exact mapped bytes 74 50: je 0x100ba2d4
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x100ba2a5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ba2a5
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 300h]
        ; Exact mapped bytes EB 02: jmp 0x100ba2a7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 2ch]
        push 640h
        lea ecx, [edi - 6eh]
        push ecx
        lea ecx, [ebp + 2f8h]
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes 8B 15 64 58 1C 10: mov edx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 EE CF F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100ba2da
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 184h], eax
        ; Exact mapped bytes E8 B2 24 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1dh
        ; Exact mapped bytes 74 4C: je 0x100ba34a
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x100ba31f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ba31f
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100ba321
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi - 4]
        push 640h
        push edx
        lea edx, [ebp + 2f8h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 78 CF F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ba34c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 188h], eax
        ; Exact mapped bytes E8 40 24 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1eh
        ; Exact mapped bytes 74 4C: je 0x100ba3bc
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x100ba391
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ba391
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 300h
        ; Exact mapped bytes EB 02: jmp 0x100ba393
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [edi - 6eh]
        push 640h
        push edx
        lea edx, [ebp + 114h]
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 06 CF F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ba3be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 18ch], eax
        ; Exact mapped bytes E8 CE 23 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1fh
        ; Exact mapped bytes 74 4C: je 0x100ba42e
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 3C 57 1C 10: mov ecx, dword ptr [0x101c573c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x100ba403
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100ba403
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x100ba405
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
        add edi, -4
        push 640h
        add ebp, 114h
        push edi
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 94 CE F5 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xce
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100ba430
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 188h]
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 190h], eax
        ; Exact mapped bytes E8 16 4D 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 184h]
        push 101h
        ; Exact mapped bytes E8 06 4D 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18ch]
        push 101h
        ; Exact mapped bytes E8 F6 4C 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 190h]
        push 101h
        ; Exact mapped bytes E8 E6 4C 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 1F 23 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 20h
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x100ba517
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100ba4b7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100ba4b7
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 800h]
        ; Exact mapped bytes EB 02: jmp 0x100ba4b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 583h
        push ebx
        add eax, -0eh
        push ebx
        add ecx, 2f8h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D5 44 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100ba519
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100ba519
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 178h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 178h]
        push 101h
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 27 4C 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 178h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 54 22 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 21h
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x100ba5e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 20h
        ; Exact mapped bytes 7E 12: jle 0x100ba582
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100ba582
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 800h]
        ; Exact mapped bytes EB 02: jmp 0x100ba584
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 583h
        push ebx
        add ecx, -0eh
        push ebx
        add edx, 114h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0A 44 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100ba5e4
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x100ba5e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 17ch], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 17ch]
        push 101h
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 5C 4B 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 17ch]
        mov ecx, 2
        push 1dch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 17ch]
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [esi + 178h]
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes E8 6F 21 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 22h
        ; Exact mapped bytes 74 14: je 0x100ba655
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push ebx
        push 7ffdh
        push ebx
        push ebx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4D C4 01 00: call 0x100d6aa0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ba657
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 1c8h], eax
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0e5ffh
        push 198h
        or dh, 5
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1c8h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 18 21 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 23h
        ; Exact mapped bytes 74 0F: je 0x100ba6a7
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101abf20h
        mov ecx, eax
        ; Exact mapped bytes E8 1B 54 04 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100ba6a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 1cch], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5ffh
        or ah, 5
        mov dword ptr [esi + 1d0h], ebx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
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
