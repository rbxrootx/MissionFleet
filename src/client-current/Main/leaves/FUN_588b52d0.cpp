// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B52D0 .. +0x56F bytes.
extern "C" __declspec(naked) void FUN_588b52d0() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e1ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ebx, 1
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + 50h], ecx
        xor ebp, ebp
        mov dword ptr [esi + 54h], ebp
        ; Exact mapped bytes 8B 15 A8 45 A2 58: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 174h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 01 4E 26: add word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        push edi
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b5332
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 1E DC 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b533f
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 A1 DB 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 32h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 16: jle 0x588b5367
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebp
        ; Exact mapped bytes 74 0E: je 0x588b5367
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 194h]
        mov ecx, dword ptr [edx + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x588b5369
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 1C 26 05 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 16: jle 0x588b5397
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebp
        ; Exact mapped bytes 74 0E: je 0x588b5397
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x588b5399
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8E C0 01 00 00: mov word ptr [esi + 0x1c0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 0dch
        ; Exact mapped bytes E8 29 D9 04 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0b4h]
        mov eax, 0fh
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0b4h]
        mov dword ptr [edx + 50h], ebx
        mov ecx, dword ptr [esi + 0b8h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0bch]
        mov dword ptr [ecx + 50h], ebp
        mov ecx, dword ptr [esi + 0bch]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 190h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 70h]
        push ebp
        ; Exact mapped bytes E8 00 1F 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push ebp
        ; Exact mapped bytes E8 F7 1E 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push ebp
        ; Exact mapped bytes E8 EB 1E 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push ebp
        ; Exact mapped bytes E8 DF 1E 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 78h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        mov edi, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 03 CB: add cx, bx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xcb
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b54cb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 85 DA 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b54d8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 08 DA 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 84h]
        mov edi, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 03 C3: add ax, bx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b54f9
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 57 DA 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b5506
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DA D9 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 FF 9D EA FF: call 0x5875f310
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x9d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8ch]
        push 58a0b450h
        ; Exact mapped bytes E8 3F 9E EA FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes E8 E4 9D EA FF: call 0x5875f310
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9d
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edi, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 03 CB: add cx, bx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xcb
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b555e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F2 D9 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b556b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 75 D9 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 03 D3: add dx, bx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b5589
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C7 D9 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x588b5596
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4A D9 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 144h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 148h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 14ch]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 150h]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 154h]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 158h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 15ch]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 160h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 15ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 160h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 13ch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 140h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 15ch]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 160h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        lea edi, [esi + 0f0h]
        mov dword ptr [esp + 10h], 3
        nop
        mov eax, dword ptr [edi - 0ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [edi - 0ch]
        mov eax, 0dh
        mov dword ptr [edx + 5ch], eax
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 5ch], eax
        mov eax, dword ptr [edi - 0ch]
        mov edx, dword ptr [eax + 18h]
        add edx, 69h
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax + 18h]
        add ecx, 69h
        mov dword ptr [eax + 20h], ecx
        mov ebp, dword ptr [edi - 0ch]
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 83 C2 64: add dx, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x64
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588b5695
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 BB D8 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588b56a2
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 3E D8 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebp, dword ptr [edi]
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 83 C0 64: add ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588b56bd
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 93 D8 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x588b56ca
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 16 D8 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi - 0ch]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add edi, 4
        sub dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 85 55 FF FF FF: jne 0x588b5640
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 98h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        xor ecx, ecx
        xor eax, eax
        xor edi, edi
        xor edx, edx
        ; Exact mapped bytes 66 89 8E 82 01 00 00: mov word ptr [esi + 0x182], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E 7C 01 00 00: mov word ptr [esi + 0x17c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push edi
        ; Exact mapped bytes 66 89 86 84 01 00 00: mov word ptr [esi + 0x184], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 80 01 00 00: mov word ptr [esi + 0x180], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 7E 01 00 00: mov word ptr [esi + 0x17e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 7A 01 00 00: mov word ptr [esi + 0x17a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 78 01 00 00: mov word ptr [esi + 0x178], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 188h], edi
        mov dword ptr [esi + 18ch], edi
        ; Exact mapped bytes E8 09 1C 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push edi
        ; Exact mapped bytes E8 FD 1B 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 168h]
        ; Exact mapped bytes E8 C2 64 00 00: call 0x588bbc30
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        ; Exact mapped bytes E8 97 76 00 00: call 0x588bce10
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
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
        cmp dl, bl
        ; Exact mapped bytes 74 16: je 0x588b57a4
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 164h]
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
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 0D: jne 0x588b57b1
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 164h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 168h]
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
        cmp dl, bl
        ; Exact mapped bytes 74 16: je 0x588b57dc
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 168h]
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
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 0D: jne 0x588b57e9
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 168h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 170h]
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
        cmp dl, bl
        ; Exact mapped bytes 74 16: je 0x588b5814
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 170h]
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
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 0D: jne 0x588b5821
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 1cch], edi
        mov dword ptr [esi + 1d4h], edi
        mov dword ptr [esi + 1d8h], edi
        pop edi
        mov dword ptr [esi + 174h], ebx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
