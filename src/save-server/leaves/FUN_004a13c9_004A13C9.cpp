// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A13C9 .. +0x75C bytes.
extern "C" __declspec(naked) void FUN_004a13c9_004A13C9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 62 20 00 00: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a13f8
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b2h
        push 671534h
        ; Exact mapped bytes E8 4D 79 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a13f8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4a13d5
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x4a1422
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F4 82 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 06 00 00: je 0x4a1abe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 25h
        ; Exact mapped bytes 75 1A: jne 0x4a1455
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 CC 82 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 25h
        ; Exact mapped bytes 75 16: jne 0x4a146b
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 52 83 FA FF: call 0x4497b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB A8: jmp 0x4a1413
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4a148a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 8C 82 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 67: je 0x4a14fb
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 23h
        ; Exact mapped bytes 75 0B: jne 0x4a14aa
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 4F: jmp 0x4a14f9
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2ah
        ; Exact mapped bytes 75 14: jne 0x4a14c9
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx - 4]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 30: jmp 0x4a14f9
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2dh
        ; Exact mapped bytes 74 21: je 0x4a14f5
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2bh
        ; Exact mapped bytes 74 16: je 0x4a14f5
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 74 0B: je 0x4a14f5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 20h
        ; Exact mapped bytes 75 02: jne 0x4a14f7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4a14f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4a14fb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 80: jmp 0x4a147b
        __asm _emit 0xeb
        __asm _emit 0x80
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 3F: jne 0x4a1540
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C6 4B FC FF: call 0x4660d0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0F: jmp 0x4a1521
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F5 81 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4a1540
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        ; Exact mapped bytes E8 09 85 FC FF: call 0x469a40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4a1540
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x4a1512
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 14: jge 0x4a155a
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1dah
        push 671534h
        ; Exact mapped bytes E8 EB 77 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a155a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4a1540
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2eh
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x4a1612
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 91 81 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2ah
        ; Exact mapped bytes 75 23: jne 0x4a15b3
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 65 81 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 3F: jmp 0x4a15f2
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 14 4B FC FF: call 0x4660d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x4a15d3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 43 81 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x4a15f2
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        push eax
        ; Exact mapped bytes E8 57 84 FC FF: call 0x469a40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4a15f2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x4a15c4
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4a160c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1eeh
        push 671534h
        ; Exact mapped bytes E8 39 77 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a160c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a15f2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 14h], 0
        push 3
        push 671540h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 67 81 FA FF: call 0x449790
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4a1642
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        add eax, 3
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], 40000h
        ; Exact mapped bytes EB 69: jmp 0x4a16ab
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        sub eax, 46h
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 26h
        ; Exact mapped bytes 77 51: ja 0x4a16ab
        __asm _emit 0x77
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 40h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 4a1b35h]
        ; Exact mapped bytes FF 24 8D 25 1B 4A 00: jmp dword ptr [ecx*4 + 0x4a1b25]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0x4a
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 10000h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 94 80 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 27: jmp 0x4a16ab
        __asm _emit 0xeb
        __asm _emit 0x27
        mov dword ptr [ebp - 14h], 20000h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 7C 80 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x4a16ab
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 6B 80 FA FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        or ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 10063h
        ; Exact mapped bytes 7F 53: jg 0x4a1713
        __asm _emit 0x7f
        __asm _emit 0x53
        cmp dword ptr [ebp - 44h], 10063h
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x4a1774
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 73h
        ; Exact mapped bytes 7F 25: jg 0x4a16f8
        __asm _emit 0x7f
        __asm _emit 0x25
        cmp dword ptr [ebp - 44h], 73h
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x4a179e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 43h
        ; Exact mapped bytes 74 7C: je 0x4a175f
        __asm _emit 0x74
        __asm _emit 0x7c
        cmp dword ptr [ebp - 44h], 53h
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x4a17ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 63h
        ; Exact mapped bytes 74 6C: je 0x4a175f
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes E9 DA 01 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 10043h
        ; Exact mapped bytes 74 73: je 0x4a1774
        __asm _emit 0x74
        __asm _emit 0x73
        cmp dword ptr [ebp - 44h], 10053h
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x4a183c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 20053h
        ; Exact mapped bytes 7F 28: jg 0x4a1744
        __asm _emit 0x7f
        __asm _emit 0x28
        cmp dword ptr [ebp - 44h], 20053h
        ; Exact mapped bytes 0F 84 5E 01 00 00: je 0x4a1887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 10073h
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x4a183c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 20043h
        ; Exact mapped bytes 74 4A: je 0x4a1789
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes E9 8E 01 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 20063h
        ; Exact mapped bytes 74 3C: je 0x4a1789
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 44h], 20073h
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x4a1887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 2
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 2
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes E9 49 01 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 2
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x4a17bf
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes EB 28: jmp 0x4a17e7
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7D 09: jge 0x4a17db
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 1
        ; Exact mapped bytes EB 06: jmp 0x4a17e1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 09: jne 0x4a180d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes EB 2A: jmp 0x4a1837
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 6A 78 FC FF: call 0x469080
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7D 09: jge 0x4a182b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes EB 06: jmp 0x4a1831
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x4a18d2
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 09: jne 0x4a185d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes EB 28: jmp 0x4a1885
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7D 09: jge 0x4a1879
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 1
        ; Exact mapped bytes EB 06: jmp 0x4a187f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 4B: jmp 0x4a18d2
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 09: jne 0x4a18a8
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes EB 2A: jmp 0x4a18d2
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 CF 77 FC FF: call 0x469080
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7D 09: jge 0x4a18c6
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 1
        ; Exact mapped bytes EB 06: jmp 0x4a18cc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 43: je 0x4a191b
        __asm _emit 0x74
        __asm _emit 0x43
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x4a18fa
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 08: jge 0x4a18ee
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 06: jmp 0x4a18f4
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7E 08: jle 0x4a190a
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x4a1910
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 95 01 00 00: jmp 0x4a1ab0
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        sub eax, 47h
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 31h
        ; Exact mapped bytes 0F 87 56 01 00 00: ja 0x4a1a8d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 4a1b74h]
        ; Exact mapped bytes FF 24 8D 5C 1B 4A 00: jmp dword ptr [ecx*4 + 0x4a1b5c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x1b
        __asm _emit 0x4a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        and eax, 40000h
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x4a1960
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x4a1969
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov dword ptr [ebp - 10h], 20h
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 1ch]
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7E 08: jle 0x4a1983
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4a198c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x4a1ab0
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp - 10h], 80h
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 1ch]
        cmp dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 7E 08: jle 0x4a19ba
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 09: jmp 0x4a19c3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x4a1ab0
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        add eax, 13eh
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 7E 08: jle 0x4a19e3
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes EB 0C: jmp 0x4a19ef
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 1ch]
        add edx, 13eh
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 6ch]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 A4 45 FC FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], esp
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 8
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ; Exact mapped bytes DD 5D CC: fstp qword ptr [ebp - 0x34]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 671544h
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 06 7F FC FF: call 0x469940
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 18h
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 FA 3C FC FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 62: jmp 0x4a1ab0
        __asm _emit 0xeb
        __asm _emit 0x62
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [ebp - 10h], 20h
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 7E 08: jle 0x4a1a71
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes EB 09: jmp 0x4a1a7a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 2E: jmp 0x4a1ab0
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 23: jmp 0x4a1ab0
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a1aaa
        __asm _emit 0x74
        __asm _emit 0x14
        push 2a9h
        push 671534h
        ; Exact mapped bytes E8 9B 72 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a1aaa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4a1a8d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 55 F9 FF FF: jmp 0x4a1413
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 CE B5 02 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 E3 3C FC FF: call 0x4657c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov esi, eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8C 32 08 00: call 0x524d76
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7E 14: jle 0x4a1b02
        __asm _emit 0x7e
        __asm _emit 0x14
        push 2b2h
        push 671534h
        ; Exact mapped bytes E8 43 72 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a1b02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C2: jne 0x4a1aca
        __asm _emit 0x75
        __asm _emit 0xc2
        push -1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C1 B6 02 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        lea esp, [ebp - 80h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
