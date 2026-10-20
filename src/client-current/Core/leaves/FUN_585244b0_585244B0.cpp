// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585244B0 .. +0x410 bytes.
extern "C" __declspec(naked) void FUN_585244b0_585244B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x585244dd
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 37 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x37
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 D3 03 00 00: je 0x585248ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 37 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x37
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585244ff
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 37 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x37
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 9C 03 00 00: je 0x585248a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AF 24 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 94 7B F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B9 79 F6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x79
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 B4 01 00 00: je 0x585246e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 84 24 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 24 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 89 C6 32 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc6
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 8E 81 01 00 00: jle 0x585246e3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 56 24 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD AF F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 7B F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FC AE F7 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 79 F6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x79
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB FE FF FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F AF F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D3 AE F7 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D7 FE FF FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585245cc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D 0B 01 00 00: jge 0x585246e3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E8 FA 76 F6 FF: call 0x5848bce0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx*4]
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x585246de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx*4]
        ; Exact mapped bytes E8 D7 76 F6 FF: call 0x5848bce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5852461e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7D 0D: jge 0x58524633
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 35 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E2: jmp 0x58524615
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 35 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58524650
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7D 0D: jge 0x58524665
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B0 35 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB E2: jmp 0x58524647
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 23 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 7A F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 78 F6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x78
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 23 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 AE F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 11 7A F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 AD F7 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 30 78 F6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x78
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 FD FF FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6B AE F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AF AD F7 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B3 FD FF FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E0 FE FF FF: jmp 0x585245c3
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x58524897
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 22 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C5 22 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 D5 C4 32 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc4
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 8D 81 01 00 00: jge 0x58524897
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 22 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 AE F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xae
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 79 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 48 AD F7 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 77 F6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 47 FD FF FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DB AD F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F AD F7 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 23 FD FF FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58524780
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D 0B 01 00 00: jge 0x58524897
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + eax*4]
        ; Exact mapped bytes E8 46 75 F6 FF: call 0x5848bce0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx*4]
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x58524892
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx*4]
        ; Exact mapped bytes E8 23 75 F6 FF: call 0x5848bce0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585247d2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7D 0D: jge 0x585247e7
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E 34 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x34
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E2: jmp 0x585247c9
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 34 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x34
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58524804
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7D 0D: jge 0x58524819
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FC 33 F6 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x33
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB E2: jmp 0x585247fb
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 21 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x21
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 78 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 76 F6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7E 21 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x21
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 AC F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5D 78 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x78
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 AC F7 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7C 76 F6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 FC FF FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B7 AC F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FB AB F7 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xab
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FF FB FF FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E0 FE FF FF: jmp 0x58524777
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes E9 4F FC FF FF: jmp 0x585244f4
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes E9 18 FC FF FF: jmp 0x585244d2
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
