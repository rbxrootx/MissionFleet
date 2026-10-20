// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004065DA .. +0x6E5 bytes.
extern "C" __declspec(naked) void FUN_004065da_004065DA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5798ach
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
        sub esp, 120h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 12ch]
        mov ecx, 48h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 124h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 2
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x406773
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 D8 A8 12 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov esi, esp
        push 5a0528h
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 5ch
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8C 21 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x40665a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 79: jmp 0x4066d3
        __asm _emit 0xeb
        __asm _emit 0x79
        mov esi, esp
        push 5a0530h
        lea edx, [ebp - 10ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 68 21 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 908h], 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 5a056ch
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 BC 82 0C 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 120h], esp
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 C2 6D 0E 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 99 31 03 00: call 0x43986c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        push 30h
        mov eax, dword ptr [ebp - 124h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 38h
        ; Exact mapped bytes E8 D9 A8 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10ch]
        push ecx
        ; Exact mapped bytes E8 D7 2C 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 38h
        ; Exact mapped bytes E8 B1 A8 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 38h
        ; Exact mapped bytes E8 6B 3D 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 38h
        ; Exact mapped bytes E8 3C 3D 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 45ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 0A 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 DE 70 0E 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x70
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E9 2D 05 00 00: jmp 0x406ca0
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 464h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], eax
        cmp dword ptr [ebp - 12ch], 4
        ; Exact mapped bytes 7F 35: jg 0x4067c9
        __asm _emit 0x7f
        __asm _emit 0x35
        cmp dword ptr [ebp - 12ch], 4
        ; Exact mapped bytes 0F 84 63 02 00 00: je 0x406a04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 1
        ; Exact mapped bytes 74 44: je 0x4067ee
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 12ch], 2
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x40690d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 3
        ; Exact mapped bytes 0F 84 DD 01 00 00: je 0x4069a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D7 04 00 00: jmp 0x406ca0
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 100h
        ; Exact mapped bytes 0F 84 8E 02 00 00: je 0x406a67
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 400h
        ; Exact mapped bytes 0F 84 9D 03 00 00: je 0x406b86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B2 04 00 00: jmp 0x406ca0
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 20h
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 A6 88 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x4068c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 460h], 10000h
        push 0
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 464h]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 468h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 464h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 09 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 464h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 468h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 464h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 74 09 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 48: jmp 0x406908
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 460h], 0
        push 0
        push 30h
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 464h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 09 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 93 03 00 00: jmp 0x406ca0
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 38h
        ; Exact mapped bytes E8 9F A6 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 9A 2A 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp - 124h]
        add eax, 5ch
        push eax
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 38h
        ; Exact mapped bytes E8 71 A6 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 38h
        ; Exact mapped bytes E8 2D 3B 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 38h
        ; Exact mapped bytes E8 FE 3A 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 10000h
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 464h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B 3A 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A 31 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 FF 02 00 00: jmp 0x406ca0
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 460h], 10000h
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 464h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 468h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 464h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 39 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F7 30 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 9C 02 00 00: jmp 0x406ca0
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 460h], 10000h
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 464h]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 468h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 464h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 39 00 00: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 94 30 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 39 02 00 00: jmp 0x406ca0
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 2D 86 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x406b39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 460h], 10000h
        push 0
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 464h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 468h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 464h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 07 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x07
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 464h]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 468h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 464h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 FB 06 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 48: jmp 0x406b81
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 460h], 0
        push 0
        push 30h
        mov edx, dword ptr [ebp - 124h]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 464h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 06 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x406ca0
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 0E 85 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x406c58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 460h], 10000h
        push 0
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 464h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 468h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 464h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 06 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 464h]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 468h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 464h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 DC 05 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 48: jmp 0x406ca0
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 460h], 0
        push 0
        push 30h
        mov edx, dword ptr [ebp - 124h]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 464h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 05 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
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
        add esp, 12ch
        cmp ebp, esp
        ; Exact mapped bytes E8 27 1B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
