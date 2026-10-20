// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043E593 .. +0x910 bytes.
extern "C" __declspec(naked) void FUN_0043e593_0043E593() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aa24h
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
        sub esp, 1c4h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1d0h]
        mov ecx, 71h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 190h], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 A2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [ecx + 40c88h], eax
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E9 A1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 190h]
        mov dword ptr [edx + 40c90h], eax
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [eax + 40c8ch], 320h
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [ecx + 40c94h], 927c0h
        push 0f6h
        push 5b6084h
        push 1920h
        ; Exact mapped bytes E8 FC E9 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 114h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 1A: je 0x43e66a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 190h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 5F 39 04 00: call 0x481fc1
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e674
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov eax, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 110h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 40ca8h], edx
        push 0f7h
        push 5b6084h
        push 4c38h
        ; Exact mapped bytes E8 86 E9 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 11ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 1A: je 0x43e6e0
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 A8 8A FF FF: call 0x437180
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e6ea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov ecx, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 118h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [edx + 40cach], eax
        push 0f8h
        push 5b6084h
        push 46ch
        ; Exact mapped bytes E8 10 E9 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 124h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 1A: je 0x43e756
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 B2 7C FC FF: call 0x406400
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e760
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 120h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 190h]
        mov ecx, dword ptr [ebp - 120h]
        mov dword ptr [eax + 40cb4h], ecx
        push 0f9h
        push 5b6084h
        push 18h
        ; Exact mapped bytes E8 9D E8 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 12ch], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 1A: je 0x43e7c9
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 190h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 0F 53 FC FF: call 0x403ad0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e7d3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 128h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ecx + 40cb0h], edx
        push 0fah
        push 5b6084h
        push 14h
        ; Exact mapped bytes E8 2A E8 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 134h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 1C: je 0x43e83e
        __asm _emit 0x74
        __asm _emit 0x1c
        push 64h
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 DA 99 FF FF: call 0x438210
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e848
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 130h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [ebp - 130h]
        mov dword ptr [edx + 40cb8h], eax
        push 0fbh
        push 5b6084h
        push 217d8h
        ; Exact mapped bytes E8 B2 E7 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 13ch], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 1C: je 0x43e8b6
        __asm _emit 0x74
        __asm _emit 0x1c
        push 64h
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 82 57 FC FF: call 0x404030
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e8c0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov edx, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp - 138h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 190h]
        mov ecx, dword ptr [ebp - 138h]
        mov dword ptr [eax + 40cbch], ecx
        push 0fch
        push 5b6084h
        push 1ch
        ; Exact mapped bytes E8 3D E7 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 144h], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 1C: je 0x43e92b
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov edx, dword ptr [ebp - 190h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 5D A7 FD FF: call 0x419080
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e935
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov eax, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 140h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ecx + 40cc0h], edx
        push 0fdh
        push 5b6084h
        push 30h
        ; Exact mapped bytes E8 C8 E6 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14ch], eax
        mov dword ptr [ebp - 4], 7
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 1C: je 0x43e9a0
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 28 D9 FC FF: call 0x40c2c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43e9aa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov ecx, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 148h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [edx + 40cc4h], eax
        push 0ffh
        push 5b6084h
        push 34h
        ; Exact mapped bytes E8 53 E6 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 154h], eax
        mov dword ptr [ebp - 4], 8
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 13: je 0x43ea0c
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 FC 7B FD FF: call 0x416600
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43ea16
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov ecx, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 150h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 150h]
        ; Exact mapped bytes 89 15 80 CB 5D 00: mov dword ptr [0x5dcb80], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        push 102h
        push 5b6084h
        push 4
        ; Exact mapped bytes E8 ED E5 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 15ch], eax
        mov dword ptr [ebp - 4], 9
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 13: je 0x43ea72
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 46 AC FF FF: call 0x4396b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43ea7c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov eax, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 158h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ebp - 158h]
        mov dword ptr [ecx + 40c98h], edx
        mov esi, esp
        push 5b6174h
        lea eax, [ebp - 10ch]
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
        ; Exact mapped bytes E8 21 9D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x9d
        __asm _emit 0x06
        __asm _emit 0x00
        push 105h
        push 5b6084h
        push 0ca4h
        ; Exact mapped bytes E8 60 E5 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 164h], eax
        mov dword ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 29: je 0x43eb15
        __asm _emit 0x74
        __asm _emit 0x29
        push 2710h
        lea ecx, [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 43 77 FE FF: call 0x426250
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x43eb1f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 160h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [edx + 40ccch], eax
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ecx + 40ccch]
        push edx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 42 BF 04 00: call 0x48aa9e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b618ch
        lea eax, [ebp - 10ch]
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
        ; Exact mapped bytes E8 66 9C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        push 109h
        push 5b6084h
        push 0cb4h
        ; Exact mapped bytes E8 A5 E4 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 16ch], eax
        mov dword ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 29: je 0x43ebd0
        __asm _emit 0x74
        __asm _emit 0x29
        push 2710h
        lea ecx, [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 28 35 03 00: call 0x4720f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43ebda
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov ecx, dword ptr [ebp - 1c0h]
        mov dword ptr [ebp - 168h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [ebp - 168h]
        mov dword ptr [edx + 40cc8h], eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 8D BE 04 00: call 0x48aa9e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b61a0h
        lea edx, [ebp - 10ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 B1 9B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9b
        __asm _emit 0x06
        __asm _emit 0x00
        push 10ch
        push 5b6084h
        push 0ca4h
        ; Exact mapped bytes E8 F0 E3 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 174h], eax
        mov dword ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 29: je 0x43ec85
        __asm _emit 0x74
        __asm _emit 0x29
        push 2710h
        lea eax, [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ecx + 40h]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 A3 63 FD FF: call 0x415020
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43ec8f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 170h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ebp - 170h]
        mov dword ptr [ecx + 40cd0h], edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 D8 BD 04 00: call 0x48aa9e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        push 10eh
        push 5b6084h
        push 40014h
        ; Exact mapped bytes E8 59 E3 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe3
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 17ch], eax
        mov dword ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 1A: je 0x43ed0d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 9B 7D FE FF: call 0x426aa0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43ed17
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov edx, dword ptr [ebp - 1c8h]
        mov dword ptr [ebp - 178h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 190h]
        mov ecx, dword ptr [eax + 40cc8h]
        mov edx, dword ptr [ebp - 178h]
        mov dword ptr [ecx + 0ca0h], edx
        push 10fh
        push 5b6084h
        push 1a0h
        ; Exact mapped bytes E8 DD E2 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 184h], eax
        mov dword ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 1C: je 0x43ed8b
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 4D 25 FE FF: call 0x4212d0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x43ed95
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov ecx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 180h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [eax + 0ca4h], ecx
        mov esi, esp
        push 5b61b4h
        lea edx, [ebp - 10ch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 02 9A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        push 112h
        push 5b6084h
        push 0cc0h
        ; Exact mapped bytes E8 41 E2 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18ch], eax
        mov dword ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 29: je 0x43ee34
        __asm _emit 0x74
        __asm _emit 0x29
        push 2710h
        lea eax, [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ecx + 40h]
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 C4 29 04 00: call 0x4817f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x43ee3e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov eax, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 188h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 190h]
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ecx + 40cd4h], edx
        mov eax, dword ptr [ebp - 188h]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 29 BC 04 00: call 0x48aa9e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 16 2B 00 00: call 0x441990
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 190h]
        mov dword ptr [ecx + 40c78h], eax
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
        add esp, 1d0h
        cmp ebp, esp
        ; Exact mapped bytes E8 41 99 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
