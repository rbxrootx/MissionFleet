// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504F20 .. +0x4F8 bytes.
extern "C" __declspec(naked) void FUN_58504f20_58504F20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888035bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0c8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 76 1F: jbe 0x58504f73
        __asm _emit 0x76
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2bh
        ; Exact mapped bytes 74 0B: je 0x58504f6a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2dh
        ; Exact mapped bytes 75 09: jne 0x58504f73
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58504f7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 44h], ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 88 2C F8 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0xf8
        __asm _emit 0xff
        and eax, 3000h
        cmp eax, 3000h
        ; Exact mapped bytes 74 09: je 0x58504f9d
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 70h], 588a3e00h
        ; Exact mapped bytes EB 47: jmp 0x58504fe4
        __asm _emit 0xeb
        __asm _emit 0x47
        mov dword ptr [ebp - 70h], 588a3e04h
        mov edx, dword ptr [ebp - 44h]
        add edx, 2
        cmp edx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 77 35: ja 0x58504fe4
        __asm _emit 0x77
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 1ch]
        add eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 75 27: jne 0x58504fe4
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 1ch]
        add edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 78h
        ; Exact mapped bytes 74 0F: je 0x58504fdb
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 58h
        ; Exact mapped bytes 75 09: jne 0x58504fe4
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        add eax, 2
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, 1
        imul eax, edx, 0
        add eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes E8 A7 45 35 00: call 0x588595a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x45
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes 66 8B 0D 08 3E 8A 58: mov cx, word ptr [0x588a3e08]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x3e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 4D A8: mov word ptr [ebp - 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes E8 5F 4A 35 00: call 0x58859a71
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4a
        __asm _emit 0x35
        __asm _emit 0x00
        mov edx, 1
        imul ecx, edx, 0
        mov edx, dword ptr [eax]
        mov eax, 1
        imul eax, eax, 0
        mov cl, byte ptr [ecx + edx]
        mov byte ptr [ebp + eax - 58h], cl
        mov edx, 1
        imul eax, edx, 0
        lea ecx, [ebp + eax - 58h]
        push ecx
        mov edx, 1
        imul eax, edx, 0
        add eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes E8 57 45 35 00: call 0x588595a0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x45
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 5ch], eax
        lea ecx, [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 F2 62 00 00: call 0x5850b350
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 7ch], edx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 79 0A 00 00: call 0x58505af0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 9ch]
        ; Exact mapped bytes E8 B1 22 00 00: call 0x58507340
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A2 12 00 00: call 0x58506340
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 11 CF FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 1ch]
        add edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 5D 77 00 00: call 0x5850c820
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 7D 62 00 00: call 0x5850b350
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 88h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 88h]
        push eax
        ; Exact mapped bytes E8 1B 0C 00 00: call 0x58505d10
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a4h]
        ; Exact mapped bytes E8 36 22 00 00: call 0x58507340
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 A9 62 00 00: call 0x5850b3c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 3D 74 00 00: call 0x5850c560
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 46h], al
        mov edx, dword ptr [ebp - 5ch]
        cmp edx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 74 1C: je 0x5850514a
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 7A 51 00 00: call 0x5850a2b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 45h], al
        mov eax, dword ptr [ebp - 5ch]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7B CE FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 45h]
        mov byte ptr [eax], cl
        movzx edx, byte ptr [ebp + 24h]
        test edx, edx
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x585051e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        cmp eax, dword ptr [ebp + 20h]
        ; Exact mapped bytes 75 0B: jne 0x58505169
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes EB 06: jmp 0x5850516f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 60h], eax
        push 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 41 CE FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 7fh
        ; Exact mapped bytes 74 5A: je 0x585051e7
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7E 50: jle 0x585051e7
        __asm _emit 0x7e
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 60h]
        sub ecx, dword ptr [ebp - 44h]
        cmp eax, ecx
        ; Exact mapped bytes 73 40: jae 0x585051e7
        __asm _emit 0x73
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 60h]
        sub ecx, eax
        mov dword ptr [ebp - 60h], ecx
        movzx edx, byte ptr [ebp - 46h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 60h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 C8 62 00 00: call 0x5850b490
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, 1
        shl ecx, 0
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F BE 04 0A: movsx eax, byte ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x0a
        test eax, eax
        ; Exact mapped bytes 7E 09: jle 0x585051e5
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes EB 9B: jmp 0x58505182
        __asm _emit 0xeb
        __asm _emit 0x9b
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F1 F7 F7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp + 20h], eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 96 76 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        mov dword ptr [ebp - 90h], edx
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 7C 18: jl 0x58505227
        __asm _emit 0x7c
        __asm _emit 0x18
        ; Exact mapped bytes 7F 09: jg 0x5850521a
        __asm _emit 0x7f
        __asm _emit 0x09
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 76 0D: jbe 0x58505227
        __asm _emit 0x76
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 6E 76 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 20h]
        ; Exact mapped bytes 77 09: ja 0x58505230
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 0E: jmp 0x5850523e
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 58 76 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 CA 29 F8 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        and eax, 1c0h
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 68h], 40h
        ; Exact mapped bytes 74 79: je 0x585052cd
        __asm _emit 0x74
        __asm _emit 0x79
        cmp dword ptr [ebp - 68h], 100h
        ; Exact mapped bytes 74 70: je 0x585052cd
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 54h]
        push edx
        movzx eax, byte ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 02 4B 00 00: call 0x58509d80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp + 0ch], edx
        mov dword ptr [ebp + 10h], eax
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1F CD FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 66 4A 00 00: call 0x58509d20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 10h], edx
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x58505378
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 68h], 100h
        ; Exact mapped bytes 75 6D: jne 0x58505343
        __asm _emit 0x75
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DC CC FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 23 4A 00 00: call 0x58509d20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp + 0ch], edx
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        movzx edx, byte ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 54 4A 00 00: call 0x58509d80
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 10h], edx
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 35: jmp 0x58505378
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 6F CC FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 B6 49 00 00: call 0x58509d20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp + 0ch], edx
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        sub ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 35 CC FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 7C 49 00 00: call 0x58509d20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 10h], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 92 74 00 00: call 0x5850c850
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        push eax
        movzx ecx, byte ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 A4 49 00 00: call 0x58509d80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 45 49 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 36 49 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 3E BC 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbc
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
