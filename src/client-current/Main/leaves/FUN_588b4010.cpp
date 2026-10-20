// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B4010 .. +0x420 bytes.
extern "C" __declspec(naked) void FUN_588b4010() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 0B 04 00 00: je 0x588b442a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x04
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
        ; Exact mapped bytes 0F 85 8A 02 00 00: jne 0x588b42c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        mov edx, 6
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 50 02 00 00: je 0x588b429d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        mov edi, dword ptr [esi + 54h]
        sub eax, dword ptr [esi + 4]
        sub edi, dword ptr [esi + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 68: jne 0x588b40c5
        __asm _emit 0x75
        __asm _emit 0x68
        lea ecx, [eax + 0fh]
        cmp ecx, 1eh
        ; Exact mapped bytes 77 49: ja 0x588b40ae
        __asm _emit 0x77
        __asm _emit 0x49
        lea ecx, [eax + 7]
        cmp ecx, 0eh
        ; Exact mapped bytes 77 28: ja 0x588b4095
        __asm _emit 0x77
        __asm _emit 0x28
        add eax, 3
        cmp eax, edx
        ; Exact mapped bytes 0F BF 86 E0 00 00 00: movsx eax, word ptr [esi + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 23: ja 0x588b409e
        __asm _emit 0x77
        __asm _emit 0x23
        add eax, eax
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 1
        ; Exact mapped bytes E8 80 ED 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 78 03 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 86 E0 00 00 00: movsx eax, word ptr [esi + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, eax
        add eax, eax
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 67 ED 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 5F 03 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 50 ED 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 03 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE E0 00 00 00 01: cmp word ptr [esi + 0xe0], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x588b41b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 3B: jne 0x588b4113
        __asm _emit 0x75
        __asm _emit 0x3b
        lea ecx, [eax + 8]
        cmp ecx, 2
        ; Exact mapped bytes 7E 13: jle 0x588b40f3
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, 2
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 22 ED 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 1A 03 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x588b425c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 2
        ; Exact mapped bytes E8 02 ED 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA 02 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 75 23: jne 0x588b413b
        __asm _emit 0x75
        __asm _emit 0x23
        lea edx, [eax - 4]
        test edx, edx
        ; Exact mapped bytes 0F 85 69 01 00 00: jne 0x588b428c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 3
        ; Exact mapped bytes E8 DA EC 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 D2 02 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 3
        ; Exact mapped bytes 75 23: jne 0x588b4163
        __asm _emit 0x75
        __asm _emit 0x23
        lea ecx, [eax + 2]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 11 01 00 00: jne 0x588b425c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 4
        ; Exact mapped bytes E8 B2 EC 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 AA 02 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 75 23: jne 0x588b418b
        __asm _emit 0x75
        __asm _emit 0x23
        lea edx, [eax - 1]
        test edx, edx
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x588b428c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 5
        ; Exact mapped bytes E8 8A EC 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 02 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x588b428f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x588b425c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], edx
        ; Exact mapped bytes E8 65 EC 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 5D 02 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 3B: jne 0x588b41f0
        __asm _emit 0x75
        __asm _emit 0x3b
        lea ecx, [eax - 8]
        cmp ecx, -2
        ; Exact mapped bytes 7D 13: jge 0x588b41d0
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, 0fffffffeh
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 45 EC 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 3D 02 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x588b428c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 2
        ; Exact mapped bytes E8 25 EC 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 75 1F: jne 0x588b4214
        __asm _emit 0x75
        __asm _emit 0x1f
        lea ecx, [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 75 60: jne 0x588b425c
        __asm _emit 0x75
        __asm _emit 0x60
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 3
        ; Exact mapped bytes E8 01 EC 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 F9 01 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 3
        ; Exact mapped bytes 75 1F: jne 0x588b4238
        __asm _emit 0x75
        __asm _emit 0x1f
        lea edx, [eax - 2]
        test edx, edx
        ; Exact mapped bytes 75 6C: jne 0x588b428c
        __asm _emit 0x75
        __asm _emit 0x6c
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 4
        ; Exact mapped bytes E8 DD EB 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 D5 01 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 75 32: jne 0x588b426f
        __asm _emit 0x75
        __asm _emit 0x32
        lea ecx, [eax + 1]
        test ecx, ecx
        ; Exact mapped bytes 75 18: jne 0x588b425c
        __asm _emit 0x75
        __asm _emit 0x18
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], 5
        ; Exact mapped bytes E8 B9 EB 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A6 EB 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 9E 01 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 5
        ; Exact mapped bytes 75 1B: jne 0x588b428f
        __asm _emit 0x75
        __asm _emit 0x1b
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x588b428c
        __asm _emit 0x75
        __asm _emit 0x14
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0dch], edx
        ; Exact mapped bytes E8 89 EB 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 01 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 78 EB 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 70 01 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e2ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 120h], 0
        ; Exact mapped bytes E9 49 01 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x01
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
        mov ecx, 400h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x588b4374
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        sub eax, dword ptr [esi + 8]
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [esi + 120h]
        push eax
        ; Exact mapped bytes 66 8B 86 E0 00 00 00: mov ax, word ptr [esi + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 F7 D8: neg ax
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        shr edx, 1
        imul edx, ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 06 EB 04 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0e0h]
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 08: jne 0x588b431f
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esi + 4]
        cmp edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 7E 0E: jle 0x588b432d
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 F8 FF: cmp ax, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 44: jne 0x588b4369
        __asm _emit 0x75
        __asm _emit 0x44
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 7C 3C: jl 0x588b4369
        __asm _emit 0x7c
        __asm _emit 0x3c
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e5ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov edx, dword ptr [esi + 0d4h]
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d8h]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 36 EF 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 120h], 0
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 120h]
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x588b440d
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
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
        mov edx, 200h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 37: jne 0x588b43c1
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, esi
        ; Exact mapped bytes E8 0F F5 FF FF: call 0x588b38a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 120h]
        cmp eax, 12ch
        ; Exact mapped bytes 73 07: jae 0x588b43a5
        __asm _emit 0x73
        __asm _emit 0x07
        inc eax
        mov dword ptr [esi + 120h], eax
        cmp dword ptr [esi + 120h], 12ch
        ; Exact mapped bytes 75 5C: jne 0x588b440d
        __asm _emit 0x75
        __asm _emit 0x5c
        cmp dword ptr [esi + 124h], 0
        ; Exact mapped bytes 74 53: je 0x588b440d
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 48: jmp 0x588b4409
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 3B: jne 0x588b440d
        __asm _emit 0x75
        __asm _emit 0x3b
        xor eax, eax
        lea ecx, [esi + 0e8h]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 0B: jne 0x588b43f0
        __asm _emit 0x75
        __asm _emit 0x0b
        inc eax
        add ecx, 4
        cmp eax, 7
        ; Exact mapped bytes 7C F2: jl 0x588b43e0
        __asm _emit 0x7c
        __asm _emit 0xf2
        ; Exact mapped bytes EB 1D: jmp 0x588b440d
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 124h], 1
        mov dword ptr [esi + 120h], 0
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x588b4429
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x588b442c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x588b4414
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
