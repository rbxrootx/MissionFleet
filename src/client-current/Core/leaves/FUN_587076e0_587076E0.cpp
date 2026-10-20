// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587076E0 .. +0xAE4 bytes.
extern "C" __declspec(naked) void FUN_587076e0_587076E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 13ch
        mov dword ptr [ebp - 4], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A E8 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58707709
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 31: jge 0x58707740
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6A E8 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 78h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 53 E8 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C0: jmp 0x58707700
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58707752
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 51: jge 0x587077a9
        __asm _emit 0x7d
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1E E8 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a8h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 04 E8 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 128h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EA E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A0: jmp 0x58707749
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D1 E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BB E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A5 E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 8F E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 79 E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 63 E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4D E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 37 E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 21 E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 0B E7 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F5 E6 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 DF E6 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C9 E6 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B3 E6 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9D E6 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 77 E6 FF: call 0x5856f0c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x77
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x587079cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 60h], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, 2dah
        sub edx, ecx
        push edx
        push 112h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 EE DC 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 64h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 48 E6 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe6
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 68h], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 0feh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B2 DC 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 78h]
        mov dword ptr [ebp - 6ch], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, 2dah
        sub edx, ecx
        push edx
        push 0feh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 8C DC 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 70h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 E5 E5 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78h]
        mov dword ptr [ebp - 74h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 CE E5 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C4 01 00 00: je 0x58707b9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B7 01 00 00: je 0x58707b9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 78h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 112h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 16 DC 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 7ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 70 E5 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 80h], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, 2dah
        sub edx, ecx
        push edx
        push 0feh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 DA DB 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78h]
        mov dword ptr [ebp - 84h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 0feh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 AE DB 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 88h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 01 E5 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe5
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 8ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E4 E4 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 90h], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 112h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 40 DB 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 94h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 94 E4 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 98h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 0feh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 F8 DA 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 9ch], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 0feh
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 CC DA 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0a0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 1F E4 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 78h]
        mov dword ptr [ebp - 0a4h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 02 E4 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 DF 02 00 00: jmp 0x58707e7b
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D6 01 00 00: je 0x58707d7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C9 01 00 00: jne 0x58707d7f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 0a8h], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, 2dah
        sub edx, ecx
        push edx
        push 112h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 3F DA 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 0ach], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 93 E3 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe3
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 0b0h], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 0feh
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 F7 D9 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 78h]
        mov dword ptr [ebp - 0b4h], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, 2dah
        sub edx, ecx
        push edx
        push 0feh
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 CB D9 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 0b8h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 1E E3 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe3
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78h]
        mov dword ptr [ebp - 0bch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 01 E3 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe3
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 0c0h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 112h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 5D D9 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 0c4h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 B1 E2 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0c8h], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, 2dah
        sub edx, ecx
        push edx
        push 0feh
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 15 D9 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78h]
        mov dword ptr [ebp - 0cch], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 0feh
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 E9 D8 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 0d0h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 3C E2 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 0d4h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 1F E2 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x58707e7b
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x58707e7b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x58707e7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 0d8h], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 112h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 5C D8 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 0dch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 B0 E1 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 0e0h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 0feh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 14 D8 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 0e4h], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 0feh
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 E8 D7 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0e8h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 3B E1 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 78h]
        mov dword ptr [ebp - 0ech], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 1E E1 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x58707f6f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 0f0h], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 112h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 68 D7 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 0f4h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 BC E0 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe0
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 0f8h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 0feh
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 20 D7 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 0fch], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, 2dah
        sub eax, edx
        push eax
        push 0feh
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 F4 D6 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 100h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 47 E0 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe0
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 78h]
        mov dword ptr [ebp - 104h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 2A E0 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe0
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 0C 06 96 58: cmp edx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x58708074
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 14 06 96 58: cmp eax, dword ptr [0x58960614]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x58708074
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 108h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 112h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 63 D6 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 10ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 B7 DF D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 110h], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, 2dah
        sub edx, ecx
        push edx
        push 0feh
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 1B D6 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78h]
        mov dword ptr [ebp - 114h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        push ecx
        push 0feh
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 EF D5 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 118h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 42 DF D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 11ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 25 DF D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x587081b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 120h], ecx
        push 2eeh
        push 0feh
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 7E D5 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 124h], eax
        push 2eeh
        push 0feh
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 5A D5 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 128h], edx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, 2dah
        sub ecx, eax
        sub ecx, 3
        push ecx
        push 0feh
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 2C D5 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 12ch], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, 2dah
        sub edx, ecx
        sub edx, 3
        push edx
        push 0feh
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 FE D4 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 130h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 52 DE D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xde
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 134h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 36 DE D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xde
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 138h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 1A DE D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xde
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 13ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 FE DD D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xdd
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes EB 0E: jmp 0x587081c0
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
