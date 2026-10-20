// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CE1C9 .. +0x712 bytes.
extern "C" __declspec(naked) void FUN_004ce1c9_004CE1C9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 52 1C 00 00: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ce1f8
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b2h
        push 5c4c5ch
        ; Exact mapped bytes E8 0D 68 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce1f8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4ce1d5
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x4ce222
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 64 EE FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 47 06 00 00: je 0x4ce877
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 25h
        ; Exact mapped bytes 75 1A: jne 0x4ce255
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3C EE FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 25h
        ; Exact mapped bytes 75 16: jne 0x4ce26b
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C2 EE FB FF: call 0x48d120
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB A8: jmp 0x4ce213
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4ce28a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 FC ED FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 67: je 0x4ce2fb
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 23h
        ; Exact mapped bytes 75 0B: jne 0x4ce2aa
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 4F: jmp 0x4ce2f9
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2ah
        ; Exact mapped bytes 75 14: jne 0x4ce2c9
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx - 4]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 30: jmp 0x4ce2f9
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2dh
        ; Exact mapped bytes 74 21: je 0x4ce2f5
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2bh
        ; Exact mapped bytes 74 16: je 0x4ce2f5
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 74 0B: je 0x4ce2f5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 20h
        ; Exact mapped bytes 75 02: jne 0x4ce2f7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ce2f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ce2fb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 80: jmp 0x4ce27b
        __asm _emit 0xeb
        __asm _emit 0x80
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 3F: jne 0x4ce340
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 26 B3 FD FF: call 0x4a9630
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0F: jmp 0x4ce321
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 65 ED FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4ce340
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        ; Exact mapped bytes E8 79 F4 FD FF: call 0x4ad7b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4ce340
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x4ce312
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 14: jge 0x4ce35a
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1dah
        push 5c4c5ch
        ; Exact mapped bytes E8 AB 66 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce35a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ce340
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2eh
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x4ce412
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 01 ED FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2ah
        ; Exact mapped bytes 75 23: jne 0x4ce3b3
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
        ; Exact mapped bytes E8 D5 EC FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 3F: jmp 0x4ce3f2
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 74 B2 FD FF: call 0x4a9630
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x4ce3d3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 B3 EC FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x4ce3f2
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        push eax
        ; Exact mapped bytes E8 C7 F3 FD FF: call 0x4ad7b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4ce3f2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x4ce3c4
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4ce40c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1eeh
        push 5c4c5ch
        ; Exact mapped bytes E8 F9 65 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce40c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4ce3f2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 14h], 0
        push 3
        push 5c4c68h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 D7 EC FB FF: call 0x48d100
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4ce442
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        add eax, 3
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], 40000h
        ; Exact mapped bytes EB 69: jmp 0x4ce4ab
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        sub eax, 46h
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 26h
        ; Exact mapped bytes 77 51: ja 0x4ce4ab
        __asm _emit 0x77
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 34h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 4ce8ebh]
        ; Exact mapped bytes FF 24 8D DB E8 4C 00: jmp dword ptr [ecx*4 + 0x4ce8db]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 10000h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 04 EC FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 27: jmp 0x4ce4ab
        __asm _emit 0xeb
        __asm _emit 0x27
        mov dword ptr [ebp - 14h], 20000h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 EC EB FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x4ce4ab
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 DB EB FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        or ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 10063h
        ; Exact mapped bytes 7F 53: jg 0x4ce513
        __asm _emit 0x7f
        __asm _emit 0x53
        cmp dword ptr [ebp - 38h], 10063h
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x4ce574
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 73h
        ; Exact mapped bytes 7F 25: jg 0x4ce4f8
        __asm _emit 0x7f
        __asm _emit 0x25
        cmp dword ptr [ebp - 38h], 73h
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x4ce59e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 43h
        ; Exact mapped bytes 74 7C: je 0x4ce55f
        __asm _emit 0x74
        __asm _emit 0x7c
        cmp dword ptr [ebp - 38h], 53h
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x4ce5ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 63h
        ; Exact mapped bytes 74 6C: je 0x4ce55f
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes E9 DA 01 00 00: jmp 0x4ce6d2
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 10043h
        ; Exact mapped bytes 74 73: je 0x4ce574
        __asm _emit 0x74
        __asm _emit 0x73
        cmp dword ptr [ebp - 38h], 10053h
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x4ce63c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x4ce6d2
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 20053h
        ; Exact mapped bytes 7F 28: jg 0x4ce544
        __asm _emit 0x7f
        __asm _emit 0x28
        cmp dword ptr [ebp - 38h], 20053h
        ; Exact mapped bytes 0F 84 5E 01 00 00: je 0x4ce687
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 10073h
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x4ce63c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 20043h
        ; Exact mapped bytes 74 4A: je 0x4ce589
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes E9 8E 01 00 00: jmp 0x4ce6d2
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 20063h
        ; Exact mapped bytes 74 3C: je 0x4ce589
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 38h], 20073h
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x4ce687
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x4ce6d2
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 2
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x4ce6d2
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 2
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes E9 49 01 00 00: jmp 0x4ce6d2
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 2
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x4ce6d2
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
        ; Exact mapped bytes 75 09: jne 0x4ce5bf
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes EB 28: jmp 0x4ce5e7
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7D 09: jge 0x4ce5db
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 1
        ; Exact mapped bytes EB 06: jmp 0x4ce5e1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x4ce6d2
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
        ; Exact mapped bytes 75 09: jne 0x4ce60d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes EB 2A: jmp 0x4ce637
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 DA E8 FD FF: call 0x4acef0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7D 09: jge 0x4ce62b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 1
        ; Exact mapped bytes EB 06: jmp 0x4ce631
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x4ce6d2
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
        ; Exact mapped bytes 75 09: jne 0x4ce65d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes EB 28: jmp 0x4ce685
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7D 09: jge 0x4ce679
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 06: jmp 0x4ce67f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 4B: jmp 0x4ce6d2
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 09: jne 0x4ce6a8
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes EB 2A: jmp 0x4ce6d2
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 3F E8 FD FF: call 0x4acef0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7D 09: jge 0x4ce6c6
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 1
        ; Exact mapped bytes EB 06: jmp 0x4ce6cc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 43: je 0x4ce71b
        __asm _emit 0x74
        __asm _emit 0x43
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x4ce6fa
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 08: jge 0x4ce6ee
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 06: jmp 0x4ce6f4
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7E 08: jle 0x4ce70a
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes EB 06: jmp 0x4ce710
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x4ce869
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 54h]
        sub eax, 47h
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 31h
        ; Exact mapped bytes 0F 87 0F 01 00 00: ja 0x4ce846
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 4ce92ah]
        ; Exact mapped bytes FF 24 8D 12 E9 4C 00: jmp dword ptr [ecx*4 + 0x4ce912]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        and eax, 40000h
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x4ce760
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ce769
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov dword ptr [ebp - 10h], 20h
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 1ch]
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7E 08: jle 0x4ce783
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ce78c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x4ce869
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp - 10h], 80h
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 1ch]
        cmp dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 7E 08: jle 0x4ce7ba
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 09: jmp 0x4ce7c3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x4ce869
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [ebp - 10h], 80h
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 138h
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 7E 08: jle 0x4ce7f4
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 60h], edx
        ; Exact mapped bytes EB 0B: jmp 0x4ce7ff
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        add eax, 138h
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 62: jmp 0x4ce869
        __asm _emit 0xeb
        __asm _emit 0x62
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov dword ptr [ebp - 10h], 20h
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 1ch]
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7E 08: jle 0x4ce82a
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ce833
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 2E: jmp 0x4ce869
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 23: jmp 0x4ce869
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4ce863
        __asm _emit 0x74
        __asm _emit 0x14
        push 2a0h
        push 5c4c5ch
        ; Exact mapped bytes E8 A2 61 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce863
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4ce846
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 9C F9 FF FF: jmp 0x4ce213
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 75 F7 01 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 9A B1 FD FF: call 0x4a9a30
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov esi, eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D3 26 06 00: call 0x530f76
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7E 14: jle 0x4ce8bb
        __asm _emit 0x7e
        __asm _emit 0x14
        push 2a9h
        push 5c4c5ch
        ; Exact mapped bytes E8 4A 61 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce8bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C2: jne 0x4ce883
        __asm _emit 0x75
        __asm _emit 0xc2
        push -1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 68 F8 01 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
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
