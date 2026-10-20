// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004726D3 .. +0x13B7 bytes.
extern "C" __declspec(naked) void FUN_004726d3_004726D3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bd8dh
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
        sub esp, 634h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 640h]
        mov ecx, 18dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 634h], ecx
        mov dword ptr [ebp - 10h], 0eah
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x47272a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 3C 13 00 00: jmp 0x473a66
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 0F 85 0B 13 00 00: jne 0x473a49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 638h], edx
        cmp dword ptr [ebp - 638h], 80011034h
        ; Exact mapped bytes 0F 87 C5 00 00 00: ja 0x47281f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 80011034h
        ; Exact mapped bytes 0F 84 BB 0A 00 00: je 0x473225
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 80011004h
        ; Exact mapped bytes 77 76: ja 0x4727ec
        __asm _emit 0x77
        __asm _emit 0x76
        cmp dword ptr [ebp - 638h], 80011004h
        ; Exact mapped bytes 0F 84 00 0D 00 00: je 0x473486
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 8001020eh
        ; Exact mapped bytes 77 35: ja 0x4727c7
        __asm _emit 0x77
        __asm _emit 0x35
        cmp dword ptr [ebp - 638h], 8001020eh
        ; Exact mapped bytes 0F 84 36 0C 00 00: je 0x4733d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 8001020ch
        ; Exact mapped bytes 0F 84 9D 0B 00 00: je 0x47334f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 8001020dh
        ; Exact mapped bytes 0F 84 F5 0B 00 00: je 0x4733b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 80 12 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 8001040ah
        ; Exact mapped bytes 0F 84 6F 09 00 00: je 0x473146
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 80011002h
        ; Exact mapped bytes 0F 84 08 0A 00 00: je 0x4731ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5B 12 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 638h]
        add eax, 7ffeeffbh
        mov dword ptr [ebp - 638h], eax
        cmp dword ptr [ebp - 638h], 2dh
        ; Exact mapped bytes 0F 87 3D 12 00 00: ja 0x473a47
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 638h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 473a9eh]
        ; Exact mapped bytes FF 24 8D 8A 3A 47 00: jmp dword ptr [ecx*4 + 0x473a8a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x3a
        __asm _emit 0x47
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 8001f002h
        ; Exact mapped bytes 77 72: ja 0x47289d
        __asm _emit 0x77
        __asm _emit 0x72
        cmp dword ptr [ebp - 638h], 8001f002h
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x472900
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 8001d001h
        ; Exact mapped bytes 77 35: ja 0x47287c
        __asm _emit 0x77
        __asm _emit 0x35
        cmp dword ptr [ebp - 638h], 8001d001h
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x472970
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 80011035h
        ; Exact mapped bytes 0F 84 DC 0B 00 00: je 0x473443
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 80011036h
        ; Exact mapped bytes 0F 84 96 11 00 00: je 0x473a0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CB 11 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 8001d002h
        ; Exact mapped bytes 0F 84 43 03 00 00: je 0x472bcf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 638h], 8001f001h
        ; Exact mapped bytes 74 4C: je 0x4728e4
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes E9 AA 11 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 638h]
        add eax, 7ffe0ffdh
        mov dword ptr [ebp - 638h], eax
        cmp dword ptr [ebp - 638h], 7
        ; Exact mapped bytes 0F 87 8C 11 00 00: ja 0x473a47
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 638h]
        ; Exact mapped bytes FF 24 8D CC 3A 47 00: jmp dword ptr [ecx*4 + 0x473acc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x3a
        __asm _emit 0x47
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 21 3F FA FF: call 0x416800
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x3f
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 63 11 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B 3F FA FF: call 0x416886
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3f
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 47 11 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 5B 47 FA FF: call 0x417072
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 11 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 0E 4A FA FF: call 0x417341
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 0F 11 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 4B FA FF: call 0x417484
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 F3 10 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 7A 51 FA FF: call 0x417ae5
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x51
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 10 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 81 E9 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A 36 FB FF: call 0x426040
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 E2 01 00 00: je 0x472b95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 76 FD FF: call 0x44a02a
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9A 01 00 00: jne 0x472b5e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 83 FD FF: call 0x44ad76
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF D2 FC FF: call 0x43fc98
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8D 46 01 00 00: jge 0x472b27
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5fch], 31h
        mov dword ptr [ebp - 600h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 604h], edx
        lea eax, [ebp - 5fch]
        push eax
        lea ecx, [ebp - 600h]
        push ecx
        lea edx, [ebp - 604h]
        push edx
        ; Exact mapped bytes E8 A8 0D F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x472af0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 370h
        cmp dword ptr [ecx + edx + 16bdch], 0
        ; Exact mapped bytes 75 7A: jne 0x472ab9
        __asm _emit 0x75
        __asm _emit 0x7a
        mov dword ptr [ebp - 1ch], 1
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 1ch]
        shl eax, 10h
        or eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bech]
        mov esi, esp
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C 5D 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bech]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 8002d001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 47 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x472aee
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 5
        mov edx, dword ptr [ebp - 1ch]
        shl edx, 10h
        or edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 8002d001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 47 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x472b25
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 4
        mov edx, dword ptr [ebp - 1ch]
        shl edx, 10h
        or edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 8002d001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 47 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x472b5c
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 3
        mov edx, dword ptr [ebp - 1ch]
        shl edx, 10h
        or edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 8002d001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 46 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x472b93
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 2
        mov edx, dword ptr [ebp - 1ch]
        shl edx, 10h
        or edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 8002d001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F 46 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x472bca
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 1
        mov edx, dword ptr [ebp - 1ch]
        shl edx, 10h
        or edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 8002d001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 46 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 78 0E 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 1C E7 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 34 FB FF: call 0x426040
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 84 F4 04 00 00: je 0x47310c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A 74 FD FF: call 0x44a02a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 AC 04 00 00: jne 0x4730d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 608h], 31h
        mov dword ptr [ebp - 60ch], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 610h], eax
        lea ecx, [ebp - 608h]
        push ecx
        lea edx, [ebp - 60ch]
        push edx
        lea eax, [ebp - 610h]
        push eax
        ; Exact mapped bytes E8 60 0B F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 33 04 00 00: je 0x47309e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 30h]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 0
        ; Exact mapped bytes 0F 85 DC 03 00 00: jne 0x473067
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 51ch
        push 0
        lea ecx, [ebp - 568h]
        push ecx
        ; Exact mapped bytes E8 D2 66 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 09: jmp 0x472cb3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4ch]
        add edx, 1
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 20h
        ; Exact mapped bytes 7D 31: jge 0x472cea
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 30h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 4ch]
        cmp dword ptr [eax + ecx*4 + 270h], -1
        ; Exact mapped bytes 74 09: je 0x472ce8
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 50h]
        add edx, 1
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes EB C0: jmp 0x472caa
        __asm _emit 0xeb
        __asm _emit 0xc0
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 3A: jne 0x472d2a
        __asm _emit 0x75
        __asm _emit 0x3a
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 28h], 5
        mov eax, dword ptr [ebp - 34h]
        shl eax, 10h
        or eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        push 8002d002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 45 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 1D 0D 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 267h
        push 5bb278h
        push 24h
        ; Exact mapped bytes E8 F8 A2 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 618h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 618h], 0
        ; Exact mapped bytes 74 22: je 0x472d76
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 50h]
        imul eax, eax, 37ch
        add eax, 51ch
        push eax
        mov ecx, dword ptr [ebp - 618h]
        ; Exact mapped bytes E8 22 E1 F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 63ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x472d80
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 63ch], 0
        mov ecx, dword ptr [ebp - 63ch]
        mov dword ptr [ebp - 614h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 614h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 150h
        mov esi, esp
        push eax
        push 5bb2e0h
        lea ecx, [ebp - 568h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 1D 5A 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [eax + ecx + 16bdch]
        mov dword ptr [ebp - 1e4h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 30h]
        imul edx, edx, 370h
        lea esi, [ecx + edx + 16be0h]
        mov ecx, 17h
        lea edi, [ebp - 550h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 30h]
        imul edx, edx, 370h
        lea esi, [ecx + edx + 16c3ch]
        mov ecx, 33h
        lea edi, [ebp - 4f4h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        push 140h
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 30h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16d0ah]
        push eax
        lea ecx, [ebp - 426h]
        push ecx
        ; Exact mapped bytes E8 C5 61 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16ecch]
        push edx
        lea eax, [ebp - 2e4h]
        push eax
        ; Exact mapped bytes E8 97 61 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 30h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16e4ch]
        push ecx
        lea edx, [ebp - 264h]
        push edx
        ; Exact mapped bytes E8 69 61 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 51ch
        lea eax, [ebp - 568h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 F8 E0 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 09: jmp 0x472ee0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 20h
        ; Exact mapped bytes 0F 8D 0A 01 00 00: jge 0x472ff4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 56ch], ecx
        cmp dword ptr [ebp - 56ch], -1
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x472fef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 61ch], 63h
        mov dword ptr [ebp - 620h], 0ffffffffh
        mov edx, dword ptr [ebp - 56ch]
        mov dword ptr [ebp - 624h], edx
        lea eax, [ebp - 61ch]
        push eax
        lea ecx, [ebp - 620h]
        push ecx
        lea edx, [ebp - 624h]
        push edx
        ; Exact mapped bytes E8 66 08 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x472fef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov esi, dword ptr [eax + 168h]
        mov edi, dword ptr [ebp - 56ch]
        imul edi, edi, 37ch
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 CD FC FF: call 0x43fc98
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [esi + edi + 228h], eax
        ; Exact mapped bytes 72 37: jb 0x472fc5
        __asm _emit 0x72
        __asm _emit 0x37
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 28h], 6
        mov ecx, dword ptr [ebp - 34h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        push 8002d002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 42 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x472ff4
        __asm _emit 0xeb
        __asm _emit 0x2f
        push 37ch
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 56ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D7 DF F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdf
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 E3 FE FF FF: jmp 0x472ed7
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 6D 74 F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 09: jmp 0x473018
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4ch]
        add edx, 1
        mov dword ptr [ebp - 4ch], edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 70 74 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 7D 13: jge 0x473038
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 44h]
        add edx, ecx
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB D7: jmp 0x47300f
        __asm _emit 0xeb
        __asm _emit 0xd7
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 27: je 0x473065
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 48 74 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 1F 74 F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 0
        push 8001d003h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 CD 41 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x47309c
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 28h], 4
        mov ecx, dword ptr [ebp - 34h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        push 8002d002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 41 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x4730d3
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 28h], 3
        mov ecx, dword ptr [ebp - 34h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        push 8002d002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 41 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x47310a
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 28h], 2
        mov ecx, dword ptr [ebp - 34h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        push 8002d002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 41 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x473141
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 28h], 1
        mov ecx, dword ptr [ebp - 34h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        push 8002d002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 40 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 01 09 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 C9 E1 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe1
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x4731ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        push eax
        lea ecx, [ebp - 5b4h]
        push ecx
        ; Exact mapped bytes E8 C6 6C 03 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        push 18h
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 584h]
        push eax
        ; Exact mapped bytes E8 91 5E 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 56dh], 0
        push 18h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 59ch]
        push edx
        ; Exact mapped bytes E8 75 5E 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 585h], 0
        push 0
        push 48h
        lea eax, [ebp - 5b4h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 8001040dh
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 41 E1 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 48 40 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 08 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 634h]
        mov eax, dword ptr [edx + 0ca0h]
        push eax
        ; Exact mapped bytes E8 B1 BA FB FF: call 0x42ecd1
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 22 08 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, 2
        ; Exact mapped bytes 75 6F: jne 0x4732a2
        __asm _emit 0x75
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 DC E0 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe0
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 74 53: je 0x4732a0
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes E8 72 61 03 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 8B E0 F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 92 3F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 65: jmp 0x473307
        __asm _emit 0xeb
        __asm _emit 0x65
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, 4
        ; Exact mapped bytes 75 22: jne 0x4732d2
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0ca4h]
        push ecx
        ; Exact mapped bytes E8 17 ED FA FF: call 0x421fe7
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x473307
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        cmp eax, 0ah
        ; Exact mapped bytes 75 27: jne 0x473307
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0ca4h]
        ; Exact mapped bytes E8 74 F0 FA FF: call 0x42237b
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 3E 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 06 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C6 05 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 F8 06 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [edx + 0ca4h]
        ; Exact mapped bytes E8 A4 F5 FA FF: call 0x422913
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf5
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 3E 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 05 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 05 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 90 06 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0ca4h]
        ; Exact mapped bytes E8 1B FE FA FF: call 0x4231ee
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 6F 06 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0ca4h]
        ; Exact mapped bytes E8 2D 01 FB FF: call 0x423528
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A 3E 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 05 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 04 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 04 06 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0ca4h]
        ; Exact mapped bytes E8 47 0F FB FF: call 0x4243a3
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 E6 05 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [edx + 0ca4h]
        ; Exact mapped bytes E8 03 F2 FA FF: call 0x422684
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf2
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 05 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 628h], 18h
        mov dword ptr [ebp - 62ch], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 630h], ecx
        lea edx, [ebp - 628h]
        push edx
        lea eax, [ebp - 62ch]
        push eax
        lea ecx, [ebp - 630h]
        push ecx
        ; Exact mapped bytes E8 00 03 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 FF 03 00 00: je 0x4738ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5bch], 0
        push 4
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0eh
        push edx
        lea eax, [ebp - 5b8h]
        push eax
        ; Exact mapped bytes E8 36 5B 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 8B 8D 48 FA FF FF: mov cx, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 8D 01 00 00: jne 0x473694
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 42 0C: movsx eax, word ptr [edx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8E 4C 01 00 00: jle 0x473662
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [edx + 0ca8h]
        ; Exact mapped bytes E8 08 1A FC FF: call 0x434f33
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 5c0h], eax
        cmp dword ptr [ebp - 5c0h], 0fh
        ; Exact mapped bytes 7C 59: jl 0x473593
        __asm _emit 0x7c
        __asm _emit 0x59
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        cmp ecx, 0ffffh
        ; Exact mapped bytes 75 48: jne 0x473593
        __asm _emit 0x75
        __asm _emit 0x48
        mov dword ptr [ebp - 10h], 0f6h
        mov byte ptr [ebp - 5c4h], 1
        push 0
        push 1
        lea edx, [ebp - 5c4h]
        push edx
        push 80000520h
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        shl ecx, 10h
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        or ecx, eax
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 3C 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x473660
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 34 5E 03 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        cmp eax, 18h
        ; Exact mapped bytes 0F 83 B8 00 00 00: jae 0x473660
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5bb2e4h
        lea eax, [ebp - 5f4h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 16 52 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 5ddh], 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        push 5bb2e8h
        lea edx, [ebp - 5dch]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 E7 51 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 5c5h], 0
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 0F DD F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [eax + 0db4h], 0
        ; Exact mapped bytes 74 46: je 0x473660
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push 30h
        lea ecx, [ebp - 5f4h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 D5 DC F8 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 DC 3B 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 5bch], 1
        ; Exact mapped bytes EB 2D: jmp 0x47368f
        __asm _emit 0xeb
        __asm _emit 0x2d
        push -1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 81 67 FB FF: call 0x429e02
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x47368f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 5bch], 1
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x4737b3
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8D 48 FA FF FF: mov cx, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 74 41: je 0x4736eb
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 66 8B 95 48 FA FF FF: mov dx, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 3
        ; Exact mapped bytes 74 2B: je 0x4736eb
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 66 8B 85 48 FA FF FF: mov ax, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 5
        ; Exact mapped bytes 74 16: je 0x4736eb
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 66 8B 8D 48 FA FF FF: mov cx, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 75 30: jne 0x47371b
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [edx + 0ca0h]
        ; Exact mapped bytes E8 6C 8B FB FF: call 0x42c274
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x8b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x473716
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 5bch], 1
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x4737b3
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 48 FA FF FF: mov ax, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0bh
        ; Exact mapped bytes 74 16: je 0x473746
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 66 8B 8D 48 FA FF FF: mov cx, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 0ch
        ; Exact mapped bytes 75 2D: jne 0x473773
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [edx + 0ca0h]
        ; Exact mapped bytes E8 B8 93 FB FF: call 0x42cb1b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x473771
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 5bch], 1
        ; Exact mapped bytes EB 40: jmp 0x4737b3
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 66 8B 85 48 FA FF FF: mov ax, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 75 2B: jne 0x4737b3
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 A8 A9 FB FF: call 0x42e14d
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4737b3
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 5bch], 1
        cmp dword ptr [ebp - 5bch], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x47388f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 95 48 FA FF FF: mov dx, word ptr [ebp - 0x5b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 1
        ; Exact mapped bytes 75 0B: jne 0x4737e1
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 7D 69: jge 0x47384a
        __asm _emit 0x7d
        __asm _emit 0x69
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000520h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 3A 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 634h]
        mov edx, dword ptr [ecx + 0c7ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 96 EE 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        shl ecx, 10h
        or ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0c7ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 6B EE 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 39 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA 00 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 00 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 39: jmp 0x4738c8
        __asm _emit 0xeb
        __asm _emit 0x39
        cmp dword ptr [ebp - 10h], 0eah
        ; Exact mapped bytes 75 30: jne 0x4738c8
        __asm _emit 0x75
        __asm _emit 0x30
        push 0
        push 0
        push 0
        push 80000520h
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        shl eax, 10h
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        or eax, edx
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 39 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x4738fa
        __asm _emit 0xeb
        __asm _emit 0x30
        push 0
        push 0
        push 0
        push 80000520h
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        shl ecx, 10h
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        or ecx, eax
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 39 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 76 EA FB FF: call 0x432392
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 38 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 FF F8 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B1 FF F8 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x473a47
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        imul edx, edx, 370h
        mov eax, dword ptr [eax + edx + 16be4h]
        mov dword ptr [ebp - 5f8h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 EE DE FB FF: call 0x431890
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xde
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x4739c8
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 5f8h]
        shl ecx, 10h
        push ecx
        push 3c0002h
        push 80021004h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 38 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 38 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C FF F8 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 FF F8 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 3A: jmp 0x473a47
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 634h]
        mov ecx, dword ptr [edx + 0ca0h]
        ; Exact mapped bytes E8 D3 E0 FB FF: call 0x431afc
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 1C: jmp 0x473a47
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 634h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 18 E2 FB FF: call 0x431c5f
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x473a66
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8002h
        ; Exact mapped bytes 75 0C: jne 0x473a66
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 640h], ecx
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
        add esp, 640h
        cmp ebp, esp
        ; Exact mapped bytes E8 5C 4D 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
