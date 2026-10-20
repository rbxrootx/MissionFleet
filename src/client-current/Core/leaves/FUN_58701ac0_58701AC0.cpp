// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58701AC0 .. +0x9F6 bytes.
extern "C" __declspec(naked) void FUN_58701ac0_58701AC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 CE 09 00 00: je 0x587024b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 160h]
        ; Exact mapped bytes E8 6C 77 DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x77
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x58701bee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 EE FF FF: call 0x58700990
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58701b1b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x58701bd7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 8
        ; Exact mapped bytes 74 13: je 0x58701b4f
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 9
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x58701bd2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 4E D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F B4 D8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb4
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 37: jne 0x58701b9d
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 164h]
        mov dword ptr [ebp - 1ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 10 44 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0dch]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 46 43 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x58701bd2
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 164h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D9 43 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0dch]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0F 43 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3B FF FF FF: jmp 0x58701b12
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18ch]
        mov dword ptr [ebp - 2ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A3 43 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 184h]
        ; Exact mapped bytes E8 54 F3 FF FF: call 0x58700f50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x58701c4e
        __asm _emit 0x74
        __asm _emit 0x4e
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58701c12
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 1D: jge 0x58701c35
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 13ch]
        mov dword ptr [ebp - 30h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5E 43 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58701c09
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 15ch]
        mov dword ptr [ebp - 34h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 45 43 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4C: jmp 0x58701c9a
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58701c60
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 1D: jge 0x58701c83
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 13ch]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 10 43 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58701c57
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 15ch]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F7 42 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        ; Exact mapped bytes E8 B8 75 DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x75
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 17: jne 0x58701cc7
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 40h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CA 42 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes E8 8B 75 DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 0F 85 93 02 00 00: jne 0x58701f74
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58701d7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 4
        ; Exact mapped bytes 74 7C: je 0x58701d7f
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0ah
        ; Exact mapped bytes 74 6D: je 0x58701d7f
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 5
        ; Exact mapped bytes 74 5E: je 0x58701d7f
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 4F: je 0x58701d7f
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 40: je 0x58701d7f
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 31: je 0x58701d7f
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 13: jne 0x58701d70
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 54 DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x54
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58701d7f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 10h
        ; Exact mapped bytes 75 3B: jne 0x58701dba
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 74 2D: je 0x58701db8
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 19ch]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 EF 41 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x41
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b0h]
        mov dword ptr [ebp - 48h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D9 41 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58701dd1
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 19ch]
        mov dword ptr [ebp - 4ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C0 41 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x41
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 1
        ; Exact mapped bytes 75 56: jne 0x58701e36
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 19ch]
        ; Exact mapped bytes E8 D2 2B D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x2b
        __asm _emit 0xd8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58701e31
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 19ch]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D8 3F D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 19ch]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 22 DA D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xda
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 2B D8 FF: call 0x58484a20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x2b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 17 DE FF: call 0x584e35c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x17
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x58701f74
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58701ed3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 2
        ; Exact mapped bytes 74 7C: je 0x58701ed3
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 3
        ; Exact mapped bytes 74 6D: je 0x58701ed3
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 4
        ; Exact mapped bytes 74 5E: je 0x58701ed3
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 4F: je 0x58701ed3
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 5
        ; Exact mapped bytes 74 40: je 0x58701ed3
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 6
        ; Exact mapped bytes 74 31: je 0x58701ed3
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 7
        ; Exact mapped bytes 74 22: je 0x58701ed3
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0ah
        ; Exact mapped bytes 74 13: je 0x58701ed3
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0eh
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x58701f74
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 19ch]
        ; Exact mapped bytes E8 DF 2A D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2a
        __asm _emit 0xd8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x58701f12
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 19ch]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E5 3E D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 19ch]
        mov dword ptr [ebp - 5ch], eax
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 2F D9 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd9
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 3
        ; Exact mapped bytes 75 53: jne 0x58701f74
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1a8h]
        ; Exact mapped bytes E8 58 39 D9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x39
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x58701f74
        __asm _emit 0x75
        __asm _emit 0x35
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58701f51
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 1D: jge 0x58701f74
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a8h]
        mov dword ptr [ebp - 60h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 1F 40 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58701f48
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 194h]
        ; Exact mapped bytes E8 DE 72 DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x72
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x58702068
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 6
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5870202c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 4
        ; Exact mapped bytes 74 7C: je 0x5870202c
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0ah
        ; Exact mapped bytes 74 6D: je 0x5870202c
        __asm _emit 0x74
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 5
        ; Exact mapped bytes 74 5E: je 0x5870202c
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 4F: je 0x5870202c
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0ch
        ; Exact mapped bytes 74 40: je 0x5870202c
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 31: je 0x5870202c
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 22: je 0x5870202c
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 38: jne 0x58702051
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 51 DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 75 25: jne 0x58702051
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], 0
        ; Exact mapped bytes 74 19: je 0x58702051
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 64h], ecx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 42 3F D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3f
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58702068
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1a0h]
        mov dword ptr [ebp - 68h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 29 3F D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3f
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 EA 71 DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x71
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 17: jne 0x58702095
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a4h]
        mov dword ptr [ebp - 6ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 FC 3E D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3e
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 124h]
        ; Exact mapped bytes E8 BD 71 DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x71
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x58702197
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 6
        ; Exact mapped bytes 74 78: je 0x58702136
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 4
        ; Exact mapped bytes 74 69: je 0x58702136
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0ah
        ; Exact mapped bytes 74 5A: je 0x58702136
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 5
        ; Exact mapped bytes 74 4B: je 0x58702136
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 3C: je 0x58702136
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0dh
        ; Exact mapped bytes 74 2D: je 0x58702136
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0eh
        ; Exact mapped bytes 74 1E: je 0x58702136
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0fh
        ; Exact mapped bytes 74 0F: je 0x58702136
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 10h
        ; Exact mapped bytes 75 4A: jne 0x58702180
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 74 25: je 0x58702167
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], 0
        ; Exact mapped bytes 74 19: je 0x58702167
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 7C 3C D8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3c
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5870217e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 74h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 13 3E D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x3e
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58702197
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 78h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 FA 3D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 F4 01 00 00: jne 0x587023a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        ; Exact mapped bytes E8 A0 70 DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 D5 01 00 00: jne 0x587023a1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 1
        ; Exact mapped bytes 74 0F: je 0x58702208
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 38 D9 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x58702227
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 190h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x58702387
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        test edx, edx
        ; Exact mapped bytes 74 2D: je 0x58702262
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 2
        ; Exact mapped bytes 74 1E: je 0x58702262
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 3
        ; Exact mapped bytes 74 0F: je 0x58702262
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 7
        ; Exact mapped bytes 75 1F: jne 0x58702281
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 190h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x58702387
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0fh
        ; Exact mapped bytes 75 33: jne 0x587022c3
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 4F DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4f
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx edx, word ptr [eax + 38h]
        cmp edx, 1
        ; Exact mapped bytes 75 1F: jne 0x587022c3
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 190h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x58702387
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58702361
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 4
        ; Exact mapped bytes 74 7C: je 0x58702361
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0ah
        ; Exact mapped bytes 74 6D: je 0x58702361
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 5
        ; Exact mapped bytes 74 5E: je 0x58702361
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 4F: je 0x58702361
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 40: je 0x58702361
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 31: je 0x58702361
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 13: jne 0x58702352
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 4E DD FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58702361
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 10h
        ; Exact mapped bytes 75 26: jne 0x58702387
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 74 1A: je 0x58702387
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 190h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 198h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 198h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x5870242a
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 02: jne 0x587023bf
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 6B: jmp 0x5870242a
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 4D: jne 0x58702423
        __asm _emit 0x75
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 124h]
        ; Exact mapped bytes E8 7C 6E DB FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6e
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 75 35: jne 0x58702421
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 7ch], ecx
        push 0
        push 496h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 29 4A DB FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 07: jmp 0x5870242a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5870244b
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5870244b
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x587024b4
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5870246e
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58702454
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9A 31 D9 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x31
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58702492
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x587024b4
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x587024b2
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 31 D9 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x31
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 80h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x58702454
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
