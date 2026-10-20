// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58600200 .. +0x975 bytes.
extern "C" __declspec(naked) void FUN_58600200_58600200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 120h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8ch], ecx
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58600234
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 88h]
        add eax, 1
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], 4
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x5860030b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8ch]
        lea ecx, [eax + edx + 3b8h]
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 94h], eax
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 6E 5C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x5c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, 10h
        shl ecx, 0
        mov edx, dword ptr [ebp - 8ch]
        lea eax, [edx + ecx + 3b8h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 3D 5C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8ch]
        lea eax, [edx + ecx + 3d8h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 0C 5C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8ch]
        lea edx, [ecx + eax + 3d8h]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 DB 5B E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5b
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x58600225
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + 3f8h]
        mov dword ptr [ebp - 0a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 B6 5B E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx + 42ch]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 47 5C E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + 430h]
        mov dword ptr [ebp - 0ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 28 5C E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + 394h]
        mov dword ptr [ebp - 0b0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 59 5B E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5b
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586003a3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 1
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 20h
        ; Exact mapped bytes 7D 29: jge 0x586003d5
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + edx*4 + 2f4h]
        mov dword ptr [ebp - 0b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 0E 5B E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x5b
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x58600394
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586003f0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 88h]
        add edx, 1
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [ebp - 88h]
        cmp ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes 7D 1B: jge 0x5860041f
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + edx*4 + 0d4h]
        ; Exact mapped bytes E8 74 78 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x78
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C2: jmp 0x586003e1
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5860043a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 1
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ebp - 88h]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 7D 1B: jge 0x58600466
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [edx + ecx*4 + 2d4h]
        ; Exact mapped bytes E8 2D 78 13 00: call 0x58737c90
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x78
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C5: jmp 0x5860042b
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58600481
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 88h]
        add eax, 1
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], 8
        ; Exact mapped bytes 7D 29: jge 0x586004b3
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + ecx*4 + 374h]
        mov dword ptr [ebp - 0b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 E0 5A E8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5a
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x58600472
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 54 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5860055b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 54 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5860055b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 54 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 74 70: je 0x5860055b
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 54 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 60: je 0x5860055b
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 54 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 74 50: je 0x5860055b
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 54 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ch
        ; Exact mapped bytes 74 40: je 0x5860055b
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 54 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0dh
        ; Exact mapped bytes 74 30: je 0x5860055b
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 53 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 74 20: je 0x5860055b
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 53 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 74 10: je 0x5860055b
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 53 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x53
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 6F: jne 0x586005ca
        __asm _emit 0x75
        __asm _emit 0x6f
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58600576
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 1
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 2
        ; Exact mapped bytes 7D 49: jge 0x586005c8
        __asm _emit 0x7d
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + edx*4 + 408h]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 88h]
        add edx, 9
        push edx
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 45 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 6B 59 E8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x59
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9F: jmp 0x58600567
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes EB 6D: jmp 0x58600637
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586005e5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 1
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 2
        ; Exact mapped bytes 7D 49: jge 0x58600637
        __asm _emit 0x7d
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + edx*4 + 408h]
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 88h]
        add edx, 7
        push edx
        ; Exact mapped bytes 8B 0D 84 07 96 58: mov ecx, dword ptr [0x58960784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 45 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 FC 58 E8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x58
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9F: jmp 0x586005d6
        __asm _emit 0xeb
        __asm _emit 0x9f
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx + 904h]
        mov dword ptr [ebp - 0cch], edx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 8A 58 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x58
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + 908h]
        mov dword ptr [ebp - 0d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 6B 58 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x58
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 A0 DD 8A 58: mov edx, dword ptr [0x588adda0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes 66 A1 A4 DD 8A 58: mov ax, word ptr [0x588adda4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 45 80: mov word ptr [ebp - 0x80], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        xor ecx, ecx
        mov dword ptr [ebp - 7eh], ecx
        mov dword ptr [ebp - 7ah], ecx
        ; Exact mapped bytes 66 89 4D 8A: mov word ptr [ebp - 0x76], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x8a
        ; Exact mapped bytes 8B 15 A8 DD 8A 58: mov edx, dword ptr [0x588adda8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes 66 A1 AC DD 8A 58: mov ax, word ptr [0x588addac]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 45 90: mov word ptr [ebp - 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x90
        xor ecx, ecx
        mov dword ptr [ebp - 6eh], ecx
        mov dword ptr [ebp - 6ah], ecx
        ; Exact mapped bytes 66 89 4D 9A: mov word ptr [ebp - 0x66], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x9a
        ; Exact mapped bytes 8B 15 B0 DD 8A 58: mov edx, dword ptr [0x588addb0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes A1 B4 DD 8A 58: mov eax, dword ptr [0x588addb4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 64h], edx
        mov dword ptr [ebp - 60h], eax
        xor ecx, ecx
        mov dword ptr [ebp - 5ch], ecx
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes 8B 15 B8 DD 8A 58: mov edx, dword ptr [0x588addb8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes 66 A1 BC DD 8A 58: mov ax, word ptr [0x588addbc]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 45 B0: mov word ptr [ebp - 0x50], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        xor ecx, ecx
        mov dword ptr [ebp - 4eh], ecx
        mov dword ptr [ebp - 4ah], ecx
        ; Exact mapped bytes 66 89 4D BA: mov word ptr [ebp - 0x46], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xba
        ; Exact mapped bytes 8B 15 C0 DD 8A 58: mov edx, dword ptr [0x588addc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes A0 C4 DD 8A 58: mov al, byte ptr [0x588addc4]
        __asm _emit 0xa0
        __asm _emit 0xc4
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov byte ptr [ebp - 40h], al
        xor ecx, ecx
        mov dword ptr [ebp - 3fh], ecx
        mov dword ptr [ebp - 3bh], ecx
        ; Exact mapped bytes 66 89 4D C9: mov word ptr [ebp - 0x37], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc9
        mov byte ptr [ebp - 35h], cl
        ; Exact mapped bytes 8B 15 C8 DD 8A 58: mov edx, dword ptr [0x588addc8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes A1 CC DD 8A 58: mov eax, dword ptr [0x588addcc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 30h], eax
        xor ecx, ecx
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 8B 15 D0 DD 8A 58: mov edx, dword ptr [0x588addd0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes A0 D4 DD 8A 58: mov al, byte ptr [0x588addd4]
        __asm _emit 0xa0
        __asm _emit 0xd4
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov byte ptr [ebp - 20h], al
        xor ecx, ecx
        mov dword ptr [ebp - 1fh], ecx
        mov dword ptr [ebp - 1bh], ecx
        ; Exact mapped bytes 66 89 4D E9: mov word ptr [ebp - 0x17], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe9
        mov byte ptr [ebp - 15h], cl
        ; Exact mapped bytes 8B 15 D8 DD 8A 58: mov edx, dword ptr [0x588addd8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 66 A1 DC DD 8A 58: mov ax, word ptr [0x588adddc]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xdd
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        xor ecx, ecx
        mov dword ptr [ebp - 0eh], ecx
        mov dword ptr [ebp - 0ah], ecx
        ; Exact mapped bytes 66 89 4D FA: mov word ptr [ebp - 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfa
        mov dword ptr [ebp - 90h], 0
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5860078b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 88h]
        add edx, 1
        mov dword ptr [ebp - 88h], edx
        cmp dword ptr [ebp - 88h], 8
        ; Exact mapped bytes 0F 8D CF 03 00 00: jge 0x58600b67
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax*4 + 58948c34h]
        ; Exact mapped bytes E8 06 27 FD FF: call 0x585d2eb0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B0 03 00 00: je 0x58600b62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 51 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x5860085e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 51 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5860085e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 51 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 74 74: je 0x5860085e
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 51 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 64: je 0x5860085e
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 51 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 74 54: je 0x5860085e
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 51 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ch
        ; Exact mapped bytes 74 44: je 0x5860085e
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 51 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x51
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0dh
        ; Exact mapped bytes 74 34: je 0x5860085e
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 50 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x50
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 74 24: je 0x5860085e
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 50 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x50
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 10h
        ; Exact mapped bytes 74 14: je 0x5860085e
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 50 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x50
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 4A 01 00 00: jne 0x586009a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + ecx*4 + 2d4h]
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 B0 FF FF: call 0x585fb960
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        imul edx, dword ptr [ebp - 88h], 18h
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + edx + 450h]
        mov dword ptr [ebp - 120h], ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 B0 FF FF: call 0x585fb920
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx + eax + 448h]
        mov dword ptr [ebp - 0dch], edx
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        movzx edx, byte ptr [ecx + eax + 43fh]
        mov dword ptr [ebp - 0e0h], edx
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        movzx edx, byte ptr [ecx + eax + 43eh]
        mov dword ptr [ebp - 0e4h], edx
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        movzx edx, byte ptr [ecx + eax + 43dh]
        mov dword ptr [ebp - 0e8h], edx
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        movzx edx, byte ptr [ecx + eax + 43ch]
        mov dword ptr [ebp - 0ech], edx
        push 0
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        push 588adde0h
        mov edx, dword ptr [ebp - 88h]
        shl edx, 4
        lea eax, [ebp + edx - 84h]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 CE 6F 13 00: call 0x58737970
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6f
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x58600aed
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + ecx*4 + 2d4h]
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D AF FF FF: call 0x585fb960
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        imul edx, dword ptr [ebp - 88h], 18h
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax + edx + 44ch]
        mov dword ptr [ebp - 0f8h], ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B AF FF FF: call 0x585fb920
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx + eax + 448h]
        mov dword ptr [ebp - 100h], edx
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        movzx edx, byte ptr [ecx + eax + 43fh]
        mov dword ptr [ebp - 104h], edx
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        movzx edx, byte ptr [ecx + eax + 43eh]
        mov dword ptr [ebp - 108h], edx
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        movzx edx, byte ptr [ecx + eax + 43dh]
        mov dword ptr [ebp - 10ch], edx
        imul eax, dword ptr [ebp - 88h], 18h
        mov ecx, dword ptr [ebp - 8ch]
        movzx edx, byte ptr [ecx + eax + 43ch]
        mov dword ptr [ebp - 110h], edx
        push 0
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 0fch]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        push 588adde4h
        mov edx, dword ptr [ebp - 88h]
        shl edx, 4
        lea eax, [ebp + edx - 84h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 84 6E 13 00: call 0x58737970
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + ecx*4 + 2d4h]
        mov dword ptr [ebp - 118h], eax
        push 0ah
        push 0
        push -1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 F9 72 13 00: call 0x58737e10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x72
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + ecx*4 + 2d4h]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx + 8]
        imul eax, dword ptr [ebp - 90h], 0eh
        lea ecx, [edx + eax + 0bfh]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 DD 4B 1B 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 90h]
        add edx, 1
        mov dword ptr [ebp - 90h], edx
        ; Exact mapped bytes E9 15 FC FF FF: jmp 0x5860077c
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DF 04 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
