// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CD0B0 .. +0x697 bytes.
extern "C" __declspec(naked) void FUN_100cd0b0_100CD0B0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, 1ch
        lea ebx, [esi + 1a8h]
        xor eax, eax
        mov edi, ebx
        push 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 228h], eax
        mov dword ptr [esi + 230h], eax
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 40 26 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push 30h
        ; Exact mapped bytes E8 33 26 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        mov ebp, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 8B 4C 24 18: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        xor edx, edx
        mov dword ptr [eax + 54h], 80h
        ; Exact mapped bytes 66 89 AE 18 02 00 00: mov word ptr [esi + 0x218], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 1A 02 00 00: mov word ptr [esi + 0x21a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 96 18 02 00 00: mov dx, word ptr [esi + 0x218]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push edx
        ; Exact mapped bytes E8 FA 25 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 1A 02 00 00: mov ax, word ptr [esi + 0x21a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E5 25 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        mov edi, 0fffeh
        push 220000h
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 AC EF FE FF: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40000000h
        ; Exact mapped bytes E8 EC FA FE FF: call 0x100bcc60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [esi + 1e0h], 0
        mov al, byte ptr [esi + 1d8h]
        mov cl, byte ptr [esi + 21ah]
        push 101ac26ch
        xor cl, al
        push ebx
        and cl, 7fh
        xor cl, al
        mov byte ptr [esi + 1d8h], cl
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0c0h]
        mov ebx, 1
        push ebx
        ; Exact mapped bytes E8 6C 25 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 78h
        ; Exact mapped bytes E8 5F 25 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [edx + 54h], 78h
        mov eax, dword ptr [esi + 12ch]
        xor edx, edx
        mov dword ptr [esi + 224h], ecx
        ; Exact mapped bytes 66 89 96 14 02 00 00: mov word ptr [esi + 0x214], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 DE 01 00 00: mov word ptr [esi + 0x1de], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0f0h]
        cmp ecx, edx
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes 74 07: je 0x100cd208
        __asm _emit 0x74
        __asm _emit 0x07
        or byte ptr [esi + 1dah], 20h
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 8B 81 D8 00 00 00: mov ax, word ptr [ecx + 0xd8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [esi + 210h], eax
        ; Exact mapped bytes 66 8B 14 45 A8 84 19 10: mov dx, word ptr [eax*2 + 0x101984a8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x10
        mov dword ptr [esi + 21ch], edx
        ; Exact mapped bytes 66 8B 0C 45 0C 85 19 10: mov cx, word ptr [eax*2 + 0x1019850c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x10
        mov dword ptr [esi + 220h], ecx
        lea ecx, [esi + 0f4h]
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cd248
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 10ch]
        mov ecx, 2
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 8ch]
        add edx, 0bdh
        push edx
        ; Exact mapped bytes E8 F8 1A 03 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 90h]
        add eax, 0bdh
        push eax
        ; Exact mapped bytes E8 E4 1A 03 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        add ecx, 0bdh
        push ecx
        mov ecx, dword ptr [esi + 94h]
        ; Exact mapped bytes E8 CF 1A 03 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        and ebp, 0ffffh
        mov dword ptr [esp + 14h], ebp
        lea eax, [ebp - 5]
        cmp eax, 14h
        ; Exact mapped bytes 77 1B: ja 0x100cd31e
        __asm _emit 0x77
        __asm _emit 0x1b
        xor edx, edx
        mov dl, byte ptr [eax + 100cd750h]
        ; Exact mapped bytes FF 24 95 48 D7 0C 10: jmp dword ptr [edx*4 + 0x100cd748]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xd7
        __asm _emit 0x0c
        __asm _emit 0x10
        mov dword ptr [esi + 22ch], 0
        ; Exact mapped bytes EB 06: jmp 0x100cd324
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 22ch], ebx
        mov eax, dword ptr [esi + 22ch]
        test eax, eax
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 74 26: je 0x100cd35a
        __asm _emit 0x74
        __asm _emit 0x26
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12ch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x100cd381
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ecx, [esi + 14ch]
        mov edx, 3
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 0fh
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cd38c
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esp + 1ch]
        xor edx, edx
        cmp eax, edx
        ; Exact mapped bytes 0F 84 F2 02 00 00: je 0x100cd698
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 1dah]
        mov ebp, 3
        or al, 20h
        mov ecx, 0fff0h
        mov byte ptr [esi + 1dah], al
        mov eax, dword ptr [esi + 100h]
        mov dword ptr [esi + 228h], ebx
        ; Exact mapped bytes 66 89 AE 14 02 00 00: mov word ptr [esi + 0x214], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE DE 01 00 00: mov word ptr [esi + 0x1de], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 210h], edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 8]
        mov ebx, dword ptr [eax]
        mov edx, dword ptr [ebx + 28h]
        push edx
        ; Exact mapped bytes E8 E0 4C F7 FF: call 0x100420e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4c
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 30 02 00 00: jne 0x100cd638
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 0f4h]
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cd413
        __asm _emit 0x75
        __asm _emit 0xf4
        lea ecx, [esi + 14ch]
        mov edx, ebp
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x100cd427
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 108h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 11ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 120h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 124h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 0ech]
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x100cd64f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0ach]
        mov ebp, dword ptr [eax + 164h]
        mov edx, dword ptr [ebx + 0a8h]
        cmp ebp, ecx
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 7E 13: jle 0x100cd4f2
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x100cd4f2
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cd4f2
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + ecx*4]
        ; Exact mapped bytes EB 02: jmp 0x100cd4f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 198h]
        lea ebp, [esi + 198h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 2C: je 0x100cd533
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebx + 0ech]
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x100cd554
        __asm _emit 0x7e
        __asm _emit 0x13
        test edx, edx
        ; Exact mapped bytes 7C 0F: jl 0x100cd554
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100cd554
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + edx*4]
        ; Exact mapped bytes EB 02: jmp 0x100cd556
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 19ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100cd58b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp]
        push 0fffffeffh
        ; Exact mapped bytes E8 C8 1B 03 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, ebp
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cd59f
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [ebx + 34h]
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 66 21 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 34h]
        mov ecx, dword ptr [esi + 0b4h]
        imul edx, dword ptr [ebx + 38h]
        push edx
        ; Exact mapped bytes E8 53 21 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov ebp, 1
        push ebp
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 0b0h]
        mov edx, dword ptr [ebx + 34h]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [esi + 0b4h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [ebx + 34h]
        imul ecx, dword ptr [ebx + 38h]
        mov edx, dword ptr [esi + 0b4h]
        mov dword ptr [edx + 54h], ecx
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 14 21 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 30h]
        mov ecx, dword ptr [esi + 0c4h]
        push eax
        ; Exact mapped bytes E8 05 21 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        mov edx, dword ptr [ebx + 30h]
        mov dword ptr [ecx + 54h], edx
        mov dword ptr [esi + 21ch], ebp
        mov eax, dword ptr [ebx + 34h]
        mov dword ptr [esi + 220h], eax
        ; Exact mapped bytes EB 17: jmp 0x100cd64f
        __asm _emit 0xeb
        __asm _emit 0x17
        lea ecx, [esi + 198h]
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cd643
        __asm _emit 0x75
        __asm _emit 0xf4
        lea ebx, [esi + 14ch]
        mov ebp, 3
        mov ecx, dword ptr [ebx]
        push -1
        ; Exact mapped bytes E8 ED 70 03 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        add ebx, 4
        dec ebp
        ; Exact mapped bytes 75 F1: jne 0x100cd65a
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esi + 230h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100cd67c
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 F4 18 00 00: call 0x100cef70
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12ch]
        mov ebp, dword ptr [esp + 14h]
        mov ebx, 1
        mov ecx, 0fh
        or byte ptr [eax + 24h], 0fh
        xor edx, edx
        ; Exact mapped bytes EB 19: jmp 0x100cd6b1
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [esi + 100h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0fch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        cmp ebp, 10h
        ; Exact mapped bytes 74 40: je 0x100cd6f6
        __asm _emit 0x74
        __asm _emit 0x40
        cmp ebp, 14h
        ; Exact mapped bytes 7E 05: jle 0x100cd6c0
        __asm _emit 0x7e
        __asm _emit 0x05
        cmp ebp, 16h
        ; Exact mapped bytes 7E 36: jle 0x100cd6f6
        __asm _emit 0x7e
        __asm _emit 0x36
        mov eax, dword ptr [esi + 104h]
        mov dword ptr [esi + 230h], ebx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 234h]
        mov dword ptr [esi + 248h], ebx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 238h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 39: jmp 0x100cd72f
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [esi + 104h]
        mov ecx, 0fff0h
        mov dword ptr [esi + 230h], edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 234h]
        mov dword ptr [esi + 248h], edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 238h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 39 18 00 00: call 0x100cef70
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 00 1A 00 00: call 0x100cf140
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
