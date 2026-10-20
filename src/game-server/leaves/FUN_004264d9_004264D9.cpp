// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004264D9 .. +0x4F8 bytes.
extern "C" __declspec(naked) void FUN_004264d9_004264D9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a1dah
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
        sub esp, 150h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 15ch]
        mov ecx, 54h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 144h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 11: jne 0x426535
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes E9 78 04 00 00: jmp 0x4269ad
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8001h
        ; Exact mapped bytes 0F 85 51 01 00 00: jne 0x42669b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14ch], ecx
        cmp dword ptr [ebp - 14ch], 8001000fh
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x42667c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14ch], 80010109h
        ; Exact mapped bytes 74 05: je 0x426577
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x426696
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], 0
        mov dword ptr [ebp - 0e0h], 20060100h
        mov dword ptr [ebp - 0dch], 0
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 9A 04 00 00: call 0x426a40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 9E 04 00 00: call 0x426a60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 0d4h], eax
        mov dword ptr [ebp - 10h], 0
        push 0
        push 0d8h
        lea edx, [ebp - 0e4h]
        push edx
        push 0
        push 80020010h
        push 80020010h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 39 0C 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 00 EF 10 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xef
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        mov eax, dword ptr [ebp - 150h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 C0 21 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 148h
        ; Exact mapped bytes E8 33 A9 10 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa9
        __asm _emit 0x10
        __asm _emit 0x00
        add eax, 1
        push eax
        push 0
        ; Exact mapped bytes E8 C8 EE 10 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 154h], eax
        mov eax, dword ptr [ebp - 154h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 88 21 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 148h
        ; Exact mapped bytes E8 93 79 0C 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 80020effh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 B8 0B 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x426696
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 9C 0B 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 12 03 00 00: jmp 0x4269ad
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8002h
        ; Exact mapped bytes 0F 85 FD 02 00 00: jne 0x4269ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 158h], eax
        cmp dword ptr [ebp - 158h], 8002d003h
        ; Exact mapped bytes 74 05: je 0x4266cd
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 E0 02 00 00: jmp 0x4269ad
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 20h
        ; Exact mapped bytes 0F 82 D3 02 00 00: jb 0x4269ad
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        push 0
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 86 2C 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 110h], 0
        mov dword ptr [ebp - 0e8h], 0
        push 20h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 0D 29 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0e8h]
        add edx, 20h
        mov dword ptr [ebp - 0e8h], edx
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 72 89 01 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 60 02 00 00: je 0x4269ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        cmp eax, 1
        ; Exact mapped bytes 0F 85 F7 01 00 00: jne 0x426956
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a7h
        push 5b533ch
        push 24h
        ; Exact mapped bytes E8 C3 68 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 140h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 1D: je 0x4267a6
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ech]
        shl ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 F2 A6 FE FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x4267b0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov edx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 13ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 118h], eax
        mov dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4267ea
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 11ch]
        add ecx, 1
        mov dword ptr [ebp - 11ch], ecx
        mov edx, dword ptr [ebp - 11ch]
        cmp edx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x426891
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 0e8h]
        push eax
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 0C 28 08 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0e8h]
        add edx, 4
        mov dword ptr [ebp - 0e8h], edx
        push 4
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 8C A7 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 94 01 00: call 0x43fc98
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 110h]
        imul ecx, ecx, 37ch
        mov dword ptr [edx + ecx + 228h], eax
        mov edx, dword ptr [ebp - 110h]
        shl edx, 10h
        or edx, 4
        push edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 29 BE 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x4267db
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40cd8h]
        ; Exact mapped bytes E8 DB 01 00 00: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 68: je 0x42691c
        __asm _emit 0x74
        __asm _emit 0x68
        push 1ch
        push 0
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes E8 AC 2A 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea eax, [ebp - 108h]
        push eax
        push 5b5398h
        lea ecx, [ebp - 138h]
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
        ; Exact mapped bytes E8 F4 1E 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 A1 93 01 00: call 0x43fc98
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        push 0
        push 1ch
        lea edx, [ebp - 138h]
        push edx
        push 0
        push 0
        push 8002d012h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 16 09 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 67 3B FE FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 3B 3B FE FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 8002d002h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 DE 08 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 57: jmp 0x4269ad
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        test ecx, ecx
        ; Exact mapped bytes 75 26: jne 0x426989
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 8002d002h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 AB 08 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x4269ad
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 8002d002h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 85 08 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
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
        add esp, 15ch
        cmp ebp, esp
        ; Exact mapped bytes E8 15 1E 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
