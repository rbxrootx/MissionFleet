// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F2C0 .. +0xABA bytes.
extern "C" __declspec(naked) void FUN_0041f2c0_0041F2C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b56ch
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
        mov eax, 2d10h
        ; Exact mapped bytes E8 BE 6C 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 2d1ch]
        mov ecx, 0b44h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 81 21 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 79 21 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        push 18h
        push 0
        lea ecx, [ebp - 11c8h]
        push ecx
        ; Exact mapped bytes E8 92 65 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea edx, [ebp - 11e0h]
        push edx
        ; Exact mapped bytes E8 7F 65 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 900h
        push 0
        lea eax, [ebp - 928h]
        push eax
        ; Exact mapped bytes E8 69 65 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 888h
        push 0
        lea ecx, [ebp - 11b0h]
        push ecx
        ; Exact mapped bytes E8 53 65 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 63310ch
        lea eax, [ebp - 11c8h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 5E 5A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 11c8h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 48 5A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + eax + 1]
        mov esi, esp
        push eax
        push 63310ch
        lea ecx, [ebp - 11e0h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 22 5A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        push 21h
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 12 25 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 4
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 17 1C FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 06 1C FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 11c8h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D6 59 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 11c8h]
        push edx
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 DA 1B FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x41f440
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 CD 08 00 00: je 0x41fd0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 85 EC 04 00 00: jne 0x41f936
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 2c80h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 C2 1E FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 2c88h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 E1 25 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 97 24 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x41f4eb
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 92 24 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 71 20 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5E AC 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2c8ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 16 25 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2c8ch]
        ; Exact mapped bytes E9 6F 08 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E4 1B FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 1208h], eax
        mov dword ptr [ebp - 2394h], 0
        push 888h
        push 0
        lea ecx, [ebp - 1a90h]
        push ecx
        ; Exact mapped bytes E8 A7 63 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 900h
        push 0
        lea edx, [ebp - 2390h]
        push edx
        ; Exact mapped bytes E8 91 63 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 2390h]
        push ecx
        mov edx, dword ptr [ebp - 1208h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c84h]
        ; Exact mapped bytes E8 59 21 FE FF: call 0x4016ae
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 87 03 00 00: je 0x41f8e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2380h]
        mov dword ptr [ebp - 2394h], edx
        push 28h
        lea eax, [ebp - 237ch]
        push eax
        lea ecx, [ebp - 23bch]
        push ecx
        ; Exact mapped bytes E8 82 5D 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 11e0h]
        push edx
        lea eax, [ebp - 11c8h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        sub esp, 900h
        mov ecx, 240h
        lea esi, [ebp - 2390h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c84h]
        ; Exact mapped bytes E8 3C 20 FE FF: call 0x4015f5
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D1 02 00 00: je 0x41f892
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 928h], 1
        mov dword ptr [ebp - 2380h], 0
        ; Exact mapped bytes 66 C7 85 5C E5 FF FF 00 00: mov word ptr [ebp - 0x1aa4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push 28h
        push 0
        lea ecx, [ebp - 237ch]
        push ecx
        ; Exact mapped bytes E8 D2 62 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 900h
        lea edx, [ebp - 2390h]
        push edx
        mov eax, dword ptr [ebp - 1208h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 F7 1F FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 25 02 00 00: jne 0x41f840
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0
        push 0
        lea eax, [ebp - 1abch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c84h]
        ; Exact mapped bytes E8 4C 1D FE FF: call 0x401389
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1208h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c84h]
        ; Exact mapped bytes E8 73 1F FE FF: call 0x4015d2
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1208h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c84h]
        ; Exact mapped bytes E8 6E 21 FE FF: call 0x4017e9
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 23c0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x41f696
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 23c0h]
        add edx, 1
        mov dword ptr [ebp - 23c0h], edx
        mov eax, dword ptr [ebp - 23c0h]
        cmp eax, dword ptr [ebp - 2394h]
        ; Exact mapped bytes 0F 8D 1C 01 00 00: jge 0x41f7c4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 23c0h]
        lea edx, [ebp + ecx*8 - 23b8h]
        push edx
        lea eax, [ebp - 2c94h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 5A 1C FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 2c9ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 79 23 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 7B 1C FE FF: call 0x401370
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x41f7bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 CA 19 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 23c4h], edx
        push 888h
        lea eax, [ebp - 2c4ch]
        push eax
        mov ecx, dword ptr [ebp - 23c4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 67 1B FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2c50h], eax
        cmp dword ptr [ebp - 2c50h], 0
        ; Exact mapped bytes 74 79: je 0x41f7bf
        __asm _emit 0x74
        __asm _emit 0x79
        mov dword ptr [ebp - 2c44h], 0
        mov dword ptr [ebp - 2c04h], 0
        push 888h
        lea eax, [ebp - 2c4ch]
        push eax
        mov ecx, dword ptr [ebp - 23c4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 8E 1E FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 3
        push 0
        push 0
        lea ecx, [ebp - 23f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 BA 1B FE FF: call 0x401357
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 1
        push 0
        push 0
        mov edx, dword ptr [ebp - 23c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c88h]
        ; Exact mapped bytes E8 E9 1F FE FF: call 0x4017a8
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 C3 FE FF FF: jmp 0x41f687
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 A3 21 FE FF: call 0x401979
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 238ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 48h]
        add ecx, 40c98h
        ; Exact mapped bytes E8 B7 18 FE FF: call 0x4010a5
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 3D 21 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 1C 1D FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 1
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 A9 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ca0h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 C1 21 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ca0h]
        ; Exact mapped bytes E9 1A 05 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 EB 20 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 CA 1C FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 A8 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ca4h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 6F 21 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ca4h]
        ; Exact mapped bytes E9 C8 04 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 99 20 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 78 1C FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 A8 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ca8h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 1D 21 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ca8h]
        ; Exact mapped bytes E9 76 04 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 47 20 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 26 1C FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 13 A8 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2cach], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 CB 20 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2cach]
        ; Exact mapped bytes E9 24 04 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 2cb4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 D6 19 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 2cbch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 F5 20 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 AB 1F FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x41f9d7
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 A6 1F FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 85 1B FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 72 A7 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2cc0h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 2A 20 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2cc0h]
        ; Exact mapped bytes E9 83 03 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F8 16 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 2c54h], edx
        push 888h
        lea eax, [ebp - 11b0h]
        push eax
        mov ecx, dword ptr [ebp - 2c54h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 95 18 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 AC 02 00 00: jne 0x41fcbe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11b0h], 0
        ; Exact mapped bytes 0F 85 4D 02 00 00: jne 0x41fc6c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 11c8h]
        push eax
        lea ecx, [ebp - 954h]
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B4 53 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 D6 01 00 00: jne 0x41fc1a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 11e0h]
        push edx
        lea eax, [ebp - 11a4h]
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8F 53 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 5F 01 00 00: jne 0x41fbc8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11b0h], 1
        push 888h
        lea ecx, [ebp - 11b0h]
        push ecx
        mov edx, dword ptr [ebp - 2c54h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 75 1B FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x41fb76
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 118ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c88h]
        ; Exact mapped bytes E8 B0 15 FE FF: call 0x401069
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 118ch]
        push eax
        lea ecx, [ebp - 1174h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 41 1B FE FF: call 0x40161d
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea ecx, [ebp - 2c78h]
        push ecx
        ; Exact mapped bytes E8 D4 5D 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 2c78h]
        push eax
        lea ecx, [ebp - 11c8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 D3 1B FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 55 1E FE FF: call 0x401979
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 07 1E FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 E6 19 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 1
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D3 A5 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2cc4h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 8B 1E FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2cc4h]
        ; Exact mapped bytes E9 E4 01 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 B5 1D FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 94 19 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 A5 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2cc8h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 39 1E FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2cc8h]
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 63 1D FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 42 19 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 1
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2F A5 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ccch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 E7 1D FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ccch]
        ; Exact mapped bytes E9 40 01 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 11 1D FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 F0 18 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DD A4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2cd0h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 95 1D FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2cd0h]
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 BF 1C FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 9E 18 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B A4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2cd4h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 43 1D FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2cd4h]
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x41fd5a
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 6D 1C FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 4C 18 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 A4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2cd8h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 F1 1C FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2cd8h]
        ; Exact mapped bytes EB 4D: jmp 0x41fd5a
        __asm _emit 0xeb
        __asm _emit 0x4d
        push 0
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 1E 1C FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 FD 17 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 80020f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EA A3 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2cdch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1204h]
        ; Exact mapped bytes E8 A2 1C FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2cdch]
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
        add esp, 2d1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7C 50 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x50
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
