// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046A765 .. +0x18AF bytes.
extern "C" __declspec(naked) void FUN_0046a765_0046A765() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3e0h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3e0h]
        mov ecx, 0f8h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 3c4h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 52ch]
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x46a7a0
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5F 18 00 00: jmp 0x46bfff
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3b0h], 0
        push 380h
        push 0
        lea edx, [ebp - 3ach]
        push edx
        ; Exact mapped bytes E8 B3 EB 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 16h
        push 0
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 A3 EB 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 10h], 0ffh
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x46a7e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D FC 00 00 00: jge 0x46a8ec
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 06 FE FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 370h
        lea eax, [esi + eax + 16bdch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4 + 270h]
        mov dword ptr [ebp - 3b4h], edx
        cmp dword ptr [ebp - 3b4h], -1
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x46a8e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3b4h]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2e4h], 1
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x46a8e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3b4h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, -1
        ; Exact mapped bytes 74 71: je 0x46a8e7
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3b4h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 2b8h]
        and ecx, 20000000h
        test ecx, ecx
        ; Exact mapped bytes 74 4B: je 0x46a8e7
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3b4h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 1
        ; Exact mapped bytes 75 22: jne 0x46a8e7
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3b4h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        mov byte ptr [ebp - 10h], al
        ; Exact mapped bytes E9 F1 FE FF FF: jmp 0x46a7dd
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 45 F8 00 00: mov word ptr [ebp - 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x46a904
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D 4E 03 00 00: jge 0x46ac5c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 05 FE FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 370h
        lea eax, [esi + eax + 16bdch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4 + 270h]
        mov dword ptr [ebp - 3b8h], edx
        cmp dword ptr [ebp - 3b8h], -1
        ; Exact mapped bytes 0F 84 0E 03 00 00: je 0x46ac57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3b8h]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2e4h], 1
        ; Exact mapped bytes 0F 84 EB 02 00 00: je 0x46ac57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3b8h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, -1
        ; Exact mapped bytes 0F 84 BF 02 00 00: je 0x46ac57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3b8h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 2b8h]
        and ecx, 20000000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 95 02 00 00: je 0x46ac57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3b8h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 44h
        ; Exact mapped bytes 74 55: je 0x46aa40
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3b8h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 45h
        ; Exact mapped bytes 74 2D: je 0x46aa40
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3b8h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 46h
        ; Exact mapped bytes 0F 85 17 02 00 00: jne 0x46ac57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 55 F0: movsx edx, byte ptr [ebp - 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xf0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp - 3b8h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ecx + eax + 234h]
        and ecx, 0fh
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 EC 01 00 00: jne 0x46ac57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 F8: mov dx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov dword ptr [ebp - 3bch], 0
        ; Exact mapped bytes EB 0F: jmp 0x46aa92
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 3bch]
        add eax, 1
        mov dword ptr [ebp - 3bch], eax
        cmp dword ptr [ebp - 3bch], 0ah
        ; Exact mapped bytes 0F 8F B8 01 00 00: jg 0x46ac57
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3b8h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 44h
        ; Exact mapped bytes 75 6A: jne 0x46ab32
        __asm _emit 0x75
        __asm _emit 0x6a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3b8h]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        mov eax, dword ptr [ebp - 3bch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 42 14: mov cx, word ptr [edx + eax*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x14
        mov dword ptr [ebp - 3c8h], ecx
        ; Exact mapped bytes DB 85 38 FC FF FF: fild dword ptr [ebp - 0x3c8]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 70 1C 58 00: fmul dword ptr [0x581c70]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 74 10 58 00: fmul dword ptr [0x581074]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 35 20 1C 58 00: fdiv dword ptr [0x581c20]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 E8 E9 03 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes 66 8B 4C 55 D4: mov cx, word ptr [ebp + edx*2 - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes 66 89 4C 55 D4: mov word ptr [ebp + edx*2 - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x46ac52
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3b8h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 45h
        ; Exact mapped bytes 75 6A: jne 0x46abc4
        __asm _emit 0x75
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3b8h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov edx, dword ptr [ebp - 3bch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 51 14: mov ax, word ptr [ecx + edx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 3cch], eax
        ; Exact mapped bytes DB 85 34 FC FF FF: fild dword ptr [ebp - 0x3cc]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 6C 1C 58 00: fmul dword ptr [0x581c6c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 74 10 58 00: fmul dword ptr [0x581074]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 35 20 1C 58 00: fdiv dword ptr [0x581c20]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 E9 03 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes 66 8B 54 4D D4: mov dx, word ptr [ebp + ecx*2 - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 66 03 D0: add dx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 3bch]
        ; Exact mapped bytes 66 89 54 45 D4: mov word ptr [ebp + eax*2 - 0x2c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x46ac52
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3b8h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 46h
        ; Exact mapped bytes 75 65: jne 0x46ac52
        __asm _emit 0x75
        __asm _emit 0x65
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3b8h]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        mov eax, dword ptr [ebp - 3bch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 42 14: mov cx, word ptr [edx + eax*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x14
        mov dword ptr [ebp - 3d0h], ecx
        ; Exact mapped bytes DB 85 30 FC FF FF: fild dword ptr [ebp - 0x3d0]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 68 1C 58 00: fmul dword ptr [0x581c68]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 74 10 58 00: fmul dword ptr [0x581074]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 35 20 1C 58 00: fdiv dword ptr [0x581c20]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 C3 E8 03 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes 66 8B 4C 55 D4: mov cx, word ptr [ebp + edx*2 - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes 66 03 C8: add cx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes 66 89 4C 55 D4: mov word ptr [ebp + edx*2 - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes E9 2C FE FF FF: jmp 0x46aa83
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9F FC FF FF: jmp 0x46a8fb
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x46ac6e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 7F 53: jg 0x46acc7
        __asm _emit 0x7f
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 4D D4: mov dx, word ptr [ebp + ecx*2 - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x4d
        __asm _emit 0xd4
        mov dword ptr [ebp - 3d4h], edx
        ; Exact mapped bytes DB 85 2C FC FF FF: fild dword ptr [ebp - 0x3d4]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 9D 24 FC FF FF: fstp qword ptr [ebp - 0x3dc]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        mov dword ptr [ebp - 3e0h], eax
        ; Exact mapped bytes DB 85 20 FC FF FF: fild dword ptr [ebp - 0x3e0]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 D5 EC 03 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC BD 24 FC FF FF: fdivr qword ptr [ebp - 0x3dc]
        __asm _emit 0xdc
        __asm _emit 0xbd
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 3F E8 03 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 44 4D D4: mov word ptr [ebp + ecx*2 - 0x2c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes EB 9E: jmp 0x46ac65
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x46acd9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D C5 12 00 00: jge 0x46bfa8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 01 FE FF: call 0x44aec7
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 370h
        lea ecx, [esi + eax + 16bdch]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4 + 270h]
        mov dword ptr [ebp - 3c0h], eax
        cmp dword ptr [ebp - 3c0h], -1
        ; Exact mapped bytes 0F 84 85 12 00 00: je 0x46bfa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 1
        ; Exact mapped bytes 0F 84 62 12 00 00: je 0x46bfa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 35 12 00 00: je 0x46bfa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        and edx, 7fh
        shl edx, 5
        mov ecx, dword ptr [ebp + eax - 3ach]
        and ecx, 0fffff01fh
        or ecx, edx
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov dword ptr [ebp + edx - 3ach], ecx
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 1fh
        mov edx, dword ptr [ebp + eax - 3ach]
        and edx, 0ffffffe0h
        or edx, ecx
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 3ach], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        and ecx, 3fh
        shl ecx, 10h
        mov eax, dword ptr [ebp + edx - 3ach]
        and eax, 0ffc0ffffh
        or eax, ecx
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov dword ptr [ebp + ecx - 3ach], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 08 2C 02 00 00: mov dx, word ptr [eax + ecx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 3ffh
        ; Exact mapped bytes 7E 28: jle 0x46ae87
        __asm _emit 0x7e
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov ecx, dword ptr [ebp + eax - 398h]
        or ecx, 3ffh
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov dword ptr [ebp + edx - 398h], ecx
        ; Exact mapped bytes EB 4C: jmp 0x46aed3
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 2C 02 00 00: mov ax, word ptr [ecx + edx + 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        and eax, 3ffh
        mov edx, dword ptr [ebp + ecx - 398h]
        and edx, 0fffffc00h
        or edx, eax
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 398h], edx
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp + ecx - 398h]
        shr edx, 0ah
        and edx, 3ffh
        cmp edx, 3ffh
        ; Exact mapped bytes 76 28: jbe 0x46af1c
        __asm _emit 0x76
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov ecx, dword ptr [ebp + eax - 398h]
        or ecx, 0ffc00h
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov dword ptr [ebp + edx - 398h], ecx
        ; Exact mapped bytes EB 4F: jmp 0x46af6b
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 2E 02 00 00: mov ax, word ptr [ecx + edx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        and eax, 3ffh
        shl eax, 0ah
        mov edx, dword ptr [ebp + ecx - 398h]
        and edx, 0fff003ffh
        or edx, eax
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 398h], edx
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp + ecx - 398h]
        shr edx, 14h
        and edx, 3ffh
        cmp edx, 3ffh
        ; Exact mapped bytes 76 28: jbe 0x46afb4
        __asm _emit 0x76
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov ecx, dword ptr [ebp + eax - 398h]
        or ecx, 3ff00000h
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov dword ptr [ebp + edx - 398h], ecx
        ; Exact mapped bytes EB 4F: jmp 0x46b003
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 11 30 02 00 00: mov ax, word ptr [ecx + edx + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        and eax, 3ffh
        shl eax, 14h
        mov edx, dword ptr [ebp + ecx - 398h]
        and edx, 0c00fffffh
        or edx, eax
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 398h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 02 4E 02 00 00: mov cx, word ptr [edx + eax + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        and ecx, 3ffffffh
        mov eax, dword ptr [ebp + edx - 3a8h]
        and eax, 0fc000000h
        or eax, ecx
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov dword ptr [ebp + ecx - 3a8h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 08 74 02 00 00: mov dx, word ptr [eax + ecx + 0x274]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        cdq
        mov ecx, 5
        idiv ecx
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov byte ptr [ebp + edx - 394h], al
        ; Exact mapped bytes 66 8B 45 DC: mov ax, word ptr [ebp - 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 40 02 00 00: mov cx, word ptr [edx + eax + 0x240]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 5E 0F 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 5C FC FF FF: mov word ptr [ebp + edx - 0x3a4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 E0: mov ax, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 44 02 00 00: mov cx, word ptr [edx + eax + 0x244]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 1F 0F 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 5E FC FF FF: mov word ptr [ebp + edx - 0x3a2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 DE: mov ax, word ptr [ebp - 0x22]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xde
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 42 02 00 00: mov cx, word ptr [edx + eax + 0x242]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 E0 0E 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 60 FC FF FF: mov word ptr [ebp + edx - 0x3a0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x46b194
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 0ch
        and ecx, 0fh
        test ecx, ecx
        ; Exact mapped bytes 0F 85 4C 05 00 00: jne 0x46b6e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov eax, dword ptr [ebp + edx - 3ach]
        and ah, 0fh
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov dword ptr [ebp + ecx - 3ach], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 0ah
        ; Exact mapped bytes 72 41: jb 0x46b222
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 11h
        ; Exact mapped bytes 73 18: jae 0x46b222
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 00 00: mov word ptr [ebp + ecx - 0x39e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3B 04 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 0ah
        ; Exact mapped bytes 72 41: jb 0x46b28d
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 18h
        ; Exact mapped bytes 73 18: jae 0x46b28d
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 01 00: mov word ptr [ebp + ecx - 0x39e], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 D0 03 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 18h
        ; Exact mapped bytes 72 41: jb 0x46b2f8
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 1fh
        ; Exact mapped bytes 73 18: jae 0x46b2f8
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 02 00: mov word ptr [ebp + ecx - 0x39e], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 65 03 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 1fh
        ; Exact mapped bytes 72 41: jb 0x46b363
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 26h
        ; Exact mapped bytes 73 18: jae 0x46b363
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 03 00: mov word ptr [ebp + ecx - 0x39e], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA 02 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 26h
        ; Exact mapped bytes 72 41: jb 0x46b3ce
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 2fh
        ; Exact mapped bytes 73 18: jae 0x46b3ce
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 04 00: mov word ptr [ebp + ecx - 0x39e], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 02 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 2fh
        ; Exact mapped bytes 72 41: jb 0x46b439
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 38h
        ; Exact mapped bytes 73 18: jae 0x46b439
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 05 00: mov word ptr [ebp + ecx - 0x39e], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 38h
        ; Exact mapped bytes 72 41: jb 0x46b4a4
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 41h
        ; Exact mapped bytes 73 18: jae 0x46b4a4
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 06 00: mov word ptr [ebp + ecx - 0x39e], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 41h
        ; Exact mapped bytes 72 41: jb 0x46b50f
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 4ch
        ; Exact mapped bytes 73 18: jae 0x46b50f
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 07 00: mov word ptr [ebp + ecx - 0x39e], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 4ch
        ; Exact mapped bytes 72 41: jb 0x46b57a
        __asm _emit 0x72
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 57h
        ; Exact mapped bytes 73 18: jae 0x46b57a
        __asm _emit 0x73
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 08 00: mov word ptr [ebp + ecx - 0x39e], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x46b65d
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 57h
        ; Exact mapped bytes 72 3E: jb 0x46b5e2
        __asm _emit 0x72
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 62h
        ; Exact mapped bytes 73 15: jae 0x46b5e2
        __asm _emit 0x73
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 09 00: mov word ptr [ebp + ecx - 0x39e], 9
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 7B: jmp 0x46b65d
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 62h
        ; Exact mapped bytes 72 3E: jb 0x46b64a
        __asm _emit 0x72
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 7dh
        ; Exact mapped bytes 73 15: jae 0x46b64a
        __asm _emit 0x73
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 C7 84 0D 62 FC FF FF 0A 00: mov word ptr [ebp + ecx - 0x39e], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x46b65d
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 C7 84 15 62 FC FF FF 00 00: mov word ptr [ebp + edx - 0x39e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 D4: mov ax, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 38 02 00 00: mov cx, word ptr [edx + eax + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 89 09 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 64 FC FF FF: mov word ptr [ebp + edx - 0x39c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 D4: mov ax, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 38 02 00 00: mov cx, word ptr [edx + eax + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 4A 09 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 66 FC FF FF: mov word ptr [ebp + edx - 0x39a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B4 08 00 00: jmp 0x46bf94
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 3ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x46b7f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp + ecx - 3ach]
        and dh, 0fh
        or dh, 10h
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 3ach], edx
        ; Exact mapped bytes 66 8B 4D D6: mov cx, word ptr [ebp - 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd6
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 08 3A 02 00 00: mov dx, word ptr [eax + ecx + 0x23a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 B7 08 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 62 FC FF FF: mov word ptr [ebp + ecx - 0x39e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 D8: mov dx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 8B 84 11 3C 02 00 00: mov ax, word ptr [ecx + edx + 0x23c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 78 08 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 64 FC FF FF: mov word ptr [ebp + ecx - 0x39c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 DA: mov dx, word ptr [ebp - 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xda
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 8B 84 11 3E 02 00 00: mov ax, word ptr [ecx + edx + 0x23e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 39 08 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 66 FC FF FF: mov word ptr [ebp + ecx - 0x39a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A3 07 00 00: jmp 0x46bf94
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 2b8h]
        and edx, 2ffffc00h
        test edx, edx
        ; Exact mapped bytes 0F 84 79 07 00 00: je 0x46bf94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 4000000h
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x46b86a
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 2b8h]
        and ecx, 8000000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x46b95e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov eax, dword ptr [ebp + edx - 3ach]
        and ah, 0fh
        or ah, 20h
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov dword ptr [ebp + ecx - 3ach], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 2b8h]
        and edx, 4000000h
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x46b8f5
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 8B 45 E2: mov ax, word ptr [ebp - 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe2
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 46 02 00 00: mov cx, word ptr [edx + eax + 0x246]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 30 07 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 62 FC FF FF: mov word ptr [ebp + edx - 0x39e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 8000000h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x46b959
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 8B 4D E2: mov cx, word ptr [ebp - 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe2
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 08 46 02 00 00: mov dx, word ptr [eax + ecx + 0x246]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 CC 06 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 64 FC FF FF: mov word ptr [ebp + ecx - 0x39c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 36 06 00 00: jmp 0x46bf94
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 2b8h]
        and edx, 80000h
        test edx, edx
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x46babb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov ecx, dword ptr [ebp + eax - 3ach]
        and ch, 0fh
        or ch, 40h
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov dword ptr [ebp + edx - 3ach], ecx
        ; Exact mapped bytes 66 8B 45 D4: mov ax, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 38 02 00 00: mov cx, word ptr [edx + eax + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 38 06 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 62 FC FF FF: mov word ptr [ebp + edx - 0x39e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 20000h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x46ba51
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 8B 4D D4: mov cx, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 08 38 02 00 00: mov dx, word ptr [eax + ecx + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 D4 05 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 64 FC FF FF: mov word ptr [ebp + ecx - 0x39c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 2b8h]
        and edx, 40000h
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x46bab6
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 8B 45 D4: mov ax, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 38 02 00 00: mov cx, word ptr [edx + eax + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 6F 05 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 66 FC FF FF: mov word ptr [ebp + edx - 0x39a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D9 04 00 00: jmp 0x46bf94
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 3000000h
        test eax, eax
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x46bbb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp + ecx - 3ach]
        and dh, 0fh
        or dh, 50h
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 3ach], edx
        ; Exact mapped bytes 66 8B 4D D4: mov cx, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 08 38 02 00 00: mov dx, word ptr [eax + ecx + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 DC 04 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 62 FC FF FF: mov word ptr [ebp + ecx - 0x39e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 2b8h]
        and edx, 10000h
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x46bbae
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 8B 45 D4: mov ax, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 38 02 00 00: mov cx, word ptr [edx + eax + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 77 04 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 66 FC FF FF: mov word ptr [ebp + edx - 0x39a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E1 03 00 00: jmp 0x46bf94
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 20000000h
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x46bc42
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp + ecx - 3ach]
        and dh, 0fh
        or dh, 60h
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 3ach], edx
        ; Exact mapped bytes 66 8B 4D D4: mov cx, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 08 38 02 00 00: mov dx, word ptr [eax + ecx + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 E8 03 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 62 FC FF FF: mov word ptr [ebp + ecx - 0x39e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 52 03 00 00: jmp 0x46bf94
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 2b8h]
        and edx, 7c00h
        test edx, edx
        ; Exact mapped bytes 0F 84 39 02 00 00: je 0x46bea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 400h
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x46bcb7
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp + ecx - 3ach]
        and dh, 0fh
        or dh, 0b0h
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 3ach], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 2b8h]
        and ecx, 800h
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x46bd03
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov eax, dword ptr [ebp + edx - 3ach]
        and ah, 0fh
        or ah, 0c0h
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov dword ptr [ebp + ecx - 3ach], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 2b8h]
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x46bd4f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov ecx, dword ptr [ebp + eax - 3ach]
        and ch, 0fh
        or ch, 0d0h
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov dword ptr [ebp + edx - 3ach], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x46bd9a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp + ecx - 3ach]
        and dh, 0fh
        or dh, 0e0h
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        mov dword ptr [ebp + eax - 3ach], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 2b8h]
        and ecx, 4000h
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x46bde3
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov eax, dword ptr [ebp + edx - 3ach]
        or ah, 0f0h
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov dword ptr [ebp + ecx - 3ach], eax
        ; Exact mapped bytes 66 8B 55 E6: mov dx, word ptr [ebp - 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe6
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 8B 84 11 4A 02 00 00: mov ax, word ptr [ecx + edx + 0x24a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 03 02 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 62 FC FF FF: mov word ptr [ebp + ecx - 0x39e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 E8: mov dx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 8B 84 11 4C 02 00 00: mov ax, word ptr [ecx + edx + 0x24c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 C4 01 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 64 FC FF FF: mov word ptr [ebp + ecx - 0x39c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 E4: mov dx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        ; Exact mapped bytes 66 8B 84 11 48 02 00 00: mov ax, word ptr [ecx + edx + 0x248]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 85 01 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 66 FC FF FF: mov word ptr [ebp + ecx - 0x39a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x46bf94
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        mov eax, dword ptr [ebp + edx - 3ach]
        and ah, 0fh
        or ah, 30h
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        mov dword ptr [ebp + ecx - 3ach], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 2b8h]
        and edx, 10000h
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x46bf30
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 8B 45 D4: mov ax, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 3c0h]
        imul eax, eax, 37ch
        ; Exact mapped bytes 66 8B 8C 02 38 02 00 00: mov cx, word ptr [edx + eax + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 F5 00 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3b0h]
        imul edx, edx, 1ch
        ; Exact mapped bytes 66 89 84 15 62 FC FF FF: mov word ptr [ebp + edx - 0x39e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 3c0h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 2b8h]
        and eax, 20000h
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x46bf94
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 8B 4D D4: mov cx, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 3c0h]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 08 38 02 00 00: mov dx, word ptr [eax + ecx + 0x238]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 91 00 00 00: call 0x46c014
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3b0h]
        imul ecx, ecx, 1ch
        ; Exact mapped bytes 66 89 84 0D 64 FC FF FF: mov word ptr [ebp + ecx - 0x39c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3b0h]
        add edx, 1
        mov dword ptr [ebp - 3b0h], edx
        ; Exact mapped bytes E9 28 ED FF FF: jmp 0x46acd0
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 3b0h], 0
        ; Exact mapped bytes 74 48: je 0x46bff9
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x46bfd6
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        push eax
        lea ecx, [ebp - 3ach]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 4F D0 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 23: jmp 0x46bff9
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 3b0h]
        imul eax, eax, 1ch
        push eax
        lea ecx, [ebp - 3ach]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 530h
        push edx
        ; Exact mapped bytes E8 2A D0 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 3b0h]
        pop edi
        pop esi
        add esp, 3e0h
        cmp ebp, esp
        ; Exact mapped bytes E8 D2 C7 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
