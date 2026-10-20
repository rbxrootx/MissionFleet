// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047B662 .. +0x523 bytes.
extern "C" __declspec(naked) void FUN_0047b662_0047B662() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c1d1h
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
        sub esp, 88h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 94h]
        mov ecx, 22h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 DB 01 00 00: je 0x47b881
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 28 00 00: call 0x47df60
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 0F 84 C7 01 00 00: je 0x47b881
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x47b7fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 63: je 0x47b739
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 28 00 00: call 0x47dfa0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 28 00 00: call 0x47df80
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes E8 7C 28 00 00: call 0x47df80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 28h], ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 28 00 00: call 0x47dfc0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 30h], ecx
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x47b7f8
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x47b757
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x47b7f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 80h
        ; Exact mapped bytes 0F 8D 8A 00 00 00: jge 0x47b7f8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6A AF FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x47b787
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5E AF FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 6C: jmp 0x47b7f3
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 28h], ecx
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 27 00 00: call 0x47dfa0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 27 00 00: call 0x47df80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes E8 BF 27 00 00: call 0x47df80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 28h], ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 27 00 00: call 0x47dfc0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 30h], ecx
        ; Exact mapped bytes EB 05: jmp 0x47b7f8
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x47b74e
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 50: jmp 0x47b84a
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 27 00 00: call 0x47df80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 27 00 00: call 0x47dfa0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 27 00 00: call 0x47dfc0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 30h]
        add eax, 1
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 30h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 26 00 00: call 0x47df20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + 8]
        mov edx, dword ptr [ecx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8A C0 00 00 00: mov cx, word ptr [edx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, ecx
        mov edx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + 38h]
        add ecx, eax
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 38h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        mov ecx, dword ptr [ecx + eax + 16e4ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 34h], 63h
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 3ch], edx
        lea eax, [ebp - 34h]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 F8 7E F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 80 01 00 00: je 0x47ba53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ach
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 10h]
        shr ecx, 4
        and ecx, 0ffh
        push ecx
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 45 AE FB FF: call 0x436760
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 90h], edx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 14h
        ; Exact mapped bytes E8 E7 12 00 00: call 0x47cc30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 81 AE FB FF: call 0x4367d9
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 74h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 14h
        ; Exact mapped bytes E8 86 12 00 00: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 09 17 00 00: call 0x47d080
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 904h], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 904h
        ; Exact mapped bytes E8 74 16 00 00: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 33 CE 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x47b9d3
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 24h]
        mov esi, dword ptr [eax + 10h]
        shr esi, 4
        and esi, 0ffh
        mov ecx, dword ptr [ebp + 8]
        add ecx, 904h
        ; Exact mapped bytes E8 42 16 00 00: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 74 7E: je 0x47ba51
        __asm _emit 0x74
        __asm _emit 0x7e
        lea ecx, [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 14h
        ; Exact mapped bytes E8 BB 11 00 00: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 08: jmp 0x47b9f4
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 4C 16 00 00: call 0x47d040
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 14h
        ; Exact mapped bytes E8 EA 11 00 00: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 01 17 00 00: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x47ba51
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E4 15 00 00: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 CD 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x47ba4f
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 904h], eax
        ; Exact mapped bytes EB 02: jmp 0x47ba51
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9B: jmp 0x47b9ec
        __asm _emit 0xeb
        __asm _emit 0x9b
        ; Exact mapped bytes EB 0F: jmp 0x47ba62
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 BC FC FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x47bb66
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 14h
        ; Exact mapped bytes E8 50 13 00 00: call 0x47cdc0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 14h
        ; Exact mapped bytes E8 6E 11 00 00: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        push 0
        lea eax, [ebp - 84h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 28 16 00 00: call 0x47d0c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 70 15 00 00: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 57 9A 0B 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 17 CD 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 D8 35 FC FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 88h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 7B: je 0x47bb64
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 0F B6 91 70 01 00 00: movzx dx, byte ptr [ecx + 0x170]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 88h]
        mov cl, byte ptr [eax + 2ch]
        mov byte ptr [ebp - 2ch], cl
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 66 8B 88 84 01 00 00: mov cx, word ptr [eax + 0x184]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D D2: mov word ptr [ebp - 0x2e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F7 8C F8 FF: call 0x404820
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 2bh], al
        push 6
        lea edx, [ebp - 30h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 170h]
        or edx, 400000h
        push edx
        push 80020116h
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 99 DF 00 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x47bb66
        __asm _emit 0xeb
        __asm _emit 0x02
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
        add esp, 94h
        cmp ebp, esp
        ; Exact mapped bytes E8 61 CC 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
