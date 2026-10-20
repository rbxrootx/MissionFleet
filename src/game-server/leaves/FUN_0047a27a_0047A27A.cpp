// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047A27A .. +0x5C1 bytes.
extern "C" __declspec(naked) void FUN_0047a27a_0047A27A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 648h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 648h]
        mov ecx, 192h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 640h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x47a2ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 640h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 0c24h]
        ; Exact mapped bytes 0F 8D CA 04 00 00: jge 0x47a7a9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 CF FF F8 FF: call 0x40a2c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 04 00 00: je 0x47a7a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 4C 0B 00 00: call 0x47ae60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 71 04 00 00: je 0x47a78d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 F2 0B 00 00: call 0x47af20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 104h
        lea edi, [ebp - 424h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov byte ptr [ebp - 428h], 0
        mov byte ptr [ebp - 42ch], 0
        mov byte ptr [ebp - 430h], 0
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 0c2ch]
        ; Exact mapped bytes E8 6D 01 F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 420h]
        mov dword ptr [ebp - 644h], edx
        cmp dword ptr [ebp - 644h], 80020400h
        ; Exact mapped bytes 77 31: ja 0x47a3ac
        __asm _emit 0x77
        __asm _emit 0x31
        cmp dword ptr [ebp - 644h], 80020400h
        ; Exact mapped bytes 0F 84 5D 03 00 00: je 0x47a6e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 644h], 80020200h
        ; Exact mapped bytes 74 2A: je 0x47a3c1
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp dword ptr [ebp - 644h], 80020300h
        ; Exact mapped bytes 0F 84 41 03 00 00: je 0x47a6e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C8 03 00 00: jmp 0x47a774
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 644h], 80020700h
        ; Exact mapped bytes 0F 84 05 02 00 00: je 0x47a5c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 03 00 00: jmp 0x47a774
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 CD 93 F8 FF: call 0x4037a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x47a4b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes E8 63 0D 00 00: call 0x47b150
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x47a4b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes E8 09 0E 00 00: call 0x47b210
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 81h
        lea edi, [ebp - 634h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [ebp - 434h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x47a4b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 428h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 634h]
        and ecx, 0ffh
        cmp eax, ecx
        ; Exact mapped bytes 7D 1F: jge 0x47a45d
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov dl, byte ptr [ebp - 634h]
        mov byte ptr [ebp - 428h], dl
        mov eax, dword ptr [ebp - 428h]
        and eax, 0ffh
        mov dword ptr [ebp - 648h], eax
        ; Exact mapped bytes EB 0A: jmp 0x47a467
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 648h], 0
        mov cl, byte ptr [ebp - 42ch]
        add cl, byte ptr [ebp - 633h]
        mov byte ptr [ebp - 42ch], cl
        mov dl, byte ptr [ebp - 430h]
        add dl, byte ptr [ebp - 632h]
        mov byte ptr [ebp - 430h], dl
        lea ecx, [ebp - 634h]
        ; Exact mapped bytes E8 CA 0F 00 00: call 0x47b460
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        push eax
        lea eax, [ebp - 631h]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 0c2ch]
        ; Exact mapped bytes E8 14 6B F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x47a4b9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 22 FF FF FF: jmp 0x47a3db
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 430h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x47a59d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 85 EC FB FF FF: movsx eax, byte ptr [ebp - 0x414]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        or al, 80h
        mov byte ptr [ebp - 638h], al
        push 1
        lea ecx, [ebp - 638h]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 D0 6A F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        lea eax, [ebp - 428h]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 0c20h]
        ; Exact mapped bytes E8 B6 6A F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        lea edx, [ebp - 42ch]
        push edx
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 0c20h]
        ; Exact mapped bytes E8 9C 6A F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        lea ecx, [ebp - 430h]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 82 6A F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 0c2ch]
        ; Exact mapped bytes E8 3B FF F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 0c2ch]
        ; Exact mapped bytes E8 09 FF F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 4D 6A F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 418h]
        sub eax, 1
        push eax
        lea ecx, [ebp - 413h]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 2B 6A F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x47a5bc
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 418h]
        push eax
        lea ecx, [ebp - 414h]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 0A 6A F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 01 00 00: jmp 0x47a78b
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 430h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x47a6a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 8D EC FB FF FF: movsx ecx, byte ptr [ebp - 0x414]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        or cl, 80h
        mov byte ptr [ebp - 63ch], cl
        push 1
        lea edx, [ebp - 63ch]
        push edx
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 0c20h]
        ; Exact mapped bytes E8 C8 69 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        lea ecx, [ebp - 428h]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 AE 69 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        lea eax, [ebp - 42ch]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 0c20h]
        ; Exact mapped bytes E8 94 69 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        lea edx, [ebp - 430h]
        push edx
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 0c20h]
        ; Exact mapped bytes E8 7A 69 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 0c2ch]
        ; Exact mapped bytes E8 33 FE F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c2ch]
        ; Exact mapped bytes E8 01 FE F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 0c20h]
        ; Exact mapped bytes E8 45 69 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 418h]
        sub ecx, 1
        push ecx
        lea edx, [ebp - 413h]
        push edx
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 0c20h]
        ; Exact mapped bytes E8 23 69 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x47a6c4
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 418h]
        push ecx
        lea edx, [ebp - 414h]
        push edx
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 0c20h]
        ; Exact mapped bytes E8 02 69 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 18h
        mov edx, dword ptr [ebp - 640h]
        lea eax, [edx + ecx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 18 8E F8 FF: call 0x4034fb
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x47a78b
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 418h]
        push edx
        lea eax, [ebp - 414h]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 0c20h]
        ; Exact mapped bytes E8 BF 68 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 18h
        mov eax, dword ptr [ebp - 640h]
        lea ecx, [eax + edx + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 D5 8D F8 FF: call 0x4034fb
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 18 05 00 00: call 0x47ac50
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes E8 66 05 00 00: call 0x47acb0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcbb4h
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 18h
        mov edx, dword ptr [ebp - 640h]
        lea eax, [edx + ecx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 6E E0 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x47a78b
        __asm _emit 0xeb
        __asm _emit 0x17
        push 1
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 3B 68 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x47a7a4
        __asm _emit 0xeb
        __asm _emit 0x17
        push 1
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 0c20h]
        ; Exact mapped bytes E8 22 68 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 18 FB FF FF: jmp 0x47a2c1
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 D6 FC F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 640h]
        mov ecx, dword ptr [eax + 0c20h]
        ; Exact mapped bytes E8 A4 FC F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 640h]
        mov eax, dword ptr [edx + 0c1ch]
        push eax
        push 80000100h
        mov ecx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 05 F3 00 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 640h]
        mov eax, dword ptr [edx + 0c1ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 640h]
        mov dword ptr [ecx + 0c1ch], eax
        mov edx, dword ptr [ebp - 640h]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 B3 FC F8 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 640h]
        ; Exact mapped bytes E8 13 00 00 00: call 0x47a83b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 648h
        cmp ebp, esp
        ; Exact mapped bytes E8 A9 DF 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
