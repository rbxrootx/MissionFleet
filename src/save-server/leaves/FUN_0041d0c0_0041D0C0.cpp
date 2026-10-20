// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D0C0 .. +0x599 bytes.
extern "C" __declspec(naked) void FUN_0041d0c0_0041D0C0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1258h
        ; Exact mapped bytes E8 D3 8E 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1258h]
        mov ecx, 496h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc4h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40cc4h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [edx + 40cc4h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6C 43 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 64 43 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 11d8h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 D9 41 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 11e0h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 F8 48 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 AE 47 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x41d1a0
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 CF 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A3 04 00 00: jmp 0x41d643
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2F 3F FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 11b4h], eax
        mov dword ptr [ebp - 11b8h], 0ffffffffh
        cmp dword ptr [ebp - 11b4h], -1
        ; Exact mapped bytes 0F 84 5E 04 00 00: je 0x41d626
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        lea ecx, [ebp - 924h]
        push ecx
        mov edx, dword ptr [ebp - 11b4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 B5 40 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 33 04 00 00: je 0x41d624
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 864h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 11bch], edx
        mov eax, dword ptr [ebp - 11bch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 2]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 75 4D: jne 0x41d261
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 0F BF 05 38 04 67 00: movsx eax, word ptr [0x670438]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 37h
        push eax
        push 670388h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 A3 EE 0A 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 11e4h], eax
        mov eax, dword ptr [ebp - 11e4h]
        mov dword ptr [ebp - 11b0h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 11b0h]
        push ecx
        ; Exact mapped bytes E8 A4 80 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 35: jmp 0x41d296
        __asm _emit 0xeb
        __asm _emit 0x35
        push 0
        mov esi, esp
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7A 7B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 50h]
        push eax
        push 0
        push 0
        push 80020fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 CE 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 AD 03 00 00: jmp 0x41d643
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 864h], 0
        ; Exact mapped bytes 0F 85 58 02 00 00: jne 0x41d4fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 864h], ecx
        push 900h
        lea edx, [ebp - 924h]
        push edx
        mov eax, dword ptr [ebp - 11b4h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 3C 43 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 1E: je 0x41d2f0
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 CE 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 53 03 00 00: jmp 0x41d643
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 11c4h]
        ; Exact mapped bytes E8 22 3E FE FF: call 0x40111d
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        lea edx, [ebp - 920h]
        push edx
        lea eax, [ebp - 11ech]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 48h]
        add ecx, 40c98h
        ; Exact mapped bytes E8 F7 44 FE FF: call 0x401811
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 11c4h], edx
        mov dword ptr [ebp - 11c0h], eax
        lea ecx, [ebp - 11f4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 48h]
        add ecx, 40c98h
        ; Exact mapped bytes E8 19 40 FE FF: call 0x40135c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 11c4h]
        push eax
        ; Exact mapped bytes E8 86 3E FE FF: call 0x4011d6
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x41d36d
        __asm _emit 0x74
        __asm _emit 0x11
        lea ecx, [ebp - 11c4h]
        ; Exact mapped bytes E8 E3 42 FE FF: call 0x40164a
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 920h]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c84h]
        ; Exact mapped bytes E8 BD 43 FE FF: call 0x40174e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 920h]
        push ecx
        mov edx, dword ptr [ebp - 11b4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c84h]
        ; Exact mapped bytes E8 99 40 FE FF: call 0x401451
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 11c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x41d3d3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 11c8h]
        add edx, 1
        mov dword ptr [ebp - 11c8h], edx
        mov eax, dword ptr [ebp - 11c8h]
        cmp eax, dword ptr [ebp - 914h]
        ; Exact mapped bytes 0F 8D 16 01 00 00: jge 0x41d4fb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 11c8h]
        lea edx, [ebp + ecx*8 - 90ch]
        push edx
        lea eax, [ebp - 11fch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 1D 3F FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 1204h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 3C 46 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 3E 3F FE FF: call 0x401370
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x41d4f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8D 3C FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 11cch], edx
        push 888h
        lea eax, [ebp - 11ach]
        push eax
        mov ecx, dword ptr [ebp - 11cch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 2A 3E FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x41d4a2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1164h], eax
        push 888h
        lea ecx, [ebp - 11ach]
        push ecx
        mov edx, dword ptr [ebp - 11cch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 67 41 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 864h]
        push edx
        mov eax, dword ptr [ebp - 920h]
        push eax
        lea ecx, [ebp - 950h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 53 44 FE FF: call 0x40191f
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 864h]
        push edx
        mov eax, dword ptr [ebp - 920h]
        push eax
        mov ecx, dword ptr [ebp - 11cch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 20 43 FE FF: call 0x401816
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 C9 FE FF FF: jmp 0x41d3c4
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x41d589
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 11b0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc0h]
        ; Exact mapped bytes E8 18 42 FE FF: call 0x401735
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 864h]
        push ecx
        lea edx, [ebp - 920h]
        push edx
        lea ecx, [ebp - 120ch]
        ; Exact mapped bytes E8 69 3C FE FF: call 0x40119f
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 1218h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 48h]
        add ecx, 40c98h
        ; Exact mapped bytes E8 84 3F FE FF: call 0x4014d3
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov esi, esp
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8C 78 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 864h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 80020fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E CB 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x41d615
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 864h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 42 FE FF: call 0x401848
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 11d0h], eax
        cmp dword ptr [ebp - 11d0h], 0
        ; Exact mapped bytes 75 1B: jne 0x41d5c5
        __asm _emit 0x75
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 CB 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 7E: jmp 0x41d643
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 11bch]
        mov edx, dword ptr [ecx + 2]
        push edx
        mov eax, dword ptr [ebp - 11b0h]
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        push ecx
        ; Exact mapped bytes E8 1E 7D 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov esi, esp
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F6 77 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea eax, [ebp - 50h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 80020fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D CB 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 40 FE FF: call 0x401690
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 1F: jmp 0x41d643
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes EB 1B: jmp 0x41d641
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 CA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x41d643
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 1258h
        cmp ebp, esp
        ; Exact mapped bytes E8 9D 77 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x77
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
