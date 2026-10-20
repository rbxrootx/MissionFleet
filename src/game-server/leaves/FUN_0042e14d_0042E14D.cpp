// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E14D .. +0xB84 bytes.
extern "C" __declspec(naked) void FUN_0042e14d_0042E14D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 38h], 31h
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov dword ptr [ebp - 40h], ecx
        lea edx, [ebp - 38h]
        push edx
        lea eax, [ebp - 3ch]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 2B 56 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42e1a3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1B 0B 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        cmp dword ptr [eax + edx + 16bdch], 1
        ; Exact mapped bytes 75 07: jne 0x42e1cc
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F2 0A 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F8 B8 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0eh
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E0 B8 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 37: je 0x42e25a
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 31: je 0x42e25a
        __asm _emit 0x74
        __asm _emit 0x31
        mov dword ptr [ebp - 44h], 20h
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        mov dword ptr [ebp - 4ch], edx
        lea eax, [ebp - 44h]
        push eax
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 6D 55 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42e261
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5D 0A 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 0dh
        ; Exact mapped bytes 75 3F: jne 0x42e2b5
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        lea eax, [eax + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 3C B8 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x42e2bc
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 02 0A 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        lea edx, [edx + ecx + 12eh]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        sar ecx, 8
        and ecx, 0ffh
        ; Exact mapped bytes 66 0F B6 54 0A 06: movzx dx, byte ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 7A 07 00 00: jle 0x42ea92
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [eax + 18h]
        sub eax, edx
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 07: jge 0x42e346
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 78 09 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 F2 04 00 00: je 0x42e842
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        and ecx, 0ffffh
        cmp edx, ecx
        ; Exact mapped bytes 0F 84 6D 02 00 00: je 0x42e5ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x42e394
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 20h
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x42e442
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 19 B7 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 61: je 0x42e43d
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 53: je 0x42e43d
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 72 0A: mov si, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea eax, [eax + esi + 16bdch]
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 134h]
        imul ecx, ebx
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes DB 45 AC: fild dword ptr [ebp - 0x54]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 B0 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x42e38b
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        imul eax, edx
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes DB 45 A8: fild dword ptr [ebp - 0x58]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 94 B0 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 08 01 00 00: mov ax, word ptr [edx + 0x108]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 76 07: jbe 0x42e488
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 36 08 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea ecx, [ecx + esi + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [eax + 8]
        imul ebx, ebx, 0ah
        xor eax, eax
        mov al, byte ptr [ecx + ebx + 134h]
        mov ecx, dword ptr [ebp - 0ch]
        imul eax, dword ptr [ecx + 74h]
        mov edx, dword ptr [edx + 18h]
        add edx, eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        push 0ah
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        lea eax, [eax + edx + 12eh]
        push eax
        ; Exact mapped bytes E8 59 AE 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea ecx, [ecx + esi + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [eax + 8]
        imul ebx, ebx, 0ah
        ; Exact mapped bytes 66 89 94 19 2E 01 00 00: mov word ptr [ecx + ebx + 0x12e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        mov al, byte ptr [eax + 0ch]
        mov byte ptr [edx + ecx + 134h], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        mov al, byte ptr [eax + 8]
        mov byte ptr [edx + ecx + 136h], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 18h]
        imul ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [edx + 18h]
        sub edx, ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x42e7c8
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x42e601
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 20h
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x42e6af
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bdch]
        mov edx, dword ptr [ebp - 28h]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 AC B4 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 61: je 0x42e6aa
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 53: je 0x42e6aa
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 2ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 72 0A: mov si, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea eax, [eax + esi + 16bdch]
        mov edx, dword ptr [ebp - 28h]
        imul edx, edx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 134h]
        imul ecx, ebx
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes DB 45 A4: fild dword ptr [ebp - 0x5c]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 5A AE 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x42e5f8
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        add edx, ecx
        imul eax, edx
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes DB 45 A0: fild dword ptr [ebp - 0x60]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D AE 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 08 01 00 00: mov cx, word ptr [eax + 0x108]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 76 07: jbe 0x42e6ff
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BF 05 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [eax + edx + 134h]
        add dl, byte ptr [ecx + 0ch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        lea eax, [eax + esi + 16bdch]
        mov byte ptr [eax + ecx + 134h], dl
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        mov al, byte ptr [eax + 8]
        mov byte ptr [edx + ecx + 136h], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 18h]
        imul ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [edx + 18h]
        sub edx, ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 40008h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 DF 4B 05 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp - 64h]
        and eax, 1fh
        shl eax, 1
        mov ecx, dword ptr [edx + ecx + 16be0h]
        and ecx, 0ffffffc1h
        or ecx, eax
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + eax + 16be0h], ecx
        mov eax, 1
        ; Exact mapped bytes E9 7C 04 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x42e854
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 20h
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x42e902
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 30h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 59 B2 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 61: je 0x42e8fd
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 53: je 0x42e8fd
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 34h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea ecx, [ecx + esi + 16bdch]
        mov eax, dword ptr [ebp - 30h]
        imul eax, eax, 0ah
        xor ebx, ebx
        mov bl, byte ptr [ecx + eax + 134h]
        imul edx, ebx
        mov dword ptr [ebp - 68h], edx
        ; Exact mapped bytes DB 45 98: fild dword ptr [ebp - 0x68]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 07 AC 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x42e84b
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        imul eax, edx
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes DB 45 94: fild dword ptr [ebp - 0x6c]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 AB 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xab
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 08 01 00 00: mov ax, word ptr [edx + 0x108]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 76 07: jbe 0x42e948
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 76 03 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea ecx, [ecx + esi + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [eax + 8]
        imul ebx, ebx, 0ah
        ; Exact mapped bytes 66 89 94 19 2E 01 00 00: mov word ptr [ecx + ebx + 0x12e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        mov al, byte ptr [eax + 0ch]
        mov byte ptr [edx + ecx + 134h], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        imul ecx, ecx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        mov al, byte ptr [eax + 8]
        mov byte ptr [edx + ecx + 136h], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 18h]
        imul ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [edx + 18h]
        sub edx, ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 40008h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 8F 49 05 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp - 70h]
        and eax, 1fh
        shl eax, 1
        mov ecx, dword ptr [edx + ecx + 16be0h]
        and ecx, 0ffffffc1h
        or ecx, eax
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        imul eax, eax, 370h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + eax + 16be0h], ecx
        mov eax, 1
        ; Exact mapped bytes E9 2C 02 00 00: jmp 0x42ecbe
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 0F 8D 1B 02 00 00: jge 0x42ecbc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 11 02 00 00: je 0x42ecbc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        lea eax, [eax + edx + 12eh]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        sar edx, 8
        and edx, 0ffh
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 6]
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 42 0C: movsx eax, word ptr [edx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x0c
        add ecx, eax
        ; Exact mapped bytes 0F BF C9: movsx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc9
        test ecx, ecx
        ; Exact mapped bytes 0F 8C F5 00 00 00: jl 0x42ebfd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        mov ecx, dword ptr [ebp + 0ch]
        mov cl, byte ptr [ecx + 8]
        mov byte ptr [eax + edx + 136h], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        lea eax, [eax + edx + 12eh]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        sar edx, 8
        and edx, 0ffh
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [eax + edx + 6]
        add dl, byte ptr [ecx + 0ch]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        sar ecx, 8
        and ecx, 0ffh
        mov eax, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [eax + 8]
        imul ebx, ebx, 0ah
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        imul esi, esi, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        lea eax, [eax + esi + 16bdch]
        lea eax, [eax + ebx + 12eh]
        mov byte ptr [eax + ecx + 6], dl
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 18h]
        imul ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [edx + 18h]
        sub edx, ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        ; Exact mapped bytes EB 48: jmp 0x42ec45
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        imul edx, edx, 0ah
        lea eax, [eax + edx + 12eh]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        sar edx, 8
        and edx, 0ffh
        mov byte ptr [eax + edx + 6], 0
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 40008h]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 62 47 05 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        mov ecx, dword ptr [ebp - 74h]
        and ecx, 1fh
        shl ecx, 1
        mov edx, dword ptr [eax + edx + 16be0h]
        and edx, 0ffffffc1h
        or edx, ecx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        imul ecx, ecx, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + ecx + 16be0h], edx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x42ecbe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 15 9B 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
