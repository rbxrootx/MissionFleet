// Complete Ghidra body ranges for the selected function.
// 12 discontiguous segments; total 3468 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877EC80 .. +0x714 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_00() {
    __asm {
        push -1
        push 5897f54eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 114h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 110h], eax
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 128h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 84 0D 00 00: je 0x5877fa4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        lea ebx, [esi + 4]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 31 71 06 00: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x5877ecf2
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 19: jne 0x5877ed04
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 12: jmp 0x5877ed04
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 09: je 0x5877ed04
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 0F 84 1F 0D 00 00: je 0x5877fa2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 54h], 0
        ; Exact mapped bytes 0F 84 0B 06 00 00: je 0x5877f323
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebx]
        sub ebp, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 8]
        sub eax, dword ptr [esi + 84h]
        lea edi, [esi + 80h]
        mov ecx, eax
        mov edx, ebp
        imul ecx, eax
        imul edx, ebp
        add ecx, edx
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 40 DF 1F 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes E8 4B DF 1F 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0x00
        cmp eax, 14h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8D 62 02 00 00: jge 0x5877efc4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov ecx, dword ptr [esi + 70h]
        push eax
        ; Exact mapped bytes E8 E2 E1 15 00: call 0x588dcf50
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe1
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 0F 8E 14 02 00 00: jle 0x5877ef8c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 0F: cmp word ptr [ecx + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 E9 01 00 00: jne 0x5877ef75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ebp, ebp, 0f0h
        mov ecx, dword ptr [esi + 7ch]
        mov eax, 51eb851fh
        imul ebp
        mov eax, dword ptr [ecx + 0b8h]
        sar edx, 5
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov edx, dword ptr [esi + 70h]
        movzx edx, byte ptr [edx + 354h]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 CE 01 00 00: je 0x5877ef8c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        push eax
        push edi
        ; Exact mapped bytes E8 67 15 00 00: call 0x58780330
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push 11ch
        ; Exact mapped bytes E8 7B DE 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xde
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 130h], 0
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x5877ee60
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + 7ch]
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 4]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10524h]
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0e0h
        ; Exact mapped bytes 7E 1A: jle 0x5877ee2d
        __asm _emit 0x7e
        __asm _emit 0x1a
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 11: je 0x5877ee2d
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        add eax, 3800h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x5877ee35
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        push 40h
        push ecx
        ; Exact mapped bytes E8 F9 DD 1F 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0x1f
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 24h]
        sub ebp, edx
        mov edx, dword ptr [esp + 20h]
        push ebp
        push edx
        push eax
        push 0ah
        push edi
        ; Exact mapped bytes E8 52 BF FD FF: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5877ee62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and cl, 1
        movzx edx, cl
        push edx
        mov ecx, eax
        mov dword ptr [esp + 134h], 0ffffffffh
        ; Exact mapped bytes E8 71 27 FB FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x27
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 70h]
        movzx eax, byte ptr [ecx + 354h]
        mov edx, dword ptr [esi + 7ch]
        cmp dword ptr [edx + 0b8h], eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x5877ef32
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 05 FD FF FF: call 0x5877ebb0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        mov eax, edi
        shl eax, 4
        sub eax, edi
        add eax, eax
        push eax
        push 0
        ; Exact mapped bytes E8 11 DF 15 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push edi
        push 2
        ; Exact mapped bytes E8 06 DF 15 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        movzx eax, byte ptr [ecx + 354h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add dword ptr [ecx + eax*4 + 10a6ch], edi
        mov edx, dword ptr [esi + 70h]
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp edx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 0C: jne 0x5877eefa
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 06 FD FF FF: call 0x5877ec00
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 70h]
        mov cl, byte ptr [eax + 354h]
        cmp cl, byte ptr [edx + 354h]
        ; Exact mapped bytes 75 1E: jne 0x5877ef32
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 10 FD FF FF: call 0x5877ec30
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 21c4ch]
        push edi
        ; Exact mapped bytes E8 9E FC FF FF: call 0x5877ebd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov al, byte ptr [ecx + 354h]
        mov edx, dword ptr [esi + 70h]
        cmp byte ptr [edx + 354h], al
        ; Exact mapped bytes 74 15: je 0x5877ef60
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 7ch]
        movzx eax, al
        cmp dword ptr [ecx + 0b8h], eax
        ; Exact mapped bytes 75 07: jne 0x5877ef60
        __asm _emit 0x75
        __asm _emit 0x07
        mov byte ptr [ecx + 0ceh], 1
        mov ecx, dword ptr [esi + 70h]
        movzx edx, byte ptr [ecx + 354h]
        mov ecx, dword ptr [esi + 7ch]
        push edx
        ; Exact mapped bytes E8 CD 16 00 00: call 0x58780640
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x5877ef8c
        __asm _emit 0xeb
        __asm _emit 0x17
        push edi
        push ebp
        push 2
        ; Exact mapped bytes E8 32 DB 06 00: call 0x587ecab0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdb
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 7ch]
        push eax
        push ebp
        ; Exact mapped bytes E8 A4 13 00 00: call 0x58780330
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        add dword ptr [eax + 0d8h], -1
        ; Exact mapped bytes 79 0A: jns 0x5877efa2
        __asm _emit 0x79
        __asm _emit 0x0a
        mov dword ptr [eax + 0d8h], 0
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 50h], 0
        mov byte ptr [esi + 60h], 0
        ; Exact mapped bytes E9 5B 02 00 00: jmp 0x5877f21f
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5877f089
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        mov eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 5D 17 02 00: call 0x587a0740
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 88h]
        add edx, 0fah
        mov ecx, eax
        imul edx, dword ptr [ecx*4 + 58a0ed18h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov edx, dword ptr [esi + 8ch]
        add edx, 0fah
        imul edx, dword ptr [ecx*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov dword ptr [esp + 20h], ecx
        mov ecx, edx
        shr ecx, 1fh
        add esp, 8
        add ecx, edx
        test ebp, ebp
        ; Exact mapped bytes 7E 02: jle 0x5877f03c
        __asm _emit 0x7e
        __asm _emit 0x02
        neg edi
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 7E 02: jle 0x5877f045
        __asm _emit 0x7e
        __asm _emit 0x02
        neg ecx
        mov eax, 51eb851fh
        imul edi
        sar edx, 5
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov eax, ebp
        imul eax, eax, 64h
        sub edi, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, edx, 64h
        mov dword ptr [esi + 88h], edi
        sub ecx, edx
        mov edi, ebp
        mov ebp, dword ptr [esp + 20h]
        mov dword ptr [esi + 8ch], ecx
        ; Exact mapped bytes EB 63: jmp 0x5877f0ec
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edi, dword ptr [esi + 8ch]
        mov eax, dword ptr [esi + 88h]
        add edi, 0fah
        cmp dword ptr [esp + 1ch], 0
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7E 02: jle 0x5877f0a8
        __asm _emit 0x7e
        __asm _emit 0x02
        neg edi
        mov eax, 51eb851fh
        imul dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 14h]
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, ecx
        imul edx, edx, 64h
        sub eax, edx
        mov dword ptr [esi + 88h], eax
        mov eax, 51eb851fh
        imul edi
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        imul edx, edx, 64h
        sub edi, edx
        mov dword ptr [esi + 8ch], edi
        mov edi, ecx
        cmp dword ptr [esp + 1ch], 0
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7E 17: jle 0x5877f112
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 7D 08: jge 0x5877f107
        __asm _emit 0x7d
        __asm _emit 0x08
        add ecx, 0a8ch
        ; Exact mapped bytes EB 20: jmp 0x5877f127
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, 708h
        sub eax, ecx
        mov ecx, eax
        ; Exact mapped bytes EB 15: jmp 0x5877f127
        __asm _emit 0xeb
        __asm _emit 0x15
        test ebp, ebp
        ; Exact mapped bytes 7D 0B: jge 0x5877f121
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, 0a8ch
        sub edx, ecx
        mov ecx, edx
        ; Exact mapped bytes EB 06: jmp 0x5877f127
        __asm _emit 0xeb
        __asm _emit 0x06
        add ecx, 708h
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        sar edx, 8
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [edx + 4]
        lea eax, [ebp + 6eh]
        push eax
        ; Exact mapped bytes E8 8E 26 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x26
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 98h]
        push eax
        ; Exact mapped bytes E8 C2 57 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x57
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 21c4ch]
        mov ecx, dword ptr [ecx + 4]
        add ebp, 78h
        push ebp
        ; Exact mapped bytes E8 6B 26 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x26
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 9ch]
        push eax
        ; Exact mapped bytes E8 9F 57 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x57
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp byte ptr [esi + 74h], 0
        ; Exact mapped bytes 75 75: jne 0x5877f1fc
        __asm _emit 0x75
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 10490h]
        add eax, dword ptr [ecx + 10488h]
        xor edx, edx
        add eax, dword ptr [ebx]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov cl, byte ptr [eax + edx*4]
        not cl
        movzx edx, cl
        mov ecx, dword ptr [esi + 8]
        mov eax, ecx
        shl eax, 4
        add eax, ecx
        and edx, 1
        mov dword ptr [esi + 78h], edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, 0cccccccdh
        mul ecx
        mov eax, edx
        shr eax, 4
        mov dl, 14h
        imul dl
        sub cl, al
        add cl, 5
        mov byte ptr [esi + 74h], cl
        ; Exact mapped bytes EB 0C: jmp 0x5877f208
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [esi + 78h], 0
        ; Exact mapped bytes 74 06: je 0x5877f208
        __asm _emit 0x74
        __asm _emit 0x06
        xor edi, edi
        mov dword ptr [esp + 14h], edi
        mov eax, dword ptr [esi + 8]
        add eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [ebx]
        add ecx, edi
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 74 40 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x00
        dec byte ptr [esi + 74h]
        mov ecx, dword ptr [esi + 0a0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 0F 85 F9 07 00 00: jne 0x5877fa2d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 0F 84 EC 07 00 00: je 0x5877fa2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 80 45 A2 58: mov edi, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi + 1ch]
        sub eax, dword ptr [edi + 14h]
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 10524h]
        mov ebp, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        mov ebx, dword ptr [ebx]
        sub ebx, eax
        mov eax, dword ptr [edi + 20h]
        sub eax, dword ptr [edi + 18h]
        sub ebx, dword ptr [ecx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        mov edi, eax
        add edi, dword ptr [ecx + 54h]
        mov ecx, dword ptr [esi + 0a0h]
        sub edi, dword ptr [esi + 8]
        ; Exact mapped bytes E8 BB 83 18 00: call 0x58907650
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        imul eax, eax, 0bh
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        mov eax, dword ptr [esi + 0a0h]
        mov ebp, dword ptr [eax]
        mov eax, 38e38e39h
        mul ecx
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        shr edx, 2
        lea edx, [edx + edx*8]
        add edx, edx
        sub ecx, edx
        add ecx, 14h
        push ecx
        mov ecx, dword ptr [eax + 21c4ch]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 23 25 FB FF: call 0x58731810
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        mov edx, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D F8 48 A2 58: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        xor eax, eax
        mov edx, eax
        imul edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 74 06: je 0x5877f310
        __asm _emit 0x74
        __asm _emit 0x06
        inc eax
        cmp eax, 6
        ; Exact mapped bytes 7C F1: jl 0x5877f301
        __asm _emit 0x7c
        __asm _emit 0xf1
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        push edi
        push ebx
        ; Exact mapped bytes E8 E2 80 03 00: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 0A 07 00 00: jmp 0x5877fa2d
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 58h], 0
        ; Exact mapped bytes 0F 85 EA 06 00 00: jne 0x5877fa17
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        lea ebp, [esi + 90h]
        ; Exact mapped bytes E8 E2 06 FD FF: call 0x5874fa20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E7 06 00 00: je 0x5877fa2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 60h]
        mov dword ptr [esp + 20h], eax
        dec eax
        cmp eax, 6
        ; Exact mapped bytes 0F 87 50 06 00 00: ja 0x5877f9a8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 78 FA 77 58: jmp dword ptr [eax*4 + 0x5877fa78]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0x77
        __asm _emit 0x58
        add dword ptr [esi + 64h], -34h
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        xor edi, edi
        add eax, dword ptr [ebx]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        test byte ptr [eax + edx*4], 1
        ; Exact mapped bytes 74 54: je 0x5877f3e6
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes EB 12: jmp 0x5877f3a6
        __asm _emit 0xeb
        __asm _emit 0x12
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F3A0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [edi + 0c8h]
        push edx
        ; Exact mapped bytes E8 25 24 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 5C 55 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D3: jl 0x5877f3a0
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov byte ptr [esi + 60h], 3
        ; Exact mapped bytes EB 3E: jmp 0x5877f411
        __asm _emit 0xeb
        __asm _emit 0x3e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F3E0 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [edi + 0c8h]
        push edx
        ; Exact mapped bytes E8 E5 23 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 1C 55 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D3: jl 0x5877f3e0
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov byte ptr [esi + 60h], 4
        lea edi, [esi + 90h]
        mov ebp, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebx]
        add ecx, 23h
        push ecx
        mov ecx, dword ptr [edi]
        sub edx, 22h
        push edx
        ; Exact mapped bytes E8 5C 3E 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3e
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E4: jne 0x5877f420
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E9 67 05 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esi + 64h], -3fh
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        xor edi, edi
        add eax, dword ptr [ebx]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        test byte ptr [eax + edx*4], 1
        ; Exact mapped bytes 74 52: je 0x5877f4c6
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes EB 10: jmp 0x5877f486
        __asm _emit 0xeb
        __asm _emit 0x10
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F480 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_03() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [edi + 0c8h]
        push edx
        ; Exact mapped bytes E8 45 23 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 7C 54 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D3: jl 0x5877f480
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov byte ptr [esi + 60h], 3
        ; Exact mapped bytes EB 3E: jmp 0x5877f4f1
        __asm _emit 0xeb
        __asm _emit 0x3e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F4C0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_04() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [edi + 0c8h]
        push edx
        ; Exact mapped bytes E8 05 23 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 3C 54 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D3: jl 0x5877f4c0
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov byte ptr [esi + 60h], 4
        lea edi, [esi + 90h]
        mov ebp, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebx]
        add ecx, 2eh
        push ecx
        mov ecx, dword ptr [edi]
        add edx, 10h
        push edx
        ; Exact mapped bytes E8 7C 3D 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E4: jne 0x5877f500
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E9 87 04 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esi + 64h], -14h
        xor edi, edi
        cmp dword ptr [esi + 64h], 28h
        ; Exact mapped bytes 0F 8E CF 00 00 00: jle 0x5877f600
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        add eax, dword ptr [ebx]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        test byte ptr [eax + edx*4], 1
        ; Exact mapped bytes 74 48: je 0x5877f5a6
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes EB 06: jmp 0x5877f566
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [edi + 0c8h]
        push edx
        ; Exact mapped bytes E8 65 22 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x22
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 9C 53 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D3: jl 0x5877f560
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov byte ptr [esi + 60h], 3
        ; Exact mapped bytes EB 3E: jmp 0x5877f5d1
        __asm _emit 0xeb
        __asm _emit 0x3e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F5A0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_05() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [edi + 0c8h]
        push edx
        ; Exact mapped bytes E8 25 22 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x22
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 5C 53 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D3: jl 0x5877f5a0
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov byte ptr [esi + 60h], 4
        lea edi, [esi + 90h]
        mov ebp, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebx]
        add ecx, 15h
        push ecx
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 9F 3C 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3c
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E7: jne 0x5877f5e0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes E9 AA 03 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F600 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_06() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [edx + 4]
        lea eax, [edi + 0cch]
        push eax
        ; Exact mapped bytes E8 C5 21 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 FC 52 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [ebx]
        add eax, 17h
        push eax
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 5A 3C 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x3c
        __asm _emit 0x18
        __asm _emit 0x00
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C C1: jl 0x5877f600
        __asm _emit 0x7c
        __asm _emit 0xc1
        mov byte ptr [esi + 60h], 5
        ; Exact mapped bytes E9 60 03 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esi + 64h], -14h
        xor edi, edi
        cmp dword ptr [esi + 64h], 28h
        ; Exact mapped bytes 0F 8E D8 00 00 00: jle 0x5877f730
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 70h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
        add eax, dword ptr [ebx]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        test byte ptr [eax + edx*4], 1
        ; Exact mapped bytes 74 51: je 0x5877f6d6
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes EB 0F: jmp 0x5877f696
        __asm _emit 0xeb
        __asm _emit 0x0f
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F690 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_07() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [edi + 0c8h]
        push edx
        ; Exact mapped bytes E8 35 21 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 6C 52 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D3: jl 0x5877f690
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov byte ptr [esi + 60h], 3
        ; Exact mapped bytes EB 3E: jmp 0x5877f701
        __asm _emit 0xeb
        __asm _emit 0x3e
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F6D0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_08() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [edi + 0c8h]
        push edx
        ; Exact mapped bytes E8 F5 20 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 2C 52 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C D3: jl 0x5877f6d0
        __asm _emit 0x7c
        __asm _emit 0xd3
        mov byte ptr [esi + 60h], 4
        lea edi, [esi + 90h]
        mov ebp, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebx]
        add ecx, 15h
        push ecx
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 6F 3B 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3b
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E7: jne 0x5877f710
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes E9 7A 02 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F730 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_09() {
    __asm {
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [edx + 4]
        lea eax, [edi + 0cch]
        push eax
        ; Exact mapped bytes E8 95 20 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 CC 51 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [ebx]
        add eax, 17h
        push eax
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 2A 3B 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3b
        __asm _emit 0x18
        __asm _emit 0x00
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C C1: jl 0x5877f730
        __asm _emit 0x7c
        __asm _emit 0xc1
        mov byte ptr [esi + 60h], 5
        ; Exact mapped bytes E9 30 02 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        dec dword ptr [esi + 64h]
        cmp dword ptr [esi + 64h], 13h
        ; Exact mapped bytes 7E 22: jle 0x5877f7a3
        __asm _emit 0x7e
        __asm _emit 0x22
        mov edi, 2
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [ebp]
        inc edx
        push edx
        push eax
        ; Exact mapped bytes E8 FA 3A 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3a
        __asm _emit 0x18
        __asm _emit 0x00
        add ebp, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x5877f786
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes E9 05 02 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        ; Exact mapped bytes EB 09: jmp 0x5877f7b0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F7B0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_10() {
    __asm {
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 21c4ch]
        lea ecx, [edi + 0ceh]
        push ecx
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 15 20 FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 4C 51 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x51
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebx]
        inc ecx
        push ecx
        mov ecx, dword ptr [ebp]
        sub edx, 9
        push edx
        ; Exact mapped bytes E8 A9 3A 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3a
        __asm _emit 0x18
        __asm _emit 0x00
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C C0: jl 0x5877f7b0
        __asm _emit 0x7c
        __asm _emit 0xc0
        mov byte ptr [esi + 60h], 6
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [esi + 64h], -12h
        mov dword ptr [esp + 18h], 2
        ; Exact mapped bytes EB 09: jmp 0x5877f810
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F810 .. +0x265 bytes.
extern "C" __declspec(naked) void FUN_5877ec80_segment_11() {
    __asm {
        mov edx, dword ptr [esi + 8]
        mov dword ptr [esi + 58h], 1
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10524h]
        mov eax, dword ptr [ebx]
        push edx
        push eax
        ; Exact mapped bytes E8 32 45 04 00: call 0x587c3d60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5877f840
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 09: je 0x5877f840
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [esi + 58h], 0
        ; Exact mapped bytes EB 06: jmp 0x5877f846
        __asm _emit 0xeb
        __asm _emit 0x06
        cmp dword ptr [esi + 58h], 0
        ; Exact mapped bytes 75 4F: jne 0x5877f895
        __asm _emit 0x75
        __asm _emit 0x4f
        xor edi, edi
        lea ebp, [esi + 90h]
        mov edi, edi
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 21c4ch]
        lea ecx, [edi + 7]
        push ecx
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 78 1F FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 AF 50 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebx]
        add ecx, 0eh
        push ecx
        mov ecx, dword ptr [ebp]
        sub edx, 3
        push edx
        ; Exact mapped bytes E8 0A 3A 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x18
        __asm _emit 0x00
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C C1: jl 0x5877f850
        __asm _emit 0x7c
        __asm _emit 0xc1
        mov byte ptr [esi + 60h], 7
        ; Exact mapped bytes EB 4A: jmp 0x5877f8df
        __asm _emit 0xeb
        __asm _emit 0x4a
        xor edi, edi
        lea ebp, [esi + 90h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 21c4ch]
        mov ecx, dword ptr [edx + 4]
        lea eax, [edi + 5]
        push eax
        ; Exact mapped bytes E8 28 1F FB FF: call 0x587317e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 5F 50 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [ebx]
        add eax, 0eh
        sub ecx, 3
        push eax
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 BA 39 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x39
        __asm _emit 0x18
        __asm _emit 0x00
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C C1: jl 0x5877f8a0
        __asm _emit 0x7c
        __asm _emit 0xc1
        sub dword ptr [esp + 18h], 1
        ; Exact mapped bytes 0F 85 26 FF FF FF: jne 0x5877f810
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x5877f9a8
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 98h]
        mov ebp, 2
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 8]
        push 0
        ; Exact mapped bytes E8 E6 1C FB FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push 1
        ; Exact mapped bytes E8 DD 1C FB FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [edi - 8]
        add edx, 14h
        push edx
        add eax, 15h
        push eax
        ; Exact mapped bytes E8 68 39 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x39
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebx]
        add ecx, 14h
        push ecx
        mov ecx, dword ptr [edi]
        add edx, 15h
        push edx
        ; Exact mapped bytes E8 54 39 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x39
        __asm _emit 0x18
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 BC: jne 0x5877f900
        __asm _emit 0x75
        __asm _emit 0xbc
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 21c4ch]
        lea edi, [esi + 7ch]
        push edi
        push ebx
        ; Exact mapped bytes E8 67 78 00 00: call 0x587871c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 0F: cmp word ptr [ecx + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 75 1B: jne 0x5877f986
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 70h]
        movzx ecx, byte ptr [edx + 354h]
        cmp ecx, dword ptr [eax + 0b8h]
        ; Exact mapped bytes 75 09: jne 0x5877f986
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 58h], 1
        ; Exact mapped bytes EB 22: jmp 0x5877f9a8
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, 1
        add dword ptr [eax + 0d8h], ecx
        mov edi, dword ptr [edi]
        mov edx, dword ptr [edi + 4]
        mov dword ptr [esi + 80h], edx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [esi + 54h], ecx
        mov dword ptr [esi + 84h], eax
        mov ecx, dword ptr [esi + 90h]
        xor eax, eax
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 94h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add eax, 4
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 BC 38 18 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x38
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ecx, dword ptr [esi + 64h]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [ebx]
        push eax
        movzx eax, byte ptr [esi + 60h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        push eax
        push ecx
        lea edx, [esp + 40h]
        push 58996a20h
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 24h
        lea eax, [esp + 24h]
        push eax
        ; Exact mapped bytes FF 15 78 C1 98 58: call dword ptr [0x5898c178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 16: jmp 0x5877fa2d
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 94h]
        ; Exact mapped bytes E8 FE FF FC FF: call 0x5874fa20
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5877fa2d
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 63 F1 FF FF: call 0x5877eb90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x5877fa4d
        __asm _emit 0x74
        __asm _emit 0x19
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0A: je 0x5877fa4b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5877fa34
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes EB 02: jmp 0x5877fa4d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 128h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 110h]
        xor ecx, esp
        ; Exact mapped bytes E8 6C D1 1F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 120h
        ret
    }
}
