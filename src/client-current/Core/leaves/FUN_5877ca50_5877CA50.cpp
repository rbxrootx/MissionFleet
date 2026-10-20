// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877CA50 .. +0xDB2 bytes.
extern "C" __declspec(naked) void FUN_5877ca50_5877CA50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 148h
        push esi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 7F D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7f
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x5877cb61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 7F D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7f
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 7F D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7f
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 7E D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7e
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A 7F D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7f
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 3ch], edx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes EB 0C: jmp 0x5877cac3
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D E8: mov cx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        movzx edx, word ptr [ebp - 18h]
        cmp edx, 20h
        ; Exact mapped bytes 7D 1D: jge 0x5877cae9
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 3ch]
        and eax, 80000000h
        ; Exact mapped bytes 74 09: je 0x5877cadf
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 3ch]
        shl edx, 1
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB CE: jmp 0x5877cab7
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 79 41 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 8
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7E 62: jle 0x5877cb61
        __asm _emit 0x7e
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 8
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 79 07: jns 0x5877cb11
        __asm _emit 0x79
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 37 4C 04 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5877cb3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 4
        ; Exact mapped bytes 7D 1F: jge 0x5877cb61
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 11ch]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 02 4C 04 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D2: jmp 0x5877cb33
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 400h], 0ffffffffh
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 3e0h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 3dch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 3e8h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 3e4h], 0
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 AB 40 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 7D D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0B 0C 00 00: je 0x5877d7e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 7D D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 7D D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 19: jne 0x5877cc16
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 7D 93 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x93
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5877cc2d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 78h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 64 93 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x93
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 7D D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A1 7D D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 3ech], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 7D D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 7D D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 7D D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5C 7D D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [eax + 268h]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 7C D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 7D D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [eax + 270h]
        mov dword ptr [ebp - 44h], eax
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x5877ccbc
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        cmp eax, 20h
        ; Exact mapped bytes 0F 8D 68 06 00 00: jge 0x5877d331
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 98h]
        mov dword ptr [ebp - 7ch], eax
        push 588b579fh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 B9 93 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x93
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 98h]
        mov dword ptr [ebp - 80h], eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 8E 92 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 6D 92 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1b4h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 4C 92 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 234h]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 2B 92 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        movzx esi, word ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 7C D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 7C D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7c
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp esi, edx
        ; Exact mapped bytes 0F 8D A5 01 00 00: jge 0x5877cf38
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        and eax, 80000000h
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x5877cefe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 7B D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x7b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 7E 02 D1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x5877cec2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 7B D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 0
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 23 2F D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2f
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x5877cec2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 7B D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 2A 02 D1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, byte ptr [eax]
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x5877cec2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 7B D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 FD 01 D1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 7B D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 0
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 A4 01 D1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov edx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes 66 8B 82 98 00 00 00: mov ax, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx edx, ax
        sub ecx, edx
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 7E 31: jle 0x5877cec2
        __asm _emit 0x7e
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 7A D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7a
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        push 0
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 5C 2E D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x2e
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 1eh]
        imul ecx, dword ptr [ebp - 60h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 1ch], ecx
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 0b0h], ecx
        push 588b5a08h
        ; Exact mapped bytes E8 10 51 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x51
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 A5 91 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x5877cf38
        __asm _emit 0xeb
        __asm _emit 0x3a
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 0b8h], edx
        push 588b5a20h
        ; Exact mapped bytes E8 D4 50 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x50
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 69 91 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 44h]
        and ecx, 80000000h
        ; Exact mapped bytes 0F 84 B6 02 00 00: je 0x5877d1fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ech]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 0c0h], edx
        push 588b5a38h
        ; Exact mapped bytes E8 86 50 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 1B 91 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ech]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 3ech], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 79 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 85 00 D1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x5877d016
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 79 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 79 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        push 0
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 1D 00 D1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx esi, ax
        xor esi, 55h
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 37 00 D1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 1eh]
        imul ecx, esi
        add ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 79 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        push 1
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 D7 2C D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2c
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BC 01 00 00: je 0x5877d1fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 79 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        push 1
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 AC 2C D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2c
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx ecx, byte ptr [eax]
        cmp ecx, 0bh
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x5877d1a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 79 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        push 1
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 7D 2C D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2c
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 80 9A 00 00 00: mov ax, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x5877d146
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 78 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x78
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        push 1
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 3F 2C D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x2c
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 80 9A 00 00 00: mov ax, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 74 5E: je 0x5877d146
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 78 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 78 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x78
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        push 1
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 F4 FE D0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx esi, ax
        xor esi, 55h
        push 1
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 DC 2B D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2b
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 1eh]
        imul ecx, esi
        imul edx, ecx, 0ah
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 5C: jmp 0x5877d1a2
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 78 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x78
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 78 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x78
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        push 1
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 96 FE D0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx esi, ax
        xor esi, 55h
        push 1
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 7E 2B D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2b
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, word ptr [eax + 1eh]
        imul edx, esi
        imul eax, edx, 0ah
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 59: jmp 0x5877d1fd
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 77 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x77
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 77 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x77
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        push 1
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 38 FE D0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx esi, ax
        xor esi, 55h
        push 1
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 20 2B D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2b
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx eax, word ptr [eax + 1eh]
        imul eax, esi
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 1ch], eax
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F6 08 00 00: call 0x5877db00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 0f8h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        movzx ecx, word ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 20h]
        imul edx, ecx, 0bh
        lea eax, [eax + edx + 44h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 F2 84 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 0fch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        movzx eax, word ptr [ebp - 4]
        sub eax, dword ptr [ebp - 20h]
        imul ecx, eax, 0bh
        lea edx, [edx + ecx + 44h]
        push edx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 BE 84 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1b4h]
        mov dword ptr [ebp - 100h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        movzx edx, word ptr [ebp - 4]
        sub edx, dword ptr [ebp - 20h]
        imul eax, edx, 0bh
        lea ecx, [ecx + eax + 44h]
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 8A 84 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 234h]
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        movzx ecx, word ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 20h]
        imul edx, ecx, 0bh
        lea eax, [eax + edx + 44h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 56 84 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        movzx ecx, word ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7C 30: jl 0x5877d314
        __asm _emit 0x7c
        __asm _emit 0x30
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        add eax, 8
        cmp edx, eax
        ; Exact mapped bytes 7D 22: jge 0x5877d314
        __asm _emit 0x7d
        __asm _emit 0x22
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 98h]
        mov dword ptr [ebp - 108h], eax
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 CD 8B D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8b
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 64h]
        shl ecx, 1
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 40h]
        shl edx, 1
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 44h]
        shl eax, 1
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E9 7F F9 FF FF: jmp 0x5877ccb0
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 10ch], edx
        push -1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 43 42 04 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 44 05 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 2c0h]
        mov dword ptr [ebp - 118h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 75 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x75
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A 76 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x76
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx edx, word ptr [eax + 11ah]
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 FB 04 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 2c8h]
        mov dword ptr [ebp - 11ch], ecx
        mov eax, dword ptr [ebp - 48h]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 CC 04 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 2c8h]
        mov dword ptr [ebp - 124h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 75 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x75
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 75 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x75
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx edx, word ptr [eax + 11ch]
        mov dword ptr [ebp - 120h], edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 83 04 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 2d0h]
        mov dword ptr [ebp - 128h], ecx
        mov eax, dword ptr [ebp - 4ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 54 04 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 2d0h]
        mov dword ptr [ebp - 12ch], ecx
        push 64h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 2F 04 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 74 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x74
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D 4C DE FF: call 0x58562110
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4c
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cdq
        mov ecx, 19h
        idiv ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 B0: movss dword ptr [ebp - 0x50], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xb0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4b8h]
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes F3 0F 2C 4D B0: cvttss2si ecx, dword ptr [ebp - 0x50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x4d
        __asm _emit 0xb0
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 E5 03 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 74 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x74
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 23 C1 FE FF: call 0x58769610
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, dword ptr [eax], 19h
        cdq
        mov ecx, 64h
        idiv ecx
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 B0: movss dword ptr [ebp - 0x50], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xb0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4b4h]
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes F3 0F 2C 4D B0: cvttss2si ecx, dword ptr [ebp - 0x50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x4d
        __asm _emit 0xb0
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 9F 03 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 0ch], 0
        xor edx, edx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x5877d54a
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 45 FC: mov ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx ecx, word ptr [ebp - 4]
        cmp ecx, 20h
        ; Exact mapped bytes 0F 8D EB 01 00 00: jge 0x5877d742
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 74 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x74
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 74 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x74
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 4]
        mov ecx, 1fh
        sub ecx, edx
        mov eax, dword ptr [eax + 268h]
        shr eax, cl
        and eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 85 B5 01 00 00: jne 0x5877d73d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 73 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 97 FA D0 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 73 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 3F 27 D3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x27
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x5877d73d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x5877d73d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x5877d73d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 97 F0 FF: call 0x58686df0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x97
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 54h]
        movzx edx, word ptr [ecx + 0a8h]
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 18h], edx
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + edx + 1ch], ecx
        mov edx, dword ptr [ebp - 24h]
        movzx eax, word ptr [edx + 0a0h]
        imul ecx, dword ptr [ebp - 0ch], 38h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 20h], eax
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, word ptr [eax + 9eh]
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov byte ptr [ebp - 11h], dl
        imul ecx, dword ptr [ebp - 0ch], 38h
        imul edx, dword ptr [ebp - 0ch], 38h
        mov eax, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + ecx + 20h]
        imul eax, dword ptr [esi + edx + 20h]
        cdq
        ; Exact mapped bytes F7 3D 70 77 94 58: idiv dword ptr [0x58947770]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        imul ecx, dword ptr [ebp - 0ch], 38h
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx + 24h]
        add ecx, 5
        cdq
        idiv ecx
        ; Exact mapped bytes 0F BE 55 EF: movsx edx, byte ptr [ebp - 0x11]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xef
        mov ecx, 64h
        sub ecx, edx
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 2710h
        sub edx, eax
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 28h], edx
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x5877d6ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        imul eax, edx, 0ah
        cmp dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 7F 28: jg 0x5877d72f
        __asm _emit 0x7f
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 90 E4 FF: call 0x585c6800
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes 73 06: jae 0x5877d72d
        __asm _emit 0x73
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB B2: jmp 0x5877d6e1
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov edx, dword ptr [ebp - 5ch]
        cmp edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 73 06: jae 0x5877d73d
        __asm _emit 0x73
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes E9 FC FD FF FF: jmp 0x5877d53e
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 140h], edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 60 01 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 72 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x72
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 80 D1 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x5877d7c7
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 71 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        mov esi, 2
        shl esi, 2
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 ED 4A D4 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx esi, word ptr [eax + esi + 8]
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 71 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 80 D1 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 9ch]
        lea edx, [ecx + esi*2]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4cch]
        mov dword ptr [ebp - 148h], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 DB 00 D3 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        push 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 99 E2 FF: call 0x585a71c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0xe2
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 07 00 00: call 0x5877df50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
