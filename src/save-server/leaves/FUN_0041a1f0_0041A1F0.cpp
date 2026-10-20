// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A1F0 .. +0x6D7 bytes.
extern "C" __declspec(naked) void FUN_0041a1f0_0041A1F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b3f0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 126ch
        ; Exact mapped bytes E8 8E BD 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1278h]
        mov ecx, 49bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov byte ptr [ebp - 14h], 0
        push 18h
        push 0
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 83 B6 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 63310ch
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 91 AB 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 15h], 0
        ; Exact mapped bytes 0F BF 05 30 04 67 00: movsx eax, word ptr [0x670430]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 18h
        push eax
        push 670388h
        push 24h
        ; Exact mapped bytes E8 59 1E 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 11d8h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 11d8h], 0
        ; Exact mapped bytes 74 18: je 0x41a2ab
        __asm _emit 0x74
        __asm _emit 0x18
        push 81ah
        mov ecx, dword ptr [ebp - 11d8h]
        ; Exact mapped bytes E8 4A 76 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1224h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41a2b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1224h], 0
        mov ecx, dword ptr [ebp - 1224h]
        mov dword ptr [ebp - 11d4h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 11d4h]
        mov dword ptr [ebp - 30h], edx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 BE 71 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 B6 71 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        push 900h
        push 0
        lea eax, [ebp - 940h]
        push eax
        ; Exact mapped bytes E8 CC B5 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 888h
        push 0
        lea ecx, [ebp - 11c8h]
        push ecx
        ; Exact mapped bytes E8 B6 B5 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 11cch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 11d0h], edx
        cmp dword ptr [ebp - 11d0h], 0
        ; Exact mapped bytes 75 0D: jne 0x41a33b
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 11cch], 0
        ; Exact mapped bytes 0F 84 AB 04 00 00: je 0x41a7e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11d0h], 0
        ; Exact mapped bytes 0F 85 50 02 00 00: jne 0x41a598
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 11cch]
        push eax
        lea ecx, [ebp - 11e0h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 C1 6F FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], edx
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 11e8h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 E0 76 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 96 75 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x41a464
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 14h], 0
        push 1
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5A 6C FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2D AA 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 37 6C FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5B 75 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3D 71 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 11d0h]
        push eax
        mov ecx, dword ptr [ebp - 11cch]
        push ecx
        push 80020f07h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 FD 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 52: je 0x41a45a
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 11f0h], edx
        mov eax, dword ptr [ebp - 11f0h]
        mov dword ptr [ebp - 11ech], eax
        cmp dword ptr [ebp - 11ech], 0
        ; Exact mapped bytes 74 23: je 0x41a449
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 11ech]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 11ech]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 AF A9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41a453
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1228h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, 1
        ; Exact mapped bytes E9 43 04 00 00: jmp 0x41a8a7
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        lea eax, [ebp - 940h]
        push eax
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 5F 6C FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 14 6E FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x41a593
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 940h], 0
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x41a593
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 14h], 1
        push 1
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 58 6B FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2B A9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 35 6B FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 7dh], 0
        mov esi, esp
        lea eax, [ebp - 87ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 01 A9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 87ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 08 6B FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2C 74 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0E 70 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 11d0h]
        push edx
        mov eax, dword ptr [ebp - 11cch]
        push eax
        push 80020f07h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 FB 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 52: je 0x41a589
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 11f8h], ecx
        mov edx, dword ptr [ebp - 11f8h]
        mov dword ptr [ebp - 11f4h], edx
        cmp dword ptr [ebp - 11f4h], 0
        ; Exact mapped bytes 74 23: je 0x41a578
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 11f4h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 11f4h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 80 A8 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 122ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x41a582
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 122ch], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, 1
        ; Exact mapped bytes E9 14 03 00 00: jmp 0x41a8a7
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E 02 00 00: jmp 0x41a7e6
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 11d0h]
        push eax
        lea ecx, [ebp - 1200h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 71 6D FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 1208h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 90 74 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 46 73 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x41a6b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 14h], 0
        push 1
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0A 6A FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DD A7 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E7 69 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0B 73 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 ED 6E FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 11d0h]
        push eax
        mov ecx, dword ptr [ebp - 11cch]
        push ecx
        push 80020f07h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 FA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 52: je 0x41a6aa
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1210h], edx
        mov eax, dword ptr [ebp - 1210h]
        mov dword ptr [ebp - 120ch], eax
        cmp dword ptr [ebp - 120ch], 0
        ; Exact mapped bytes 74 23: je 0x41a699
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 120ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 120ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 5F A7 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1230h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41a6a3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1230h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, 1
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x41a8a7
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        lea eax, [ebp - 11c8h]
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 0F 6A FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 C4 6B FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x41a7e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11c8h], 0
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x41a7e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 14h], 1
        push 1
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 08 69 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DB A6 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E5 68 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 97dh], 0
        mov esi, esp
        lea eax, [ebp - 117ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AE A6 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 117ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B5 68 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D9 71 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BB 6D FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 11d0h]
        push edx
        mov eax, dword ptr [ebp - 11cch]
        push eax
        push 80020f07h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9E F9 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 52: je 0x41a7dc
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1218h], ecx
        mov edx, dword ptr [ebp - 1218h]
        mov dword ptr [ebp - 1214h], edx
        cmp dword ptr [ebp - 1214h], 0
        ; Exact mapped bytes 74 23: je 0x41a7cb
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1214h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1214h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 2D A6 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1234h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41a7d5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1234h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, 1
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x41a8a7
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 14h], 0
        push 1
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 12 68 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E5 A5 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EF 67 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 13 71 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F5 6C FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 11d0h]
        push eax
        mov ecx, dword ptr [ebp - 11cch]
        push ecx
        push 80020f07h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 F8 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 52: je 0x41a8a2
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1220h], edx
        mov eax, dword ptr [ebp - 1220h]
        mov dword ptr [ebp - 121ch], eax
        cmp dword ptr [ebp - 121ch], 0
        ; Exact mapped bytes 74 23: je 0x41a891
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 121ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 121ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 67 A5 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1238h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41a89b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1238h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 1278h
        cmp ebp, esp
        ; Exact mapped bytes E8 2F A5 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
