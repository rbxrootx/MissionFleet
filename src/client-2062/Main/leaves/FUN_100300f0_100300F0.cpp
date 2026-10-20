// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100300F0 .. +0x7D0 bytes.
extern "C" __declspec(naked) void FUN_100300f0_100300F0() {
    __asm {
        push -1
        push 1016e1f3h
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
        sub esp, 10h
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 84h
        ; Exact mapped bytes E8 88 C6 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov dword ptr [esp + 28h], 0
        ; Exact mapped bytes 74 47: je 0x10030172
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 18fh
        ; Exact mapped bytes 7E 12: jle 0x1003014f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1003014f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 63ch]
        ; Exact mapped bytes EB 02: jmp 0x10030151
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        push 132h
        push 0c9h
        push ecx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 20 31 FF FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10030174
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or ebx, 0ffffffffh
        push 84h
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esi + 9fe4h], eax
        ; Exact mapped bytes E8 15 C6 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov dword ptr [esp + 28h], 1
        ; Exact mapped bytes 74 47: je 0x100301e5
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 1c9h
        ; Exact mapped bytes 7E 12: jle 0x100301c2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100301c2
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 724h]
        ; Exact mapped bytes EB 02: jmp 0x100301c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 84 03: add dx, 0x384
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x84
        __asm _emit 0x03
        push edx
        push 132h
        push 0c9h
        push ecx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 AD 30 FF FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100301e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 9fe8h], eax
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 9fe8h]
        push 0fffffeffh
        mov dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes E8 59 EF 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xef
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9fe8h]
        mov ebp, 100h
        mov edi, 40000000h
        mov dword ptr [eax + 78h], 0fffffeffh
        mov eax, dword ptr [esi + 9fe8h]
        mov dword ptr [eax + 7ch], ebp
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 9fe8h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 9fe4h]
        push 101h
        ; Exact mapped bytes E8 1B EF 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xef
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9fe4h]
        mov dword ptr [eax + 78h], 101h
        mov eax, dword ptr [esi + 9fe4h]
        mov dword ptr [eax + 7ch], ebp
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 9fe4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        push 0a0h
        ; Exact mapped bytes E8 2D C5 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc5
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov dword ptr [esp + 28h], 2
        ; Exact mapped bytes 74 50: je 0x100302d6
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 35h
        ; Exact mapped bytes 7E 12: jle 0x100302a7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100302a7
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x100302a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1bfh
        push 174h
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
        ; Exact mapped bytes E8 EC 6F FE FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100302d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esi + 9fech], eax
        ; Exact mapped bytes E8 72 EE 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9fech]
        push 0
        ; Exact mapped bytes E8 25 EE 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9fech]
        mov dword ptr [eax + 80h], ebp
        mov ecx, dword ptr [esi + 9fech]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        push 90h
        ; Exact mapped bytes E8 84 C4 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov dword ptr [esp + 28h], 3
        ; Exact mapped bytes 74 44: je 0x10030373
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 37h
        ; Exact mapped bytes 7E 12: jle 0x10030350
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10030350
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0dc0h
        ; Exact mapped bytes EB 02: jmp 0x10030352
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 84 03: add dx, 0x384
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x84
        __asm _emit 0x03
        push edx
        push 1beh
        push 173h
        push ecx
        push esi
        push 20h
        mov ecx, eax
        ; Exact mapped bytes E8 0F 2C FF FF: call 0x10022f80
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10030375
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esi + 9ff4h], eax
        ; Exact mapped bytes E8 D5 ED 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xed
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ff4h]
        push 0
        mov dword ptr [eax + 80h], 101h
        mov eax, dword ptr [esi + 9ff4h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 9ff4h]
        ; Exact mapped bytes E8 6C ED 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ff4h]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [esi + 9ff4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        push 84h
        ; Exact mapped bytes E8 C7 C3 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc3
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov dword ptr [esp + 28h], 4
        ; Exact mapped bytes 74 47: je 0x10030433
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 1cah
        ; Exact mapped bytes 7E 12: jle 0x10030410
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10030410
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 728h]
        ; Exact mapped bytes EB 02: jmp 0x10030412
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 81 C2 84 03: add dx, 0x384
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x84
        __asm _emit 0x03
        push edx
        push 1bfh
        push 174h
        push ecx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 5F 2E FF FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10030435
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 9ff0h], eax
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 9ff0h]
        push 0fffffeffh
        mov dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes E8 0B ED 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ff0h]
        mov dword ptr [eax + 78h], 0fffffeffh
        mov eax, dword ptr [esi + 9ff0h]
        mov dword ptr [eax + 7ch], ebp
        mov dword ptr [eax + 74h], edi
        mov ecx, dword ptr [esi + 9ff0h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 9ffch]
        mov ecx, 1
        push 198h
        or byte ptr [eax + 24h], 2
        mov eax, dword ptr [esi + 9ffch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a000h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a024h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 F0 C2 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        test eax, eax
        mov dword ptr [esp + 28h], 5
        ; Exact mapped bytes 74 10: je 0x100304d3
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 10198178h
        mov ecx, eax
        ; Exact mapped bytes E8 EF F5 0C 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf5
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100304d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 35ch], eax
        lea eax, [esi + 360h]
        mov dword ptr [esp + 28h], ebx
        xor ebp, ebp
        mov dword ptr [esp + 14h], eax
        push 54h
        ; Exact mapped bytes E8 AE C2 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc2
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 18h], edi
        test edi, edi
        mov dword ptr [esp + 28h], 6
        ; Exact mapped bytes 74 7B: je 0x10030582
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 35ch]
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 13: jle 0x10030528
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebp, ebp
        ; Exact mapped bytes 7C 0F: jl 0x10030528
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10030528
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebx, dword ptr [eax + ebp*4]
        ; Exact mapped bytes EB 02: jmp 0x1003052a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, edi
        ; Exact mapped bytes 66 03 C5: add ax, bp
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc5
        add eax, 7d0h
        push eax
        push 0
        push 0
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 69 E4 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x00
        test ebx, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 29: je 0x1003057d
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebx + 10h]
        add ebx, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebx - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebx]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        or ebx, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x10030584
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 14h]
        inc ebp
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [eax], edi
        add eax, 4
        cmp ebp, 2
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C 4C FF FF FF: jl 0x100304eb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 360h]
        mov ecx, 7fffh
        push 0fffffeffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 364h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 360h]
        ; Exact mapped bytes E8 98 EB 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xeb
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 364h]
        push 101h
        ; Exact mapped bytes E8 88 EB 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xeb
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 360h]
        mov ecx, 1
        xor edx, edx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 364h]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 46ch]
        test eax, eax
        ; Exact mapped bytes 0F 8E 76 02 00 00: jle 0x1003087b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 8472h]
        lea ecx, [esi + 472h]
        xor ebp, ebp
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 14h], ecx
        lea edi, [esi + 9d74h]
        ; Exact mapped bytes EB 03: jmp 0x10030626
        __asm _emit 0xeb
        __asm _emit 0x03
        or ebx, 0ffffffffh
        push 84h
        ; Exact mapped bytes E8 70 C1 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc1
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        mov dword ptr [esp + 28h], 7
        ; Exact mapped bytes 74 5A: je 0x1003069d
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 15 FC 56 1C 10: mov edx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 3f0h]
        mov edx, dword ptr [edi - 1700h]
        lea edx, [edx*4 + 196h]
        cmp dword ptr [ecx + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x10030677
        __asm _emit 0x7e
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x10030677
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x10030677
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x10030679
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 8]
        push 40h
        add ecx, 1f4h
        push ecx
        mov ecx, dword ptr [esi + 4]
        lea ecx, [ecx + ebp + 0c8h]
        push ecx
        push edx
        push esi
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 F5 2B FF FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1003069f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [edi], eax
        mov dword ptr [eax + 78h], 0fffffeffh
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        mov dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes E8 A8 EA 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        push 0
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 57 EA 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 7ch], 100h
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [ebx + 40h]
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100306e9
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 B7 E8 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100306f6
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 0A E8 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        push 0a0h
        ; Exact mapped bytes E8 99 C0 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc0
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        mov dword ptr [esp + 28h], 8
        ; Exact mapped bytes 74 64: je 0x1003077e
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [edi - 1700h]
        add edx, 8
        mov ecx, dword ptr [ecx + 3f0h]
        cmp dword ptr [ecx + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x1003074c
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x1003074c
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1003074c
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x1003074e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 8]
        push 40h
        add ecx, 1f4h
        push ecx
        mov ecx, dword ptr [esi + 4]
        lea ecx, [ecx + ebp + 0c8h]
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
        ; Exact mapped bytes E8 44 6B FE FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10030780
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 2ch], 0ffffffffh
        mov dword ptr [edi - 200h], eax
        ; Exact mapped bytes E8 C6 E9 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi - 200h]
        push 0
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [edi - 200h]
        ; Exact mapped bytes E8 6D E9 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [edi - 200h]
        mov dword ptr [edx + 80h], 100h
        mov ebx, dword ptr [edi - 200h]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [ebx + 40h]
        ; Exact mapped bytes 66 89 43 26: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100307de
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 C2 E7 0C 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100307eb
        __asm _emit 0x74
        __asm _emit 0x06
        push ebx
        ; Exact mapped bytes E8 15 E7 0C 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 200h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 83 BB 00 01 00 00 00: cmp word ptr [ebx + 0x100], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x10030811
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [edi - 200h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [esp + 14h]
        lea eax, [esi + 368h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 84 50 17 10: call dword ptr [0x10175084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x10030840
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 8B 13: mov dx, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x13
        ; Exact mapped bytes 66 3B 96 68 04 00 00: cmp dx, word ptr [esi + 0x468]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x10030840
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [edi - 200h]
        mov dword ptr [eax + 50h], 5
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 46ch]
        inc eax
        add ebx, 2
        add edi, 4
        add ebp, 63h
        add edx, 100h
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F 8C B1 FD FF FF: jl 0x10030623
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 80h
        ; Exact mapped bytes 7D 20: jge 0x10030899
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, eax
        mov ecx, 80h
        lea eax, [esi + edx*4 + 9b74h]
        sub ecx, edx
        xor edx, edx
        mov dword ptr [eax + 200h], edx
        mov dword ptr [eax], edx
        add eax, 4
        dec ecx
        ; Exact mapped bytes 75 F2: jne 0x1003088b
        __asm _emit 0x75
        __asm _emit 0xf2
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esi + 0a00ch], 11h
        mov dword ptr [esi + 0a010h], 13h
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
        add esp, 1ch
        ret
    }
}
