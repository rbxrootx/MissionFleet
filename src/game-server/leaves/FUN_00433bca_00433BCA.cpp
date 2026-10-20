// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433BCA .. +0xF5B bytes.
extern "C" __declspec(naked) void FUN_00433bca_00433BCA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 8ch]
        mov ecx, 23h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 78h], ecx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        sar eax, 8
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        and edx, 0ffh
        mov byte ptr [ebp - 4], dl
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0eh
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 5E 60 FF FF: call 0x429c8b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
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
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        sub ecx, 2
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 0bh
        ; Exact mapped bytes 0F 87 B5 0E 00 00: ja 0x434b0a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 24 95 25 4B 43 00: jmp dword ptr [edx*4 + 0x434b25]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x25
        __asm _emit 0x4b
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 65 5E FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 9C 02 00 00: je 0x433f30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        mov edx, dword ptr [ebp - 18h]
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
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [edx + 8]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 0A 1E: mov si, word ptr [edx + ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x1e
        cmp eax, esi
        ; Exact mapped bytes 7F 10: jg 0x433cda
        __asm _emit 0x7f
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 0F 85 56 02 00 00: jne 0x433f30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x433cec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 8
        ; Exact mapped bytes 0F 8D 3A 02 00 00: jge 0x433f30
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 8]
        add edx, ecx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + eax*4 + 28h], 0
        ; Exact mapped bytes 74 21: je 0x433d38
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 8]
        add ecx, eax
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + edx*4 + 48h], -1
        ; Exact mapped bytes 75 05: jne 0x433d3d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x433f30
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x433d4f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 64h
        ; Exact mapped bytes 0F 83 D2 01 00 00: jae 0x433f2b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 20h]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 0
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x433ec4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov esi, dword ptr [ebp - 20h]
        imul esi, esi, 37ch
        mov eax, dword ptr [ecx + eax + 68h]
        and eax, dword ptr [edx + esi + 2b8h]
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [edx + 8]
        cmp eax, dword ptr [edx + ecx + 68h]
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x433ec2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        add eax, edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + ecx*4 + 28h], edx
        ; Exact mapped bytes 0F 87 B2 00 00 00: ja 0x433ec2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        test edx, edx
        ; Exact mapped bytes 75 21: jne 0x433e51
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        add eax, edx
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + ecx*4 + 28h], 0ch
        ; Exact mapped bytes 76 3C: jbe 0x433e8d
        __asm _emit 0x76
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 234h]
        and edx, 0fh
        cmp eax, edx
        ; Exact mapped bytes 75 35: jne 0x433ec2
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 0A: jne 0x433ec2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 4E 0C 00 00: jmp 0x434b10
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 62: jmp 0x433f26
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 66 8B 14 01: mov dx, word ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x01
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
        cmp edx, 1
        ; Exact mapped bytes 75 35: jne 0x433f26
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 0A: jne 0x433f26
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 EA 0B 00 00: jmp 0x434b10
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1B FE FF FF: jmp 0x433d46
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B3 FD FF FF: jmp 0x433ce3
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D9 0B 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 90 5B FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x434038
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C4 00 00 00: mov ax, word ptr [edx + 0xc4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0a4h
        mov edx, dword ptr [edx + 14h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 0A 1E: mov si, word ptr [edx + ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x1e
        cmp eax, esi
        ; Exact mapped bytes 7C 62: jl 0x433ff7
        __asm _emit 0x7c
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 48 03 00 00: mov cx, word ptr [eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sar ecx, 0dh
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0a4h
        mov eax, dword ptr [eax + 14h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 06: mov si, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x06
        cmp ecx, esi
        ; Exact mapped bytes 74 3F: je 0x434003
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sar edx, 0dh
        test edx, edx
        ; Exact mapped bytes 74 2C: je 0x434003
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0a4h
        mov eax, dword ptr [ecx + 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x434003
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 75 35: jne 0x434038
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0a4h
        mov eax, dword ptr [ecx + 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 0A: jne 0x434038
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 D8 0A 00 00: jmp 0x434b10
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D1 0A 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 88 5A FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x434140
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C2 00 00 00: mov ax, word ptr [edx + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [edx + 10h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 0A 1E: mov si, word ptr [edx + ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x1e
        cmp eax, esi
        ; Exact mapped bytes 7C 62: jl 0x4340ff
        __asm _emit 0x7c
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 28h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 48 03 00 00: mov cx, word ptr [eax + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sar ecx, 0dh
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0ach
        mov eax, dword ptr [eax + 10h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 06: mov si, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x06
        cmp ecx, esi
        ; Exact mapped bytes 74 3F: je 0x43410b
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 28h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        sar edx, 0dh
        test edx, edx
        ; Exact mapped bytes 74 2C: je 0x43410b
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x43410b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 75 35: jne 0x434140
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 0A: jne 0x434140
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 D0 09 00 00: jmp 0x434b10
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C9 09 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 1
        ; Exact mapped bytes 74 64: je 0x4341ca
        __asm _emit 0x74
        __asm _emit 0x64
        mov dword ptr [ebp - 60h], 32h
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov dword ptr [ebp - 68h], ecx
        lea edx, [ebp - 60h]
        push edx
        lea eax, [ebp - 64h]
        push eax
        lea ecx, [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 4F F7 FC FF: call 0x4038e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x4341ca
        __asm _emit 0x74
        __asm _emit 0x32
        mov dword ptr [ebp - 6ch], 20h
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        mov dword ptr [ebp - 74h], edx
        lea eax, [ebp - 6ch]
        push eax
        lea ecx, [ebp - 70h]
        push ecx
        lea edx, [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 FD F5 FC FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4341cf
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 3F 09 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
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
        cmp edx, 0dh
        ; Exact mapped bytes 75 40: jne 0x43426d
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 84 58 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 3E: jmp 0x4342ab
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 44 58 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 0B: jne 0x4342bc
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 05: jne 0x4342bc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 52 08 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 3D: je 0x4342ff
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 37: je 0x4342ff
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 10 A2 00 00 00: mov cx, word ptr [eax + edx + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 9C 00 00 00: mov ax, word ptr [edx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp ecx, eax
        sete dl
        mov dword ptr [ebp - 80h], edx
        ; Exact mapped bytes EB 07: jmp 0x434306
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 58: je 0x434364
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 30h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0ach
        mov eax, dword ptr [eax + 20h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 06: mov si, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x06
        cmp ecx, esi
        ; Exact mapped bytes 75 2F: jne 0x434364
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0ach
        mov ecx, dword ptr [edx + 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 01 06: mov dx, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 12ch]
        cmp edx, ecx
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x434411
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 40: je 0x4343aa
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3A: je 0x4343aa
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [eax + 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A A2 00 00 00: mov ax, word ptr [edx + ecx + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 A2 00 00 00: mov dx, word ptr [ecx + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, edx
        sete cl
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x4343b4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 5E: je 0x43441b
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 38h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0ach
        mov edx, dword ptr [edx + 20h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 0A 06: mov si, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x06
        cmp eax, esi
        ; Exact mapped bytes 75 35: jne 0x43441b
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0ach
        mov eax, dword ptr [ecx + 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 0A: jne 0x43441b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 F5 06 00 00: jmp 0x434b10
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EE 06 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 A5 56 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 84 45 02 00 00: je 0x434699
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        mov eax, dword ptr [ebp - 3ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 50 C6 00 00 00: mov cx, word ptr [eax + edx*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [eax + 18h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 1E: mov si, word ptr [eax + edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x1e
        cmp ecx, esi
        ; Exact mapped bytes 7D 10: jge 0x43449a
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 908h], 1
        ; Exact mapped bytes 0F 85 FF 01 00 00: jne 0x434699
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0a8h
        mov edx, dword ptr [eax + 18h]
        add edx, ecx
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 32 56 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [ecx + 18h]
        cmp dword ptr [eax + edx + 28h], 0
        ; Exact mapped bytes 74 1C: je 0x4344f5
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0a8h
        mov ecx, dword ptr [edx + 18h]
        cmp dword ptr [ecx + eax + 48h], -1
        ; Exact mapped bytes 75 05: jne 0x4344fa
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 14 06 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x43450c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 64h
        ; Exact mapped bytes 0F 83 83 01 00 00: jae 0x434699
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 40h]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2e4h], 0
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x434694
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [ecx + 18h]
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov esi, dword ptr [ebp - 40h]
        imul esi, esi, 37ch
        mov edx, dword ptr [eax + edx + 68h]
        and edx, dword ptr [ecx + esi + 2b8h]
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0a8h
        mov ecx, dword ptr [ecx + 18h]
        cmp edx, dword ptr [ecx + eax + 68h]
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x434694
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0a8h
        mov edx, dword ptr [eax + 18h]
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp - 40h]
        imul esi, esi, 37ch
        mov eax, dword ptr [eax + esi + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp dword ptr [edx + ecx + 28h], eax
        ; Exact mapped bytes 0F 87 CD 00 00 00: ja 0x434694
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 40h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        test ecx, ecx
        ; Exact mapped bytes 75 1C: jne 0x434603
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0a8h
        mov edx, dword ptr [eax + 18h]
        cmp dword ptr [edx + ecx + 28h], 0ch
        ; Exact mapped bytes 76 5C: jbe 0x43465f
        __asm _emit 0x76
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [ecx + 18h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp - 40h]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        and eax, 0fh
        cmp ecx, eax
        ; Exact mapped bytes 74 20: je 0x43465f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0a8h
        mov ecx, dword ptr [edx + 18h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 01 06: mov dx, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x06
        test edx, edx
        ; Exact mapped bytes 75 35: jne 0x434694
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0a8h
        mov eax, dword ptr [ecx + 18h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx + 12ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 0A: jne 0x434694
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 7C 04 00 00: jmp 0x434b10
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6A FE FF FF: jmp 0x434503
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 70 04 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 1
        ; Exact mapped bytes 75 05: jne 0x4346c4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 4A 04 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 11 2E 01 00 00: mov ax, word ptr [ecx + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 75 3F: jne 0x43475f
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 92 53 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 3D: jmp 0x43479c
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 53 53 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 75 0B: jne 0x4347ad
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 05: jne 0x4347ad
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 61 03 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 40: je 0x4347f3
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3A: je 0x4347f3
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 1ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 01 B0 00 00 00: mov dx, word ptr [ecx + eax + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 9C 00 00 00: mov cx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp edx, ecx
        sete al
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4347fd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 58: je 0x43485e
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 50h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [ecx + 1ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 01 06: mov si, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x06
        cmp edx, esi
        ; Exact mapped bytes 75 2F: jne 0x43485e
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0b4h
        mov edx, dword ptr [eax + 1ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 44 0A 06: mov ax, word ptr [edx + ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 12ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x43490b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 40: je 0x4348a4
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 3A: je 0x4348a4
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0b4h
        mov eax, dword ptr [ecx + 1ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 10 B0 00 00 00: mov cx, word ptr [eax + edx + 0xb0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 A4 00 00 00: mov ax, word ptr [edx + 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp ecx, eax
        sete dl
        mov dword ptr [ebp - 8ch], edx
        ; Exact mapped bytes EB 0A: jmp 0x4348ae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 5E: je 0x434915
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 54h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0b4h
        mov eax, dword ptr [eax + 1ch]
        xor esi, esi
        ; Exact mapped bytes 66 8B 74 10 06: mov si, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x06
        cmp ecx, esi
        ; Exact mapped bytes 75 35: jne 0x434915
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0b4h
        mov ecx, dword ptr [edx + 1ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 01 06: mov dx, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 12ch]
        cmp edx, ecx
        ; Exact mapped bytes 75 0A: jne 0x434915
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 FB 01 00 00: jmp 0x434b10
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F4 01 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16c04h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 AA 51 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 0F 84 B9 01 00 00: je 0x434b08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0d4h
        mov eax, dword ptr [ecx + 24h]
        cmp dword ptr [eax + edx + 28h], 0
        ; Exact mapped bytes 74 1C: je 0x434987
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [edx + 24h]
        cmp dword ptr [ecx + eax + 48h], -1
        ; Exact mapped bytes 75 05: jne 0x43498c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x434b0e
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x43499e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 5ch]
        add edx, 1
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 64h
        ; Exact mapped bytes 0F 83 60 01 00 00: jae 0x434b08
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 5ch]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2e4h], 0
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x434b03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0d4h
        mov eax, dword ptr [ecx + 24h]
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov esi, dword ptr [ebp - 5ch]
        imul esi, esi, 37ch
        mov edx, dword ptr [eax + edx + 68h]
        and edx, dword ptr [ecx + esi + 2b8h]
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [ecx + 24h]
        cmp edx, dword ptr [ecx + eax + 68h]
        ; Exact mapped bytes 0F 85 EA 00 00 00: jne 0x434b03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0d4h
        mov edx, dword ptr [eax + 24h]
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp - 5ch]
        imul esi, esi, 37ch
        mov eax, dword ptr [eax + esi + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp dword ptr [edx + ecx + 28h], eax
        ; Exact mapped bytes 0F 87 AA 00 00 00: ja 0x434b03
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 5ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ecx, 0fh
        test ecx, ecx
        ; Exact mapped bytes 75 1C: jne 0x434a95
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0d4h
        mov edx, dword ptr [eax + 24h]
        cmp dword ptr [edx + ecx + 28h], 0ch
        ; Exact mapped bytes 76 3C: jbe 0x434ad1
        __asm _emit 0x76
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 14h]
        imul edx, edx, 0d4h
        mov eax, dword ptr [ecx + 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 06: mov cx, word ptr [eax + edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp - 5ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        and eax, 0fh
        cmp ecx, eax
        ; Exact mapped bytes 75 32: jne 0x434b03
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0d4h
        mov ecx, dword ptr [edx + 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 01 06: mov dx, word ptr [ecx + eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 12ch]
        cmp edx, ecx
        ; Exact mapped bytes 75 07: jne 0x434b03
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0D: jmp 0x434b10
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes E9 8D FE FF FF: jmp 0x434995
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x434b0e
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x434b10
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 8ch
        cmp ebp, esp
        ; Exact mapped bytes E8 C1 3C 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3c
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
