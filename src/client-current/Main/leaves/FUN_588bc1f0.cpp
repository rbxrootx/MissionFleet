// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BC1F0 .. +0x402 bytes.
extern "C" __declspec(naked) void FUN_588bc1f0() {
    __asm {
        sub esp, 204h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 200h], eax
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        mov edi, dword ptr [esp + 218h]
        test al, 2
        ; Exact mapped bytes 0F 84 B7 03 00 00: je 0x588bc5d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 27: je 0x588bc24d
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebx
        ; Exact mapped bytes 74 19: je 0x588bc246
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x588bc24d
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, ebx
        ; Exact mapped bytes 75 EA: jne 0x588bc230
        __asm _emit 0x75
        __asm _emit 0xea
        xor eax, eax
        ; Exact mapped bytes E9 8A 03 00 00: jmp 0x588bc5d7
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 0A 03 00 00: ja 0x588bc565
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AB 01 00 00: je 0x588bc40c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x588bc389
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 5D 03 00 00: jne 0x588bc5d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ebx, byte ptr [esi + 13a4h]
        xor ebp, ebp
        cmp ebp, ebx
        ; Exact mapped bytes 0F 8D C3 00 00 00: jge 0x588bc34b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + 13a7h]
        lea edi, [edx + ebp]
        cmp dword ptr [esi + edi*4 + 0da4h], 0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x588bc34b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + edi*4 + 0da4h]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 8B 52 E7 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x588bc2d3
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 0F BF 8E AC 13 00 00: movsx ecx, word ptr [esi + 0x13ac]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x588bc34b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [esi + 0a0h]
        cmp edi, edx
        ; Exact mapped bytes 7C 08: jl 0x588bc2db
        __asm _emit 0x7c
        __asm _emit 0x08
        inc ebp
        cmp ebp, 5
        ; Exact mapped bytes 7C A7: jl 0x588bc280
        __asm _emit 0x7c
        __asm _emit 0xa7
        ; Exact mapped bytes EB 70: jmp 0x588bc34b
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes 66 83 BE AC 13 00 00 FF: cmp word ptr [esi + 0x13ac], -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 0D: je 0x588bc2f2
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 13a8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 66 0F B6 86 A7 13 00 00: movzx ax, byte ptr [esi + 0x13a7]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0xa7
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 C5: add ax, bp
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc5
        ; Exact mapped bytes 66 89 86 AC 13 00 00: mov word ptr [esi + 0x13ac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cwde
        mov ecx, dword ptr [esi + eax*4 + 0da4h]
        push 0
        push ecx
        mov ecx, dword ptr [esi + 13a8h]
        ; Exact mapped bytes E8 86 3C FB FF: call 0x5886ffa0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13a8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp dword ptr [esi + 13b0h], 0
        mov ecx, dword ptr [esi + 13a8h]
        ; Exact mapped bytes 75 09: jne 0x588bc33f
        __asm _emit 0x75
        __asm _emit 0x09
        push 64h
        push 2d4h
        ; Exact mapped bytes EB 07: jmp 0x588bc346
        __asm _emit 0xeb
        __asm _emit 0x07
        push 1eh
        push 338h
        ; Exact mapped bytes E8 45 6F 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ebp, 5
        ; Exact mapped bytes 74 0F: je 0x588bc35f
        __asm _emit 0x74
        __asm _emit 0x0f
        movzx ecx, byte ptr [esi + 0a0h]
        cmp ebp, ecx
        ; Exact mapped bytes 0F 85 75 02 00 00: jne 0x588bc5d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE AC 13 00 00 FF: cmp word ptr [esi + 0x13ac], -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 67 02 00 00: je 0x588bc5d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13a8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 8E AC 13 00 00: mov word ptr [esi + 0x13ac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x588bc5d4
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        cmp eax, 1bh
        ; Exact mapped bytes 75 16: jne 0x588bc3a7
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        mov dword ptr [esi + 9ch], ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ; Exact mapped bytes E9 30 02 00 00: jmp 0x588bc5d7
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 25h
        ; Exact mapped bytes 74 40: je 0x588bc3ec
        __asm _emit 0x74
        __asm _emit 0x40
        cmp eax, 26h
        ; Exact mapped bytes 74 3B: je 0x588bc3ec
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp eax, 27h
        ; Exact mapped bytes 74 09: je 0x588bc3bf
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 28h
        ; Exact mapped bytes 0F 85 15 02 00 00: jne 0x588bc5d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 13a7h]
        movzx ecx, byte ptr [esi + 0a0h]
        movzx edx, al
        sub ecx, 5
        cmp edx, ecx
        ; Exact mapped bytes 0F 8D FA 01 00 00: jge 0x588bc5d4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc al
        movzx eax, al
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 39 F1 FF FF: call 0x588bb520
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x588bc5d4
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 13a7h]
        test al, al
        ; Exact mapped bytes 0F 86 DA 01 00 00: jbe 0x588bc5d4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec al
        movzx ecx, al
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 19 F1 FF FF: call 0x588bb520
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C8 01 00 00: jmp 0x588bc5d4
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov edi, edi
        movzx edx, byte ptr [esi + 13a7h]
        movzx ecx, byte ptr [esi + 0a0h]
        lea eax, [edx + edi]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 30 01 00 00: jge 0x588bc559
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + eax*4 + 0da4h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 01 51 E7 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x588bc559
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 38 B5 04 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, byte ptr [esi + 13a7h]
        add ecx, edi
        mov ecx, dword ptr [esi + ecx*4 + 0da4h]
        cmp dword ptr [ecx + 28h], 100h
        ; Exact mapped bytes 75 25: jne 0x588bc4a4
        __asm _emit 0x75
        __asm _emit 0x25
        push 80h
        ; Exact mapped bytes E8 57 68 04 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        movzx edx, byte ptr [esi + 13a7h]
        add edx, edi
        mov dword ptr [esi + edx*4 + 11a4h], ebx
        dec byte ptr [esi + 13a6h]
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x588bc559
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 13a6h]
        cmp dword ptr [esi + 13b0h], ebx
        ; Exact mapped bytes 75 5E: jne 0x588bc511
        __asm _emit 0x75
        __asm _emit 0x5e
        mov ebp, dword ptr [esi + 13b4h]
        inc eax
        cmp eax, ebp
        ; Exact mapped bytes 7E 77: jle 0x588bc535
        __asm _emit 0x7e
        __asm _emit 0x77
        push 1ffh
        lea ecx, [esp + 15h]
        push ebx
        push ecx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes E8 76 07 0C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        push ebp
        push 5898dfb4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 18h]
        push 200h
        push edx
        ; Exact mapped bytes E8 6C F5 E8 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 10h
        push ebx
        push ebx
        lea eax, [esp + 18h]
        push eax
        push 2710h
        ; Exact mapped bytes E8 E8 F5 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 21 88 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x88
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 48: jmp 0x588bc559
        __asm _emit 0xeb
        __asm _emit 0x48
        movzx edx, byte ptr [esi + 13a4h]
        sub edx, eax
        cmp edx, 4
        ; Exact mapped bytes 7D 16: jge 0x588bc535
        __asm _emit 0x7d
        __asm _emit 0x16
        push ebx
        push ebx
        push ebx
        push 197h
        ; Exact mapped bytes E8 C4 F5 EA FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD 87 EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes EB 24: jmp 0x588bc559
        __asm _emit 0xeb
        __asm _emit 0x24
        push 100h
        ; Exact mapped bytes E8 A1 67 04 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 13a7h]
        add ecx, edi
        mov dword ptr [esi + ecx*4 + 11a4h], 1
        inc byte ptr [esi + 13a6h]
        inc edi
        cmp edi, 5
        ; Exact mapped bytes 0F 8C AD FE FF FF: jl 0x588bc410
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6F: jmp 0x588bc5d4
        __asm _emit 0xeb
        __asm _emit 0x6f
        sub eax, 204h
        ; Exact mapped bytes 74 28: je 0x588bc594
        __asm _emit 0x74
        __asm _emit 0x28
        sub eax, 6
        ; Exact mapped bytes 75 63: jne 0x588bc5d4
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 66 39 5F 0A: cmp word ptr [edi + 0xa], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x0a
        mov al, byte ptr [esi + 13a7h]
        ; Exact mapped bytes 0F 8E 44 FE FF FF: jle 0x588bc3c5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 76 4F: jbe 0x588bc5d4
        __asm _emit 0x76
        __asm _emit 0x4f
        dec al
        movzx edx, al
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 8E EF FF FF: call 0x588bb520
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 40: jmp 0x588bc5d4
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 13a8h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 75 2A: jne 0x588bc5d4
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 D5 B3 04 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 13a8h]
        ; Exact mapped bytes E8 DC F3 FA FF: call 0x5886b9b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        mov ecx, dword ptr [esp + 210h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 F1 05 0C 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 204h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
