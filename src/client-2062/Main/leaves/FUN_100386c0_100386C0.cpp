// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100386C0 .. +0x1F17 bytes.
extern "C" __declspec(naked) void FUN_100386c0_100386C0() {
    __asm {
        sub esp, 108h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 B9 B7 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push eax
        ; Exact mapped bytes E8 CD B6 0C 00: call 0x10103db0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10ch]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100386fe
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100386fe
        __asm _emit 0x74
        __asm _emit 0x04
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0c0h]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1dch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10038731
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10038731
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea ebp, [esi + 110h]
        mov ebx, 30h
        mov edi, ebp
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 7B 01 FE FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [edi]
        add edi, 4
        dec ebx
        mov dword ptr [edx + 60h], 0eeeeeeh
        ; Exact mapped bytes 75 EA: jne 0x1003873e
        __asm _emit 0x75
        __asm _emit 0xea
        lea edi, [esi + 1e0h]
        mov ebx, 3
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x10038779
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10038779
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        dec ebx
        ; Exact mapped bytes 75 D8: jne 0x1003875f
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [esi + 2a0h]
        mov ebx, 1
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 32 1E 00 00: jne 0x1003a5cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 304h]
        mov edi, dword ptr [edx + 8]
        mov al, byte ptr [edi]
        and eax, 0fh
        dec eax
        cmp eax, 0dh
        ; Exact mapped bytes 0F 87 1A 1E 00 00: ja 0x1003a5cc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 D8 A5 03 10: jmp dword ptr [eax*4 + 0x1003a5d8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 4F 0E: mov cx, word ptr [edi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 57 0C: mov dx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        mov eax, dword ptr [edi + 364h]
        shr ecx, 8
        shr edx, 4
        and ecx, 0fh
        and edx, 0ffh
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 50 3C 00 00: call 0x1003c430
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 304h]
        ; Exact mapped bytes 8B 15 00 D1 1A 10: mov edx, dword ptr [0x101ad100]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor edx, 0aaaaaaaah
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7C 0B: jl 0x10038802
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 0c0h]
        mov dword ptr [eax + 50h], ebx
        ; Exact mapped bytes EB 1A: jmp 0x1003881c
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 0c0h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [esi + 1c8h]
        mov dword ptr [edx + 60h], 0eeh
        mov eax, dword ptr [esi + 304h]
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 18h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c8h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 F5 FF FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 47 02: mov ax, word ptr [edi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x02
        shr eax, 5
        and eax, 1fh
        lea ecx, [eax + eax*2]
        lea eax, [esp + 18h]
        lea edx, [ecx*8 + 10199700h]
        push edx
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 8
        add ecx, 2ch
        add edx, 10ah
        push ecx
        mov ecx, dword ptr [ebp]
        push edx
        ; Exact mapped bytes E8 4D 64 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 B0 FF FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 54h]
        lea edx, [esp + 18h]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 38h
        add ecx, 10ah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 11 64 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 71 FF FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [edi + 5ch]
        lea ecx, [esp + 18h]
        push eax
        push 101a872ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 118h]
        add esp, 0ch
        add edx, 44h
        add eax, 10ah
        push edx
        push eax
        ; Exact mapped bytes E8 D3 63 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 33 FF FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [edi + 60h]
        lea eax, [esp + 18h]
        push edx
        push 101a872ch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        add esp, 0ch
        mov edx, dword ptr [esi + 4]
        add ecx, 50h
        add edx, 10ah
        push ecx
        mov ecx, dword ptr [esi + 11ch]
        push edx
        ; Exact mapped bytes E8 94 63 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 F4 FE FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 64h]
        lea edx, [esp + 18h]
        push ecx
        push 101a872ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 5ch
        add ecx, 10ah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 55 63 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 B5 FE FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 47 06: mov ax, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x06
        lea ecx, [esp + 18h]
        shr eax, 6
        and eax, 0ffh
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 124h]
        add esp, 0ch
        add edx, 68h
        add eax, 10ah
        push edx
        push eax
        ; Exact mapped bytes E8 0E 63 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 6E FE FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 57 68: mov dx, word ptr [edi + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x68
        push edx
        push 101a8724h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 0a4h
        add edx, 10ah
        push ecx
        mov ecx, dword ptr [esi + 128h]
        push edx
        ; Exact mapped bytes E8 C9 62 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 29 FE FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 6C: mov cx, word ptr [edi + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x6c
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        add esp, 0ch
        add eax, 74h
        mov ecx, dword ptr [esi + 4]
        push eax
        add ecx, 10ah
        push ecx
        mov ecx, dword ptr [esi + 134h]
        ; Exact mapped bytes E8 87 62 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 134h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 E7 FD FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 87 0C 01 00 00: mov ax, word ptr [edi + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 188h]
        add esp, 0ch
        add edx, 80h
        add eax, 10ah
        push edx
        push eax
        ; Exact mapped bytes E8 40 62 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 188h]
        ; Exact mapped bytes E8 A0 FD FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 97 0A 01 00 00: mov dx, word ptr [edi + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 8ch
        add edx, 10ah
        push ecx
        mov ecx, dword ptr [esi + 18ch]
        push edx
        ; Exact mapped bytes E8 F8 61 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18ch]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 58 FD FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        lea edx, [esp + 18h]
        and ecx, 3ffh
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 98h
        add ecx, 10ah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 190h]
        ; Exact mapped bytes E8 B0 61 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 190h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 10 FD FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        lea eax, [esp + 20h]
        push 101a8718h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 10h
        add ecx, 2ch
        push ecx
        mov ecx, dword ptr [esi + 12ch]
        add edx, 18bh
        push edx
        ; Exact mapped bytes E8 71 61 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12ch]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 D1 FC FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        lea ecx, [esp + 20h]
        push 101a8718h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 130h]
        add esp, 10h
        add edx, 44h
        add eax, 18bh
        push edx
        push eax
        ; Exact mapped bytes E8 33 61 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 130h]
        ; Exact mapped bytes E8 93 FC FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 97 C4 00 00 00: mov dx, word ptr [edi + 0xc4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 2ch
        add edx, 217h
        push ecx
        mov ecx, dword ptr [esi + 138h]
        push edx
        ; Exact mapped bytes E8 EE 60 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 138h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 4E FC FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 8F C2 00 00 00: mov cx, word ptr [edi + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 38h
        add ecx, 217h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 13ch]
        ; Exact mapped bytes E8 A9 60 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 09 FC FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 87 06 01 00 00: mov ax, word ptr [edi + 0x106]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        add esp, 0ch
        add edx, 44h
        add eax, 217h
        push edx
        push eax
        mov ecx, dword ptr [esi + 140h]
        ; Exact mapped bytes E8 65 60 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 140h]
        ; Exact mapped bytes E8 C5 FB FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 97 08 01 00 00: mov dx, word ptr [edi + 0x108]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 50h
        add edx, 217h
        push ecx
        mov ecx, dword ptr [esi + 194h]
        push edx
        ; Exact mapped bytes E8 20 60 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 194h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 80 FB FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov cl, byte ptr [edi + 0eh]
        lea edx, [esp + 18h]
        and ecx, 0ffh
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 5ch
        add ecx, 217h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 DB 5F 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 3B FB FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 304h]
        xor ebp, ebp
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        and edx, 7c00h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 86 B7 00 00 00: jbe 0x10038dda
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 144h]
        lea ecx, [edi + 0c6h]
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 10h], ecx
        mov eax, dword ptr [esp + 10h]
        xor edx, edx
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        push edx
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, ebp
        add esp, 0ch
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x10038d5e
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        add eax, 9
        lea edx, [eax + eax*2]
        mov eax, dword ptr [esi + 8]
        lea ecx, [eax + edx*4]
        mov eax, ebp
        cdq
        and edx, 7
        push ecx
        add eax, edx
        sar eax, 3
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, dword ptr [esi + 4]
        lea edx, [ecx + ecx*4]
        lea ecx, [eax + edx*2 + 1cfh]
        mov edx, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 38 5F 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        lea eax, [esp + 18h]
        push eax
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 98 FA FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 14h]
        add edx, 2
        add ecx, 4
        mov dword ptr [esp + 10h], edx
        mov edx, dword ptr [esi + 304h]
        mov dword ptr [esp + 14h], ecx
        inc ebp
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        shr ecx, 0ah
        and ecx, 1fh
        cmp ebp, ecx
        ; Exact mapped bytes 0F 8C 5D FF FF FF: jl 0x10038d37
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 57 0C: mov dx, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 108h]
        shr edx, 4
        and edx, 0ffh
        push edx
        ; Exact mapped bytes E8 2D 69 0C 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x69
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        mov ecx, dword ptr [edi + 28h]
        mov edx, dword ptr [edi + 68h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 06: mov ax, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x06
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 1C 36 00 00: call 0x1003c430
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 304h]
        mov ecx, dword ptr [eax + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 04: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 68 57 1C 10: mov ecx, dword ptr [0x101c5768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x10038e46
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10038e46
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x10038e46
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10038e48
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d4h], eax
        mov dword ptr [esi + 0d8h], 0
        mov ecx, dword ptr [edi + 24h]
        xor edx, edx
        mov eax, ecx
        mov ebx, 3e8h
        div ebx
        mov eax, 51eb851fh
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul ecx
        shr edx, 6
        push edx
        lea edx, [esp + 20h]
        push 101a870ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c0h]
        add esp, 10h
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 9F F9 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c4h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 79 F9 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 304h]
        lea eax, [esp + 18h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 1c8h]
        ; Exact mapped bytes E8 50 F9 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [edi + 0a4h]
        mov eax, dword ptr [edi + 98h]
        push edx
        push eax
        lea ecx, [esp + 20h]
        push 101a8700h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp]
        add esp, 10h
        add edx, 28h
        add eax, 1eah
        push edx
        push eax
        ; Exact mapped bytes E8 AB 5D 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 0E F9 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [edi + 9ch]
        lea eax, [esp + 18h]
        push edx
        push 101a86f8h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 33h
        push ecx
        mov ecx, dword ptr [esi + 114h]
        add edx, 1eah
        push edx
        ; Exact mapped bytes E8 6C 5D 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 CC F8 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        push ecx
        push 101a8724h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 3eh
        add ecx, 1eah
        push eax
        push ecx
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 2A 5D 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 8A F8 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 47 0A: mov ax, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0a
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 11ch]
        add esp, 0ch
        add edx, 28h
        add eax, 124h
        push edx
        push eax
        ; Exact mapped bytes E8 E9 5C 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 11ch]
        ; Exact mapped bytes E8 49 F8 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 57 1C: mov dx, word ptr [edi + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x1c
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 33h
        add edx, 124h
        push ecx
        mov ecx, dword ptr [esi + 120h]
        push edx
        ; Exact mapped bytes E8 A7 5C 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 07 F8 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 10624dd3h
        xor ecx, ecx
        mul dword ptr [edi + 24h]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        shr edx, 6
        push ecx
        push edx
        mov edx, dword ptr [esi + 304h]
        mov ecx, esi
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 23 23 00 00: call 0x1003b380
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        mov edx, dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 68h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4F 06: mov cx, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x06
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B2 33 00 00: call 0x1003c430
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2a8h]
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 1fh
        sub ecx, eax
        mov eax, dword ptr [edx + 0d0ch]
        mov edx, dword ptr [eax + 0b4ch]
        mov eax, dword ptr [edx + 258h]
        ; Exact mapped bytes 8B 15 5C 57 1C 10: mov edx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, cl
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4F 04: mov cx, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        and eax, ebx
        mov ebx, dword ptr [edx + 160h]
        lea ecx, [ecx + eax + 3]
        cmp ebx, ecx
        ; Exact mapped bytes 7E 15: jle 0x100390d6
        __asm _emit 0x7e
        __asm _emit 0x15
        test ecx, ecx
        ; Exact mapped bytes 7C 11: jl 0x100390d6
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x100390d6
        __asm _emit 0x74
        __asm _emit 0x07
        shl ecx, 6
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x100390d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        xor edx, edx
        mov dword ptr [esi + 0d4h], ecx
        ; Exact mapped bytes 66 8B 57 04: mov dx, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 5C 57 1C 10: mov ecx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [edx + eax + 5]
        mov edx, dword ptr [ecx + 160h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1003910d
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1003910d
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1003910d
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1003910f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d8h], eax
        mov ecx, dword ptr [edi + 24h]
        mov eax, ecx
        mov ebx, 3e8h
        cdq
        idiv ebx
        mov eax, 51eb851fh
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        push edx
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 20h]
        push 101a870ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c0h]
        add esp, 10h
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 D5 F6 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c4h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 AF F6 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 304h]
        lea eax, [esp + 18h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 1c8h]
        ; Exact mapped bytes E8 86 F6 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dl, byte ptr [edi + 98h]
        lea eax, [esp + 18h]
        and edx, 7
        shl edx, 4
        add edx, 10199880h
        push edx
        push 1017f54ch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 24h
        add edx, 1cch
        push ecx
        mov ecx, dword ptr [ebp]
        push edx
        ; Exact mapped bytes E8 DB 5A 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 3E F6 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        mov ebp, 64h
        ; Exact mapped bytes 66 8B 8F A0 00 00 00: mov cx, word ptr [edi + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        cdq
        idiv ebp
        mov eax, 51eb851fh
        push edx
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 20h]
        push 101a86e8h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 30h
        add ecx, 1cch
        push eax
        push ecx
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 7D 5A 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x5a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 DD F5 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 87 A6 00 00 00: mov ax, word ptr [edi + 0xa6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 101a86d4h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 118h]
        add esp, 0ch
        add edx, 3ch
        add eax, 1cch
        push edx
        push eax
        ; Exact mapped bytes E8 39 5A 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5a
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 99 F5 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ebp, 3e8h
        ; Exact mapped bytes 66 8B 87 9E 00 00 00: mov ax, word ptr [edi + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + eax*4]
        shl ecx, 3
        mov eax, ecx
        cdq
        idiv ebp
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        push edx
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 20h]
        push 101a86c4h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 48h
        add ecx, 1cch
        push eax
        push ecx
        mov ecx, dword ptr [esi + 11ch]
        ; Exact mapped bytes E8 C1 59 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 21 F5 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 87 9A 00 00 00: mov ax, word ptr [edi + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        shr eax, 4
        and eax, 7fh
        push eax
        push 101a86b8h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 120h]
        add esp, 0ch
        add edx, 54h
        add eax, 1cch
        push edx
        push eax
        ; Exact mapped bytes E8 79 59 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 D9 F4 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dl, byte ptr [edi + 9ch]
        lea eax, [esp + 18h]
        and edx, 7fh
        push edx
        push 101a86a4h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 60h
        add edx, 1cch
        push ecx
        mov ecx, dword ptr [esi + 124h]
        push edx
        ; Exact mapped bytes E8 34 59 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 124h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 94 F4 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 28h
        add ecx, 124h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 128h]
        ; Exact mapped bytes E8 F2 58 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 52 F4 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 47 1C: mov ax, word ptr [edi + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x1c
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 12ch]
        add esp, 0ch
        add edx, 33h
        add eax, 124h
        push edx
        push eax
        ; Exact mapped bytes E8 B1 58 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 12ch]
        ; Exact mapped bytes E8 11 F4 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        mov eax, 10624dd3h
        ; Exact mapped bytes 66 8B 57 1E: mov dx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x1e
        push edx
        mul dword ptr [edi + 24h]
        mov eax, dword ptr [esi + 304h]
        shr edx, 6
        mov ecx, dword ptr [eax + 0ch]
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 2D 1F 00 00: call 0x1003b380
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        mov eax, dword ptr [edi + 28h]
        mov ecx, dword ptr [edi + 68h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 06: mov dx, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x06
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 BC 2F 00 00: call 0x1003c430
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 64 57 1C 10: mov ecx, dword ptr [0x101c5764]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1003949d
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1003949d
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1003949d
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1003949f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d4h], eax
        mov dword ptr [esi + 0d8h], 0
        mov ecx, dword ptr [edi + 24h]
        xor edx, edx
        mov eax, ecx
        mov ebx, 3e8h
        div ebx
        mov eax, 51eb851fh
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul ecx
        shr edx, 6
        push edx
        lea edx, [esp + 20h]
        push 101a870ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c0h]
        add esp, 10h
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 48 F3 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c4h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 22 F3 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 304h]
        lea eax, [esp + 18h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 1c8h]
        ; Exact mapped bytes E8 F9 F2 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 97 98 00 00 00: mov dx, word ptr [edi + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 101a8554h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 2ah
        add edx, 1d6h
        push ecx
        mov ecx, dword ptr [ebp]
        push edx
        ; Exact mapped bytes E8 57 57 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x57
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 BA F2 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        mov ebp, 3e8h
        ; Exact mapped bytes 66 8B 8F 9A 00 00 00: mov cx, word ptr [edi + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        cdq
        idiv ebp
        mov eax, 10624dd3h
        push edx
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 20h]
        push 101a8698h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 36h
        add ecx, 1d6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 F9 56 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 59 F2 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8F 9C 00 00 00: mov cx, word ptr [edi + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        cdq
        idiv ebp
        mov eax, 10624dd3h
        push edx
        imul ecx
        sar edx, 6
        mov eax, edx
        lea ecx, [esp + 1ch]
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a868ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 118h]
        add esp, 10h
        add edx, 42h
        add eax, 1d6h
        push edx
        push eax
        ; Exact mapped bytes E8 9E 56 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 FE F1 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8F 9E 00 00 00: mov cx, word ptr [edi + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl ecx, 3
        mov eax, ecx
        cdq
        idiv ebp
        mov eax, 10624dd3h
        push edx
        imul ecx
        sar edx, 6
        mov eax, edx
        lea ecx, [esp + 1ch]
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8698h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 11ch]
        add esp, 10h
        add edx, 4eh
        add eax, 1d6h
        push edx
        push eax
        ; Exact mapped bytes E8 40 56 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 11ch]
        ; Exact mapped bytes E8 A0 F1 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 0A: mov dx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0a
        lea eax, [esp + 18h]
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 28h
        add edx, 124h
        push ecx
        mov ecx, dword ptr [esi + 120h]
        push edx
        ; Exact mapped bytes E8 FE 55 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 5E F1 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 1C: mov cx, word ptr [edi + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1c
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 33h
        add ecx, 124h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 BC 55 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 124h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 1C F1 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esi + 304h]
        ; Exact mapped bytes 66 8B 47 1E: mov ax, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x1e
        push eax
        mov eax, 10624dd3h
        mul dword ptr [edi + 24h]
        shr edx, 6
        push edx
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 38 1C 00 00: call 0x1003b380
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        mov ecx, dword ptr [edi + 28h]
        mov edx, dword ptr [edi + 68h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 06: mov ax, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x06
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 C7 2C 00 00: call 0x1003c430
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 60 57 1C 10: mov ecx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 3
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x10039797
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10039797
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x10039797
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x10039799
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes 8B 0D 60 57 1C 10: mov ecx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 4
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x100397cd
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100397cd
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100397cd
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100397cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d8h], eax
        mov ecx, dword ptr [edi + 24h]
        mov eax, ecx
        mov ebx, 3e8h
        cdq
        idiv ebx
        mov eax, 51eb851fh
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        push edx
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 20h]
        push 101a870ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c0h]
        add esp, 10h
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 15 F0 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 1E: mov cx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x1e
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c4h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 EF EF FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 304h]
        lea eax, [esp + 18h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 1c8h]
        ; Exact mapped bytes E8 C6 EF FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ecx, 64h
        ; Exact mapped bytes 66 8B 87 A2 00 00 00: mov ax, word ptr [edi + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        cdq
        idiv ecx
        mov eax, 51eb851fh
        lea ecx, [esp + 18h]
        push edx
        imul dword ptr [esp + 14h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a86e8h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp]
        add esp, 10h
        add edx, 28h
        add eax, 1cch
        push edx
        push eax
        ; Exact mapped bytes E8 05 54 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 68 EF FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ebp, 3e8h
        ; Exact mapped bytes 66 8B 87 A0 00 00 00: mov ax, word ptr [edi + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + eax*4]
        shl ecx, 3
        mov eax, ecx
        cdq
        idiv ebp
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        push edx
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 20h]
        push 101a86c4h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 10h
        add eax, 34h
        add ecx, 1cch
        push eax
        push ecx
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 90 53 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 F0 EE FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        mov al, byte ptr [edi + 98h]
        lea ecx, [esp + 18h]
        and eax, 0fh
        push eax
        push 101a8684h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 118h]
        add esp, 0ch
        add edx, 40h
        add eax, 1cch
        push edx
        push eax
        ; Exact mapped bytes E8 4C 53 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 AC EE FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 97 98 00 00 00: mov dx, word ptr [edi + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 18h]
        shr edx, 4
        and edx, 7fh
        push edx
        push 101a8574h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 4ch
        add edx, 1cch
        push ecx
        mov ecx, dword ptr [esi + 11ch]
        push edx
        ; Exact mapped bytes E8 03 53 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        lea eax, [esp + 18h]
        mov ecx, dword ptr [esi + 11ch]
        push eax
        ; Exact mapped bytes E8 63 EE FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        xor edx, edx
        mov cl, byte ptr [edi + 9fh]
        mov dl, byte ptr [edi + 9eh]
        push ecx
        push edx
        lea eax, [esp + 20h]
        push 101a8678h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 10h
        add ecx, 58h
        add edx, 1cch
        push ecx
        mov ecx, dword ptr [esi + 120h]
        push edx
        ; Exact mapped bytes E8 B6 52 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 16 EE FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 4F 0A: mov cx, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0a
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 28h
        add ecx, 124h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 74 52 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 124h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 D4 ED FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 47 1C: mov ax, word ptr [edi + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x1c
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 128h]
        add esp, 0ch
        add edx, 33h
        add eax, 124h
        push edx
        push eax
        ; Exact mapped bytes E8 33 52 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 128h]
        ; Exact mapped bytes E8 93 ED FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        mov eax, 10624dd3h
        ; Exact mapped bytes 66 8B 57 1E: mov dx, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x1e
        push edx
        mul dword ptr [edi + 24h]
        mov eax, dword ptr [esi + 304h]
        shr edx, 6
        mov ecx, dword ptr [eax + 0ch]
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AF 18 00 00: call 0x1003b380
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        mov eax, dword ptr [edi + 28h]
        mov ecx, dword ptr [edi + 68h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 06: mov dx, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x06
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 3E 29 00 00: call 0x1003c430
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 8B 97 9E 00 00 00: mov dx, word ptr [edi + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 18h]
        push edx
        push 101a866ch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 1c0h]
        ; Exact mapped bytes E8 1F ED FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ecx, 0ah
        ; Exact mapped bytes 66 8B 47 1E: mov ax, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x1e
        mov dword ptr [esp + 10h], eax
        cdq
        idiv ecx
        mov eax, 66666667h
        lea ecx, [esp + 18h]
        push edx
        imul dword ptr [esp + 14h]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c4h]
        add esp, 10h
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 D9 EC FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 304h]
        lea edx, [esp + 18h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c8h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 B0 EC FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 96h
        add edx, 1c6h
        push ecx
        mov ecx, dword ptr [esi + 1e0h]
        push edx
        ; Exact mapped bytes E8 21 51 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 0a2h
        add ecx, 1c6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 1e4h]
        ; Exact mapped bytes E8 03 51 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 1e8h]
        add edx, 0aeh
        add eax, 1c6h
        push edx
        push eax
        ; Exact mapped bytes E8 E5 50 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        lea eax, [esi + 1e0h]
        mov edx, 3
        mov ecx, dword ptr [eax]
        add eax, 4
        or byte ptr [ecx + 24h], 0fh
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10039bf6
        __asm _emit 0x75
        __asm _emit 0xf4
        xor eax, eax
        mov ecx, 64h
        ; Exact mapped bytes 66 8B 87 A0 00 00 00: mov ax, word ptr [edi + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        cdq
        idiv ecx
        mov eax, 51eb851fh
        lea ecx, [esp + 18h]
        push edx
        imul dword ptr [esp + 14h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a86e8h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp]
        add esp, 10h
        add edx, 28h
        add eax, 1e6h
        push edx
        push eax
        ; Exact mapped bytes E8 7D 50 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 E0 EB FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        xor eax, eax
        ; Exact mapped bytes 66 8B 97 98 00 00 00: mov dx, word ptr [edi + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 87 9C 00 00 00: mov ax, word ptr [edi + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr edx, 8
        push edx
        push eax
        lea ecx, [esp + 20h]
        push 101a8664h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 114h]
        add esp, 10h
        add edx, 34h
        add eax, 1e6h
        push edx
        push eax
        ; Exact mapped bytes E8 2F 50 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 8F EB FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dl, byte ptr [edi + 98h]
        lea eax, [esp + 18h]
        and edx, 0ffh
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 40h
        add edx, 1e6h
        push ecx
        mov ecx, dword ptr [esi + 118h]
        push edx
        ; Exact mapped bytes E8 E7 4F 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 47 EB FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 8F A4 00 00 00: mov cx, word ptr [edi + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push 101a8660h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 4ch
        add ecx, 1e6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 11ch]
        ; Exact mapped bytes E8 A2 4F 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 02 EB FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 304h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 3B 96 88 02 00 00: cmp dx, word ptr [esi + 0x288]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 29: jne 0x10039d7c
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [esi + 294h]
        mov ecx, dword ptr [esi + 1d4h]
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 76 C4 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 0F 18 00 00: call 0x1003b580
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        ; Exact mapped bytes 66 8B 86 DE 02 00 00: mov ax, word ptr [esi + 0x2de]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 23: jbe 0x10039dab
        __asm _emit 0x76
        __asm _emit 0x23
        mov ecx, dword ptr [esi + 1d4h]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 47 C4 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E0 17 00 00: call 0x1003b580
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        mov ecx, dword ptr [esi + 1d4h]
        push 1
        ; Exact mapped bytes E8 28 C4 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 C1 17 00 00: call 0x1003b580
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        mov edx, dword ptr [edi + 28h]
        mov eax, dword ptr [edi + 68h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4F 06: mov cx, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x06
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 50 26 00 00: call 0x1003c430
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 96h
        lea ebx, [esi + 1e0h]
        add edx, 1c6h
        push ecx
        mov ecx, dword ptr [ebx]
        push edx
        ; Exact mapped bytes E8 CF 4E 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 0a2h
        add ecx, 1c6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 1e4h]
        ; Exact mapped bytes E8 B1 4E 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 1e8h]
        add edx, 0aeh
        add eax, 1c6h
        push edx
        push eax
        ; Exact mapped bytes E8 93 4E 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, ebx
        mov edx, 3
        mov ebx, 0fh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10039e49
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8F AC 00 00 00: mov cx, word ptr [edi + 0xac]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 18h]
        push ecx
        push 101a8650h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c0h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 BC E9 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ecx, 0ah
        ; Exact mapped bytes 66 8B 47 1E: mov ax, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x1e
        mov dword ptr [esp + 10h], eax
        cdq
        idiv ecx
        mov eax, 66666667h
        lea ecx, [esp + 18h]
        push edx
        imul dword ptr [esp + 14h]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c4h]
        add esp, 10h
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 76 E9 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 304h]
        lea edx, [esp + 18h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c8h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 4D E9 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ecx, 64h
        ; Exact mapped bytes 66 8B 87 AE 00 00 00: mov ax, word ptr [edi + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        cdq
        idiv ecx
        mov eax, 51eb851fh
        lea ecx, [esp + 18h]
        push edx
        imul dword ptr [esp + 14h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a86e8h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [ebp]
        add esp, 10h
        add edx, 28h
        add eax, 0f5h
        push edx
        push eax
        ; Exact mapped bytes E8 8C 4D 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4d
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 EF E8 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1d4h]
        push 1
        ; Exact mapped bytes E8 82 C2 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi + 304h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 86 88 02 00 00: cmp ax, word ptr [esi + 0x288]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x10039f82
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 294h]
        xor ecx, 0aah
        push ecx
        ; Exact mapped bytes EB 18: jmp 0x10039f9a
        __asm _emit 0xeb
        __asm _emit 0x18
        and al, 0fh
        cmp al, 0ch
        ; Exact mapped bytes 75 1D: jne 0x10039fa5
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 86 E0 02 00 00: mov ax, word ptr [esi + 0x2e0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 11: jbe 0x10039fa5
        __asm _emit 0x76
        __asm _emit 0x11
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [esi + 1d4h]
        ; Exact mapped bytes E8 3B C2 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 97 AA 00 00 00: mov dx, word ptr [edi + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 40h
        add edx, 0f5h
        push ecx
        mov ecx, dword ptr [esi + 118h]
        push edx
        ; Exact mapped bytes E8 F6 4C 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 56 E8 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 8F 9E 00 00 00: mov cx, word ptr [edi + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push 101a864ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 28h
        add ecx, 1d0h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 B1 4C 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 11 E8 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 87 A2 00 00 00: mov ax, word ptr [edi + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 124h]
        add esp, 0ch
        add edx, 34h
        add eax, 1dfh
        push edx
        push eax
        ; Exact mapped bytes E8 6D 4C 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 CD E7 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 97 A6 00 00 00: mov dx, word ptr [edi + 0xa6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 34h
        add edx, 216h
        push ecx
        mov ecx, dword ptr [esi + 128h]
        push edx
        ; Exact mapped bytes E8 28 4C 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 88 E7 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov cl, byte ptr [edi + 98h]
        and ecx, 3fh
        lea edx, [esp + 18h]
        push ecx
        push 101a8644h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 40h
        add ecx, 1dfh
        push eax
        push ecx
        mov ecx, dword ptr [esi + 12ch]
        ; Exact mapped bytes E8 E3 4B 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12ch]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 43 E7 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 87 98 00 00 00: mov ax, word ptr [edi + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        shr eax, 6
        and eax, 3fh
        push eax
        push 101a8644h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 130h]
        add esp, 0ch
        add edx, 40h
        add eax, 216h
        push edx
        push eax
        ; Exact mapped bytes E8 9B 4B 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 130h]
        ; Exact mapped bytes E9 7B 04 00 00: jmp 0x1003a5c0
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 28h]
        mov ecx, dword ptr [edi + 68h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 06: mov dx, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x06
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 D5 22 00 00: call 0x1003c430
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 1e0h]
        add edx, 96h
        lea ebx, [esi + 1e0h]
        add eax, 1c6h
        push edx
        push eax
        ; Exact mapped bytes E8 51 4B 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 0a2h
        add edx, 1c6h
        push ecx
        mov ecx, dword ptr [esi + 1e4h]
        push edx
        ; Exact mapped bytes E8 32 4B 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 0aeh
        add ecx, 1c6h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 1e8h]
        ; Exact mapped bytes E8 14 4B 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, ebx
        mov edx, 3
        mov ebx, 0fh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1003a1c8
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edi + 24h]
        xor edx, edx
        mov eax, ecx
        mov ebx, 3e8h
        div ebx
        mov eax, 51eb851fh
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mul edx
        shr edx, 5
        mov eax, 10624dd3h
        push edx
        mul ecx
        shr edx, 6
        push edx
        lea edx, [esp + 20h]
        push 101a8638h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c0h]
        add esp, 10h
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 23 E6 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ecx, 0ah
        ; Exact mapped bytes 66 8B 47 1E: mov ax, word ptr [edi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x1e
        mov dword ptr [esp + 10h], eax
        cdq
        idiv ecx
        mov eax, 66666667h
        lea ecx, [esp + 18h]
        push edx
        imul dword ptr [esp + 14h]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a8578h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c4h]
        add esp, 10h
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 DD E5 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 304h]
        lea edx, [esp + 18h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 1c8h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 B4 E5 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 3
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1003a2ba
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1003a2ba
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1003a2ba
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1003a2bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 04: mov ax, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        mov edx, dword ptr [ecx + 160h]
        add eax, 4
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1003a2f0
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1003a2f0
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1003a2f0
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1003a2f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 1d4h]
        push 1
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes E8 DB BE 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 304h]
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 86 88 02 00 00: cmp ax, word ptr [esi + 0x288]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x1003a332
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 294h]
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [esi + 1d4h]
        ; Exact mapped bytes E8 AE BE 0C 00: call 0x101061e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 97 A8 00 00 00: mov dx, word ptr [edi + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 27h
        add edx, 114h
        push ecx
        mov ecx, dword ptr [ebp]
        push edx
        ; Exact mapped bytes E8 6C 49 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x49
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 CF E4 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        lea edx, [esp + 18h]
        ; Exact mapped bytes 66 8B 8F A4 00 00 00: mov cx, word ptr [edi + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 33h
        add ecx, 114h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 2A 49 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x49
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 114h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 8A E4 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 87 A6 00 00 00: mov ax, word ptr [edi + 0xa6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 118h]
        add esp, 0ch
        add edx, 3fh
        add eax, 114h
        push edx
        push eax
        ; Exact mapped bytes E8 E6 48 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 118h]
        ; Exact mapped bytes E8 46 E4 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        lea eax, [esp + 18h]
        ; Exact mapped bytes 66 8B 97 AA 00 00 00: mov dx, word ptr [edi + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add esp, 0ch
        add ecx, 27h
        add edx, 1d8h
        push ecx
        mov ecx, dword ptr [esi + 11ch]
        push edx
        ; Exact mapped bytes E8 A1 48 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 01 E4 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8F AE 00 00 00: mov cx, word ptr [edi + 0xae]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 18h]
        push ecx
        push 1017f3cch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add esp, 0ch
        add eax, 33h
        add ecx, 1d8h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 5C 48 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 BC E3 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        lea ecx, [esp + 18h]
        ; Exact mapped bytes 66 8B 87 9A 00 00 00: mov ax, word ptr [edi + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 128h]
        add esp, 0ch
        add edx, 4bh
        add eax, 1d8h
        push edx
        push eax
        ; Exact mapped bytes E8 18 48 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 128h]
        ; Exact mapped bytes E8 78 E3 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        mov ebp, 3e8h
        ; Exact mapped bytes 66 8B 87 B0 00 00 00: mov ax, word ptr [edi + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + eax*4]
        shl ecx, 3
        mov eax, ecx
        cdq
        idiv ebp
        mov eax, 10624dd3h
        push edx
        imul ecx
        sar edx, 6
        mov eax, edx
        lea ecx, [esp + 1ch]
        shr eax, 1fh
        add edx, eax
        push edx
        push 101a862ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 12ch]
        add esp, 10h
        add edx, 57h
        add eax, 1d8h
        push edx
        push eax
        ; Exact mapped bytes E8 B2 47 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x47
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 12ch]
        ; Exact mapped bytes E8 12 E3 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 BF 9C 00 00 00 00: cmp word ptr [edi + 0x9c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 53: je 0x1003a58b
        __asm _emit 0x74
        __asm _emit 0x53
        xor eax, eax
        ; Exact mapped bytes 66 8B 87 98 00 00 00: mov ax, word ptr [edi + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 74 24: je 0x1003a56a
        __asm _emit 0x74
        __asm _emit 0x24
        dec eax
        ; Exact mapped bytes 75 7C: jne 0x1003a5c5
        __asm _emit 0x75
        __asm _emit 0x7c
        lea edx, [esp + 18h]
        push 101a8624h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 8
        mov ecx, esi
        ; Exact mapped bytes E8 21 10 00 00: call 0x1003b580
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        lea eax, [esp + 18h]
        push 101a861ch
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 8
        mov ecx, esi
        ; Exact mapped bytes E8 00 10 00 00: call 0x1003b580
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
        lea ecx, [esp + 18h]
        push 101a858ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 124h]
        add esp, 8
        add edx, 3fh
        add eax, 1d8h
        push edx
        push eax
        ; Exact mapped bytes E8 1B 47 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x47
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 7B E2 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 B4 0F 00 00: call 0x1003b580
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 108h
        ret
    }
}
