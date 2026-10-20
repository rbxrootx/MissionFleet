// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D460 .. +0x394 bytes.
extern "C" __declspec(naked) void FUN_5876d460() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 7F 03 00 00: je 0x5876d7ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        push edi
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x5876d656
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 84 B7 01 00 00: je 0x5876d656
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 15: je 0x5876d4c5
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 600h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 0C 03 00 00: jne 0x5876d7d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        mov ecx, dword ptr [ecx + 8]
        mov edx, dword ptr [esi + 5ch]
        mov eax, ecx
        sub eax, edx
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5876d55e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + 0fh]
        cmp edx, 1eh
        ; Exact mapped bytes 77 36: ja 0x5876d51b
        __asm _emit 0x77
        __asm _emit 0x36
        lea ecx, [eax + 7]
        cmp ecx, 0eh
        ; Exact mapped bytes 77 23: ja 0x5876d510
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x5876d509
        __asm _emit 0x77
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5876d4fe
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 26: jmp 0x5876d524
        __asm _emit 0xeb
        __asm _emit 0x26
        xor ecx, ecx
        test eax, eax
        setg cl
        mov eax, ecx
        ; Exact mapped bytes EB 1B: jmp 0x5876d524
        __asm _emit 0xeb
        __asm _emit 0x1b
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 14: jmp 0x5876d524
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 09: jmp 0x5876d524
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        add dword ptr [esi + 74h], eax
        mov ecx, dword ptr [esi + 74h]
        mov edx, dword ptr [esi + 0c8h]
        neg eax
        mov dword ptr [edx + 54h], ecx
        mov ecx, dword ptr [esi + 0c4h]
        push eax
        ; Exact mapped bytes E8 5F 59 19 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x59
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0fh
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes E8 07 5E 19 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x5e
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x5876d7d1
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 1f00h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 5F: jne 0x5876d5d3
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 54h]
        push edx
        ; Exact mapped bytes E8 0D A4 19 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [esi + 0a8h]
        add dword ptr [esi + 5ch], eax
        mov edx, dword ptr [esi + 0ach]
        mov eax, dword ptr [edx + 54h]
        push ecx
        mov ecx, dword ptr [esi + 0a4h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 93 06 00: call 0x587d6990
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ach]
        push 6
        mov ecx, esi
        mov dword ptr [edx + 54h], 0
        ; Exact mapped bytes E8 82 40 FC FF: call 0x58731650
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x5876d7d1
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 600h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 E4 01 00 00: jne 0x5876d7d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0eh
        ; Exact mapped bytes 7E 14: jle 0x5876d619
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5876d619
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes EB 02: jmp 0x5876d61b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 50h], ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 66 A3 19 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push 464h
        mov ecx, esi
        ; Exact mapped bytes E8 28 FB FF FF: call 0x5876d170
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        mov ecx, esi
        ; Exact mapped bytes E8 FF 3F FC FF: call 0x58731650
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 7B 01 00 00: jmp 0x5876d7d1
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 0c0h]
        cmp dword ptr [ecx + 4], eax
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5876d708
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ach]
        sub eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esi + 0a0h]
        test eax, eax
        ; Exact mapped bytes 7E 06: jle 0x5876d681
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp eax, ecx
        ; Exact mapped bytes 7C 0A: jl 0x5876d689
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x5876d687
        __asm _emit 0xeb
        __asm _emit 0x06
        neg ecx
        cmp eax, ecx
        ; Exact mapped bytes 7F 02: jg 0x5876d689
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, ecx
        mov ecx, dword ptr [esi + 0b4h]
        mov edi, dword ptr [ecx + 4]
        add edi, eax
        mov eax, dword ptr [esi + 78h]
        mov ecx, dword ptr [esi + 0b0h]
        imul eax, edi
        cdq
        push ebx
        and edx, 3ffh
        add eax, edx
        sar eax, 0ah
        mov ebx, 300h
        sub ebx, eax
        sub ebx, dword ptr [esi + 80h]
        push ebx
        push edi
        ; Exact mapped bytes E8 CF 5B 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push ebx
        push edi
        ; Exact mapped bytes E8 C2 5B 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push ebx
        push edi
        ; Exact mapped bytes E8 B5 5B 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push ebx
        push edi
        ; Exact mapped bytes E8 A8 5B 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        add ebx, 40h
        push ebx
        add edi, 50h
        push edi
        ; Exact mapped bytes E8 95 5B 19 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 4E FC FF FF: call 0x5876d350
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x5876d7d1
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0fh
        ; Exact mapped bytes 7E 14: jle 0x5876d734
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5876d734
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x5876d736
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 50h], ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 4B A2 19 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa2
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 75 16: jne 0x5876d781
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, 0e2ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes EB 50: jmp 0x5876d7d1
        __asm _emit 0xeb
        __asm _emit 0x50
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 43: jne 0x5876d7d1
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 0eh
        ; Exact mapped bytes 7E 14: jle 0x5876d7ba
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5876d7ba
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov eax, dword ptr [eax + 38h]
        ; Exact mapped bytes EB 02: jmp 0x5876d7bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 5
        mov ecx, esi
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes E8 88 3E FC FF: call 0x58731650
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 6F CD FC FF: call 0x5873a540
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x5876d7ed
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5876d7f0
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5876d7d8
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
