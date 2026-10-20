// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3280 .. +0x3A0 bytes.
extern "C" __declspec(naked) void FUN_004c3280_004C3280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 83 3D 14 F0 5D 00 00: cmp dword ptr [0x5df014], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 30 03 00 00: je 0x4c35d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 F0 5D 00 00: cmp dword ptr [0x5df024], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 26: jne 0x4c32d0
        __asm _emit 0x75
        __asm _emit 0x26
        push 5df024h
        push 1004h
        xor eax, eax
        ; Exact mapped bytes 66 A1 88 F0 5D 00: mov ax, word ptr [0x5df088]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        push 0
        ; Exact mapped bytes E8 BC 34 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4c32d0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C2 02 00 00: jmp 0x4c3592
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        push 58ce68h
        push 2
        push 202h
        ; Exact mapped bytes E8 4D 6F FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 30h], eax
        push 5eh
        push 58ce68h
        push 2
        push 202h
        ; Exact mapped bytes E8 34 6F FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 1ch], eax
        push 60h
        push 58ce68h
        push 2
        push 101h
        ; Exact mapped bytes E8 1B 6F FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 2ch], eax
        push 62h
        push 58ce68h
        push 2
        push 202h
        ; Exact mapped bytes E8 02 6F FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 12: je 0x4c334c
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0C: je 0x4c334c
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 06: je 0x4c334c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 05: jne 0x4c3351
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 41 02 00 00: jmp 0x4c3592
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4c3369
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 100h
        ; Exact mapped bytes 7D 13: jge 0x4c3385
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 18h]
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB DB: jmp 0x4c3360
        __asm _emit 0xeb
        __asm _emit 0xdb
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 24 F0 5D 00: mov ecx, dword ptr [0x5df024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 48 23 5E 00: call dword ptr [0x5e2348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4c339f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x4c3592
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 76 05: jbe 0x4c33aa
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x4c3592
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        ; Exact mapped bytes 89 15 88 18 5D 00: mov dword ptr [0x5d1888], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 57: jle 0x4c3419
        __asm _emit 0x7e
        __asm _emit 0x57
        lea eax, [ebp - 0eh]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 09: jmp 0x4c33d3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 2
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x4c3419
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 18h]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x4c3419
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4c33ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        cmp dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 7F 0B: jg 0x4c3417
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 20h]
        mov byte ptr [edx], 0
        ; Exact mapped bytes EB DF: jmp 0x4c33f6
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes EB B1: jmp 0x4c33ca
        __asm _emit 0xeb
        __asm _emit 0xb1
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 30h]
        add eax, 2
        push eax
        push 100h
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 1
        ; Exact mapped bytes E8 2A 71 FF FF: call 0x4ba560
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4c3442
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 50 01 00 00: jmp 0x4c3592
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 C7 02 00 00: mov word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4c3462
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 100h
        ; Exact mapped bytes 7D 15: jge 0x4c3480
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 45 E0: mov ax, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 2
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB D9: jmp 0x4c3459
        __asm _emit 0xeb
        __asm _emit 0xd9
        push 0
        push 0
        mov edx, dword ptr [ebp - 1ch]
        add edx, 2
        push edx
        push 100h
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 1
        ; Exact mapped bytes E8 85 35 00 00: call 0x4c6a20
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4c34a7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x4c3592
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 C7 01 00 00: mov word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 5B: jle 0x4c3513
        __asm _emit 0x7e
        __asm _emit 0x5b
        lea edx, [ebp - 0eh]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 09: jmp 0x4c34c9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 2
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x4c3513
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x4c3513
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 09: jmp 0x4c34f5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 7F 0F: jg 0x4c3511
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 C7 44 4A 02 00 80: mov word ptr [edx + ecx*2 + 2], 0x8000
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes EB DB: jmp 0x4c34ec
        __asm _emit 0xeb
        __asm _emit 0xdb
        ; Exact mapped bytes EB AD: jmp 0x4c34c0
        __asm _emit 0xeb
        __asm _emit 0xad
        mov eax, dword ptr [ebp - 30h]
        add eax, 2
        ; Exact mapped bytes A3 7C 16 5D 00: mov dword ptr [0x5d167c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 2
        ; Exact mapped bytes 89 0D 80 16 5D 00: mov dword ptr [0x5d1680], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 F0 5D 00 00: cmp dword ptr [0x5df074], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4c3544
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        ; Exact mapped bytes 8B 15 74 F0 5D 00: mov edx, dword ptr [0x5df074]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 7F 77 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes A3 74 F0 5D 00: mov dword ptr [0x5df074], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 F0 5D 00 00: cmp dword ptr [0x5df078], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4c3566
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        ; Exact mapped bytes 8B 0D 78 F0 5D 00: mov ecx, dword ptr [0x5df078]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 5D 77 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 89 15 78 F0 5D 00: mov dword ptr [0x5df078], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push 2
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 46 77 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 38 77 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x4c361c
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 23 77 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 15 77 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 07 77 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 F9 76 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 4B: jmp 0x4c361c
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes C7 05 7C 16 5D 00 86 16 5D 00: mov dword ptr [0x5d167c], 0x5d1686
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 80 16 5D 00 86 16 5D 00: mov dword ptr [0x5d1680], 0x5d1686
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes A1 74 F0 5D 00: mov eax, dword ptr [0x5df074]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 CE 76 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 0D 78 F0 5D 00: mov ecx, dword ptr [0x5df078]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 BD 76 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 74 F0 5D 00 00 00 00 00: mov dword ptr [0x5df074], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 78 F0 5D 00 00 00 00 00: mov dword ptr [0x5df078], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
