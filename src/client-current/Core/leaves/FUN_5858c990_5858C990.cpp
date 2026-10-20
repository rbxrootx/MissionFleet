// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858C990 .. +0x524 bytes.
extern "C" __declspec(naked) void FUN_5858c990_5858C990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 F9 04 00 00: je 0x5858ceaf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 214h], 4
        ; Exact mapped bytes 0F 84 32 04 00 00: je 0x5858cdf8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], edx
        ; Exact mapped bytes 7D 17: jge 0x5858c9f1
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], edx
        ; Exact mapped bytes EB 0D: jmp 0x5858c9fe
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A F3 FF FF: call 0x5858bd30
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e0h]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        push ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 1dch]
        cdq
        mov ecx, 5dch
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 8B 22 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8b
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 208h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE 29 F1 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x29
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 1ech]
        and edx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x5858ca81
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffe0h
        inc edx
        mov esi, dword ptr [ebp - 4]
        mov dword ptr [esi + edx*8 + 0d4h], eax
        mov dword ptr [esi + edx*8 + 0d8h], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0c8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e0h]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        sub eax, 12ch
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 80 04 00: call 0x585d4ad0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x5858cafa
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1f8h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 10h], eax
        push 271ah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 93 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 27: jmp 0x5858cb21
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1f8h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 14h], eax
        push 2706h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 60 93 EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x93
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1f8h], 0
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x5858cc6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 18h], eax
        push 50h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F9 89 22 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x89
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 1e0h]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1fch]
        cdq
        mov esi, 0ah
        idiv esi
        lea eax, [ecx + eax - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 92 8A 22 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8a
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E8 D8 40 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x40
        __asm _emit 0x2c
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 68: jne 0x5858cc08
        __asm _emit 0x75
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1fch], 0
        ; Exact mapped bytes 7E 1B: jle 0x5858cbc7
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1fch], 0ah
        ; Exact mapped bytes 7E 0F: jle 0x5858cbc7
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 200h], 0
        ; Exact mapped bytes EB 41: jmp 0x5858cc08
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1fch], 0
        ; Exact mapped bytes 7D 1B: jge 0x5858cbee
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1fch], -0ah
        ; Exact mapped bytes 7D 0F: jge 0x5858cbee
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 200h], 1
        ; Exact mapped bytes EB 1A: jmp 0x5858cc08
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes E8 79 40 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x40
        __asm _emit 0x2c
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5858cbff
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 200h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 200h], 0
        ; Exact mapped bytes 74 2D: je 0x5858cc41
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes E8 53 40 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x40
        __asm _emit 0x2c
        __asm _emit 0x00
        cdq
        mov ecx, 1eh
        idiv ecx
        mov dword ptr [ebp - 24h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1fch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1fch], ecx
        ; Exact mapped bytes EB 2B: jmp 0x5858cc6c
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes E8 26 40 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x2c
        __asm _emit 0x00
        cdq
        mov ecx, 1eh
        idiv ecx
        mov dword ptr [ebp - 2ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1fch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1fch], ecx
        ; Exact mapped bytes EB 53: jmp 0x5858ccc1
        __asm _emit 0xeb
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20ch]
        mov dword ptr [ebp - 30h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B9 88 22 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x88
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 1e0h]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6C 89 22 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1fch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 214h], 1
        ; Exact mapped bytes 74 10: je 0x5858cceb
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 214h], 2
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x5858cde1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 9C EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C3 7C EF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7c
        __asm _emit 0xef
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 8B F0 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8b
        __asm _emit 0xf0
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 9C EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC 8C F0 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 9C EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 89 F0 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x89
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 8B F0 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8b
        __asm _emit 0xf0
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 9C EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 97 8C F0 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 48h], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 56 0D FE FF: call 0x5856db00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1f0h], 0
        ; Exact mapped bytes 7E 15: jle 0x5858cdcc
        __asm _emit 0x7e
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f0h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1f0h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 214h], 1
        ; Exact mapped bytes 75 09: jne 0x5858cde1
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 EE FF FF: call 0x5858bc90
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ech]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ech], ecx
        ; Exact mapped bytes EB 2D: jmp 0x5858ce25
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 82 91 EF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x91
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 208h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 6C 91 EF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x91
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5858ce46
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5858ce46
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5858ceaf
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5858ce69
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x5858ce4f
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 87 F0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5858ce8d
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5858ceaf
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5858cead
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7B 87 F0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x5858ce4f
        __asm _emit 0xeb
        __asm _emit 0xa0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
    }
}
