// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EA9B0 .. +0x4A9 bytes.
extern "C" __declspec(naked) void FUN_584ea9b0_584EA9B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 7ah]
        mov byte ptr [ebp - 14h], cl
        cmp byte ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 19: je 0x584ea9e8
        __asm _emit 0x74
        __asm _emit 0x19
        cmp byte ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 84 62 02 00 00: je 0x584eac3b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 84 11 04 00 00: je 0x584eadf4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 04 00 00: jmp 0x584eae59
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 78h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes 0F 87 2C 02 00 00: ja 0x584eac31
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 60 AE 4E 58: jmp dword ptr [edx*4 + 0x584eae60]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xae
        __asm _emit 0x4e
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 C7 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3F E8 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 09: jne 0x584eaa32
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eaa39
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x584eac31
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 418h
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov ecx, dword ptr [eax + ecx + 414h]
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 12 89 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 75 09: jne 0x584eaa6d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eaa74
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 B8 01 00 00: jmp 0x584eac31
        __asm _emit 0xe9
        __asm _emit 0xb8
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
        ; Exact mapped bytes E8 AC C6 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 C6 FE FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE E7 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 09: jne 0x584eaaa3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eaaaa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x584eac31
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov eax, dword ptr [edx + eax + 414h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E C6 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 C6 FE FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 E7 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 20: jne 0x584eab08
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 80 88 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x584eab08
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eab0f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x584eac31
        __asm _emit 0xe9
        __asm _emit 0x1d
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
        ; Exact mapped bytes E8 11 C6 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA C5 FE FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 E7 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 09: jne 0x584eab3e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eab45
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x584eac31
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov edx, dword ptr [ecx + edx + 414h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 C5 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C C5 FE FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 E6 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 75 16: jne 0x584eab99
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 65 EA FF FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x584eab99
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eaba0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x584eac31
        __asm _emit 0xe9
        __asm _emit 0x8c
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
        ; Exact mapped bytes E8 80 C5 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 C4 FE FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A2 E6 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 09: jne 0x584eabcf
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eabd6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 59: jmp 0x584eac31
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov edx, dword ptr [ecx + edx + 414h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 C5 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8E C4 FE FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 57 E6 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 75 19: jne 0x584eac2a
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 57 87 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x584eac2a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eac31
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 23 02 00 00: jmp 0x584eae59
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x584eae59
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 78h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 0F 87 98 01 00 00: ja 0x584eadf0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 95 80 AE 4E 58: jmp dword ptr [edx*4 + 0x584eae80]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xae
        __asm _emit 0x4e
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 C4 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC E5 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 09: jne 0x584eac85
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eac8c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 5F 01 00 00: jmp 0x584eadf0
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 418h
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov ecx, dword ptr [eax + ecx + 414h]
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BF 86 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 75 09: jne 0x584eacc0
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eacc7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x584eadf0
        __asm _emit 0xe9
        __asm _emit 0x24
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
        ; Exact mapped bytes E8 59 C4 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 C4 FE FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7B E5 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 09: jne 0x584eacf6
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eacfd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x584eadf0
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov eax, dword ptr [edx + eax + 414h]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B C4 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 C3 FE FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2D E5 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 20: jne 0x584ead5b
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2D 86 FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x584ead5b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584ead62
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x584eadf0
        __asm _emit 0xe9
        __asm _emit 0x89
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
        ; Exact mapped bytes E8 BE C3 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 77 C3 FE FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 E4 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 09: jne 0x584ead91
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584ead98
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 56: jmp 0x584eadf0
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov edx, dword ptr [ecx + edx + 414h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 C3 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C C3 FE FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 E4 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 75 16: jne 0x584eade9
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 15 E8 FF FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 09: jne 0x584eade9
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eadf0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 67: jmp 0x584eae59
        __asm _emit 0xeb
        __asm _emit 0x67
        ; Exact mapped bytes EB 65: jmp 0x584eae59
        __asm _emit 0xeb
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 78h]
        mov byte ptr [ebp - 18h], dl
        cmp byte ptr [ebp - 18h], 1
        ; Exact mapped bytes 74 08: je 0x584eae0b
        __asm _emit 0x74
        __asm _emit 0x08
        cmp byte ptr [ebp - 18h], 2
        ; Exact mapped bytes 74 2E: je 0x584eae37
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes EB 4E: jmp 0x584eae59
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A C3 FE FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 43 E4 FC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 09: jne 0x584eae2e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eae35
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 22: jmp 0x584eae59
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E C3 FE FF: call 0x584d71d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x584eae52
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x584eae59
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
    }
}
