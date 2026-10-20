// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044E568 .. +0x717 bytes.
extern "C" __declspec(naked) void FUN_0044e568_0044E568() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b25eh
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
        sub esp, 74h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 80h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x44e5ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 8D A9 06 00 00: jge 0x44ec60
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 64h]
        cmp dword ptr [edx + 10dch], 0
        ; Exact mapped bytes 74 15: je 0x44e5d8
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 10dch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [edx + 10dch], ecx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 10dch]
        push ecx
        ; Exact mapped bytes E8 19 6F 0E 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 E2 A1 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3B 0D 00 00: call 0x44f340
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 7ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 DC 32 FF FF: call 0x441900
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 2A 06 00 00: je 0x44ec5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + edx + 48h], 0
        ; Exact mapped bytes 0F 85 9C 05 00 00: jne 0x44ebe4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        add edx, ecx
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 AC 28 5E 00: call dword ptr [0x5e28ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7A A1 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 61 0D 00 00: call 0x44f3d0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 36 0A FF FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 4A 05 00 00: jne 0x44ebc8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 0b0h
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx + eax + 17h], 0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 168h], 0
        ; Exact mapped bytes 75 26: jne 0x44e6c1
        __asm _emit 0x75
        __asm _emit 0x26
        push 211h
        push 5b7098h
        push 217bch
        ; Exact mapped bytes E8 84 E9 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 168h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 8e8h], 0
        ; Exact mapped bytes 75 5E: jne 0x44e72b
        __asm _emit 0x75
        __asm _emit 0x5e
        push 215h
        push 5b7098h
        push 2b8h
        ; Exact mapped bytes E8 52 E9 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 17: je 0x44e70b
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 0c7ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DA F8 02 00: call 0x47dfe0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44e712
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 8e8h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 A1 A0 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        add edx, ecx
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 AC 28 5E 00: call dword ptr [0x5e28ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 83 A0 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 14h]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 D4 B6 05 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 55 0C 00 00: call 0x44f3d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 7F 3E 03 00: call 0x482605
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 0F 04 00 00: je 0x44eb9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + edx + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x44e7b5
        __asm _emit 0x75
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A1 BB FF FF: call 0x44a351
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 51 03 00 00: jmp 0x44eb06
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 4ch]
        and eax, 1000000h
        test eax, eax
        ; Exact mapped bytes 74 7A: je 0x44e848
        __asm _emit 0x74
        __asm _emit 0x7a
        push 1000000h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A7 B7 FF FF: call 0x449f82
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push 244h
        push 5b7098h
        push 0ch
        ; Exact mapped bytes E8 47 E8 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 1E: je 0x44e81d
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 50h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A8 13 01 00: call 0x45fbc0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x44e824
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 60 B9 FF FF: call 0x44a1a3
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x44e8d6
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 4ch]
        and eax, 2000000h
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x44e8d6
        __asm _emit 0x74
        __asm _emit 0x75
        push 2000000h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 14 B7 FF FF: call 0x449f82
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push 24ah
        push 5b7098h
        push 1ch
        ; Exact mapped bytes E8 B4 E7 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 1E: je 0x44e8b0
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 50h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A5 1E 01 00: call 0x460750
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x44e8b7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9A BA FF FF: call 0x44a370
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 4ch]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x44e98a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 82 B6 FF FF: call 0x449f82
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        push 251h
        push 5b7098h
        push 38h
        ; Exact mapped bytes E8 22 E7 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 40: je 0x44e964
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 41 03 01 00: call 0x45eca0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x44e96b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 B8 FF FF: call 0x44a1a3
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 4ch]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x44ea4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D3 B5 FF FF: call 0x449f82
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        push 258h
        push 5b7098h
        push 88h
        ; Exact mapped bytes E8 70 E6 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 51: je 0x44ea27
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 6ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 7E 09 01 00: call 0x45f3a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44ea2e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 56 B7 FF FF: call 0x44a1a3
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 4ch]
        and eax, 10000h
        test eax, eax
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x44eb06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10000h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0B B5 FF FF: call 0x449f82
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        push 25fh
        push 5b7098h
        push 48h
        ; Exact mapped bytes E8 AB E5 09 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 45: je 0x44eae0
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 64h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 5ch]
        push eax
        mov ecx, dword ptr [edx + ecx + 58h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx + 60h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 05 20 01 00: call 0x460ae0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x44eae7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 5ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9D B6 FF FF: call 0x44a1a3
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx + 78h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 37 C2 FF FF: call 0x44ad56
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        xor eax, eax
        ; Exact mapped bytes A0 79 CB 5D 00: mov al, byte ptr [0x5dcb79]
        __asm _emit 0xa0
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + edx + 0a8h], eax
        ; Exact mapped bytes 75 0A: jne 0x44eb45
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D1 C2 FF FF: call 0x44ae16
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C0 86 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D6 4D FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F B8 FB FF: call 0x40a3d0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x44eb9b
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BC 4D FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 75 4D FB FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 29: jmp 0x44ebc6
        __asm _emit 0xeb
        __asm _emit 0x29
        push 0
        push 0
        push 0
        push 8002h
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx + 48h]
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6C 86 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x44ebe2
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 8002h
        push 6
        push 80000003h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 50 86 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 77: jmp 0x44ec5b
        __asm _emit 0xeb
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + edx + 48h], 6
        ; Exact mapped bytes 74 2B: je 0x44ec22
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        push 0
        push 0
        push 8002h
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + ecx + 48h]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 12 86 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x44ec32
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 22 8B FF FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4C 8A FF FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 4D FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F B7 FB FF: call 0x40a3d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x44ec5b
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FC 4C FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 4C FB FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4c
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 F9 FF FF: jmp 0x44e5a2
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
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
        add esp, 80h
        cmp ebp, esp
        ; Exact mapped bytes E8 67 9B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
