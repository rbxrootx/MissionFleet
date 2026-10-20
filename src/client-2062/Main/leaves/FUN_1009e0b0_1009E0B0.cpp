// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009E0B0 .. +0x42F bytes.
extern "C" __declspec(naked) void FUN_1009e0b0_1009E0B0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 F2 03 00 00: je 0x1009e4b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        mov ebp, 2
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 0A: je 0x1009e0dc
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 BF 01 00 00: jne 0x1009e29b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 4F: jne 0x1009e131
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [edi + 2d0h]
        mov eax, dword ptr [edi + 8]
        sub eax, dword ptr [ecx + 8]
        add eax, 3e8h
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x1009e122
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x1009e122
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x1009e11b
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x1009e11b
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x1009e110
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x1009e12b
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor edx, edx
        test eax, eax
        setg dl
        mov eax, edx
        ; Exact mapped bytes EB 10: jmp 0x1009e12b
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x1009e12b
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 8F 0D 06 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        mov eax, dword ptr [edi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 74 42: je 0x1009e17d
        __asm _emit 0x74
        __asm _emit 0x42
        sub eax, ecx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x1009e16c
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x1009e16c
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x1009e165
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x1009e165
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x1009e15a
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x1009e175
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor ecx, ecx
        test eax, eax
        setg cl
        mov eax, ecx
        ; Exact mapped bytes EB 10: jmp 0x1009e175
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x1009e175
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 43 0D 06 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [edi + 8]
        mov eax, dword ptr [edi + 54h]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x1009e29b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x1009e245
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e2ffh
        mov ecx, edx
        or eax, 202h
        lea esi, [edi + 80h]
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        mov eax, dword ptr [edi + 4]
        mov dword ptr [edi + 2c4h], eax
        mov dword ptr [edi + 2c8h], ecx
        mov ebx, 4
        mov ecx, dword ptr [esi - 4]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi - 4]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi - 4]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        add esi, 8
        dec ebx
        ; Exact mapped bytes 75 CF: jne 0x1009e1cc
        __asm _emit 0x75
        __asm _emit 0xcf
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edi + 4]
        mov ebx, dword ptr [edi + 8]
        mov edx, 12ch
        mov esi, dword ptr [ecx + 170h]
        sub eax, 190h
        sub edx, ebx
        cmp esi, 0ch
        ; Exact mapped bytes 7E 0F: jle 0x1009e22f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x1009e22f
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes EB 02: jmp 0x1009e231
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edx
        push eax
        ; Exact mapped bytes E8 58 A7 FA FF: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 2a8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes EB 56: jmp 0x1009e29b
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 4F: jne 0x1009e29b
        __asm _emit 0x75
        __asm _emit 0x4f
        mov eax, dword ptr [edi + 2a8h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 5
        ; Exact mapped bytes 75 3C: jne 0x1009e29b
        __asm _emit 0x75
        __asm _emit 0x3c
        xor eax, eax
        lea esi, [edi + 80h]
        ; Exact mapped bytes A3 BC 91 1C 10: mov dword ptr [0x101c91bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A3 C0 91 1C 10: mov dword ptr [0x101c91c0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        mov ebx, 4
        and edx, 0e5f8h
        or dh, cl
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        mov ecx, dword ptr [esi - 4]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        add esi, 8
        dec ebx
        ; Exact mapped bytes 75 EB: jne 0x1009e286
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        and eax, 1f00h
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 05 02 00 00: jne 0x1009e4b4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 BC 91 1C 10: mov eax, dword ptr [0x101c91bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, 1
        cmp eax, 19h
        ; Exact mapped bytes 7C 68: jl 0x1009e326
        __asm _emit 0x7c
        __asm _emit 0x68
        ; Exact mapped bytes A1 C0 91 1C 10: mov eax, dword ptr [0x101c91c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 5F: jne 0x1009e326
        __asm _emit 0x75
        __asm _emit 0x5f
        mov ecx, dword ptr [edi + 2d0h]
        mov eax, dword ptr [edi + 8]
        sub eax, dword ptr [ecx + 8]
        add eax, 138h
        cmp eax, -8
        ; Exact mapped bytes 7E 2C: jle 0x1009e309
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp eax, 8
        ; Exact mapped bytes 7D 27: jge 0x1009e309
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x1009e300
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x1009e300
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x1009e2f5
        __asm _emit 0x7d
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x1009e314
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov esi, edx
        ; Exact mapped bytes EB 14: jmp 0x1009e314
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        ; Exact mapped bytes EB 0B: jmp 0x1009e314
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov esi, eax
        sar esi, 2
        push esi
        ; Exact mapped bytes E8 A6 0B 06 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 0E: jne 0x1009e32c
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 89 1D C0 91 1C 10: mov dword ptr [0x101c91c0], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes EB 06: jmp 0x1009e32c
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes FF 05 BC 91 1C 10: inc dword ptr [0x101c91bc]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edi + 2a8h]
        mov eax, dword ptr [eax + 58ch]
        mov edx, dword ptr [eax + 50h]
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009e34a
        __asm _emit 0x74
        __asm _emit 0x08
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x1009e34c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        dec ecx
        cmp edx, ecx
        ; Exact mapped bytes 75 13: jne 0x1009e364
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [edi + 74h]
        test byte ptr [eax + 24h], bl
        ; Exact mapped bytes 75 0B: jne 0x1009e364
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi + 78h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        push 0a0h
        ; Exact mapped bytes FF 15 70 51 17 10: call dword ptr [0x10175170]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        test al, 80h
        mov eax, dword ptr [edi + 2bch]
        ; Exact mapped bytes 74 79: je 0x1009e3f2
        __asm _emit 0x74
        __asm _emit 0x79
        test eax, eax
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x1009e460
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 2b8h]
        mov esi, 40000000h
        cmp eax, esi
        ; Exact mapped bytes 75 34: jne 0x1009e3c4
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2ch
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 EE FE F9 FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2ch
        ; Exact mapped bytes E8 21 C5 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [edi + 2b8h], 0
        mov dword ptr [edi + 2bch], esi
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x1009e460
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0dh
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 B9 FE F9 FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0dh
        ; Exact mapped bytes E8 EC C4 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [edi + 2b8h], esi
        mov dword ptr [edi + 2bch], esi
        ; Exact mapped bytes EB 6E: jmp 0x1009e460
        __asm _emit 0xeb
        __asm _emit 0x6e
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x1009e460
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [edi + 2b8h]
        mov esi, 40000000h
        cmp eax, esi
        ; Exact mapped bytes 75 2C: jne 0x1009e431
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2ch
        mov ecx, dword ptr [edx + 20b00h]
        ; Exact mapped bytes E8 78 FE F9 FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2ch
        ; Exact mapped bytes E8 AB C4 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [edi + 2b8h], 0
        ; Exact mapped bytes EB 25: jmp 0x1009e456
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0dh
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 4D FE F9 FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0dh
        ; Exact mapped bytes E8 80 C4 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [edi + 2b8h], esi
        mov dword ptr [edi + 2bch], 0
        mov eax, dword ptr [edi + 2ach]
        test eax, eax
        ; Exact mapped bytes 7E 29: jle 0x1009e493
        __asm _emit 0x7e
        __asm _emit 0x29
        dec eax
        mov dword ptr [edi + 2ach], eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 5
        idiv ecx
        mov eax, dword ptr [edi + 2c8h]
        mov ecx, edi
        sub eax, edx
        add eax, ebp
        push eax
        ; Exact mapped bytes E8 2F 09 06 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x1009e4b4
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 75 1F: jne 0x1009e4b4
        __asm _emit 0x75
        __asm _emit 0x1f
        mov dword ptr [edi + 2ach], 0ffffffffh
        mov ecx, dword ptr [edi + 2c8h]
        mov edx, dword ptr [edi + 2c4h]
        push ecx
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 1C 08 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x1009e4da
        __asm _emit 0x74
        __asm _emit 0x1f
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 10: je 0x1009e4d5
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x1009e4bb
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
