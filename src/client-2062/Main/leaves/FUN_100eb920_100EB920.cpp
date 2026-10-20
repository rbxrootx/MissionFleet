// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EB920 .. +0x9DB bytes.
extern "C" __declspec(naked) void FUN_100eb920_100EB920() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 110h
        and eax, 0ffffh
        push ebx
        push ebp
        dec eax
        push esi
        push edi
        cmp eax, 38h
        mov edi, ecx
        ; Exact mapped bytes 0F 87 AF 09 00 00: ja 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 100ec368h]
        ; Exact mapped bytes FF 24 8D FC C2 0E 10: jmp dword ptr [ecx*4 + 0x100ec2fc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x10
        mov edx, dword ptr [edi + 31ch]
        mov ecx, edi
        push edx
        push 4
        ; Exact mapped bytes E8 12 E4 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 98 5C 00 00: mov word ptr [edi + 0x5c98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 31ch]
        mov ecx, edi
        push eax
        push 5
        ; Exact mapped bytes E8 EE E3 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 98 5C 00 00: mov word ptr [edi + 0x5c98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 31ch]
        push ecx
        push 6
        mov ecx, edi
        ; Exact mapped bytes E8 CA E3 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 98 5C 00 00: mov word ptr [edi + 0x5c98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [edi + 31ch]
        mov ecx, edi
        push edx
        push 7
        ; Exact mapped bytes E8 A6 E3 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 98 5C 00 00: mov word ptr [edi + 0x5c98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1008h]
        xor esi, esi
        test eax, eax
        mov dword ptr [edi + 5c74h], 40000000h
        ; Exact mapped bytes 0F 8E F6 08 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + 158h]
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100eba16
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 5c74h]
        mov dword ptr [eax + 114h], ecx
        mov dword ptr [eax + 110h], ecx
        mov eax, dword ptr [edi + 1008h]
        inc esi
        add edx, 4
        cmp esi, eax
        ; Exact mapped bytes 7C DA: jl 0x100eb9fe
        __asm _emit 0x7c
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1008h]
        xor esi, esi
        test eax, eax
        mov dword ptr [edi + 5c78h], 40000000h
        ; Exact mapped bytes 0F 8E A3 08 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + 158h]
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100eba69
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 5c78h]
        mov dword ptr [eax + 11ch], ecx
        mov dword ptr [eax + 118h], ecx
        mov eax, dword ptr [edi + 1008h]
        inc esi
        add edx, 4
        cmp esi, eax
        ; Exact mapped bytes 7C DA: jl 0x100eba51
        __asm _emit 0x7c
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 31ch]
        mov ecx, edi
        push eax
        push 0ah
        mov dword ptr [edi + 5c88h], 40000000h
        ; Exact mapped bytes E8 D2 E2 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 98 5C 00 00: mov word ptr [edi + 0x5c98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 31ch]
        mov dword ptr [edi + 5c88h], 40000000h
        push ecx
        push 0bh
        mov ecx, edi
        ; Exact mapped bytes E8 A4 E2 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 87 98 5C 00 00: mov word ptr [edi + 0x5c98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [edi + 31ch]
        mov ecx, edi
        push edx
        push 15h
        ; Exact mapped bytes E8 80 E2 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 B7 98 5C 00 00 02: xor word ptr [edi + 0x5c98], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb7
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 31ch]
        mov ecx, edi
        push eax
        push 14h
        ; Exact mapped bytes E8 5B E2 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 B7 98 5C 00 00 01: xor word ptr [edi + 0x5c98], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb7
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1008h]
        xor esi, esi
        test eax, eax
        mov dword ptr [edi + 5c74h], 0
        ; Exact mapped bytes 0F 8E AA 07 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + 158h]
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100ebb62
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 5c74h]
        mov dword ptr [eax + 114h], ecx
        mov dword ptr [eax + 110h], ecx
        mov eax, dword ptr [edi + 1008h]
        inc esi
        add edx, 4
        cmp esi, eax
        ; Exact mapped bytes 7C DA: jl 0x100ebb4a
        __asm _emit 0x7c
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1008h]
        xor esi, esi
        test eax, eax
        mov dword ptr [edi + 5c78h], 0
        ; Exact mapped bytes 0F 8E 57 07 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + 158h]
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100ebbb5
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 5c78h]
        mov dword ptr [eax + 11ch], ecx
        mov dword ptr [eax + 118h], ecx
        mov eax, dword ptr [edi + 1008h]
        inc esi
        add edx, 4
        cmp esi, eax
        ; Exact mapped bytes 7C DA: jl 0x100ebb9d
        __asm _emit 0x7c
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov cl, byte ptr [edi + 5c8dh]
        and cl, 10h
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov dl, cl
        ; Exact mapped bytes 66 89 97 9A 5C 00 00: mov word ptr [edi + 0x5c9a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov al, byte ptr [edi + 5c8dh]
        and al, 20h
        ; Exact mapped bytes 66 33 C9: xor cx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc9
        mov cl, al
        ; Exact mapped bytes 66 89 8F 9A 5C 00 00: mov word ptr [edi + 0x5c9a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dl, byte ptr [edi + 5c8dh]
        and dl, 30h
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        mov al, dl
        ; Exact mapped bytes 66 89 87 9A 5C 00 00: mov word ptr [edi + 0x5c9a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 1
        push 14h
        mov ecx, edi
        mov dword ptr [edi + 31ch], 0
        ; Exact mapped bytes E8 26 E1 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 15h
        mov ecx, edi
        ; Exact mapped bytes E8 1B E1 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 14h
        mov ecx, edi
        mov dword ptr [edi + 31ch], 1
        ; Exact mapped bytes E8 F9 E0 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 15h
        mov ecx, edi
        ; Exact mapped bytes E8 EE E0 FF FF: call 0x100e9d70
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi + 5ca0h], 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 218h]
        ; Exact mapped bytes E8 9F 6F F5 FF: call 0x10042c50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6f
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 30 06 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c0ch]
        add edi, 37ch
        mov ecx, dword ptr [eax + 9ch]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [eax + 84h]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov ecx, dword ptr [eax + 10474h]
        mov edx, dword ptr [eax + 1047ch]
        push ecx
        push edx
        lea eax, [esp + 38h]
        push 101ac4ech
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 20h
        lea ecx, [esp + 18h]
        lea edx, [esp + 20h]
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
        lea eax, [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 218h]
        ; Exact mapped bytes E8 1D 6F F5 FF: call 0x10042c60
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6f
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 05 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c0ch]
        add edi, 37ch
        mov edx, dword ptr [eax + 9ch]
        mov ecx, dword ptr [eax + 88h]
        push edx
        mov edx, dword ptr [eax + 84h]
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        push edi
        mov ecx, dword ptr [eax + 10474h]
        mov edx, dword ptr [eax + 1047ch]
        push ecx
        push edx
        lea eax, [esp + 38h]
        push 101ac4b8h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 20h
        lea ecx, [esp + 18h]
        lea edx, [esp + 20h]
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
        lea eax, [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 128h]
        test eax, eax
        ; Exact mapped bytes 0F 84 15 05 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 0F 17 00 00: call 0x100ed4f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 00 05 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c0ch]
        add edi, 37ch
        mov edx, dword ptr [eax + 9ch]
        mov ecx, dword ptr [eax + 88h]
        push edx
        mov edx, dword ptr [eax + 84h]
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        push edi
        mov ecx, dword ptr [eax + 10474h]
        mov edx, dword ptr [eax + 1047ch]
        push ecx
        push edx
        lea eax, [esp + 38h]
        push 101ac47ch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 20h
        lea ecx, [esp + 18h]
        lea edx, [esp + 20h]
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
        lea eax, [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, dword ptr [esp + 128h]
        test esi, esi
        ; Exact mapped bytes 0F 84 77 04 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi]
        cmp al, 1
        ; Exact mapped bytes 0F 85 59 02 00 00: jne 0x100ec0da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 1]
        cmp al, 1
        ; Exact mapped bytes 75 61: jne 0x100ebee9
        __asm _emit 0x75
        __asm _emit 0x61
        xor ecx, ecx
        xor eax, eax
        mov cl, byte ptr [esi + 3]
        mov dword ptr [esp + 10h], eax
        sub ecx, 8
        test ecx, ecx
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 8E 4C 04 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [esi + eax + 8]
        shl edx, 4
        mov ebx, dword ptr [edx + edi + 0f7ch]
        test ebx, ebx
        ; Exact mapped bytes 74 1D: je 0x100ebed3
        __asm _emit 0x74
        __asm _emit 0x1d
        lea ebp, [esi + 4]
        mov ecx, dword ptr [ebx + 0ch]
        push ebp
        push 0
        ; Exact mapped bytes E8 8C CF F1 FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ebx, dword ptr [ebx + 8]
        test ebx, ebx
        ; Exact mapped bytes 75 EE: jne 0x100ebeb9
        __asm _emit 0x75
        __asm _emit 0xee
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 7C C6: jl 0x100ebea2
        __asm _emit 0x7c
        __asm _emit 0xc6
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 75 52: jne 0x100ebf3f
        __asm _emit 0x75
        __asm _emit 0x52
        xor eax, eax
        xor ebp, ebp
        mov al, byte ptr [esi + 3]
        sub eax, 6
        test eax, eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8E EB 03 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [esi + ebp + 6]
        shl ecx, 4
        mov ebx, dword ptr [ecx + edi + 0f7ch]
        test ebx, ebx
        ; Exact mapped bytes 74 16: je 0x100ebf2d
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebx + 0ch]
        push esi
        push 4
        ; Exact mapped bytes E8 2E CF F1 FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xcf
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ebx, dword ptr [ebx + 8]
        test ebx, ebx
        ; Exact mapped bytes 75 EE: jne 0x100ebf17
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [esp + 14h]
        inc ebp
        cmp ebp, eax
        ; Exact mapped bytes 7C D1: jl 0x100ebf03
        __asm _emit 0x7c
        __asm _emit 0xd1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, 3
        ; Exact mapped bytes 75 52: jne 0x100ebf95
        __asm _emit 0x75
        __asm _emit 0x52
        xor eax, eax
        xor ebp, ebp
        mov al, byte ptr [esi + 3]
        sub eax, 4
        test eax, eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8E 95 03 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [esi + ebp + 4]
        shl edx, 4
        mov ebx, dword ptr [edx + edi + 0f7ch]
        test ebx, ebx
        ; Exact mapped bytes 74 16: je 0x100ebf83
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebx + 0ch]
        push esi
        push 4
        ; Exact mapped bytes E8 D8 CE F1 FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xce
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ebx, dword ptr [ebx + 8]
        test ebx, ebx
        ; Exact mapped bytes 75 EE: jne 0x100ebf6d
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [esp + 14h]
        inc ebp
        cmp ebp, eax
        ; Exact mapped bytes 7C D1: jl 0x100ebf59
        __asm _emit 0x7c
        __asm _emit 0xd1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, 5
        ; Exact mapped bytes 75 67: jne 0x100ec000
        __asm _emit 0x75
        __asm _emit 0x67
        xor eax, eax
        mov al, byte ptr [esi + 3]
        mov ebp, eax
        xor eax, eax
        sub ebp, 4
        mov dword ptr [esp + 10h], eax
        test ebp, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 0F 8E 39 03 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        xor ecx, ecx
        mov dl, byte ptr [esi + eax + 4]
        mov cl, byte ptr [esi + 2]
        shl edx, 4
        mov ebx, dword ptr [edx + edi + 0f7ch]
        test ebx, ebx
        ; Exact mapped bytes 74 1C: je 0x100ebfea
        __asm _emit 0x74
        __asm _emit 0x1c
        lea ebp, [ecx + 0bh]
        mov ecx, dword ptr [ebx + 0ch]
        push esi
        push ebp
        ; Exact mapped bytes E8 75 CE F1 FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xce
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ebx, dword ptr [ebx + 8]
        test ebx, ebx
        ; Exact mapped bytes 75 EF: jne 0x100ebfd1
        __asm _emit 0x75
        __asm _emit 0xef
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        inc eax
        cmp eax, ebp
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 7C C2: jl 0x100ebfb5
        __asm _emit 0x7c
        __asm _emit 0xc2
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, 6
        ; Exact mapped bytes 75 7A: jne 0x100ec07e
        __asm _emit 0x75
        __asm _emit 0x7a
        xor eax, eax
        mov al, byte ptr [esi + 3]
        mov ebp, eax
        sub ebp, 8
        test ebp, ebp
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 0F 8E D4 02 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        test ebp, ebp
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8E C6 02 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        xor ecx, ecx
        mov dl, byte ptr [esi + eax + 8]
        mov cl, byte ptr [esi + 2]
        shl edx, 4
        mov ebx, dword ptr [edx + edi + 0f7ch]
        test ebx, ebx
        ; Exact mapped bytes 74 27: je 0x100ec068
        __asm _emit 0x74
        __asm _emit 0x27
        add ecx, 15h
        lea ebp, [esi + 4]
        mov dword ptr [esp + 14h], ecx
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [ebx + 0ch]
        push ebp
        push eax
        ; Exact mapped bytes E8 F7 CD F1 FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ebx, dword ptr [ebx + 8]
        test ebx, ebx
        ; Exact mapped bytes 75 EB: jne 0x100ec04b
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebp, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 10h]
        inc eax
        cmp eax, ebp
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 7C B7: jl 0x100ec028
        __asm _emit 0x7c
        __asm _emit 0xb7
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, 7
        ; Exact mapped bytes 0F 85 68 02 00 00: jne 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor ebp, ebp
        mov al, byte ptr [esi + 3]
        sub eax, 4
        test eax, eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 8E 52 02 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esi + 4]
        xor ecx, ecx
        mov cl, byte ptr [ebx + ebp]
        shl ecx, 4
        mov esi, dword ptr [ecx + edi + 0f7ch]
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x100ec0c8
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 0ch]
        push ebx
        push 16h
        ; Exact mapped bytes E8 93 CD F1 FF: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xcd
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 75 EE: jne 0x100ec0b2
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [esp + 18h]
        inc ebp
        cmp ebp, eax
        ; Exact mapped bytes 7C D2: jl 0x100ec09f
        __asm _emit 0x7c
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 0C 02 00 00: jne 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 1]
        cmp al, 1
        ; Exact mapped bytes 75 6E: jne 0x100ec157
        __asm _emit 0x75
        __asm _emit 0x6e
        mov dl, byte ptr [esi + 2]
        mov al, byte ptr [edi + 330h]
        cmp dl, al
        ; Exact mapped bytes 0F 85 F4 01 00 00: jne 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 08: mov ax, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4E 04: mov cx, word ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes 66 8B 56 06: mov dx, word ptr [esi + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 7E 0A 00: cmp word ptr [esi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes 0F 84 D1 01 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 A2 00 F4 FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        add edi, 4
        push ecx
        mov ecx, dword ptr [eax + 5c08h]
        push edi
        ; Exact mapped bytes E8 06 85 F2 FF: call 0x10014650
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp al, 9
        ; Exact mapped bytes 0F 85 8F 01 00 00: jne 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test byte ptr [edx + 10560h], 1
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov al, byte ptr [esi + 3]
        sub eax, 4
        shr eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 8E 6A 01 00 00: jle 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [esi + 4]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 66 8B 45 00: mov ax, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 30 00 F4 FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 3A: je 0x100ec1e0
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [edi + 5c54h]
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x100ec1e0
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebx + 5c54h]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x100ec1e0
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [ebx + 332h]
        lea ecx, [edi + 332h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x100ec1e0
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebx + 7ch]
        xor edx, edx
        mov dl, byte ptr [esi + 2]
        push edx
        ; Exact mapped bytes E8 A0 99 F1 FF: call 0x10005b80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        add ebp, 2
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 9D: jne 0x100ec18b
        __asm _emit 0x75
        __asm _emit 0x9d
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 128h]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 B6 EF FF FF: call 0x100eb1c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 5c0ch]
        mov dword ptr [ecx + 0c4h], 40000000h
        mov eax, dword ptr [edi + 0e9ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 5c04h]
        lea eax, [edi + 4]
        push eax
        push eax
        ; Exact mapped bytes E8 0B 84 F2 FF: call 0x10014650
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 218h]
        ; Exact mapped bytes E8 13 6A F5 FF: call 0x10042c70
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6a
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x100ec2ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5c0ch]
        add edi, 37ch
        mov edx, dword ptr [eax + 9ch]
        mov ecx, dword ptr [eax + 88h]
        push edx
        mov edx, dword ptr [eax + 84h]
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        push edx
        push edi
        mov ecx, dword ptr [eax + 10474h]
        mov edx, dword ptr [eax + 1047ch]
        push ecx
        push edx
        lea eax, [esp + 38h]
        push 101ac448h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 20h
        lea ecx, [esp + 18h]
        lea edx, [esp + 20h]
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
        lea eax, [esp + 2ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi + 5ca0h], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 110h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
