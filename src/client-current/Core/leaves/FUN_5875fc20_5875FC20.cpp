// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875FC20 .. +0x5E1 bytes.
extern "C" __declspec(naked) void FUN_5875fc20_5875FC20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b8h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 A5 4D D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x4d
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B7 05 00 00: je 0x587601fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 6180h], 0
        ; Exact mapped bytes 0F 84 A3 05 00 00: je 0x587601fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 0B 52 E8 FF: call 0x585e4e70
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x52
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cdq
        mov ecx, 1f4h
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        add edx, 1eh
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 46h
        ; Exact mapped bytes 7E 09: jle 0x5875fc8a
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 46h
        ; Exact mapped bytes EB 06: jmp 0x5875fc90
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF C6 D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc6
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        lea eax, [eax + ecx*2]
        cdq
        idiv dword ptr [ebp - 10h]
        test edx, edx
        ; Exact mapped bytes 0F 85 41 05 00 00: jne 0x587601fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 80h], 0
        mov dword ptr [ebp - 0a0h], 0
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6180h]
        movzx edx, byte ptr [ecx]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A C6 D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*2 + 6]
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 A8 BF D2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        cdq
        mov ecx, 0ah
        idiv ecx
        cmp edx, 3
        ; Exact mapped bytes 0F 8E FE 00 00 00: jle 0x5875fe1d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 29 2E D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        and ecx, 3ffh
        xor ecx, 55h
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x5875fe1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 FF 2D D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E4 2D D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 3ffh
        xor ecx, 55h
        sub ecx, 1
        xor ecx, 55h
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        and eax, 0fffffc00h
        or eax, ecx
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9A 2D D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AF 24 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 3ffh
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        and eax, 0fffffc00h
        or eax, ecx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], eax
        mov dword ptr [ebp - 60h], 1
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes E9 55 02 00 00: jmp 0x58760072
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        cdq
        mov ecx, 0ah
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 8C 0D 01 00 00: jl 0x5875ff3d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 18 2D D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x5875ff3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 EB 2C D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 D0 2C D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2c
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        sub ecx, 1
        xor ecx, 55h
        and ecx, 3ffh
        shl ecx, 0ah
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        and eax, 0fff003ffh
        or eax, ecx
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 80 2C D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 95 23 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x23
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        and ecx, 3ffh
        shl ecx, 0ah
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        and eax, 0fff003ffh
        or eax, ecx
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx], eax
        mov dword ptr [ebp - 80h], 1
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x58760072
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 05 2C D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x58760072
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 D2 2B D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x2b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 AE 2B D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2b
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        sub ecx, 1
        xor ecx, 55h
        and ecx, 3ffh
        shl ecx, 14h
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        and eax, 0c00fffffh
        or eax, ecx
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 55 2B D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 61 22 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x22
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        and ecx, 3ffh
        shl ecx, 14h
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        and eax, 0c00fffffh
        or eax, ecx
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx], eax
        mov dword ptr [ebp - 0a0h], 1
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 69 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 74 01 00 00: jne 0x587601fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 4C 49 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x49
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 50 10: and dx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x10
        movzx eax, dx
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6180h]
        movzx eax, byte ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 B3 21 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        mov esi, dword ptr [eax + 14h]
        shr esi, 14h
        and esi, 3ffh
        xor esi, 55h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6180h]
        movzx ecx, byte ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 88 21 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        shr edx, 0ah
        and edx, 3ffh
        xor edx, 55h
        add edx, esi
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 08: jge 0x5876012c
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x58760132
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x58760146
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 07: jmp 0x5876014d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 1
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 68 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x68
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB C2 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 48 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 40: jne 0x587601bc
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 58 D3 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x58
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6180h]
        movzx edx, byte ptr [ecx]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 47 0A F3 FF: call 0x58690c00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0a
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x587601fa
        __asm _emit 0xeb
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 58 D3 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6180h]
        movzx edx, byte ptr [ecx]
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 87 49 F2 FF: call 0x58684b80
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x49
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
