// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F922 .. +0x3D1 bytes.
extern "C" __declspec(naked) void FUN_0044f922_0044F922() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b3a2h
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
        sub esp, 70h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 7ch]
        mov ecx, 1ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 7ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A6 15 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5b71d8h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D1 EF 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b71f0h
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 440h
        ; Exact mapped bytes E8 6F DD 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 01 16 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 440h
        ; Exact mapped bytes E8 88 DD 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 0c0000000h
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 440h
        ; Exact mapped bytes E8 94 DD 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F6 8D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 CA 02 00 00: je 0x44fcc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 1ch]
        push edx
        push 4
        mov eax, dword ptr [ebp - 7ch]
        add eax, 470h
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C5 8D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x44fa29
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x44faf6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [edx + 470h], 0
        mov dword ptr [ebp - 24h], 1
        mov esi, esp
        push 0ah
        push 0dh
        push 5b7200h
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 84 8D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6B 8D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 28h]
        push edx
        push 4
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4C 8D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x44fad9
        __asm _emit 0x74
        __asm _emit 0x41
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3B: je 0x44fad9
        __asm _emit 0x74
        __asm _emit 0x3b
        mov esi, esp
        push 0
        lea edx, [ebp - 28h]
        push edx
        mov edi, esp
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 27 8D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 11 8D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x44fad9
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 1B: jne 0x44faf4
        __asm _emit 0x75
        __asm _emit 0x1b
        mov byte ptr [ebp - 64h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 60 DD 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 64h]
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x44fcd7
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x44fb62
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 470h]
        add ecx, 1
        mov dword ptr [ebp - 5ch], ecx
        mov esi, esp
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C2 8C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 60h]
        push eax
        push 4
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 8C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x44fb47
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 75 1B: jne 0x44fb62
        __asm _emit 0x75
        __asm _emit 0x1b
        mov byte ptr [ebp - 68h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F2 DC 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 68h]
        ; Exact mapped bytes E9 75 01 00 00: jmp 0x44fcd7
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ah
        push 0dh
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 72: mov cx, word ptr [eax + 0x72]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x72
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 46: mov ax, word ptr [edx + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x46
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 70: mov dx, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x70
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 44: mov cx, word ptr [eax + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x44
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 3ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 58h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 48h
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 2ch
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1ch
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 14h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx + 470h]
        push eax
        push 5b7228h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 5ch
        cmp esi, esp
        ; Exact mapped bytes E8 CA 8B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 8B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 20h]
        push edx
        mov edi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 95 8B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7E 8B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x44fc6c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 18: jne 0x44fc84
        __asm _emit 0x75
        __asm _emit 0x18
        mov byte ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CD DB 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 6ch]
        ; Exact mapped bytes EB 53: jmp 0x44fcd7
        __asm _emit 0xeb
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 76 D7 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 37 8B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 74h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 90 DB 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 74h]
        ; Exact mapped bytes EB 16: jmp 0x44fcd7
        __asm _emit 0xeb
        __asm _emit 0x16
        mov byte ptr [ebp - 78h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 78 DB 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 7ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F3 8A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
