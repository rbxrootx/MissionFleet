// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003F700 .. +0xAEF bytes.
extern "C" __declspec(naked) void FUN_1003f700_1003F700() {
    __asm {
        push -1
        push 1016e63ch
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
        sub esp, 2c4h
        push ebp
        mov edx, ecx
        xor ebp, ebp
        mov dword ptr [esp + 0ch], edx
        mov byte ptr [edx + 93h], 0
        ; Exact mapped bytes 66 89 6A 04: mov word ptr [edx + 4], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6a
        __asm _emit 0x04
        mov dword ptr [edx + 8ch], ebp
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 8], 10h
        cmp dword ptr [eax + 4], ebp
        ; Exact mapped bytes 0F 84 7D 0A 00 00: je 0x100401c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        lea edi, [edx + 8]
        mov ecx, 20h
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [esp + 4ah]
        mov ecx, 2
        mov esi, 384h
        ; Exact mapped bytes 66 89 70 FE: mov word ptr [eax - 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0xfe
        ; Exact mapped bytes 66 89 30: mov word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x30
        add eax, 4
        dec ecx
        ; Exact mapped bytes 75 F3: jne 0x1003f768
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B 1D C4 58 1C 10: mov ebx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        mov dword ptr [esp + 10h], ebp
        mov eax, dword ptr [ebx + 4]
        mov esi, dword ptr [eax + 0e80h]
        mov eax, 214h
        ; Exact mapped bytes 66 39 AE 9E 00 00 00: cmp word ptr [esi + 0x9e], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [edx + 8]
        setne cl
        sub eax, edx
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 44h], eax
        mov eax, 9c4h
        sub eax, edx
        mov dword ptr [esp + 1ch], eax
        mov eax, 294h
        sub eax, edx
        mov dword ptr [esp + 24h], eax
        mov eax, 1878h
        sub eax, edx
        mov dword ptr [esp + 2ch], eax
        mov eax, 0c6ch
        sub eax, edx
        mov dword ptr [esp + 30h], eax
        mov eax, 0cech
        sub eax, edx
        mov dword ptr [esp + 3ch], eax
        mov eax, 0fffffff8h
        sub eax, edx
        mov dword ptr [esp + 40h], eax
        mov eax, dword ptr [ebx + 4]
        mov esi, dword ptr [esp + 10h]
        xor edx, edx
        xor ecx, ecx
        mov dl, byte ptr [eax + esi + 1d8h]
        mov cl, byte ptr [eax + esi + 1f8h]
        lea edi, [esp + 5ch]
        lea ecx, [ecx + edx*2]
        lea edx, [ecx*8]
        sub edx, ecx
        mov ecx, 7
        lea esi, [eax + edx*4 + 778h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 1ch]
        lea edi, [ecx + ebp]
        mov esi, dword ptr [edi + eax + 328h]
        test esi, esi
        ; Exact mapped bytes 0F 84 FA 03 00 00: je 0x1003fc2f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi]
        and ecx, 0fh
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 EB 03 00 00: jne 0x1003fc2f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        mov ecx, 2dh
        add edx, ebp
        lea edi, [esp + 78h]
        mov dword ptr [esp + 54h], 0
        mov eax, dword ptr [edx + eax]
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [ebx + 4]
        mov ebx, dword ptr [esp + 6ah]
        ; Exact mapped bytes 0F BF 94 24 24 01 00 00: movsx edx, word ptr [esp + 0x124]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e80h]
        xor ecx, ecx
        and ebx, 0ffffh
        ; Exact mapped bytes 66 8B 88 98 00 00 00: mov cx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        xor ecx, ecx
        add eax, edx
        xor edx, edx
        imul ebx, eax
        lea edi, [eax + eax*4]
        mov eax, dword ptr [esp + 10h]
        mov cl, byte ptr [esi + eax + 1d8h]
        mov dl, byte ptr [esi + eax + 1f8h]
        lea edi, [edi + edi*4]
        lea eax, [edx + ecx*2]
        shl edi, 2
        lea ecx, [eax*8]
        sub ecx, eax
        mov edx, dword ptr [esi + ecx*4 + 3f8h]
        xor edx, 540h
        shr edx, 5
        and edx, 7fh
        mov dword ptr [esp + 50h], edx
        ; Exact mapped bytes DF 6C 24 50: fild qword ptr [esp + 0x50]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes DD 5C 24 34: fstp qword ptr [esp + 0x34]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes DD 44 24 34: fld qword ptr [esp + 0x34]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes DC 0D 30 52 17 10: fmul qword ptr [0x10175230]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 C0 CE 12 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0x00
        imul eax, edi
        mov ecx, eax
        mov eax, 60606061h
        imul ecx
        sar edx, 5
        mov eax, edx
        mov dword ptr [esp + 20h], ecx
        shr eax, 1fh
        add edx, eax
        lea ecx, [edi + edi*2]
        add edx, ecx
        mov ecx, edx
        cmp ebx, ecx
        ; Exact mapped bytes 7E 02: jle 0x1003f90d
        __asm _emit 0x7e
        __asm _emit 0x02
        mov ebx, ecx
        lea edx, [ebx + edi]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        xor eax, eax
        push edx
        push ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [esp + 3ch], edx
        push ecx
        mov ecx, dword ptr [esp + 1ch]
        xor edx, edx
        mov dl, byte ptr [esi + ecx + 1d8h]
        mov al, byte ptr [esi + ecx + 1f8h]
        lea eax, [eax + edx*2]
        lea edx, [eax*8]
        sub edx, eax
        mov eax, dword ptr [esi + edx*4 + 3f8h]
        xor edx, edx
        and eax, 0fe0h
        mov dl, byte ptr [esi + ecx + 1f8h]
        xor eax, 1540h
        shr eax, 5
        push eax
        xor eax, eax
        mov al, byte ptr [esi + ecx + 1d8h]
        push ebx
        inc edx
        push edi
        shl eax, 1
        push edx
        push eax
        lea ecx, [esp + 1f4h]
        push 101aa3a0h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 28h
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x1003f9f4
        __asm _emit 0x74
        __asm _emit 0x59
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 101aa390h
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A3 F0 51 1C 10: mov dword ptr [0x101c51f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 58h]
        push 0
        lea eax, [esp + 1d8h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 1dch]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 F0 51 1C 10: mov eax, dword ptr [0x101c51f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 1d4h]
        push ecx
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 6ch]
        mov eax, 2710h
        and ecx, 0ffffh
        cdq
        add ecx, 64h
        idiv ecx
        mov edx, dword ptr [esp + 116h]
        and edx, 0ffffh
        mov ecx, eax
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 1]
        ; Exact mapped bytes 66 89 8C 24 16 01 00 00: mov word ptr [esp + 0x116], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 114h]
        mov ecx, dword ptr [esp + 14h]
        and eax, 7fh
        cmp ecx, eax
        ; Exact mapped bytes 7E 04: jle 0x1003fa5a
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 112h]
        xor ebx, ebx
        mov eax, dword ptr [edx + 4]
        xor edx, edx
        shr ecx, 4
        mov dl, byte ptr [eax + esi + 1d8h]
        mov bl, byte ptr [eax + esi + 1f8h]
        and ecx, 7fh
        lea edx, [ebx + edx*2]
        ; Exact mapped bytes 66 39 4C 54 48: cmp word ptr [esp + edx*2 + 0x48], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4c
        __asm _emit 0x54
        __asm _emit 0x48
        ; Exact mapped bytes 76 1A: jbe 0x1003faaa
        __asm _emit 0x76
        __asm _emit 0x1a
        xor edx, edx
        xor ebx, ebx
        mov dl, byte ptr [eax + esi + 1d8h]
        mov bl, byte ptr [eax + esi + 1f8h]
        lea edx, [ebx + edx*2]
        ; Exact mapped bytes 66 89 4C 54 48: mov word ptr [esp + edx*2 + 0x48], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x54
        __asm _emit 0x48
        mov ecx, dword ptr [esp + 44h]
        add ecx, ebp
        mov edx, dword ptr [ecx + eax]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1003fabf
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, edx
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 244ech
        ; Exact mapped bytes E8 D7 CC 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        test eax, eax
        mov dword ptr [esp + 2dch], 0
        ; Exact mapped bytes 74 56: je 0x1003fb35
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D 5C 57 1C 10: mov ebx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 4]
        mov edx, dword ptr [esp + 7ch]
        mov ecx, dword ptr [ebx + 160h]
        and edx, 0ffffh
        cmp ecx, edx
        ; Exact mapped bytes 7E 15: jle 0x1003fb17
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x1003fb17
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ebx, dword ptr [ebx + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 07: je 0x1003fb17
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, ebx
        ; Exact mapped bytes EB 02: jmp 0x1003fb19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 8F 90 3E 00 00: mov cx, word ptr [edi + 0x3e90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [edi + 8]
        push ecx
        mov ecx, dword ptr [edi + 4]
        push ecx
        push edx
        push esi
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 BD 5E 00 00: call 0x100459f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1003fb37
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 2dch], 0ffffffffh
        mov ecx, dword ptr [edx + 4]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 3A 3C 00 00: call 0x10043790
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 5C 57 1C 10: mov edx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ebp]
        push edx
        ; Exact mapped bytes E8 FB 40 00 00: call 0x10043c60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 2ch]
        add ecx, eax
        mov eax, dword ptr [ecx + ebp]
        mov dword ptr [edx + 243d8h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [eax + esi*8 + 0d78h]
        mov eax, dword ptr [eax + esi*8 + 0d74h]
        push edx
        push eax
        ; Exact mapped bytes E8 00 4F 00 00: call 0x10044aa0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 40h]
        add edx, ebp
        mov eax, dword ptr [ecx + 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 76 0C 00 00: mov cx, word ptr [edx + eax + 0xc76]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        xor ecx, 0aah
        add edx, ebp
        push ecx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 02: mov cx, word ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x02
        xor ecx, 0aah
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 65 4E 00 00: call 0x10044a40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        lea edx, [esp + 78h]
        ; Exact mapped bytes 66 8B 88 2C 03 00 00: mov cx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp]
        push esi
        push edx
        ; Exact mapped bytes E8 C6 56 00 00: call 0x100452c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [esp + 34h]
        push edx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp]
        push 0
        ; Exact mapped bytes E8 3F 4F 00 00: call 0x10044b50
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 0F 84 E3 01 00 00: je 0x1003fe00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        mov dword ptr [eax + 140h], 1
        ; Exact mapped bytes E9 D1 01 00 00: jmp 0x1003fe00
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + eax + 328h]
        test eax, eax
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x1003fe06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B9 01 00 00: jne 0x1003fe06
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        mov eax, dword ptr [ebx + 4]
        add ecx, ebp
        lea edi, [esp + 12ch]
        mov dword ptr [esp + 34h], ecx
        mov eax, dword ptr [ecx + eax]
        mov ecx, 2ah
        mov esi, eax
        mov eax, 2710h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 6eh]
        and ecx, 0ffffh
        cdq
        add ecx, 64h
        idiv ecx
        mov esi, eax
        mov eax, dword ptr [esp + 1cch]
        and eax, 0ffffh
        lea eax, [eax + eax*2]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        lea ecx, [ecx + ecx*4]
        shl ecx, 1
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul esi, edx
        imul esi
        mov eax, dword ptr [esp + 1c4h]
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        shr eax, 4
        lea edx, [edx + ecx + 1]
        mov ecx, dword ptr [esp + 14h]
        and eax, 7fh
        ; Exact mapped bytes 66 89 94 24 CC 01 00 00: mov word ptr [esp + 0x1cc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, eax
        ; Exact mapped bytes 7E 04: jle 0x1003fce3
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 24h]
        mov ebx, dword ptr [ebx + 4]
        add eax, ebp
        mov ecx, dword ptr [eax + ebx]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1003fcfb
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, ecx
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 3a44h
        ; Exact mapped bytes E8 9B CA 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xca
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        test eax, eax
        mov dword ptr [esp + 2dch], 1
        ; Exact mapped bytes 74 59: je 0x1003fd74
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 130h]
        ; Exact mapped bytes 8B 3D 60 57 1C 10: mov edi, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        and edx, 0ffffh
        mov esi, dword ptr [ecx + 4]
        add edx, 2
        cmp dword ptr [edi + 160h], edx
        ; Exact mapped bytes 7E 15: jle 0x1003fd57
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x1003fd57
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, dword ptr [edi + 190h]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x1003fd57
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, edi
        ; Exact mapped bytes EB 02: jmp 0x1003fd59
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 8E 90 3E 00 00: mov cx, word ptr [esi + 0x3e90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 2E 71 00 00: call 0x10046ea0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1003fd76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ebp], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 2dch], 0ffffffffh
        mov ecx, dword ptr [edx + 4]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 FB 39 00 00: call 0x10043790
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [edx + 4]
        add eax, ebx
        mov edx, dword ptr [eax + ebp]
        mov dword ptr [ecx + 3900h], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 30h]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 66 8B 88 2C 03 00 00: mov cx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        lea ecx, [eax + edx]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 29: mov dx, word ptr [ecx + ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x29
        mov ecx, dword ptr [esp + 14h]
        xor edx, 0aah
        push edx
        mov edx, dword ptr [esp + 3ch]
        push ecx
        mov ecx, dword ptr [eax + edx]
        mov eax, dword ptr [eax + 0e74h]
        lea edx, [esp + 138h]
        push ecx
        mov ecx, dword ptr [ebp]
        push edx
        push eax
        ; Exact mapped bytes E8 68 66 00 00: call 0x10046460
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 20 77 00 00: call 0x10047520
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D C4 58 1C 10: mov ebx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 10h]
        add ebp, 4
        inc eax
        cmp eax, 20h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C CD F9 FF FF: jl 0x1003f7e8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        mov ecx, 14ch
        sub ecx, eax
        xor ebx, ebx
        mov dword ptr [esp + 24h], ecx
        mov ecx, 1cch
        sub ecx, eax
        mov ebp, 114h
        lea esi, [eax + 8]
        mov dword ptr [esp + 28h], ecx
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 0F 84 54 03 00 00: je 0x1004019d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi]
        mov al, byte ptr [edx + ebx + 1d8h]
        mov dword ptr [ecx + 120h], eax
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi]
        cmp ecx, 64h
        ; Exact mapped bytes 72 05: jb 0x1003fe7d
        __asm _emit 0x72
        __asm _emit 0x05
        mov ecx, 64h
        mov dword ptr [eax + 0cch], ecx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 40h]
        mov eax, dword ptr [edx + 4]
        lea edi, [esi + ecx]
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [eax + 0e74h]
        ; Exact mapped bytes 0F BF 94 38 56 01 00 00: movsx edx, word ptr [eax + edi + 0x156]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, esi
        push edx
        ; Exact mapped bytes 0F BF 14 08: movsx edx, word ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x08
        mov ecx, dword ptr [esi]
        push edx
        ; Exact mapped bytes E8 FC 37 00 00: call 0x100436b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 0e74h]
        ; Exact mapped bytes 0F BF 14 28: movsx edx, word ptr [eax + ebp]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x28
        ; Exact mapped bytes 0F BF 8C 38 D6 01 00 00: movsx ecx, word ptr [eax + edi + 0x1d6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        lea edx, [esi + eax]
        mov eax, dword ptr [esp + 2ch]
        push ecx
        ; Exact mapped bytes 0F BF 0C 02: movsx ecx, word ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x02
        push ecx
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 FD 37 00 00: call 0x100436e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax + 324h]
        mov eax, ebx
        mov dword ptr [ecx + 74h], edx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cdq
        and edx, 0fh
        add eax, edx
        mov edx, dword ptr [ecx + 4]
        sar eax, 4
        mov edx, dword ptr [edx + 0e74h]
        mov ecx, 132h
        sub ecx, ebp
        mov eax, dword ptr [edx + eax*4 + 260h]
        shr eax, cl
        mov ecx, dword ptr [esi]
        and eax, 3
        push eax
        ; Exact mapped bytes E8 94 39 00 00: call 0x100438c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 100h], 40000000h
        ; Exact mapped bytes 75 2E: jne 0x1003ff68
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        xor edx, edx
        mov dl, byte ptr [eax + ebx + 1d8h]
        add eax, ebx
        mov edi, edx
        xor edx, edx
        mov dl, byte ptr [eax + 1f8h]
        lea eax, [edx + edi*2]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 44 48: mov dx, word ptr [esp + eax*2 + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x44
        __asm _emit 0x48
        push edx
        ; Exact mapped bytes E8 E8 37 00 00: call 0x10043750
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [edx + 0e74h]
        ; Exact mapped bytes 0F BF 04 28: movsx eax, word ptr [eax + ebp]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x28
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        mov dword ptr [ecx + 0a8h], eax
        ; Exact mapped bytes E8 E3 30 00 00: call 0x10043070
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov al, byte ptr [edx + ebx + 1f8h]
        test al, al
        mov eax, dword ptr [esp + 18h]
        mov cl, byte ptr [eax + 93h]
        ; Exact mapped bytes 74 05: je 0x1003ffb0
        __asm _emit 0x74
        __asm _emit 0x05
        or cl, 20h
        ; Exact mapped bytes EB 03: jmp 0x1003ffb3
        __asm _emit 0xeb
        __asm _emit 0x03
        or cl, 10h
        mov byte ptr [eax + 93h], cl
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        mov eax, dword ptr [eax + 4]
        mov cl, byte ptr [eax + ebx + 1d8h]
        mov edx, dword ptr [eax + 31ch]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x100400b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        add edx, esi
        mov eax, dword ptr [eax + edx + 328h]
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x1004004e
        __asm _emit 0x74
        __asm _emit 0x65
        mov al, byte ptr [eax]
        mov edi, 5
        and eax, 0fh
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 56: jne 0x1004004e
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 243d0h], 1
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x10040021
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x10040021
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x10040023
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [eax + 244e0h], ecx
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x10040046
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x10040046
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes EB 02: jmp 0x10040048
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [eax + 244e4h], ecx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        add eax, 328h
        mov eax, dword ptr [eax + edx]
        test eax, eax
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x1004019d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 28 01 00 00: jne 0x1004019d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 38f8h], 1
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 5
        ; Exact mapped bytes 7E 18: jle 0x100400a8
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x100400a8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 14h]
        mov dword ptr [eax + 3a3ch], ecx
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x1004019d
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [eax + 3a3ch], ecx
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x1004019d
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        lea edi, [esi + ecx]
        mov eax, dword ptr [eax + edi + 328h]
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x10040139
        __asm _emit 0x74
        __asm _emit 0x72
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 67: jne 0x10040139
        __asm _emit 0x75
        __asm _emit 0x67
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0f4h]
        mov dword ptr [ecx + 243d0h], 2
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        sbb eax, eax
        add eax, 7
        cmp dword ptr [edx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x1004010c
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x1004010c
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x1004010c
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x1004010e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ecx + 244e0h], eax
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9
        ; Exact mapped bytes 7E 0F: jle 0x10040131
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10040131
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x10040133
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ecx + 244e4h], eax
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        add eax, 328h
        mov eax, dword ptr [eax + edi]
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x1004019d
        __asm _emit 0x74
        __asm _emit 0x4f
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 44: jne 0x1004019d
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0f4h]
        mov dword ptr [ecx + 38f8h], 2
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        neg eax
        mov edi, dword ptr [edx + 164h]
        sbb eax, eax
        add eax, 7
        cmp edi, eax
        ; Exact mapped bytes 7E 13: jle 0x10040195
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x10040195
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x10040195
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10040197
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [ecx + 3a3ch], eax
        add ebp, 2
        inc ebx
        add esi, 4
        cmp ebp, 154h
        ; Exact mapped bytes 0F 8C 8F FC FF FF: jl 0x1003fe3f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 66 0F B6 88 93 00 00 00: movzx cx, byte ptr [eax + 0x93]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 88 90 00 00 00: mov word ptr [eax + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x100401d7
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 0F B6 82 93 00 00 00: movzx ax, byte ptr [edx + 0x93]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 82 90 00 00 00: mov word ptr [edx + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2c8h]
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2d0h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
