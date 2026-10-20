// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004235B0 .. +0x66A bytes.
extern "C" __declspec(naked) void FUN_004235b0_004235B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9c8h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 9c8h]
        mov ecx, 272h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ca0h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A DB FD FF: call 0x401159
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x4235ff
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 92 DD FD FF: call 0x40138e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 94 05 00 00: je 0x423b9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ca0h]
        mov eax, dword ptr [ebp - 0ch]
        add edx, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ca0h], edx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 158h]
        ; Exact mapped bytes E8 4C DE FD FF: call 0x40147e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 13 05 00 00: je 0x423b4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0f8h], 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0e8h]
        add edx, 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0e8h], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 158h]
        ; Exact mapped bytes E8 0C E1 FD FF: call 0x401776
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        mov ecx, 0bh
        lea edi, [ebp - 38h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea edx, [ebp - 30h]
        push edx
        push 63310ch
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0fch
        push eax
        ; Exact mapped bytes E8 19 E5 07 00: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov cl, byte ptr [ebp - 38h]
        shr cl, 4
        and cl, 0fh
        and ecx, 0ffh
        cmp ecx, 1
        ; Exact mapped bytes 75 61: jne 0x423705
        __asm _emit 0x75
        __asm _emit 0x61
        mov dl, byte ptr [ebp - 38h]
        and dl, 0fh
        and edx, 0ffh
        cmp edx, 1
        ; Exact mapped bytes 75 4B: jne 0x423700
        __asm _emit 0x75
        __asm _emit 0x4b
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 B4 E0 FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 30: je 0x423700
        __asm _emit 0x74
        __asm _emit 0x30
        push 78h
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 0b0h]
        push eax
        ; Exact mapped bytes E8 1E 1C 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 78h
        lea ecx, [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 09 DF FD FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 69 03 00 00: jmp 0x423a6e
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp - 38h]
        shr cl, 4
        and cl, 0fh
        and ecx, 0ffh
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 BC 01 00 00: jne 0x4238d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 4C E0 FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 98 01 00 00: je 0x4238d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 4B E3 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], -1
        ; Exact mapped bytes 0F 84 71 01 00 00: je 0x4238d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 500h
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 5b4h]
        push ecx
        ; Exact mapped bytes E8 88 1B 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 248h], 1
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x42381b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 5a8h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 10ch]
        ; Exact mapped bytes E8 7F DA FD FF: call 0x40121c
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 5b8h], eax
        cmp dword ptr [ebp - 5b8h], -1
        ; Exact mapped bytes 74 6F: je 0x42381b
        __asm _emit 0x74
        __asm _emit 0x6f
        mov dword ptr [ebp - 5e8h], 1
        mov esi, esp
        lea ecx, [ebp - 30h]
        push ecx
        push 63310ch
        lea edx, [ebp - 5d0h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 18 16 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 5a8h]
        push eax
        push 63310ch
        lea ecx, [ebp - 5e4h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 F3 15 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        push 30h
        lea edx, [ebp - 5e8h]
        push edx
        mov eax, dword ptr [ebp - 5b8h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes E8 1F DF FD FF: call 0x40173a
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dl, byte ptr [ebp - 38h]
        and dl, 0fh
        and edx, 0ffh
        cmp edx, 1
        ; Exact mapped bytes 75 73: jne 0x42389f
        __asm _emit 0x75
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 19 DE FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ech], eax
        cmp dword ptr [ebp - 5ech], -1
        ; Exact mapped bytes 74 23: je 0x423877
        __asm _emit 0x74
        __asm _emit 0x23
        push 500h
        lea eax, [ebp - 5b4h]
        push eax
        mov ecx, dword ptr [ebp - 5ech]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 3C E0 FD FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 26: jmp 0x42389d
        __asm _emit 0xeb
        __asm _emit 0x26
        push 500h
        lea eax, [ebp - 5b4h]
        push eax
        push 63315ch
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 D2 E0 FD FF: call 0x40196f
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x4238d4
        __asm _emit 0xeb
        __asm _emit 0x35
        mov al, byte ptr [ebp - 38h]
        and al, 0fh
        and eax, 0ffh
        cmp eax, 2
        ; Exact mapped bytes 75 26: jne 0x4238d4
        __asm _emit 0x75
        __asm _emit 0x26
        push 500h
        lea ecx, [ebp - 5b4h]
        push ecx
        push 63315ch
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 9B E0 FD FF: call 0x40196f
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 01 00 00: jmp 0x423a6e
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp - 38h]
        shr cl, 4
        and cl, 0fh
        and ecx, 0ffh
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x423a01
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 78 DE FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x4239ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 77 E1 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 5f0h], eax
        cmp dword ptr [ebp - 5f0h], -1
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x4239ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 96ch]
        push ecx
        ; Exact mapped bytes E8 B4 19 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dl, byte ptr [ebp - 38h]
        and dl, 0fh
        and edx, 0ffh
        cmp edx, 1
        ; Exact mapped bytes 75 6D: jne 0x4239cd
        __asm _emit 0x75
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 5f0h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 E5 DC FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 970h], eax
        cmp dword ptr [ebp - 970h], -1
        ; Exact mapped bytes 74 20: je 0x4239a8
        __asm _emit 0x74
        __asm _emit 0x20
        push 37ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 970h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 0B DF FD FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 23: jmp 0x4239cb
        __asm _emit 0xeb
        __asm _emit 0x23
        push 37ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 63315ch
        mov ecx, dword ptr [ebp - 5f0h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 A4 DF FD FF: call 0x40196f
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 32: jmp 0x4239ff
        __asm _emit 0xeb
        __asm _emit 0x32
        mov al, byte ptr [ebp - 38h]
        and al, 0fh
        and eax, 0ffh
        cmp eax, 2
        ; Exact mapped bytes 75 23: jne 0x4239ff
        __asm _emit 0x75
        __asm _emit 0x23
        push 37ch
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 63315ch
        mov edx, dword ptr [ebp - 5f0h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 70 DF FD FF: call 0x40196f
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 6D: jmp 0x423a6e
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov cl, byte ptr [ebp - 38h]
        shr cl, 4
        and cl, 0fh
        and ecx, 0ffh
        cmp ecx, 5
        ; Exact mapped bytes 75 59: jne 0x423a6e
        __asm _emit 0x75
        __asm _emit 0x59
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 54 DD FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 3E: je 0x423a6e
        __asm _emit 0x74
        __asm _emit 0x3e
        push 3
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 57 E0 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 974h], eax
        cmp dword ptr [ebp - 974h], -1
        ; Exact mapped bytes 74 1B: je 0x423a6e
        __asm _emit 0x74
        __asm _emit 0x1b
        push 1ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 974h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 5E DC FD FF: call 0x4016cc
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1F: je 0x423a93
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 978h], eax
        mov ecx, dword ptr [ebp - 978h]
        push ecx
        ; Exact mapped bytes E8 20 8A 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c7ch]
        mov ecx, dword ptr [eax + 40cbch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c7ch]
        mov dword ptr [eax + 40cbch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c7ch]
        mov eax, dword ptr [edx + 40cbch]
        push eax
        ; Exact mapped bytes E8 A7 DF 10 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 97ch], eax
        mov ecx, dword ptr [ebp - 97ch]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 97ch]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 07 13 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CF D9 FD FF: call 0x4014bf
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c7ch]
        mov edx, dword ptr [ecx + 40cbch]
        push edx
        ; Exact mapped bytes E8 6B DF 10 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 980h], eax
        mov eax, dword ptr [ebp - 980h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 980h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 CB 12 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 0d8h
        ; Exact mapped bytes E8 E4 1B 09 00: call 0x4b5716
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 65 DE FD FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F D7 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 FA FF FF: jmp 0x423624
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 74 3F: je 0x423b98
        __asm _emit 0x74
        __asm _emit 0x3f
        push 633fc0h
        push 63310ch
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0fch
        push ecx
        ; Exact mapped bytes E8 34 E0 07 00: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0f8h], 0
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 15 DE FD FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF D6 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 FA FF FF: jmp 0x4235f4
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 CE DE 10 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xde
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 984h], eax
        mov eax, dword ptr [ebp - 984h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 984h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 2E 12 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x423bfc
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ca0h]
        push ecx
        ; Exact mapped bytes E8 9B DE 10 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xde
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 988h], eax
        mov edx, dword ptr [ebp - 988h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 988h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 FB 11 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A9 D9 FD FF: call 0x4015a5
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 D4 FD FF: call 0x40102d
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 9c8h
        cmp ebp, esp
        ; Exact mapped bytes E8 DA 11 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
