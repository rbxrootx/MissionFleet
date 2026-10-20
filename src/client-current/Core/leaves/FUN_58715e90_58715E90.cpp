// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58715E90 .. +0x5B4 bytes.
extern "C" __declspec(naked) void FUN_58715e90_58715E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 0F 84 8F 05 00 00: je 0x58716442
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 F2 02 00 00: jne 0x587161c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 6
        ; Exact mapped bytes 0F 84 B2 02 00 00: je 0x58716190
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 50h]
        sub eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 54h]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0dch], 0
        ; Exact mapped bytes 75 79: jne 0x58715f81
        __asm _emit 0x75
        __asm _emit 0x79
        cmp dword ptr [ebp - 0ch], 10h
        ; Exact mapped bytes 7D 06: jge 0x58715f14
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], -10h
        ; Exact mapped bytes 7F 11: jg 0x58715f25
        __asm _emit 0x7f
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 57: jmp 0x58715f7c
        __asm _emit 0xeb
        __asm _emit 0x57
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 06: jge 0x58715f31
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7F 12: jg 0x58715f43
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 82 E0 00 00 00: movsx eax, word ptr [edx + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 2
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 39: jmp 0x58715f7c
        __asm _emit 0xeb
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 06: jge 0x58715f4f
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7F 11: jg 0x58715f60
        __asm _emit 0x7f
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 91 E0 00 00 00: movsx edx, word ptr [ecx + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 1C: jmp 0x58715f7c
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 88 E0 00 00 00: movsx ecx, word ptr [eax + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 1
        ; Exact mapped bytes E9 FC 01 00 00: jmp 0x5871617d
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 88 E0 00 00 00: movsx ecx, word ptr [eax + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x5871608b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0dch], 1
        ; Exact mapped bytes 75 37: jne 0x58715fd7
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8
        cmp eax, 2
        ; Exact mapped bytes 7E 09: jle 0x58715fb4
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes EB 1E: jmp 0x58715fd2
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8
        ; Exact mapped bytes 75 0F: jne 0x58715fcb
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 2
        ; Exact mapped bytes EB 07: jmp 0x58715fd2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x58716086
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 2
        ; Exact mapped bytes 75 23: jne 0x58716006
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 4
        ; Exact mapped bytes 75 0F: jne 0x58715ffa
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 3
        ; Exact mapped bytes EB 07: jmp 0x58716001
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x58716086
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 3
        ; Exact mapped bytes 75 20: jne 0x58716032
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 2
        ; Exact mapped bytes 75 0F: jne 0x58716029
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 4
        ; Exact mapped bytes EB 07: jmp 0x58716030
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 54: jmp 0x58716086
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 4
        ; Exact mapped bytes 75 20: jne 0x5871605e
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        ; Exact mapped bytes 75 0F: jne 0x58716055
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 5
        ; Exact mapped bytes EB 07: jmp 0x5871605c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes EB 28: jmp 0x58716086
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 5
        ; Exact mapped bytes 75 1C: jne 0x58716086
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x5871607f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0dch], 6
        ; Exact mapped bytes EB 07: jmp 0x58716086
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x5871617d
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0dch], 1
        ; Exact mapped bytes 75 37: jne 0x587160ce
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 8
        cmp eax, -2
        ; Exact mapped bytes 7D 09: jge 0x587160ab
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0fffffffeh
        ; Exact mapped bytes EB 1E: jmp 0x587160c9
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 8
        ; Exact mapped bytes 75 0F: jne 0x587160c2
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 2
        ; Exact mapped bytes EB 07: jmp 0x587160c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x5871617d
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 2
        ; Exact mapped bytes 75 23: jne 0x587160fd
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes 75 0F: jne 0x587160f1
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 3
        ; Exact mapped bytes EB 07: jmp 0x587160f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x5871617d
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 3
        ; Exact mapped bytes 75 20: jne 0x58716129
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 2
        ; Exact mapped bytes 75 0F: jne 0x58716120
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 4
        ; Exact mapped bytes EB 07: jmp 0x58716127
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes EB 54: jmp 0x5871617d
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 4
        ; Exact mapped bytes 75 20: jne 0x58716155
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        ; Exact mapped bytes 75 0F: jne 0x5871614c
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0dch], 5
        ; Exact mapped bytes EB 07: jmp 0x58716153
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 28: jmp 0x5871617d
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 5
        ; Exact mapped bytes 75 1C: jne 0x5871617d
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x58716176
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0dch], 6
        ; Exact mapped bytes EB 07: jmp 0x5871617d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 43 F0 09 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2B: jmp 0x587161bb
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 120h], 0
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x587163b8
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x587162de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 54h]
        sub ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 23 B1 D7 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb1
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 82 E0 00 00 00: movsx eax, word ptr [edx + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, eax, -1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        imul ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A3 EF 09 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 75 07: jne 0x58716241
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 3
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 82 E0 00 00 00: movsx eax, word ptr [edx + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0E: jne 0x5871625e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 7E 1D: jle 0x5871627b
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 91 E0 00 00 00: movsx edx, word ptr [ecx + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, -1
        ; Exact mapped bytes 75 57: jne 0x587162c4
        __asm _emit 0x75
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 7C 49: jl 0x587162c4
        __asm _emit 0x7c
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6B F3 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 120h], 0
        ; Exact mapped bytes EB 15: jmp 0x587162d9
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 120h]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 120h], eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x587163b8
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 75 58: jne 0x5871634d
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 06 00 00: call 0x58716980
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 120h], 12ch
        ; Exact mapped bytes 73 15: jae 0x58716322
        __asm _emit 0x73
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 120h]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 120h], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 120h], 12ch
        ; Exact mapped bytes 75 1A: jne 0x5871634b
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 124h], 0
        ; Exact mapped bytes 74 0E: je 0x5871634b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 6B: jmp 0x587163b8
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 75 54: jne 0x587163b8
        __asm _emit 0x75
        __asm _emit 0x54
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58716376
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 7D 3C: jge 0x587163b8
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0e8h], 0
        ; Exact mapped bytes 74 2A: je 0x587163b6
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 124h], 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 120h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 02: jmp 0x587163b8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B5: jmp 0x5871636d
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x587163d9
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587163d9
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x58716442
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587163fc
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x587163e2
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C F2 D7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58716420
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58716442
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58716440
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E8 F1 D7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB A0: jmp 0x587163e2
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
