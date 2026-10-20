// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041952D .. +0x3BD bytes.
extern "C" __declspec(naked) void FUN_0041952d_0041952D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579cach
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
        sub esp, 70h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 7ch]
        mov ecx, 1ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x41956b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 63 03 00 00: jmp 0x4198ce
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ah
        push 5a1360h
        push 24h
        ; Exact mapped bytes E8 BA 3A 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 12: je 0x41959e
        __asm _emit 0x74
        __asm _emit 0x12
        push 4b0h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F7 78 FF FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x4195a5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 64h]
        add edx, 64h
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B F2 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x419619
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 64h]
        add eax, 64h
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F1 F1 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 64h]
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C7 79 FF FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 5a1394h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B8 79 FF FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 47: jmp 0x419660
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3A: je 0x419659
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 1A: je 0x41964b
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 9A F1 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x419652
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 20h], 0
        xor eax, eax
        ; Exact mapped bytes E9 6E 02 00 00: jmp 0x4198ce
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x419672
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 5
        ; Exact mapped bytes 7D 67: jge 0x4196df
        __asm _emit 0x7d
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 64h]
        cmp dword ptr [eax + edx*8 + 90h], 0
        ; Exact mapped bytes 74 55: je 0x4196dd
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + edx*8 + 90h]
        push ecx
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 72 CD 05 00: call 0x476416
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0B: jne 0x4196b4
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 29: jmp 0x4196dd
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + eax*8 + 90h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push 5a1398h
        ; Exact mapped bytes E8 3B 65 0B 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x65
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 8A: jmp 0x419669
        __asm _emit 0xeb
        __asm _emit 0x8a
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        add ecx, 4
        ; Exact mapped bytes E8 72 0D 00 00: call 0x41a460
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        add ecx, 4
        ; Exact mapped bytes E8 9E 0D 00 00: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 AD 10 00 00: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x419772
        __asm _emit 0x74
        __asm _emit 0x56
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EC 0F 00 00: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 4
        mov dword ptr [ebp - 24h], eax
        mov esi, esp
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 F0 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7C 78 FF FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 5a13e0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6D 78 FF FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        push 0
        lea edx, [ebp - 40h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 D0 0F 00 00: call 0x41a740
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 95: jmp 0x419707
        __asm _emit 0xeb
        __asm _emit 0x95
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x419848
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0C 0D FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x4197ff
        __asm _emit 0x74
        __asm _emit 0x77
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FE 0C FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D5 0C FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        push 80020f01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 DA 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x4197fd
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3A: je 0x4197f3
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 1A: je 0x4197e5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 00 F0 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x4197ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 20h], 0
        mov eax, 1
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x4198ce
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x419846
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3A: je 0x41983f
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 1A: je 0x419831
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 B4 EF 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x419838
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov dword ptr [ebp - 20h], 0
        xor eax, eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x4198ce
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x41988c
        __asm _emit 0xeb
        __asm _emit 0x44
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3A: je 0x419888
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 1A: je 0x41987a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 6B EF 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x419881
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 20h], 0
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x4198ce
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3A: je 0x4198cc
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 1A: je 0x4198be
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 27 EF 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4198c5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov dword ptr [ebp - 20h], 0
        xor eax, eax
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
        add esp, 7ch
        cmp ebp, esp
        ; Exact mapped bytes E8 FC EE 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
