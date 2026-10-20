// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585BDFC0 .. +0x1F09 bytes.
extern "C" __declspec(naked) void FUN_585bdfc0_585BDFC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3bch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588ada1ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 220cch], 0
        ; Exact mapped bytes 74 5B: je 0x585be045
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 220cch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 20: je 0x585be025
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 148h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 95 B8 FE FF FF: call dword ptr [ebp - 0x148]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be02f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 220cch], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 220cch], 0
        ; Exact mapped bytes 74 5B: je 0x585be0b5
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 220cch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x585be095
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 95 B0 FE FF FF: call dword ptr [ebp - 0x150]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be09f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 220cch], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585be0ce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 63: jge 0x585be137
        __asm _emit 0x7d
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 21ac8h], 0
        ; Exact mapped bytes 74 51: je 0x585be135
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 21ac8h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x585be11a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 158h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 A8 FE FF FF: call dword ptr [ebp - 0x158]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be124
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 21ac8h], 0
        ; Exact mapped bytes EB 8E: jmp 0x585be0c5
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585be149
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 63: jge 0x585be1b2
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 20f00h], 0
        ; Exact mapped bytes 74 51: je 0x585be1b0
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20f00h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x585be195
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 160h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 A0 FE FF FF: call dword ptr [ebp - 0x160]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be19f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 20f00h], 0
        ; Exact mapped bytes EB 8E: jmp 0x585be140
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10dd4h], 0
        ; Exact mapped bytes 74 49: je 0x585be207
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10dd4h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x585be1f0
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 168h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 98 FE FF FF: call dword ptr [ebp - 0x168]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be1fa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10dd4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10dd0h], 0
        ; Exact mapped bytes 74 49: je 0x585be25c
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10dd0h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x585be245
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 170h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 90 FE FF FF: call dword ptr [ebp - 0x170]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be24f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10dd0h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10d24h], 0
        ; Exact mapped bytes 74 49: je 0x585be2b1
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d24h]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x585be29a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 178h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 88 FE FF FF: call dword ptr [ebp - 0x178]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be2a4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10d24h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 106f4h
        mov dword ptr [ebp - 180h], ecx
        lea edx, [ebp - 3b8h]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 5E 53 EE FF: call 0x584a3630
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 09: jmp 0x585be2e2
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 3F 44 EE FF: call 0x584a2720
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 106f4h
        mov dword ptr [ebp - 184h], ecx
        lea edx, [ebp - 3bch]
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 6D 54 EE FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x54
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 14 43 EE FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x585be353
        __asm _emit 0x74
        __asm _emit 0x40
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 B5 1B 00 00: call 0x585bfed0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x585be347
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 188h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 78 FE FF FF: call dword ptr [ebp - 0x188]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be351
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes EB 86: jmp 0x585be2d9
        __asm _emit 0xeb
        __asm _emit 0x86
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21e20h], 0
        ; Exact mapped bytes 74 49: je 0x585be3a8
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e20h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x585be391
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 190h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 70 FE FF FF: call dword ptr [ebp - 0x190]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be39b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21e20h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21e24h], 0
        ; Exact mapped bytes 74 49: je 0x585be3fd
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e24h]
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x585be3e6
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 198h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 68 FE FF FF: call dword ptr [ebp - 0x198]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be3f0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e24h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21e28h], 0
        ; Exact mapped bytes 74 49: je 0x585be452
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e28h]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x585be43b
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 60 FE FF FF: call dword ptr [ebp - 0x1a0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be445
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21e28h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 280h], 0
        ; Exact mapped bytes 74 49: je 0x585be4a7
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 280h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x585be490
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 58 FE FF FF: call dword ptr [ebp - 0x1a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be49a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 280h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10d6ch], 0
        ; Exact mapped bytes 74 49: je 0x585be4fc
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d6ch]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x585be4e5
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 50 FE FF FF: call dword ptr [ebp - 0x1b0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be4ef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10d6ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10d70h], 0
        ; Exact mapped bytes 74 49: je 0x585be551
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d70h]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x585be53a
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1b8h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 48 FE FF FF: call dword ptr [ebp - 0x1b8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be544
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10d70h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10d74h], 0
        ; Exact mapped bytes 74 49: je 0x585be5a6
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d74h]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x585be58f
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1c0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 40 FE FF FF: call dword ptr [ebp - 0x1c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be599
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10d74h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 264h], 0
        ; Exact mapped bytes 74 49: je 0x585be5fb
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 264h]
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x585be5e4
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1c8h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 38 FE FF FF: call dword ptr [ebp - 0x1c8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be5ee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 264h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20f2ch], 0
        ; Exact mapped bytes 74 49: je 0x585be650
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20f2ch]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x585be639
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 30 FE FF FF: call dword ptr [ebp - 0x1d0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be643
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20f2ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20f30h], 0
        ; Exact mapped bytes 74 49: je 0x585be6a5
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20f30h]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x585be68e
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1d8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 28 FE FF FF: call dword ptr [ebp - 0x1d8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be698
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20f30h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21a98h], 0
        ; Exact mapped bytes 74 49: je 0x585be6fa
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21a98h]
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x585be6e3
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1e0h], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 20 FE FF FF: call dword ptr [ebp - 0x1e0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be6ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21a98h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21a94h], 0
        ; Exact mapped bytes 74 49: je 0x585be74f
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21a94h]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x585be738
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1e8h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 18 FE FF FF: call dword ptr [ebp - 0x1e8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be742
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21a94h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20fcch], 0
        ; Exact mapped bytes 74 49: je 0x585be7a4
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20fcch]
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x585be78d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1f0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 10 FE FF FF: call dword ptr [ebp - 0x1f0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be797
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20fcch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20fc4h], 0
        ; Exact mapped bytes 74 49: je 0x585be7f9
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20fc4h]
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x585be7e2
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1f8h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 08 FE FF FF: call dword ptr [ebp - 0x1f8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be7ec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1fch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20fc4h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20fc8h], 0
        ; Exact mapped bytes 74 49: je 0x585be84e
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20fc8h]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x585be837
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 200h], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 00 FE FF FF: call dword ptr [ebp - 0x200]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be841
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 204h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20fc8h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585be860
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D C4 02 00 00: jge 0x585beb2e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 20fa8h], 0
        ; Exact mapped bytes 74 51: je 0x585be8cb
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20fa8h]
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x585be8b0
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 208h], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 F8 FD FF FF: call dword ptr [ebp - 0x208]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be8ba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 20fa8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 20fd0h], 0
        ; Exact mapped bytes 74 51: je 0x585be92c
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 20fd0h]
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x585be911
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 210h], edx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 F0 FD FF FF: call dword ptr [ebp - 0x210]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be91b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 20fd0h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 20fd8h], 0
        ; Exact mapped bytes 74 51: je 0x585be98d
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20fd8h]
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x585be972
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 218h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 E8 FD FF FF: call dword ptr [ebp - 0x218]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be97c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 21ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 20fd8h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 20fe0h], 0
        ; Exact mapped bytes 74 51: je 0x585be9ee
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 20fe0h]
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x585be9d3
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 220h], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 E0 FD FF FF: call dword ptr [ebp - 0x220]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585be9dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 224h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 20fe0h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 20fe8h], 0
        ; Exact mapped bytes 74 51: je 0x585bea4f
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 20fe8h]
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x585bea34
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 228h], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 D8 FD FF FF: call dword ptr [ebp - 0x228]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bea3e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 22ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 20fe8h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 20ff0h], 0
        ; Exact mapped bytes 74 5D: je 0x585beabc
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20ff0h]
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x585beaa1
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 230h], eax
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 D0 FD FF FF: call dword ptr [ebp - 0x230]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585beaab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 20ff0h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 10da4h], 0
        ; Exact mapped bytes 74 5D: je 0x585beb29
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 10da4h]
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x585beb0e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 238h], ecx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 C8 FD FF FF: call dword ptr [ebp - 0x238]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585beb18
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 23ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 10da4h], 0
        ; Exact mapped bytes E9 29 FD FF FF: jmp 0x585be857
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10718h], 0
        ; Exact mapped bytes 74 61: je 0x585beb9b
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10718h], 0
        ; Exact mapped bytes 74 55: je 0x585beb9b
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10718h]
        mov dword ptr [ebp - 8ch], ecx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x585beb84
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 240h], ecx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 C0 FD FF FF: call dword ptr [ebp - 0x240]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585beb8e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 244h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10718h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 264h], 0
        ; Exact mapped bytes 74 55: je 0x585bebfc
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 264h]
        mov dword ptr [ebp - 90h], edx
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x585bebe5
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 248h], edx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 B8 FD FF FF: call dword ptr [ebp - 0x248]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bebef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 24ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 264h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10d98h], 0
        ; Exact mapped bytes 74 55: je 0x585bec5d
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d98h]
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x585bec46
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 250h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 B0 FD FF FF: call dword ptr [ebp - 0x250]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bec50
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 254h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10d98h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10da0h], 0
        ; Exact mapped bytes 74 55: je 0x585becbe
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10da0h]
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x585beca7
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 258h], ecx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 A8 FD FF FF: call dword ptr [ebp - 0x258]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585becb1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 25ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10da0h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585becd0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D B9 01 00 00: jge 0x585bee93
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 10d2ch], 0
        ; Exact mapped bytes 74 5D: je 0x585bed47
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10d2ch]
        mov dword ptr [ebp - 9ch], edx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x585bed2c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 260h], edx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 A0 FD FF FF: call dword ptr [ebp - 0x260]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bed36
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 264h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 10d2ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 10d3ch], 0
        ; Exact mapped bytes 74 5D: je 0x585bedb4
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 10d3ch]
        mov dword ptr [ebp - 0a0h], eax
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x585bed99
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 268h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 98 FD FF FF: call dword ptr [ebp - 0x268]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585beda3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 26ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 10d3ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 10d44h], 0
        ; Exact mapped bytes 74 5D: je 0x585bee21
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 10d44h]
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x585bee06
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 270h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 90 FD FF FF: call dword ptr [ebp - 0x270]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bee10
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 274h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 10d44h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 10d4ch], 0
        ; Exact mapped bytes 74 5D: je 0x585bee8e
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10d4ch]
        mov dword ptr [ebp - 0a8h], edx
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x585bee73
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 278h], edx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 88 FD FF FF: call dword ptr [ebp - 0x278]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bee7d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 27ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 10d4ch], 0
        ; Exact mapped bytes E9 34 FE FF FF: jmp 0x585becc7
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10d34h], 0
        ; Exact mapped bytes 74 55: je 0x585beef4
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d34h]
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x585beedd
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 280h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 80 FD FF FF: call dword ptr [ebp - 0x280]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585beee7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 284h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10d34h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10d54h], 0
        ; Exact mapped bytes 74 55: je 0x585bef55
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d54h]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x585bef3e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 288h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 78 FD FF FF: call dword ptr [ebp - 0x288]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bef48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 28ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10d54h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10d38h], 0
        ; Exact mapped bytes 74 55: je 0x585befb6
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d38h]
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x585bef9f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 290h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 70 FD FF FF: call dword ptr [ebp - 0x290]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585befa9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 294h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10d38h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10d28h], 0
        ; Exact mapped bytes 74 55: je 0x585bf017
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d28h]
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x585bf000
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 298h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 68 FD FF FF: call dword ptr [ebp - 0x298]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf00a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 29ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10d28h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585bf029
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D DF 00 00 00: jge 0x585bf112
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 2e4h], 0
        ; Exact mapped bytes 74 5D: je 0x585bf0a0
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2e4h]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x585bf085
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2a0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 60 FD FF FF: call dword ptr [ebp - 0x2a0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf08f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a4h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 2e4h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 304h], 0
        ; Exact mapped bytes 74 5D: je 0x585bf10d
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 304h]
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x585bf0f2
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2a8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 58 FD FF FF: call dword ptr [ebp - 0x2a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf0fc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2ach], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 304h], 0
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x585bf020
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585bf124
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D DF 00 00 00: jge 0x585bf20d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 10dach], 0
        ; Exact mapped bytes 74 5D: je 0x585bf19b
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10dach]
        mov dword ptr [ebp - 0c4h], edx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x585bf180
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 50 FD FF FF: call dword ptr [ebp - 0x2b0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf18a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b4h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 10dach], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 10dc0h], 0
        ; Exact mapped bytes 74 5D: je 0x585bf208
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 10dc0h]
        mov dword ptr [ebp - 0c8h], eax
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x585bf1ed
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0c8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2b8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 48 FD FF FF: call dword ptr [ebp - 0x2b8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf1f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2bch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 10dc0h], 0
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x585bf11b
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 10dach], 0
        ; Exact mapped bytes 74 67: je 0x585bf289
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10dach]
        mov dword ptr [ebp - 0cch], ecx
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x585bf269
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2c0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 40 FD FF FF: call dword ptr [ebp - 0x2c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf273
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c4h], 0
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 10dach], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 106fch], 0
        ; Exact mapped bytes 74 55: je 0x585bf2ea
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 0d0h], eax
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x585bf2d3
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2c8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 38 FD FF FF: call dword ptr [ebp - 0x2c8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf2dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2cch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 106fch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20e74h], 0
        ; Exact mapped bytes 74 55: je 0x585bf34b
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20e74h]
        mov dword ptr [ebp - 0d4h], ecx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x585bf334
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2d0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 30 FD FF FF: call dword ptr [ebp - 0x2d0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf33e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20e74h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 106e8h], 0
        ; Exact mapped bytes 74 55: je 0x585bf3ac
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 106e8h]
        mov dword ptr [ebp - 0d8h], edx
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 26: je 0x585bf395
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2d8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes FF 95 28 FD FF FF: call dword ptr [ebp - 0x2d8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf39f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2dch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 106e8h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 10dd8h], 0
        ; Exact mapped bytes 74 67: je 0x585bf428
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10dd8h]
        mov dword ptr [ebp - 0dch], ecx
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 26: je 0x585bf408
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2e0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 95 20 FD FF FF: call dword ptr [ebp - 0x2e0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf412
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e4h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 10dd8h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 10dd8h], 0
        ; Exact mapped bytes 74 67: je 0x585bf4a4
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 10dd8h]
        mov dword ptr [ebp - 0e0h], eax
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 26: je 0x585bf484
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0e0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2e8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes FF 95 18 FD FF FF: call dword ptr [ebp - 0x2e8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf48e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2ech], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 10dd8h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10de0h], 0
        ; Exact mapped bytes 74 55: je 0x585bf505
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10de0h]
        mov dword ptr [ebp - 0e4h], edx
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 26: je 0x585bf4ee
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0e4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2f0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes FF 95 10 FD FF FF: call dword ptr [ebp - 0x2f0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf4f8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10de0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20f08h], 0
        ; Exact mapped bytes 74 55: je 0x585bf566
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20f08h]
        mov dword ptr [ebp - 0e8h], eax
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 26: je 0x585bf54f
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2f8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 95 08 FD FF FF: call dword ptr [ebp - 0x2f8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf559
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2fch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20f08h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20f0ch], 0
        ; Exact mapped bytes 74 55: je 0x585bf5c7
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 0ech], ecx
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 26: je 0x585bf5b0
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ech]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 300h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 95 00 FD FF FF: call dword ptr [ebp - 0x300]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf5ba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 304h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20f0ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21008h], 0
        ; Exact mapped bytes 74 55: je 0x585bf628
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21008h]
        mov dword ptr [ebp - 0f0h], edx
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 26: je 0x585bf611
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0f0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 308h], edx
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes FF 95 F8 FC FF FF: call dword ptr [ebp - 0x308]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf61b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 30ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21008h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2100ch], 0
        ; Exact mapped bytes 74 55: je 0x585bf689
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2100ch]
        mov dword ptr [ebp - 0f4h], eax
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 26: je 0x585bf672
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0f4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 310h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes FF 95 F0 FC FF FF: call dword ptr [ebp - 0x310]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf67c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 314h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2100ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21010h], 0
        ; Exact mapped bytes 74 55: je 0x585bf6ea
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21010h]
        mov dword ptr [ebp - 0f8h], ecx
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 26: je 0x585bf6d3
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0f8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 318h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes FF 95 E8 FC FF FF: call dword ptr [ebp - 0x318]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf6dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 31ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21010h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 298h]
        push ecx
        ; Exact mapped bytes FF 15 90 40 89 58: call dword ptr [0x58894090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20f10h], 0
        ; Exact mapped bytes 74 55: je 0x585bf75c
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20f10h]
        mov dword ptr [ebp - 0fch], ecx
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 26: je 0x585bf745
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0fch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 320h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes FF 95 E0 FC FF FF: call dword ptr [ebp - 0x320]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 324h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf74f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 324h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20f10h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20f14h], 0
        ; Exact mapped bytes 74 55: je 0x585bf7bd
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20f14h]
        mov dword ptr [ebp - 100h], edx
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 26: je 0x585bf7a6
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 328h], edx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes FF 95 D8 FC FF FF: call dword ptr [ebp - 0x328]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf7b0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 32ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20f14h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 284h], 0
        ; Exact mapped bytes 74 55: je 0x585bf81e
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 284h]
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 26: je 0x585bf807
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 104h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 330h], eax
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes FF 95 D0 FC FF FF: call dword ptr [ebp - 0x330]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 334h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf811
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 334h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 284h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21e38h], 0
        ; Exact mapped bytes 74 55: je 0x585bf87f
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e38h]
        mov dword ptr [ebp - 108h], ecx
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 26: je 0x585bf868
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 338h], ecx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes FF 95 C8 FC FF FF: call dword ptr [ebp - 0x338]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf872
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 33ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21e38h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21e3ch], 0
        ; Exact mapped bytes 74 55: je 0x585bf8e0
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e3ch]
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 26: je 0x585bf8c9
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 340h], edx
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 95 C0 FC FF FF: call dword ptr [ebp - 0x340]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf8d3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 344h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e3ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585bf8f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x585bf967
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 21e30h], 0
        ; Exact mapped bytes 74 5D: je 0x585bf965
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 21e30h]
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 26: je 0x585bf94a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 348h], eax
        push 1
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes FF 95 B8 FC FF FF: call dword ptr [ebp - 0x348]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf954
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 34ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 21e30h], 0
        ; Exact mapped bytes EB 82: jmp 0x585bf8e9
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21e2ch], 0
        ; Exact mapped bytes 74 55: je 0x585bf9c8
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e2ch]
        mov dword ptr [ebp - 114h], edx
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 26: je 0x585bf9b1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 350h], edx
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes FF 95 B0 FC FF FF: call dword ptr [ebp - 0x350]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 354h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bf9bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 354h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e2ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21e84h], 0
        ; Exact mapped bytes 74 55: je 0x585bfa29
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e84h]
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 26: je 0x585bfa12
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 358h], eax
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes FF 95 A8 FC FF FF: call dword ptr [ebp - 0x358]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 35ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfa1c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 35ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21e84h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585bfa3b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x585bfab0
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 21e88h], 0
        ; Exact mapped bytes 74 5D: je 0x585bfaae
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 21e88h]
        mov dword ptr [ebp - 11ch], ecx
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 26: je 0x585bfa93
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 360h], ecx
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes FF 95 A0 FC FF FF: call dword ptr [ebp - 0x360]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 364h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfa9d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 364h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 21e88h], 0
        ; Exact mapped bytes EB 82: jmp 0x585bfa32
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585bfac2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x585bfb37
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 21e90h], 0
        ; Exact mapped bytes 74 5D: je 0x585bfb35
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 21e90h]
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 26: je 0x585bfb1a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 120h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 368h], eax
        push 1
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes FF 95 98 FC FF FF: call dword ptr [ebp - 0x368]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 36ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfb24
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 36ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 21e90h], 0
        ; Exact mapped bytes EB 82: jmp 0x585bfab9
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21e98h], 0
        ; Exact mapped bytes 74 55: je 0x585bfb98
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e98h]
        mov dword ptr [ebp - 124h], edx
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 26: je 0x585bfb81
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 370h], edx
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes FF 95 90 FC FF FF: call dword ptr [ebp - 0x370]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfb8b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 374h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e98h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21e9ch], 0
        ; Exact mapped bytes 74 55: je 0x585bfbf9
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21e9ch]
        mov dword ptr [ebp - 128h], eax
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 26: je 0x585bfbe2
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 378h], eax
        push 1
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes FF 95 88 FC FF FF: call dword ptr [ebp - 0x378]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfbec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 37ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21e9ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21each], 0
        ; Exact mapped bytes 74 55: je 0x585bfc5a
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21each]
        mov dword ptr [ebp - 12ch], ecx
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 26: je 0x585bfc43
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 380h], ecx
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes FF 95 80 FC FF FF: call dword ptr [ebp - 0x380]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfc4d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 384h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21each], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21eb0h], 0
        ; Exact mapped bytes 74 55: je 0x585bfcbb
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21eb0h]
        mov dword ptr [ebp - 130h], edx
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 26: je 0x585bfca4
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 388h], edx
        push 1
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes FF 95 78 FC FF FF: call dword ptr [ebp - 0x388]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfcae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 38ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21eb0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21eb4h], 0
        ; Exact mapped bytes 74 55: je 0x585bfd1c
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21eb4h]
        mov dword ptr [ebp - 134h], eax
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 26: je 0x585bfd05
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 390h], eax
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes FF 95 70 FC FF FF: call dword ptr [ebp - 0x390]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 394h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfd0f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 394h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21eb4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21eb8h], 0
        ; Exact mapped bytes 74 55: je 0x585bfd7d
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21eb8h]
        mov dword ptr [ebp - 138h], ecx
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 26: je 0x585bfd66
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 138h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 398h], ecx
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes FF 95 68 FC FF FF: call dword ptr [ebp - 0x398]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 39ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfd70
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 39ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21eb8h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 220dch], 0
        ; Exact mapped bytes 74 55: je 0x585bfdde
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 220dch]
        mov dword ptr [ebp - 13ch], edx
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 26: je 0x585bfdc7
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3a0h], edx
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes FF 95 60 FC FF FF: call dword ptr [ebp - 0x3a0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfdd1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 220dch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 220e0h], 0
        ; Exact mapped bytes 74 55: je 0x585bfe3f
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220e0h]
        mov dword ptr [ebp - 140h], eax
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 26: je 0x585bfe28
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3a8h], eax
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes FF 95 58 FC FF FF: call dword ptr [ebp - 0x3a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfe32
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3ach], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 220e0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21efch], 0
        ; Exact mapped bytes 74 55: je 0x585bfea0
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21efch]
        mov dword ptr [ebp - 144h], ecx
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 26: je 0x585bfe89
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3b0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes FF 95 50 FC FF FF: call dword ptr [ebp - 0x3b0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585bfe93
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3b4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21efch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 106f4h
        ; Exact mapped bytes E8 A2 9E EE FF: call 0x584a9d50
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9e
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 106a4h
        ; Exact mapped bytes E8 E4 E0 FF FF: call 0x585bdfa0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC 59 1F 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x59
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
