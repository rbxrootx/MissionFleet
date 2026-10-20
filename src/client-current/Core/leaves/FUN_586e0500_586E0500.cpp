// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E0500 .. +0x758 bytes.
extern "C" __declspec(naked) void FUN_586e0500_586E0500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e051e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e0541
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 600h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 52 5A DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x5a
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e0515
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e0553
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e0576
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 608h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1D 5A DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5a
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e054a
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e0588
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e05ab
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 610h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E8 59 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e057f
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e05bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e05e0
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 618h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B3 59 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x59
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e05b4
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e05f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 1D: jge 0x586e0615
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 624h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7E 59 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x59
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e05e9
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 620h]
        ; Exact mapped bytes E8 3D 8C DD FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 1A: jne 0x586e0645
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 620h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 620h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4E 02 00 00: je 0x586e08a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x02
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
        ; Exact mapped bytes 0F 84 41 02 00 00: je 0x586e08a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586e0671
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 34: jge 0x586e06ab
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 608h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 2a3h
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 78 4F 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BD: jmp 0x586e0668
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586e06bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 35: jge 0x586e06f8
        __asm _emit 0x7d
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 610h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, 82h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2e9h
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2B 4F 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BC: jmp 0x586e06b4
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 7dh
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 2abh
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F4 4E 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x4e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 624h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, 7dh
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2f3h
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C0 4E 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4e
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10ch], 2
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x586e081a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586e0783
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e07a6
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 608h]
        mov dword ptr [ebp - 38h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 ED 57 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x57
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e077a
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586e07b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e07db
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 610h]
        mov dword ptr [ebp - 3ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B8 57 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e07af
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 40h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 96 57 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x57
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 624h]
        mov dword ptr [ebp - 44h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 77 57 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x57
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 638h], 1
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 638h], 1
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 638h], 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 48h], ecx
        push 5
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C5 EF DB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 624h]
        mov dword ptr [ebp - 4ch], edx
        push 5
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A6 EF DB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xef
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B4 03 00 00: jmp 0x586e0c54
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x03
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
        ; Exact mapped bytes 0F 84 41 02 00 00: je 0x586e0aee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x02
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
        ; Exact mapped bytes 0F 85 34 02 00 00: jne 0x586e0aee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586e08cc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 35: jge 0x586e0907
        __asm _emit 0x7d
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 608h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, 82h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 28ah
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 1C 4D 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x4d
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BC: jmp 0x586e08c3
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586e0919
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 34: jge 0x586e0953
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 618h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 82h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 2d0h
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 D0 4C 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BD: jmp 0x586e0910
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 624h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, 7dh
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 292h
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 99 4C 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 7dh
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 2dah
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 66 4C 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10ch], 2
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x586e0a6a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586e09dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e0a00
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 608h]
        mov dword ptr [ebp - 60h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 93 55 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x55
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e09d4
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586e0a12
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e0a35
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 618h]
        mov dword ptr [ebp - 64h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 5E 55 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x55
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e0a09
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 09: jmp 0x586e0a47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 1D: jge 0x586e0a6a
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 624h]
        mov dword ptr [ebp - 68h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 29 55 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x55
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e0a3e
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 638h], 1
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 638h], 1
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 638h], 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 6ch], ecx
        push 5
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 76 ED DB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 70h], ecx
        push 5
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 58 ED DB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 66 01 00 00: jmp 0x586e0c54
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 85 43 01 00 00: jne 0x586e0c3e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
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
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x586e0c3e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e0b1a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 34: jge 0x586e0b54
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 610h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 82h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 2e9h
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 CF 4A 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BD: jmp 0x586e0b11
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 7dh
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 2f3h
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 98 4A 0D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10ch], 2
        ; Exact mapped bytes 75 55: jne 0x586e0bea
        __asm _emit 0x75
        __asm _emit 0x55
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e0ba7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586e0bca
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 610h]
        mov dword ptr [ebp - 7ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 C9 53 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x53
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586e0b9e
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 624h]
        mov dword ptr [ebp - 80h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 A7 53 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x53
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 638h], 1
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 638h], 1
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 624h]
        mov dword ptr [ebp - 84h], eax
        push 5
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 05 EC DB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x586e0c54
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 638h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
