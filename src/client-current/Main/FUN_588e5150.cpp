// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 5014 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E5150 .. +0x1396 bytes.
extern "C" __declspec(naked) void FUN_588e5150_segment_00() {
    __asm {
        sub esp, 14h
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 78 13 00 00: je 0x588e64da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 100ch], 0
        ; Exact mapped bytes 0F 84 6B 13 00 00: je 0x588e64da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6090h]
        push edi
        cmp eax, 50000h
        ; Exact mapped bytes 0F 85 5E 12 00 00: jne 0x588e63df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 60c8h], 0
        push ebx
        mov ebx, 1
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x588e5237
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 60cch]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x588e522f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 398h]
        movzx edx, word ptr [esi + 350h]
        xor ecx, 0aaaaaaaah
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 0C 4A ED FF: call 0x587b9bd0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x4a
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [esi + 394h]
        mov edi, dword ptr [esi + 398h]
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 0ah
        xor edi, 0aaaaaaaah
        push eax
        xor edi, 0aaaaaaaah
        ; Exact mapped bytes E8 75 EE 00 00: call 0x588f4060
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 4ch], edi
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10490h]
        add ecx, dword ptr [eax + 10488h]
        xor edx, edx
        mov eax, ecx
        shl eax, 5
        sub eax, ecx
        add eax, 7
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 49 A2 58: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 10624dd3h
        mov ecx, dword ptr [ecx + edx*4]
        mul ecx
        shr edx, 3
        mov eax, ebx
        sub eax, edx
        imul eax, eax, 7dh
        add eax, ecx
        ; Exact mapped bytes EB 01: jmp 0x588e5230
        __asm _emit 0xeb
        __asm _emit 0x01
        dec eax
        ; Exact mapped bytes 66 89 86 CC 60 00 00: mov word ptr [esi + 0x60cc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1300h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 84 D3: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xd3
        ; Exact mapped bytes 74 1B: je 0x588e5260
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 1300h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1304h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 2
        push ebp
        ; Exact mapped bytes 8B 2D 9C 45 A2 58: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 84 CB: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xcb
        ; Exact mapped bytes 74 5D: je 0x588e52d4
        __asm _emit 0x74
        __asm _emit 0x5d
        cmp dword ptr [ebp + 218b0h], 0
        ; Exact mapped bytes 7E 54: jle 0x588e52d4
        __asm _emit 0x7e
        __asm _emit 0x54
        cmp dword ptr [ebp + 21c34h], 0
        ; Exact mapped bytes 75 4B: jne 0x588e52d4
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [edx + 4]
        test edi, edi
        ; Exact mapped bytes 74 3E: je 0x588e52d4
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp edi, esi
        ; Exact mapped bytes 75 3A: jne 0x588e52d4
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 23ch]
        mov ecx, dword ptr [eax + 50h]
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp ecx, 0ah
        ; Exact mapped bytes 7F 15: jg 0x588e52d4
        __asm _emit 0x7f
        __asm _emit 0x15
        cmp dword ptr [edi + 80h], 0
        ; Exact mapped bytes 74 0C: je 0x588e52d4
        __asm _emit 0x74
        __asm _emit 0x0c
        add dword ptr [esi + 64fch], ebx
        ; Exact mapped bytes 8B 2D 9C 45 A2 58: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ebp + 218c8h], 0
        ; Exact mapped bytes 74 4B: je 0x588e5328
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp dword ptr [esi + 6070h], 0
        ; Exact mapped bytes 75 42: jne 0x588e5328
        __asm _emit 0x75
        __asm _emit 0x42
        cmp dword ptr [esi + 63b8h], 0
        ; Exact mapped bytes 74 39: je 0x588e5328
        __asm _emit 0x74
        __asm _emit 0x39
        cmp byte ptr [esi + 354h], 0
        ; Exact mapped bytes 75 30: jne 0x588e5328
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [esi + 63c0h], 0
        ; Exact mapped bytes 75 27: jne 0x588e5328
        __asm _emit 0x75
        __asm _emit 0x27
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 7D 21: jge 0x588e5328
        __asm _emit 0x7d
        __asm _emit 0x21
        inc byte ptr [ebp + 218d8h]
        movzx edx, word ptr [esi + 350h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push edx
        ; Exact mapped bytes E8 4E 5C ED FF: call 0x587baf70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [esi + 63c0h], ebx
        mov eax, dword ptr [esi + 168h]
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x588e5339
        __asm _emit 0x7e
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 168h], eax
        mov ecx, esi
        ; Exact mapped bytes E8 80 80 FF FF: call 0x588dd3c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 4]
        mov cl, byte ptr [esi + 354h]
        cmp cl, byte ptr [edi + 354h]
        ; Exact mapped bytes 74 7A: je 0x588e53d0
        __asm _emit 0x74
        __asm _emit 0x7a
        cmp dword ptr [esi + 63a8h], 0
        ; Exact mapped bytes 75 71: jne 0x588e53d0
        __asm _emit 0x75
        __asm _emit 0x71
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov edx, edi
        sub ecx, dword ptr [edx + 8]
        sub eax, dword ptr [edx + 4]
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 0A 79 09 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes D9 7C 24 10: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, word ptr [esp + 10h]
        or eax, 0c00h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DF 7C 24 14: fistp qword ptr [esp + 0x14]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        cmp edx, dword ptr [edi + 0dcch]
        ; Exact mapped bytes 77 20: ja 0x588e53d0
        __asm _emit 0x77
        __asm _emit 0x20
        cmp dword ptr [edi + 80h], 0
        ; Exact mapped bytes 74 17: je 0x588e53d0
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 65h
        push 62h
        push 14h
        ; Exact mapped bytes E8 D6 6B 00 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 63a8h], ebx
        mov eax, dword ptr [esi + 6078h]
        xor eax, 0aaaaaaaah
        mov ebx, 3
        cmp eax, 1
        ; Exact mapped bytes 0F 85 95 02 00 00: jne 0x588e567e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6084h]
        xor ecx, 0aaaaaaaah
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 81 02 00 00: jne 0x588e567e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 80h], 0
        ; Exact mapped bytes 0F 84 35 04 00 00: je 0x588e583f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DE C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [esi + 12e8h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 85 4E 02 00 00: jne 0x588e5672
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12e8h]
        push 1
        ; Exact mapped bytes E8 BF C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12ech]
        push 1
        ; Exact mapped bytes E8 B2 C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12e0h]
        push 1
        ; Exact mapped bytes E8 A5 C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12e4h]
        push 1
        ; Exact mapped bytes E8 98 C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12b0h]
        push 1
        ; Exact mapped bytes E8 8B C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12b4h]
        push 1
        ; Exact mapped bytes E8 7E C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12d8h]
        push 1
        ; Exact mapped bytes E8 71 C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 12dch]
        push 1
        ; Exact mapped bytes E8 64 C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 38 47 A2 58 00: cmp dword ptr [0x58a24738], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x588e5499
        __asm _emit 0x74
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 20: jmp 0x588e54b9
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x588e54b7
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [esi + 1340h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x588e54b7
        __asm _emit 0x74
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes E8 DD 4C E7 FF: call 0x5875a190
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4c
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x588e54c4
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [esi + 12a8h]
        ; Exact mapped bytes E8 2C C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        lea edi, [esi + 652ch]
        mov ebp, 6
        nop
        mov eax, dword ptr [edi - 18h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [edi]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 7E 04: jle 0x588e54e4
        __asm _emit 0x7e
        __asm _emit 0x04
        push 1
        ; Exact mapped bytes EB 02: jmp 0x588e54e6
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        ; Exact mapped bytes E8 05 C1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc1
        __asm _emit 0xe4
        __asm _emit 0xff
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 DD: jne 0x588e54d0
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 21c34h], ebp
        ; Exact mapped bytes 0F 85 54 01 00 00: jne 0x588e5659
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 4]
        mov al, byte ptr [esi + 354h]
        cmp al, byte ptr [edi + 354h]
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x588e5659
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        cmp byte ptr [eax + edx + 430h], 0
        ; Exact mapped bytes 0F 85 28 01 00 00: jne 0x588e5659
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 63a4h], ebp
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x588e5659
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov edx, edi
        sub ecx, dword ptr [edx + 8]
        sub eax, dword ptr [edx + 4]
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 2C 77 09 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes D9 7C 24 10: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, word ptr [esp + 10h]
        or eax, 0c00h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DF 7C 24 14: fistp qword ptr [esp + 0x14]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        cmp edx, dword ptr [edi + 0dcch]
        ; Exact mapped bytes 0F 87 C7 00 00 00: ja 0x588e5659
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 80h], ebp
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x588e5659
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push 1eh
        push 5
        ; Exact mapped bytes E8 02 69 00 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x588e564c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 2ch
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 16: jle 0x588e55de
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebp
        ; Exact mapped bytes 74 0E: je 0x588e55de
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x588e55e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 61: jne 0x588e564c
        __asm _emit 0x75
        __asm _emit 0x61
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x588e560f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588e560f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x588e5611
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 73 23 02 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x588e5641
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588e5641
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes EB 02: jmp 0x588e5643
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, 1
        mov dword ptr [esi + 63a4h], ecx
        ; Exact mapped bytes EB 05: jmp 0x588e565e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, 1
        mov eax, dword ptr [esi + 12ach]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12fch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 A7 7E FF FF: call 0x588dd520
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x588e583f
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12e8h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x588e578b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12e8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12ech]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12e0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12e4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12b0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12b4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12ach]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12d8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12dch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea eax, [esi + 652ch]
        mov edx, 6
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [eax - 18h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        add eax, 4
        sub edx, 1
        ; Exact mapped bytes 75 E6: jne 0x588e5700
        __asm _emit 0x75
        __asm _emit 0xe6
        xor edi, edi
        ; Exact mapped bytes 39 3D 38 47 A2 58: cmp dword ptr [0x58a24738], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 11: je 0x588e5735
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi + 12a8h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 3B: jmp 0x588e5770
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, edi
        ; Exact mapped bytes 75 11: jne 0x588e5750
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi + 12a8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x588e5770
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [esi + 1340h]
        cmp eax, edi
        ; Exact mapped bytes 74 0A: je 0x588e5764
        __asm _emit 0x74
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes E8 30 4A E7 FF: call 0x5875a190
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x588e5770
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 12a8h]
        push edi
        ; Exact mapped bytes E8 80 BE E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [esi + 12fch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [esi + 63a4h], edi
        mov dword ptr [esi + 63a8h], edi
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [ecx + 354h]
        cmp dl, byte ptr [esi + 354h]
        ; Exact mapped bytes 74 0D: je 0x588e57ae
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 39 9E 64 01 00 00: cmp word ptr [esi + 0x164], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 88 00 00 00: jae 0x588e5836
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6080h]
        xor ecx, 0aaaaaaaah
        cmp ecx, 1
        ; Exact mapped bytes 75 5B: jne 0x588e581a
        __asm _emit 0x75
        __asm _emit 0x5b
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E9 79 FF FF: call 0x588dd1b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 4F: jne 0x588e581a
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 75 07: jne 0x588e57db
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 15 BE E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [esi + 28h]
        cmp eax, 0f0h
        mov ecx, esi
        ; Exact mapped bytes 7D 06: jge 0x588e57ed
        __asm _emit 0x7d
        __asm _emit 0x06
        add eax, 10h
        push eax
        ; Exact mapped bytes EB 05: jmp 0x588e57f2
        __asm _emit 0xeb
        __asm _emit 0x05
        push 100h
        ; Exact mapped bytes E8 E9 D4 01 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        cmp eax, 0ffffff10h
        mov ecx, esi
        ; Exact mapped bytes 7E 0B: jle 0x588e580e
        __asm _emit 0x7e
        __asm _emit 0x0b
        add eax, -10h
        push eax
        ; Exact mapped bytes E8 14 D5 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x588e583f
        __asm _emit 0xeb
        __asm _emit 0x31
        push 0ffffff00h
        ; Exact mapped bytes E8 08 D5 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x588e583f
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [esi + 28h]
        cmp eax, 10h
        mov ecx, esi
        ; Exact mapped bytes 7E 0B: jle 0x588e582f
        __asm _emit 0x7e
        __asm _emit 0x0b
        add eax, -10h
        push eax
        ; Exact mapped bytes E8 B3 D4 01 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x588e583f
        __asm _emit 0xeb
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 AA D4 01 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        movzx eax, word ptr [esi + 164h]
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 76 6E: jbe 0x588e58b9
        __asm _emit 0x76
        __asm _emit 0x6e
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 3F: jne 0x588e5890
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [esi + 100ch]
        mov edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes DB 41 68: fild dword ptr [ecx + 0x68]
        __asm _emit 0xdb
        __asm _emit 0x41
        __asm _emit 0x68
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x588e5867
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D E0 13 9A 58: fmul qword ptr [0x589a13e0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x13
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 74 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        mov eax, 55555556h
        imul ecx
        push 5
        mov eax, edx
        push 0
        shr eax, 1fh
        add eax, edx
        push eax
        push ecx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 D0 A9 FF FF: call 0x588e0260
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 23ch]
        mov eax, dword ptr [ecx + 50h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 7E 07: jle 0x588e58a7
        __asm _emit 0x7e
        __asm _emit 0x07
        ; Exact mapped bytes E8 AB A5 EC FF: call 0x587afe50
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa5
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x588e58b9
        __asm _emit 0xeb
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x588e58b2
        __asm _emit 0x7d
        __asm _emit 0x07
        ; Exact mapped bytes E8 90 A5 EC FF: call 0x587afe40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa5
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x588e58b9
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 75 05: jne 0x588e58b9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A7 A5 EC FF: call 0x587afe60
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa5
        __asm _emit 0xec
        __asm _emit 0xff
        cmp dword ptr [esi + 60c4h], 0
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x588e596d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 39 99 F0 05 01 00: cmp word ptr [ecx + 0x105f0], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x588e58e4
        __asm _emit 0x75
        __asm _emit 0x09
        cmp dword ptr [esi + 6070h], 0
        ; Exact mapped bytes 75 11: jne 0x588e58f5
        __asm _emit 0x75
        __asm _emit 0x11
        push 4
        push 0
        push 1
        push 1
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 6B A9 FF FF: call 0x588e0260
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 74: jne 0x588e5974
        __asm _emit 0x75
        __asm _emit 0x74
        mov al, byte ptr [esi + 84h]
        test al, al
        ; Exact mapped bytes 75 55: jne 0x588e595f
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 2e4h]
        test edi, edi
        ; Exact mapped bytes 74 3E: je 0x588e5957
        __asm _emit 0x74
        __asm _emit 0x3e
        push 9fh
        push 0
        push 5898cde8h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 6E 52 E9 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x52
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 2e4h]
        push 10101h
        push 1
        push 589a13b8h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 49 52 E9 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x52
        __asm _emit 0xe9
        __asm _emit 0xff
        inc byte ptr [esi + 84h]
        ; Exact mapped bytes EB 15: jmp 0x588e5974
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp al, 7dh
        ; Exact mapped bytes 73 0A: jae 0x588e596d
        __asm _emit 0x73
        __asm _emit 0x0a
        inc al
        mov byte ptr [esi + 84h], al
        ; Exact mapped bytes EB 07: jmp 0x588e5974
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [esi + 84h], 0
        mov ecx, dword ptr [esi + 4]
        cmp ecx, 0c8h
        ; Exact mapped bytes 7C 67: jl 0x588e59e6
        __asm _emit 0x7c
        __asm _emit 0x67
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10524h]
        mov edx, dword ptr [eax + 0b0h]
        imul edx, dword ptr [eax + 0a8h]
        sub edx, 64h
        cmp ecx, edx
        ; Exact mapped bytes 7F 47: jg 0x588e59e6
        __asm _emit 0x7f
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 8]
        cmp ecx, 1b8h
        ; Exact mapped bytes 7C 3C: jl 0x588e59e6
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov edx, dword ptr [eax + 0b4h]
        imul edx, dword ptr [eax + 0ach]
        sub edx, 0c8h
        cmp ecx, edx
        ; Exact mapped bytes 7F 25: jg 0x588e59e6
        __asm _emit 0x7f
        __asm _emit 0x25
        mov eax, dword ptr [esi + 6028h]
        mov dword ptr [eax + 104h], 0
        mov ecx, dword ptr [esi + 6028h]
        mov dword ptr [ecx + 108h], 0ffffffffh
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x588e5a86
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 4D: jne 0x588e5a3e
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 2e4h]
        test edi, edi
        ; Exact mapped bytes 74 3E: je 0x588e5a3e
        __asm _emit 0x74
        __asm _emit 0x3e
        push 9fh
        push 0
        push 5898cde8h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 87 51 E9 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 2e4h]
        push 10101h
        push 1
        push 589a1394h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 62 51 E9 FF: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [esi + 6028h]
        cmp dword ptr [eax + 108h], -1
        ; Exact mapped bytes 75 39: jne 0x588e5a86
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, 1
        mov dword ptr [eax + 104h], ecx
        mov edx, dword ptr [esi + 23ch]
        mov eax, dword ptr [edx + 50h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 7E 12: jle 0x588e5a7a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 6028h]
        mov dword ptr [ecx + 108h], 0
        ; Exact mapped bytes EB 0C: jmp 0x588e5a86
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [esi + 6028h]
        mov dword ptr [edx + 108h], ecx
        ; Exact mapped bytes 83 3D 00 45 A2 58 00: cmp dword ptr [0x58a24500], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes 75 31: jne 0x588e5ac1
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [esi + 6080h]
        xor eax, 0aaaaaaaah
        cmp eax, 1
        ; Exact mapped bytes 74 21: je 0x588e5ac1
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [esi + 6078h]
        xor ecx, 0aaaaaaaah
        cmp ecx, 1
        ; Exact mapped bytes 75 2B: jne 0x588e5adc
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [esi + 6084h]
        xor edx, 0aaaaaaaah
        cmp edx, ecx
        ; Exact mapped bytes 75 1B: jne 0x588e5adc
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [esi + 80h], 0
        ; Exact mapped bytes 75 12: jne 0x588e5adc
        __asm _emit 0x75
        __asm _emit 0x12
        cmp dword ptr [esi + 1480h], 0
        ; Exact mapped bytes 74 09: je 0x588e5adc
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 44 51 FF FF: call 0x588dac20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 04 02 00 00 0F: cmp word ptr [eax + 0x204], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        mov ebx, 2
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x588e5c21
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 63b8h], 0
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x588e5bc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 23ch]
        mov edx, dword ptr [ecx + 50h]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x588e5bc9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 398h]
        xor eax, 0aaaaaaaah
        add eax, eax
        cmp eax, dword ptr [esi + 63c4h]
        ; Exact mapped bytes 0F 8E 9A 00 00 00: jle 0x588e5bc9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64ech]
        test eax, eax
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x588e5bc2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 21c4ch]
        lea edx, [esp + 18h]
        push edx
        lea eax, [esi + 4]
        push eax
        ; Exact mapped bytes E8 69 16 EA FF: call 0x587871c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x16
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x588e5b9a
        __asm _emit 0x74
        __asm _emit 0x3f
        movzx eax, byte ptr [esi + 354h]
        mov edx, dword ptr [esp + 18h]
        cmp dword ptr [edx + 0b8h], eax
        ; Exact mapped bytes 74 2C: je 0x588e5b9a
        __asm _emit 0x74
        __asm _emit 0x2c
        xor eax, eax
        lea ecx, [esi + 63c8h]
        mov edi, dword ptr [ecx]
        cmp dword ptr [edi + 50h], 0
        ; Exact mapped bytes 74 0B: je 0x588e5b89
        __asm _emit 0x74
        __asm _emit 0x0b
        inc eax
        add ecx, 4
        cmp eax, 8
        ; Exact mapped bytes 7C EF: jl 0x588e5b76
        __asm _emit 0x7c
        __asm _emit 0xef
        ; Exact mapped bytes EB 11: jmp 0x588e5b9a
        __asm _emit 0xeb
        __asm _emit 0x11
        push edx
        lea ecx, [esi + 4]
        push ecx
        mov ecx, dword ptr [esi + eax*4 + 63c8h]
        ; Exact mapped bytes E8 36 CB E9 FF: call 0x587826d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xcb
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        mov ecx, 7dh
        cdq
        idiv ecx
        add edx, dword ptr [esi + 64e8h]
        mov dword ptr [esi + 64ech], edx
        ; Exact mapped bytes EB 07: jmp 0x588e5bc9
        __asm _emit 0xeb
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 64ech], eax
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 4D: jne 0x588e5c21
        __asm _emit 0x75
        __asm _emit 0x4d
        cmp dword ptr [esi + 63b8h], 0
        ; Exact mapped bytes 74 44: je 0x588e5c21
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp byte ptr [eax + 218d9h], 0
        ; Exact mapped bytes 74 36: je 0x588e5c21
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [eax + 21c4ch]
        push 0
        lea eax, [esi + 4]
        push eax
        ; Exact mapped bytes E8 C4 15 EA FF: call 0x587871c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x15
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588e5c12
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp byte ptr [ecx + 218d9h], 1
        ; Exact mapped bytes 75 12: jne 0x588e5c21
        __asm _emit 0x75
        __asm _emit 0x12
        push ebx
        ; Exact mapped bytes EB 0A: jmp 0x588e5c1c
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp byte ptr [ecx + 218d9h], bl
        ; Exact mapped bytes 75 07: jne 0x588e5c21
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 7F 70 F0 FF: call 0x587ecca0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 218c4h], 0
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x588e5d55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 354h], 0
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x588e5d55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 63b8h], 0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x588e5cfd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 23ch]
        mov edx, dword ptr [eax + 50h]
        xor edx, 0aaaaaaaah
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x588e5cfd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 398h]
        xor eax, 0aaaaaaaah
        add eax, eax
        cmp eax, dword ptr [esi + 63c4h]
        ; Exact mapped bytes 0F 8E 81 00 00 00: jle 0x588e5cfd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64ech]
        test eax, eax
        ; Exact mapped bytes 75 70: jne 0x588e5cf6
        __asm _emit 0x75
        __asm _emit 0x70
        mov ecx, dword ptr [ecx + 21c4ch]
        lea edx, [esp + 1ch]
        push edx
        lea eax, [esi + 4]
        push eax
        ; Exact mapped bytes E8 26 15 EA FF: call 0x587871c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x15
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x588e5cce
        __asm _emit 0x74
        __asm _emit 0x30
        xor eax, eax
        lea ecx, [esi + 63c8h]
        mov edx, dword ptr [ecx]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 74 0B: je 0x588e5cb9
        __asm _emit 0x74
        __asm _emit 0x0b
        inc eax
        add ecx, 4
        cmp eax, 8
        ; Exact mapped bytes 7C EF: jl 0x588e5ca6
        __asm _emit 0x7c
        __asm _emit 0xef
        ; Exact mapped bytes EB 15: jmp 0x588e5cce
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        lea ecx, [esi + 4]
        push ecx
        mov ecx, dword ptr [esi + eax*4 + 63c8h]
        ; Exact mapped bytes E8 02 CA E9 FF: call 0x587826d0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xca
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        mov ecx, 7dh
        cdq
        idiv ecx
        add edx, dword ptr [esi + 64e8h]
        mov dword ptr [esi + 64ech], edx
        ; Exact mapped bytes EB 07: jmp 0x588e5cfd
        __asm _emit 0xeb
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 64ech], eax
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 4D: jne 0x588e5d55
        __asm _emit 0x75
        __asm _emit 0x4d
        cmp dword ptr [esi + 63b8h], 0
        ; Exact mapped bytes 74 44: je 0x588e5d55
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp byte ptr [eax + 218d9h], 0
        ; Exact mapped bytes 74 36: je 0x588e5d55
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [eax + 21c4ch]
        push 0
        lea eax, [esi + 4]
        push eax
        ; Exact mapped bytes E8 90 14 EA FF: call 0x587871c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588e5d46
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp byte ptr [ecx + 218d9h], 1
        ; Exact mapped bytes 75 12: jne 0x588e5d55
        __asm _emit 0x75
        __asm _emit 0x12
        push ebx
        ; Exact mapped bytes EB 0A: jmp 0x588e5d50
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp byte ptr [ecx + 218d9h], bl
        ; Exact mapped bytes 75 07: jne 0x588e5d55
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 4B 6F F0 FF: call 0x587ecca0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov al, byte ptr [esi + 610ch]
        test al, al
        ; Exact mapped bytes 0F 89 DF 00 00 00: jns 0x588e5e42
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 6314h]
        and al, 7fh
        mov byte ptr [esi + 610ch], al
        lea ecx, [edi + 2]
        mov eax, 0ffc0h
        mov dword ptr [esi + 6314h], ecx
        ; Exact mapped bytes 66 85 84 37 0D 61 00 00: test word ptr [edi + esi + 0x610d], ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x588e5e31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + esi + 610dh]
        and al, 3fh
        cmp al, 11h
        ; Exact mapped bytes 74 4C: je 0x588e5de6
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp al, 12h
        ; Exact mapped bytes 74 48: je 0x588e5de6
        __asm _emit 0x74
        __asm _emit 0x48
        cmp al, 13h
        ; Exact mapped bytes 74 44: je 0x588e5de6
        __asm _emit 0x74
        __asm _emit 0x44
        cmp al, 1bh
        ; Exact mapped bytes 75 1E: jne 0x588e5dc4
        __asm _emit 0x75
        __asm _emit 0x1e
        lea eax, [ecx + esi + 610dh]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        movzx edx, cx
        push edx
        push eax
        push 1bh
        mov ecx, esi
        ; Exact mapped bytes E8 9E E4 FF FF: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6D: jmp 0x588e5e31
        __asm _emit 0xeb
        __asm _emit 0x6d
        cmp al, 0ch
        ; Exact mapped bytes 75 69: jne 0x588e5e31
        __asm _emit 0x75
        __asm _emit 0x69
        lea eax, [ecx + esi + 610dh]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        movzx edx, cx
        push edx
        push eax
        push 0ch
        mov ecx, esi
        ; Exact mapped bytes E8 7C E4 FF FF: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4B: jmp 0x588e5e31
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes 83 3D 00 49 A2 58 00: cmp dword ptr [0x58a24900], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 7F 29: jg 0x588e5e18
        __asm _emit 0x7f
        __asm _emit 0x29
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 1E: jne 0x588e5e18
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 25 3D ED FF: call 0x587b9b30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA AC 08 00: call 0x58970ae0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x588e5e31
        __asm _emit 0xeb
        __asm _emit 0x19
        lea edx, [ecx + esi + 610eh]
        movzx ecx, byte ptr [ecx + esi + 610dh]
        push edx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0F 1E FF FF: call 0x588d7c40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [edi + esi + 610dh]
        shr edx, 6
        add dword ptr [esi + 6314h], edx
        mov al, byte ptr [esi + 610ch]
        test byte ptr [esi + 6108h], al
        ; Exact mapped bytes 74 46: je 0x588e5e96
        __asm _emit 0x74
        __asm _emit 0x46
        mov edi, dword ptr [esi + 6314h]
        lea ecx, [edi + 2]
        mov dword ptr [esi + 6314h], ecx
        movzx eax, word ptr [edi + esi + 610dh]
        ; Exact mapped bytes 66 8B D0: mov dx, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        movzx edx, dx
        push edx
        lea ecx, [ecx + esi + 610dh]
        push ecx
        and eax, 3fh
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DB E3 FF FF: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [edi + esi + 610dh]
        shr edx, 6
        add dword ptr [esi + 6314h], edx
        shl dword ptr [esi + 6108h], 1
        ; Exact mapped bytes 83 3D 5C 90 9C 58 00: cmp dword ptr [0x589c905c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x588e5eb6
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 BE 64 01 00 00 00: cmp word ptr [esi + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x588e5eb6
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 FA 62 FF FF: call 0x588dc1b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [esi + 354h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp byte ptr [eax + ecx + 430h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x588e5f52
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 607ch]
        xor edx, 0aaaaaaaah
        cmp edx, 1
        ; Exact mapped bytes 74 70: je 0x588e5f52
        __asm _emit 0x74
        __asm _emit 0x70
        cmp dword ptr [ecx + 10488h], 1
        ; Exact mapped bytes 75 67: jne 0x588e5f52
        __asm _emit 0x75
        __asm _emit 0x67
        mov eax, dword ptr [ecx + 10490h]
        and eax, 8000000fh
        ; Exact mapped bytes 79 05: jns 0x588e5efd
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff0h
        inc eax
        ; Exact mapped bytes 75 53: jne 0x588e5f52
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 66 83 BE 64 01 00 00 03: cmp word ptr [esi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes 72 1C: jb 0x588e5f2b
        __asm _emit 0x72
        __asm _emit 0x1c
        sub edx, dword ptr [esi + 160h]
        sub eax, dword ptr [esi + 15ch]
        push edx
        mov edx, dword ptr [esi + 158h]
        push eax
        mov eax, dword ptr [esi + 154h]
        ; Exact mapped bytes EB 1A: jmp 0x588e5f45
        __asm _emit 0xeb
        __asm _emit 0x1a
        sub edx, dword ptr [esi + 150h]
        sub eax, dword ptr [esi + 14ch]
        push edx
        mov edx, dword ptr [esi + 148h]
        push eax
        mov eax, dword ptr [esi + 144h]
        push edx
        push eax
        ; Exact mapped bytes E8 64 FD EF FF: call 0x587e5cb0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 60b0h]
        mov edx, eax
        and edx, 0f0000000h
        cmp edx, 40000000h
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x588e606c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 21c34h], 0
        ; Exact mapped bytes 0F 85 D2 00 00 00: jne 0x588e604b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x588e604b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 63b0h], 0
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x588e604b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1fh
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 D4 60 00 00: call 0x588ec080
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        cmp edi, 26h
        ; Exact mapped bytes 7C EE: jl 0x588e5fa0
        __asm _emit 0x7c
        __asm _emit 0xee
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 7fh
        push 7eh
        push 1eh
        ; Exact mapped bytes E8 ED 5E 00 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 60: jne 0x588e6027
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 0dh
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x588e5fed
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x588e5fed
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 34h]
        ; Exact mapped bytes EB 02: jmp 0x588e5fef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 95 19 02 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x588e601c
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x588e601c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 02: jmp 0x588e601e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 63b0h], 1
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 06: cmp word ptr [eax + 0x105f0], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 75 0B: jne 0x588e604b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 21f08h]
        ; Exact mapped bytes E8 C5 6C E7 FF: call 0x5875cd10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 BE 55 FF FF: call 0x588db610
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 B7 5E FF FF: call 0x588dbf10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 23ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop ebx
        ; Exact mapped bytes E9 51 04 00 00: jmp 0x588e64bd
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 58 03 00 00: jne 0x588e63cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 80h], eax
        ; Exact mapped bytes 0F 84 4C 03 00 00: je 0x588e63cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 C9 4F FF FF: call 0x588db050
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 6060h]
        mov ecx, esi
        ; Exact mapped bytes E8 3C 60 FF FF: call 0x588dc0d0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ecx
        lea ebx, [esi + 4]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 5A 05 FF FF: call 0x588d6600
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 D3 1F FF FF: call 0x588d8080
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esi + 60b8h]
        mov byte ptr [esp + 0ch], al
        cmp edi, dword ptr [esi + 6060h]
        ; Exact mapped bytes 74 06: je 0x588e60c5
        __asm _emit 0x74
        __asm _emit 0x06
        or al, 1
        mov byte ptr [esp + 0ch], al
        mov eax, dword ptr [esp + 0ch]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FF 1A FF FF: call 0x588d7bd0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 10490h]
        add edx, dword ptr [ecx + 10488h]
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x588e60f0
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        ; Exact mapped bytes 75 72: jne 0x588e6164
        __asm _emit 0x75
        __asm _emit 0x72
        mov ecx, esi
        ; Exact mapped bytes E8 67 13 FF FF: call 0x588d7460
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 10 5E FF FF: call 0x588dbf10
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 23ch]
        mov ecx, dword ptr [eax + 50h]
        xor ecx, 0aaaaaaaah
        mov ecx, esi
        ; Exact mapped bytes 7E 07: jle 0x588e611a
        __asm _emit 0x7e
        __asm _emit 0x07
        push 40000000h
        ; Exact mapped bytes EB 02: jmp 0x588e611c
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        ; Exact mapped bytes E8 FF 4A FF FF: call 0x588dac20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 23ch]
        mov ecx, dword ptr [edx + 50h]
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul ecx
        mov ecx, dword ptr [esi + 12f8h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 6ch]
        push eax
        push 5898d18ch
        push 80h
        push edx
        ; Exact mapped bytes E8 05 59 E6 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x59
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 10h
        mov eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        cdq
        idiv dword ptr [esi + 0ddch]
        test edx, edx
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x588e6279
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 143ch]
        mov ecx, dword ptr [esi + 1438h]
        mov edx, eax
        xor ecx, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        cmp edx, ecx
        ; Exact mapped bytes 7E 56: jle 0x588e61f3
        __asm _emit 0x7e
        __asm _emit 0x56
        movzx eax, word ptr [esi + 164h]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 24: je 0x588e61ce
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 13: je 0x588e61c2
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes DB 86 D8 0D 00 00: fild dword ptr [esi + 0xdd8]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 38 EB 99 58: fmul qword ptr [0x5899eb38]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 6A 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x588e61c8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [esi + 0dd8h]
        add dword ptr [esi + 0dd4h], eax
        mov ecx, dword ptr [esi + 0dd4h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        xor ecx, 0aaaaaaaah
        mov dword ptr [esi + 1438h], ecx
        ; Exact mapped bytes EB 06: jmp 0x588e61f9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 1438h], eax
        mov ecx, dword ptr [esi + 1438h]
        mov eax, dword ptr [esi + 398h]
        mov edx, ecx
        xor eax, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        cmp edx, eax
        ; Exact mapped bytes 7D 0E: jge 0x588e6224
        __asm _emit 0x7d
        __asm _emit 0x0e
        dec eax
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 398h], eax
        ; Exact mapped bytes EB 16: jmp 0x588e623a
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [esi + 143ch]
        xor edx, 0aaaaaaaah
        cmp edx, eax
        ; Exact mapped bytes 7E 06: jle 0x588e623a
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 398h], ecx
        mov eax, dword ptr [esi + 143ch]
        mov ecx, dword ptr [esi + 398h]
        mov edx, eax
        xor ecx, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        cmp edx, ecx
        ; Exact mapped bytes 7D 21: jge 0x588e6279
        __asm _emit 0x7d
        __asm _emit 0x21
        mov dword ptr [esi + 398h], eax
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 75 11: jne 0x588e6279
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 7dh
        push 7ch
        push 1dh
        ; Exact mapped bytes E8 27 5D 00 00: call 0x588ebfa0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 398h]
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, dword ptr [esi + 1448h]
        ; Exact mapped bytes E8 9F 73 F6 FF: call 0x5884d630
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x73
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6020h]
        push ebx
        ; Exact mapped bytes E8 F3 FE E6 FF: call 0x58756190
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6024h]
        push ebx
        ; Exact mapped bytes E8 E7 FE E6 FF: call 0x58756190
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x588e636e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 398h]
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0c4h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 EB F5 FA FF: call 0x588958c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [esi + 1438h]
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0c4h]
        xor edx, 0aaaaaaaah
        push edx
        push 0
        ; Exact mapped bytes E8 6C F5 FA FF: call 0x58895860
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 23ch]
        mov ecx, dword ptr [ecx + 50h]
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul ecx
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        ; Exact mapped bytes E8 40 D8 F6 FF: call 0x58853b60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 100ch]
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        cmp cl, 9
        ; Exact mapped bytes 75 13: jne 0x588e634d
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 85 C5 F7 FF: call 0x588628d0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x588e635d
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 73 3A F7 FF: call 0x58859dd0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3a
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 20c9ch]
        ; Exact mapped bytes E8 42 0C EC FF: call 0x587a6fb0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0xec
        __asm _emit 0xff
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 39 9C FF FF: call 0x588dffb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 10490h]
        add edx, dword ptr [eax + 10488h]
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x588e6395
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        ; Exact mapped bytes 75 22: jne 0x588e63b9
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 BE 64 01 00 00 00: cmp word ptr [esi + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x588e63b9
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esi + 100ch]
        mov ecx, 3ffh
        ; Exact mapped bytes 66 85 48 0C: test word ptr [eax + 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 74 07: je 0x588e63b9
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 67 82 FF FF: call 0x588de620
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 E0 6E FF FF: call 0x588dd2a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x588e63cc
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 44 6F FF FF: call 0x588dd310
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 23ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop ebx
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x588e64bd
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 40000h
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x588e649c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 07 02 FF FF: call 0x588d6600
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 CE 17 FF FF: call 0x588d7bd0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 57 10 FF FF: call 0x588d7460
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [esi + 1368h], 0
        ; Exact mapped bytes 74 2E: je 0x588e6440
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 135ch]
        push 1
        ; Exact mapped bytes E8 D1 B1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1358h]
        push 1
        ; Exact mapped bytes E8 C4 B1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1360h]
        push 1
        ; Exact mapped bytes E8 B7 B1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov byte ptr [esi + 1368h], 0
        mov edi, dword ptr [esi + 135ch]
        test edi, edi
        ; Exact mapped bytes 74 14: je 0x588e645e
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, edi
        ; Exact mapped bytes E8 CF 95 E6 FF: call 0x5874fa20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x95
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588e645e
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 92 B1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, dword ptr [esi + 1358h]
        test edi, edi
        ; Exact mapped bytes 74 14: je 0x588e647c
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, edi
        ; Exact mapped bytes E8 B1 95 E6 FF: call 0x5874fa20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x95
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588e647c
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 74 B1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edi, dword ptr [esi + 1360h]
        test edi, edi
        ; Exact mapped bytes 74 37: je 0x588e64bd
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, edi
        ; Exact mapped bytes E8 93 95 E6 FF: call 0x5874fa20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x95
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x588e64bd
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 56 B1 E4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb1
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes EB 21: jmp 0x588e64bd
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp eax, 60000h
        ; Exact mapped bytes 75 1A: jne 0x588e64bd
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 664ch]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x588e64b6
        __asm _emit 0x75
        __asm _emit 0x09
        push 1
        ; Exact mapped bytes E8 7C 86 FF FF: call 0x588deb30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x588e64bd
        __asm _emit 0xeb
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 664ch], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x588e64d9
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0E: je 0x588e64df
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x588e64c4
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        add esp, 14h
        ret
        pop edi
        pop esi
        add esp, 14h
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
