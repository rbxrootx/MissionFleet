// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BFC80 .. +0x596 bytes.
extern "C" __declspec(naked) void FUN_587bfc80_587BFC80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 74 0C: je 0x587bfcac
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 75 05: jne 0x587bfcb1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 54 05 00 00: jmp 0x587c0205
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3E 05 00 00: je 0x587c0205
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 8F C5 04 00 00: jg 0x587c0205
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 8C B7 04 00 00: jl 0x587c0205
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 0F 8F A8 04 00 00: jg 0x587c0205
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 8C 99 04 00 00: jl 0x587c0205
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 54h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov ecx, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 58h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 58h]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0b0h]
        sub ecx, edx
        mov dword ptr [ebp - 5ch], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 5ch]
        mov esi, dword ptr [ebp - 18h]
        cdq
        idiv dword ptr [esi + 0b4h]
        sub ecx, edx
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 18: jmp 0x587bfe16
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8D A7 01 00 00: jge 0x587bffc9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 3F: jmp 0x587bfe81
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 3ch]
        sub edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 40h]
        add ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 54h]
        add edx, 1
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 3ch]
        cmp eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 0F 8C 37 01 00 00: jl 0x587bffc4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 64h]
        cmp dword ptr [ebp - 40h], edx
        ; Exact mapped bytes 0F 8D 25 01 00 00: jge 0x587bffc4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 8C 1B 01 00 00: jl 0x587bffc4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 88 0A 01 00 00: js 0x587bffbf
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 0F 8D F8 00 00 00: jge 0x587bffbf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 1ch]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        cmp dword ptr [eax + ecx], 0
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x587bffbf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 1ch]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 D3 58 CD FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x58
        __asm _emit 0xcd
        __asm _emit 0xff
        add eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 54h]
        and edx, 1
        mov ecx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ecx + 0c0h]
        add eax, edx
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 1ch]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov esi, dword ptr [ebp - 40h]
        add esi, dword ptr [edx + eax + 4]
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 1ch]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 A8 58 CD FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x58
        __asm _emit 0xcd
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 60h], esi
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 1ch]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov edx, dword ptr [ecx + edx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 1ch]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + ecx + 8]
        imul eax, dword ptr [edx + 28h]
        cdq
        and edx, 0ffh
        add eax, edx
        sar eax, 8
        push eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ech]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 1ch]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov ecx, dword ptr [edx + eax]
        ; Exact mapped bytes E8 B2 C7 CD FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc7
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7E FE FF FF: jmp 0x587bfe42
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 FE FF FF: jmp 0x587bfdfe
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x587bfff2
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 48h]
        add eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 64h]
        cmp dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 0F 8D AD 01 00 00: jge 0x587c01b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes EB 3F: jmp 0x587c0063
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4ch]
        sub ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 50h]
        add eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 1
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + 58h]
        cmp dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 0F 8C 37 01 00 00: jl 0x587c01ac
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 64h]
        cmp dword ptr [ebp - 50h], edx
        ; Exact mapped bytes 0F 8D 25 01 00 00: jge 0x587c01ac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 8C 1B 01 00 00: jl 0x587c01ac
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 88 0A 01 00 00: js 0x587c01a7
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 0F 8D F8 00 00 00: jge 0x587c01a7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 20h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        cmp dword ptr [eax + ecx], 0
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x587c01a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add ecx, dword ptr [ebp - 20h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 EB 56 CD FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x56
        __asm _emit 0xcd
        __asm _emit 0xff
        add eax, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ebp - 58h]
        and edx, 1
        mov ecx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ecx + 0c0h]
        add eax, edx
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 20h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov esi, dword ptr [ebp - 50h]
        add esi, dword ptr [edx + eax + 4]
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 20h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 C0 56 CD FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x56
        __asm _emit 0xcd
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 60h], esi
        mov ecx, dword ptr [ebp - 28h]
        add ecx, dword ptr [ebp - 20h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f0h]
        mov edx, dword ptr [ecx + edx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 20h]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0f0h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + ecx + 8]
        imul eax, dword ptr [edx + 28h]
        cdq
        and edx, 0ffh
        add eax, edx
        sar eax, 8
        push eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ech]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 20h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0f0h]
        mov ecx, dword ptr [edx + eax]
        ; Exact mapped bytes E8 CA C5 CD FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc5
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 78 FE FF FF: jmp 0x587c0024
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1A FE FF FF: jmp 0x587bffcb
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 28: je 0x587c0205
        __asm _emit 0x74
        __asm _emit 0x28
        lea edx, [ebp - 6ch]
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 72 56 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x56
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB D2: jmp 0x587c01d7
        __asm _emit 0xeb
        __asm _emit 0xd2
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 40 0E 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0e
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
