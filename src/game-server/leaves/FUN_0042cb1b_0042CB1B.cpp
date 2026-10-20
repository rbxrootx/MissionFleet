// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CB1B .. +0x1632 bytes.
extern "C" __declspec(naked) void FUN_0042cb1b_0042CB1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d8h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0d8h]
        mov ecx, 36h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 84h], ecx
        mov dword ptr [ebp - 6ch], 31h
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        mov dword ptr [ebp - 74h], ecx
        lea edx, [ebp - 6ch]
        push edx
        lea eax, [ebp - 70h]
        push eax
        lea ecx, [ebp - 74h]
        push ecx
        ; Exact mapped bytes E8 54 6C FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42cb7a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BD 15 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x15
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
        ; Exact mapped bytes 75 07: jne 0x42cba3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 94 15 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x15
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
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 1E CF FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0eh
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 03 CF FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 37: je 0x42cc45
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 31: je 0x42cc45
        __asm _emit 0x74
        __asm _emit 0x31
        mov dword ptr [ebp - 78h], 20h
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        mov dword ptr [ebp - 80h], edx
        lea eax, [ebp - 78h]
        push eax
        lea ecx, [ebp - 7ch]
        push ecx
        lea edx, [ebp - 80h]
        push edx
        ; Exact mapped bytes E8 82 6B FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42cc4c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EB 14 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
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
        cmp ecx, 0bh
        ; Exact mapped bytes 74 14: je 0x42cc75
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0ch
        ; Exact mapped bytes 75 58: jne 0x42cccd
        __asm _emit 0x75
        __asm _emit 0x58
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
        lea edx, [edx + ecx*2 + 2]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 24 CE FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x42ccd4
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 63 14 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x14
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
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        imul eax, eax, 0ah
        lea ecx, [ecx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 DB CD FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x42cd21
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 16 14 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E4 00 00: mov word ptr [ebp - 0x1c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 74 79: je 0x42cdb4
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 51 0C: movsx edx, word ptr [ecx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x0c
        test edx, edx
        ; Exact mapped bytes 7E 6E: jle 0x42cdb4
        __asm _emit 0x7e
        __asm _emit 0x6e
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
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        imul eax, eax, 0ah
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 134h]
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
        mov al, byte ptr [ecx + ebx + 135h]
        add edx, eax
        ; Exact mapped bytes 66 89 55 E4: mov word ptr [ebp - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes EB 4D: jmp 0x42ce01
        __asm _emit 0xeb
        __asm _emit 0x4d
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
        ; Exact mapped bytes 66 89 55 E4: mov word ptr [ebp - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 0F 8E A7 11 00 00: jle 0x42dfb7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa7
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 74 11: je 0x42ce35
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 C5 0B 00 00: je 0x42da04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
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
        mov eax, dword ptr [ebp - 18h]
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
        ; Exact mapped bytes 0F 84 C7 05 00 00: je 0x42d438
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 0F 84 22 03 00 00: je 0x42d1ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 0ch
        ; Exact mapped bytes 0F 85 9A 02 00 00: jne 0x42d13c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 254h]
        shl eax, cl
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 0F 84 51 02 00 00: je 0x42d113
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x42ced4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 1dh
        ; Exact mapped bytes 0F 8D 94 01 00 00: jge 0x42d072
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x01
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
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 08 2E 01 00 00: mov dx, word ptr [eax + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 6
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x42d06d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
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
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 96 CB FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x42d06d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov ecx, dword ptr [ebp - 24h]
        shl edx, cl
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x42d06d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        cmp dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x42d06d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
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
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 130h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 24 CB FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x42d06d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 134h]
        imul ecx, ebx
        mov dword ptr [ebp - 88h], ecx
        ; Exact mapped bytes DB 85 78 FF FF FF: fild dword ptr [ebp - 0x88]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 D6 C4 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 2ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        imul eax, edx
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes DB 85 74 FF FF FF: fild dword ptr [ebp - 0x8c]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 97 C4 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, eax
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 59 FE FF FF: jmp 0x42cecb
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
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
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes DB 85 70 FF FF FF: fild dword ptr [ebp - 0x90]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 5E C4 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 74 3F: je 0x42d0f9
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 88 98 00 00 00: mov cx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        imul edx, ecx
        mov dword ptr [ebp - 94h], edx
        ; Exact mapped bytes DB 85 6C FF FF FF: fild dword ptr [ebp - 0x94]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B C4 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        sub edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 06 01 00 00: mov cx, word ptr [eax + 0x106]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 7E 07: jle 0x42d111
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 26 10 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 27: jmp 0x42d13a
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 82 98 00 00 00: mov ax, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp eax, edx
        ; Exact mapped bytes 7D 07: jge 0x42d13a
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FD 0F 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6A: jmp 0x42d1a6
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 18h]
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
        cmp ecx, 0bh
        ; Exact mapped bytes 75 55: jne 0x42d1a6
        __asm _emit 0x75
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 20h]
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
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes DB 85 68 FF FF FF: fild dword ptr [ebp - 0x98]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 7F C3 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc3
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 41 C6 00 00 00: mov dx, word ptr [ecx + eax*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7E 07: jle 0x42d1a6
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 91 0F 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x42d304
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x42d1bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 20h
        ; Exact mapped bytes 0F 8D F1 00 00 00: jge 0x42d2b8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
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
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 ED C8 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x42d2b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
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
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 130h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A8 C8 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 5F: je 0x42d2b3
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 59: je 0x42d2b3
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 38h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 0A: mov si, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea edx, [edx + esi + 16bdch]
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, ecx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 135h]
        imul eax, ebx
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes DB 85 64 FF FF FF: fild dword ptr [ebp - 0x9c]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 51 C2 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x42d1b4
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        imul ecx, eax
        mov dword ptr [ebp - 0a0h], ecx
        ; Exact mapped bytes DB 85 60 FF FF FF: fild dword ptr [ebp - 0xa0]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 C2 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 06 01 00 00: mov ax, word ptr [edx + 0x106]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7E 07: jle 0x42d304
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 33 0E 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x0e
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
        lea ecx, [ecx + ebx + 12eh]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 08: mov si, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x08
        sar esi, 8
        and esi, 0ffh
        xor eax, eax
        mov al, byte ptr [ecx + esi + 6]
        mov ecx, dword ptr [ebp - 14h]
        imul eax, dword ptr [ecx + 74h]
        mov edx, dword ptr [edx + 18h]
        add edx, eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 0A: mov si, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea edx, [edx + esi + 16bdch]
        mov ecx, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [ecx + 8]
        imul ebx, ebx, 0ah
        lea edx, [edx + ebx + 12eh]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 08: mov si, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x08
        sar esi, 8
        and esi, 0ffh
        ; Exact mapped bytes 66 89 44 72 02: mov word ptr [edx + esi*2 + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0x02
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
        mov cl, byte ptr [ecx + 0ch]
        mov byte ptr [eax + edx + 6], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        imul edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [eax + 18h]
        sub eax, edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes E9 C2 05 00 00: jmp 0x42d9fa
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
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
        ; Exact mapped bytes 0F 84 88 03 00 00: je 0x42d7d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0ch
        ; Exact mapped bytes 0F 85 F6 02 00 00: jne 0x42d75f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        mov ecx, edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 254h]
        shl edx, cl
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 75 19: jne 0x42d4a1
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
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
        ; Exact mapped bytes 0F 85 8A 02 00 00: jne 0x42d72b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x42d4b3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 1dh
        ; Exact mapped bytes 0F 8D C1 01 00 00: jge 0x42d67e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 254h]
        mov ecx, dword ptr [ebp - 3ch]
        shl edx, cl
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 0F 84 A0 01 00 00: je 0x42d679
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        cmp dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 0F 84 8F 01 00 00: je 0x42d679
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x01
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
        mov ecx, dword ptr [ebp - 3ch]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 08 2E 01 00 00: mov dx, word ptr [eax + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 6
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x42d679
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
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
        mov edx, dword ptr [ebp - 3ch]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 8A C5 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x42d679
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov ecx, dword ptr [ebp - 3ch]
        shl edx, cl
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x42d679
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        cmp dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x42d679
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
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
        mov ecx, dword ptr [ebp - 3ch]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 130h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 18 C5 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x42d679
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
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
        mov edx, dword ptr [ebp - 3ch]
        imul edx, edx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 134h]
        imul ecx, ebx
        mov dword ptr [ebp - 0a4h], ecx
        ; Exact mapped bytes DB 85 5C FF FF FF: fild dword ptr [ebp - 0xa4]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 CA BE 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 44h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        imul eax, edx
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes DB 85 58 FF FF FF: fild dword ptr [ebp - 0xa8]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B BE 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, eax
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 2C FE FF FF: jmp 0x42d4aa
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
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
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        add edx, ecx
        imul eax, edx
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes DB 85 54 FF FF FF: fild dword ptr [ebp - 0xac]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 47 BE 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
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
        ; Exact mapped bytes 74 3F: je 0x42d711
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        imul eax, edx
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes DB 85 50 FF FF FF: fild dword ptr [ebp - 0xb0]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 F3 BD 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 06 01 00 00: mov ax, word ptr [edx + 0x106]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7E 07: jle 0x42d729
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0E 0A 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x42d75d
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ffffh
        add ecx, eax
        cmp edx, ecx
        ; Exact mapped bytes 7D 07: jge 0x42d75d
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DA 09 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 75: jmp 0x42d7d4
        __asm _emit 0xeb
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 0bh
        ; Exact mapped bytes 75 60: jne 0x42d7d4
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffffh
        add eax, edx
        imul ecx, eax
        mov dword ptr [ebp - 0b4h], ecx
        ; Exact mapped bytes DB 85 4C FF FF FF: fild dword ptr [ebp - 0xb4]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 51 BD 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 41 C6 00 00 00: mov dx, word ptr [ecx + eax*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7E 07: jle 0x42d7d4
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 63 09 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x42d93d
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x42d7eb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 20h
        ; Exact mapped bytes 0F 8D F1 00 00 00: jge 0x42d8e6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
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
        mov eax, dword ptr [ebp - 48h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 BF C2 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x42d8e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
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
        mov ecx, dword ptr [ebp - 48h]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 130h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 7A C2 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        cmp ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 74 5F: je 0x42d8e1
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 59: je 0x42d8e1
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 50h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 71 0A: mov si, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0a
        imul esi, esi, 370h
        lea edx, [edx + esi + 16bdch]
        mov ecx, dword ptr [ebp - 48h]
        imul ecx, ecx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 135h]
        imul eax, ebx
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes DB 85 48 FF FF FF: fild dword ptr [ebp - 0xb8]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 BC 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x42d7e2
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffffh
        add eax, edx
        imul ecx, eax
        mov dword ptr [ebp - 0bch], ecx
        ; Exact mapped bytes DB 85 44 FF FF FF: fild dword ptr [ebp - 0xbc]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 DF BB 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xbb
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 06 01 00 00: mov ax, word ptr [edx + 0x106]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7E 07: jle 0x42d93d
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FA 07 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x07
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
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [edx + ecx + 6]
        add cl, byte ptr [eax + 0ch]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        sar eax, 8
        and eax, 0ffh
        mov edx, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov bl, byte ptr [edx + 8]
        imul ebx, ebx, 0ah
        mov edx, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 72 0A: mov si, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x72
        __asm _emit 0x0a
        imul esi, esi, 370h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        lea edx, [edx + esi + 16bdch]
        lea edx, [edx + ebx + 12eh]
        mov byte ptr [edx + eax + 6], cl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 20h]
        imul eax, dword ptr [edx + 70h]
        mov ecx, dword ptr [ecx + 18h]
        sub ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        mov eax, 1
        ; Exact mapped bytes E9 33 07 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 0dh
        ; Exact mapped bytes 0F 84 72 03 00 00: je 0x42dd8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
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
        cmp ecx, 0ch
        ; Exact mapped bytes 0F 85 EB 02 00 00: jne 0x42dd21
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        mov ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 254h]
        shl eax, cl
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x42da6d
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 0dh
        ; Exact mapped bytes 0F 85 8A 02 00 00: jne 0x42dcf7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x42da7f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 54h]
        add eax, 1
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 1dh
        ; Exact mapped bytes 0F 8D C1 01 00 00: jge 0x42dc4a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov ecx, dword ptr [ebp - 54h]
        shl edx, cl
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 0F 84 A0 01 00 00: je 0x42dc45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        cmp dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes 0F 84 8F 01 00 00: je 0x42dc45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x01
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
        mov ecx, dword ptr [ebp - 54h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 08 2E 01 00 00: mov dx, word ptr [eax + ecx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 6
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x42dc45
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
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
        mov edx, dword ptr [ebp - 54h]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 BE BF FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x42dc45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov ecx, dword ptr [ebp - 54h]
        shl edx, cl
        and edx, 80000000h
        test edx, edx
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x42dc45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        cmp dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x42dc45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
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
        mov ecx, dword ptr [ebp - 54h]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 130h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 4C BF FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x42dc45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
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
        mov edx, dword ptr [ebp - 54h]
        imul edx, edx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 134h]
        imul ecx, ebx
        mov dword ptr [ebp - 0c0h], ecx
        ; Exact mapped bytes DB 85 40 FF FF FF: fild dword ptr [ebp - 0xc0]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 FE B8 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 5ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        imul eax, edx
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes DB 85 3C FF FF FF: fild dword ptr [ebp - 0xc4]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF B8 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, eax
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 2C FE FF FF: jmp 0x42da76
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
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
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        add edx, ecx
        imul eax, edx
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes DB 85 38 FF FF FF: fild dword ptr [ebp - 0xc8]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 7B B8 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
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
        ; Exact mapped bytes 74 3F: je 0x42dcdd
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 1E: mov ax, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        imul eax, edx
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes DB 85 34 FF FF FF: fild dword ptr [ebp - 0xcc]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 B8 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 06 01 00 00: mov ax, word ptr [edx + 0x106]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7E 07: jle 0x42dcf5
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 42 04 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x42dd1f
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp edx, ecx
        ; Exact mapped bytes 7D 07: jge 0x42dd1f
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 18 04 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 69: jmp 0x42dd8a
        __asm _emit 0xeb
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0bh
        ; Exact mapped bytes 75 55: jne 0x42dd8a
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        imul edx, ecx
        mov dword ptr [ebp - 0d0h], edx
        ; Exact mapped bytes DB 85 30 FF FF FF: fild dword ptr [ebp - 0xd0]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B B7 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 4A C6 00 00 00: mov ax, word ptr [edx + ecx*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7E 07: jle 0x42dd8a
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AD 03 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x42dee8
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x42dda1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 1
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 20h
        ; Exact mapped bytes 0F 8D F1 00 00 00: jge 0x42de9c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
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
        mov ecx, dword ptr [ebp - 60h]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 09 BD FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x42de97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
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
        mov edx, dword ptr [ebp - 60h]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 130h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 C4 BC FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        cmp edx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 74 5F: je 0x42de97
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 59: je 0x42de97
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 68h]
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
        mov edx, dword ptr [ebp - 60h]
        imul edx, edx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 135h]
        imul ecx, ebx
        mov dword ptr [ebp - 0d4h], ecx
        ; Exact mapped bytes DB 85 2C FF FF FF: fild dword ptr [ebp - 0xd4]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 6D B6 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x42dd98
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
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
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes DB 85 28 FF FF FF: fild dword ptr [ebp - 0xd8]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 34 B6 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 06 01 00 00: mov ax, word ptr [edx + 0x106]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7E 07: jle 0x42dee8
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4F 02 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
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
        lea ecx, [ecx + ebx + 12eh]
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 08: mov si, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x08
        sar esi, 8
        and esi, 0ffh
        ; Exact mapped bytes 66 89 54 71 02: mov word ptr [ecx + esi*2 + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x71
        __asm _emit 0x02
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
        mov eax, dword ptr [ebp + 0ch]
        mov al, byte ptr [eax + 0ch]
        mov byte ptr [edx + ecx + 6], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 20h]
        imul ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [edx + 18h]
        sub edx, ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        mov eax, 1
        ; Exact mapped bytes E9 80 01 00 00: jmp 0x42e137
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 42 0C: movsx eax, word ptr [edx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8D 6F 01 00 00: jge 0x42e135
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 65 01 00 00: je 0x42e135
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
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
        ; Exact mapped bytes 0F 8C BE 00 00 00: jl 0x42e0ab
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbe
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
        mov eax, dword ptr [ebp - 20h]
        imul ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [edx + 18h]
        sub edx, ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        ; Exact mapped bytes EB 4C: jmp 0x42e0f7
        __asm _emit 0xeb
        __asm _emit 0x4c
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
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x42e137
        __asm _emit 0xeb
        __asm _emit 0x40
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
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        imul eax, eax, 0ah
        mov edx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [edx + 8]
        mov byte ptr [ecx + eax + 136h], dl
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x42e137
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0d8h
        cmp ebp, esp
        ; Exact mapped bytes E8 99 A6 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa6
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
