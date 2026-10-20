// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00401D07 .. +0x3F9 bytes.
extern "C" __declspec(naked) void FUN_00401d07_00401D07() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 75 0D: jne 0x401d3a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 53 08 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x401d41
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8000h
        ; Exact mapped bytes 75 05: jne 0x401d57
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 94 03 00 00: jmp 0x4020eb
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8001h
        ; Exact mapped bytes 0F 85 CC 01 00 00: jne 0x401f38
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 80010033h
        ; Exact mapped bytes 77 35: ja 0x401db3
        __asm _emit 0x77
        __asm _emit 0x35
        cmp dword ptr [ebp - 0ch], 80010033h
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x401f01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 7ffeffe7h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0fh
        ; Exact mapped bytes 0F 87 92 01 00 00: ja 0x401f33
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [eax + 40211ch]
        ; Exact mapped bytes FF 24 95 00 21 40 00: jmp dword ptr [edx*4 + 0x402100]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x21
        __asm _emit 0x40
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 800100a1h
        ; Exact mapped bytes 77 2C: ja 0x401de8
        __asm _emit 0x77
        __asm _emit 0x2c
        cmp dword ptr [ebp - 0ch], 800100a1h
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x401e84
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 80010034h
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x401f1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 800100a0h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x401e6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x401f33
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 8001010fh
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x401e9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 80012001h
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x401ee8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x401f33
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 05 00 00: call 0x4023c4
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D0 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 05 00 00: call 0x402403
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B7 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 07 00 00: call 0x40262b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9E 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 08 00 00: call 0x4026b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 85 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 08 00 00: call 0x40270e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6C 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 08 00 00: call 0x40270e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 53 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 08 00 00: call 0x40270e
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B 08 00 00: call 0x402765
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 14 00 00: call 0x4032e4
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 08 02 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 08 00 00: call 0x4027c1
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 09 00 00: call 0x4028f6
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D6 01 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 0A 00 00: call 0x4029f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 01 00 00: jmp 0x4020eb
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8002h
        ; Exact mapped bytes 0F 85 9E 01 00 00: jne 0x4020eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 80020600h
        ; Exact mapped bytes 77 5D: ja 0x401fbc
        __asm _emit 0x77
        __asm _emit 0x5d
        cmp dword ptr [ebp - 10h], 80020600h
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x402003
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80020300h
        ; Exact mapped bytes 77 2C: ja 0x401fa1
        __asm _emit 0x77
        __asm _emit 0x2c
        cmp dword ptr [ebp - 10h], 80020300h
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x402067
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80020111h
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x40201c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80020200h
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x40204e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4A 01 00 00: jmp 0x4020eb
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80020400h
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x40207d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80020500h
        ; Exact mapped bytes 74 7E: je 0x402035
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x4020eb
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 8002f006h
        ; Exact mapped bytes 77 2C: ja 0x401ff1
        __asm _emit 0x77
        __asm _emit 0x2c
        cmp dword ptr [ebp - 10h], 8002f006h
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x4020bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80020700h
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x402093
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 80020e01h
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x4020a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x4020eb
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 8002f007h
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x4020d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x4020eb
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 0A 00 00: call 0x402ac6
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 0B 00 00: call 0x402b37
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 0D 00 00: call 0x402dd4
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 0E 00 00: call 0x402f56
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x4020f0
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 0E 00 00: call 0x402f56
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 73: jmp 0x4020f0
        __asm _emit 0xeb
        __asm _emit 0x73
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 0E 00 00: call 0x402f56
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5D: jmp 0x4020f0
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 0E 00 00: call 0x402f56
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x4020f0
        __asm _emit 0xeb
        __asm _emit 0x47
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 0E 00 00: call 0x402fb5
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x4020f0
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 15 00 00: call 0x40368d
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x4020f0
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 15 00 00: call 0x4036d0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4020f0
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 E6 66 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
