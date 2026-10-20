// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D5F20 .. +0x61B bytes.
extern "C" __declspec(naked) void FUN_586d5f20_586D5F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 58 05 00 00: jne 0x586d648c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 BD F1 FF: call 0x585f1cd0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xbd
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 180h]
        ; Exact mapped bytes 75 5D: jne 0x586d5fab
        __asm _emit 0x75
        __asm _emit 0x5d
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
        ; Exact mapped bytes 75 31: jne 0x586d5f8d
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes E8 8F 12 E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x12
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 588b2f70h
        ; Exact mapped bytes E8 82 C0 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EA 2D E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2d
        __asm _emit 0xe0
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 A7 05 00 00: jmp 0x586d6534
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5E 12 E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x12
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2B D2 E0 FF: call 0x584e31d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd2
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x586d6117
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 184h]
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x586d6082
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 188h]
        ; Exact mapped bytes E8 05 EB E5 FF: call 0x58534ad0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xeb
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x586d5fd6
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5E 05 00 00: jmp 0x586d6534
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 2C 06 96 58: cmp ecx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3A: jne 0x586d601e
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 15ch]
        and eax, 0f00000h
        cmp eax, 100000h
        ; Exact mapped bytes 74 09: je 0x586d6002
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 100000h
        ; Exact mapped bytes EB 07: jmp 0x586d6009
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 200000h
        mov ecx, dword ptr [ebp - 8]
        or ecx, 20000h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 AE 00 00: call 0x586e0ef0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5F: jmp 0x586d607d
        __asm _emit 0xeb
        __asm _emit 0x5f
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
        ; Exact mapped bytes 75 2E: jne 0x586d605a
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 32 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x32
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 74 10: je 0x586d604c
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C 32 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x32
        __asm _emit 0xde
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 0C: jne 0x586d6058
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 3A EF FF: call 0x585c9aa0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3a
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x586d607d
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b4h], 20000h
        ; Exact mapped bytes 75 0B: jne 0x586d6074
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 87 00 00: call 0x586de780
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x586d607d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 81 00 00: call 0x586de270
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x586d6117
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 17ch]
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x586d6117
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10ch], 0
        ; Exact mapped bytes 74 77: je 0x586d6117
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 620h]
        ; Exact mapped bytes E8 B2 31 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x31
        __asm _emit 0xde
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x586d60cb
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 620h]
        ; Exact mapped bytes E8 9D 31 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x31
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 75 1C: jne 0x586d60e7
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 620h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 620h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 30: jmp 0x586d6117
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 620h]
        ; Exact mapped bytes E8 6B 31 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x31
        __asm _emit 0xde
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 1A: jne 0x586d6117
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 620h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 620h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4b0h]
        ; Exact mapped bytes 75 14: jne 0x586d6139
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c4h]
        ; Exact mapped bytes E8 CD B2 0E 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb2
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4E 03 00 00: jmp 0x586d6487
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4b4h]
        ; Exact mapped bytes 75 39: jne 0x586d6180
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c4h]
        ; Exact mapped bytes E8 1B AB 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xab
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c4h]
        ; Exact mapped bytes E8 8B 35 E5 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xe5
        __asm _emit 0xff
        sub eax, 7
        cmp esi, eax
        ; Exact mapped bytes 7D 0F: jge 0x586d617b
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c4h]
        ; Exact mapped bytes E8 06 B2 0E 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb2
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 03 00 00: jmp 0x586d6487
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 4b8h]
        ; Exact mapped bytes 75 2A: jne 0x586d61b8
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 64 B2 0E 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4cch]
        ; Exact mapped bytes E8 56 B2 0E 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 87 00 00: call 0x586de990
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CF 02 00 00: jmp 0x586d6487
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4bch]
        ; Exact mapped bytes 75 4F: jne 0x586d6215
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c8h]
        ; Exact mapped bytes E8 9C AA 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xaa
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c8h]
        ; Exact mapped bytes E8 0C 35 E5 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x35
        __asm _emit 0xe5
        __asm _emit 0xff
        sub eax, 7
        cmp esi, eax
        ; Exact mapped bytes 7D 25: jge 0x586d6210
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 87 B1 0E 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4cch]
        ; Exact mapped bytes E8 79 B1 0E 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 87 00 00: call 0x586de990
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 72 02 00 00: jmp 0x586d6487
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 634h]
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x586d62b4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 30 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x30
        __asm _emit 0xde
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x586d625f
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 30 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x30
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 4
        ; Exact mapped bytes 74 13: je 0x586d625f
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 30 DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x30
        __asm _emit 0xde
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 75 16: jne 0x586d6275
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 15 54 06 96 58: mov edx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 3A: jmp 0x586d62af
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 2F DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2f
        __asm _emit 0xde
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 74 13: je 0x586d629b
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 2F DE FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2f
        __asm _emit 0xde
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 14: jne 0x586d62af
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 54 06 96 58: mov edx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 54 06 96 58: mov ecx, dword ptr [0x58960654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 D3 01 00 00: jmp 0x586d6487
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 624h]
        ; Exact mapped bytes 75 3F: jne 0x586d630a
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 638h], 0
        ; Exact mapped bytes 75 09: jne 0x586d62e9
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x586d62f0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 638h], ecx
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x586d6487
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 624h]
        ; Exact mapped bytes 75 3D: jne 0x586d635d
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 638h], 0
        ; Exact mapped bytes 75 09: jne 0x586d633d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x586d6344
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 638h], eax
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x586d6487
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 624h]
        ; Exact mapped bytes 75 3F: jne 0x586d63b3
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 638h], 0
        ; Exact mapped bytes 75 09: jne 0x586d6392
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x586d6399
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax + 638h], edx
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x586d6487
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4c8h]
        ; Exact mapped bytes 75 5D: jne 0x586d641e
        __asm _emit 0x75
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4cch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 E5 A7 0E 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A6 B1 0E 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c8h]
        ; Exact mapped bytes E8 6C A8 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4D B3 0E 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 85 00 00: call 0x586de990
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 69: jmp 0x586d6487
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 4cch]
        ; Exact mapped bytes 75 5B: jne 0x586d6487
        __asm _emit 0x75
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c8h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4cch]
        ; Exact mapped bytes E8 7A A7 0E 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3B B1 0E 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        ; Exact mapped bytes E8 01 A8 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E2 B2 0E 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 85 00 00: call 0x586de990
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x586d6532
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x586d651c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 17ch]
        ; Exact mapped bytes 75 02: jne 0x586d64a6
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 74: jmp 0x586d651a
        __asm _emit 0xeb
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 180h]
        ; Exact mapped bytes 75 2D: jne 0x586d64e1
        __asm _emit 0x75
        __asm _emit 0x2d
        push 588b2f98h
        ; Exact mapped bytes E8 32 BB E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xbb
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 EB DF FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xeb
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x586d651a
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 184h]
        ; Exact mapped bytes 75 2B: jne 0x586d651a
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b2fach
        ; Exact mapped bytes E8 F7 BA E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xba
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 EA DF FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xea
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x586d6532
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x586d6532
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF DA DF FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xda
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
